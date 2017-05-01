
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <?php
    if ($variables['view_mode'] == 'full') {
      print $menu;
      print "<h1>$license_link</h1>";
      //print "<h2>$islandora_object_link</h2>";
    }
    if ($variables['view_mode'] == 'teaser') {
      print "<h2>" . $variables['title'] . "</h2>";
      //print "<h2>$islandora_object_link</h2>";
    }
    ?>


    <div class="content"<?php print $content_attributes; ?>>


    </div>    

    <?php
// We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
</div>

<?php print render($content['links']); ?>

<?php print render($content['comments']); ?>
<div>