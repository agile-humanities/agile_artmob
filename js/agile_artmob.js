/**
 * @file
 * Ties links in Apparatus block to vertical tab display.
 */
(function ($) {
    "use strict";
    Drupal.behaviors.visualization = {
        attach: function (context, settings) {
            if (typeof Drupal.settings.afd != 'undefined') {
                //jQ14(wrapping_box).html("<h3>Choose a file type</h3>");
                if (Drupal.settings.afd.filetype != null) {

                    // load settings and themes into global variables

                    cid = Drupal.settings.afd.cid;
                    worksmodel = Drupal.settings.afd.worksmodel;
                    worksmenumodel = Drupal.settings.afd.worksmenumodel;
                    addworkmodel = Drupal.settings.afd.addworkmodel;
                    nonestedworks = Drupal.settings.afd.nonestedworks;
                    ffcontributors = Drupal.settings.afd.ffcontributors;
                    ffinfofields = Drupal.settings.afd.ffinfofields;
                    datewidget = Drupal.settings.afd.datewidget;
                    ffaddnewcontributor = Drupal.settings.afd.ffaddnewcontributor;
                    emptytitleplaceholder = Drupal.settings.afd.artmob_empty_title_placeholder

                    existingreport = jQ14.parseJSON(Drupal.settings.afd.existingreport);
                    var reverted = get_cookie("revert_clicked");
                    if (reverted == "true")
                    {
                        var cook = get_cookie("initial_report");
                        eraseCookie("revert_clicked");
                        existingreport = jQ14.parseJSON(cook);
                        jQ14("#errorinfo").html("Your changes have been reverted to the last valid state");
                        jQ14("#errortext").show();
                    }
                    //var contributors = menuGetContributors();

                    menuBuildFirstCollection(Drupal.settings.afd.filetype);

                    var has_levels = false;

                    if (existingreport.works[1] != undefined) {
                        has_levels = true;
                        existing_report = true;
                    }

                    if (existingreport != null) {
                        //alert(dump(existingreport));
                        afd_build_attributions(existingreport, has_levels);
                    }

                    jQ14('.nested-works .close a').each(function () { // set "closed" as the intiial state for nested works
                        jQ14(this).trigger('click');
                    });
                }
            }

        }
    };

}(jQuery));