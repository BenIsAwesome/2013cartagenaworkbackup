<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region, below the main menu (if any).
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */
?>
<?php
global $theme_path;
?>
	<?php include_once('common/header.php'); ?>
	<!-- Print Meta tags -->
	<?php print render($page['content']['metatags']); ?>
	<!-- Print Meta tags -->
      <?php //print render($title_prefix); ?>
      <?php if ($title): ?>
		<div id="billboard">
			<div class="story-form container group">
				<h2><?php print $title ?></h2> 
			</div><!--end .container div-->
		</div>	
	  <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
	<article id="pri-content" class="container group">		
		  
		  <section class="kony-feature-next-steps-support master">
	<h3>What Type of Support Do You Need?</h3>
	<div class="group">
	<?php /*
		<div class="col">
			<img src="/themes/kony/images/support-mam.jpg" alt="">
			<h4>Enterprise Mobility Management</h4>
			<p>We have community-powered support for all things Enterprise Mobile Management related, which includes the front line latest around from the world of MDM, MAM, and BYOD. </p>
			<a href="http://emm.kony.com" target="_blank" class="button">Get help <i class="icon-arrow-right"></i></a>
		</div>
	*/ ?>	
		<div class="col" style="margin: 0 25%;">
			<img src="/themes/kony/images/support-dev.jpg" alt="">
			<h4>Development</h4>
			<p>The Kony Developer Portal supports the individuals and enterprise teams with in-depth technical content and collaboration on developing and  deploying apps.</p>
			<a href="http://developer.kony.com" target="_blank" class="button">Get help <i class="icon-arrow-right"></i></a>
		</div>
	</div>
	<div class="clearfix"></div>
</section>


  

	</article>
     <?php print $feed_icons; ?>
    </div><!-- /#content -->

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside><!-- /.sidebars -->
    <?php endif; ?>

  </div><!-- /#main -->
  <?php include_once('common/footer.php'); ?>

<?php //print render($page['bottom']); ?>