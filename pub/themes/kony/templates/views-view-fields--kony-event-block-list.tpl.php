<?php
/**
* @file
* Default simple view template to all the fields as a row.
*
* - $view: The view in use.
* - $fields: an array of $field objects. Each one contains:
* - $field->content: The output of the field.
* - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
* - $field->class: The safe class id to use.
* - $field->handler: The Views field handler object controlling this field. Do not use
* var_export to dump this object, as it can't handle the recursion.
* - $field->inline: Whether or not the field should be inline.
* - $field->inline_html: either div or span based on the above flag.
* - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
* - $field->wrapper_suffix: The closing tag for the wrapper.
* - $field->separator: an optional separator that may appear before a field.
* - $field->label: The wrap label text to use.
* - $field->label_html: The full HTML of the label to use including
* configured element type.
* - $row: The raw result object from the query, with all data it fetched.
*
* @ingroup views_templates
*/
if(isset($row->_field_data)) {
	$eachEventItem = $row->_field_data['nid']['entity']; 
} else {
	$eachEventItem = node_load($row->nid);
}
$eachEventTitle = $eachEventItem->field_kony_event_headline['und'][0]['value'];
$eachEventLink = count($eachEventItem->field_kony_event_url['und'][0]['url']) ? $eachEventItem->field_kony_event_url['und'][0]['url'] : '#';
$eachEventDate = $eachEventItem->field_kony_event_date['und'][0]['value'];
$eachEventLocation = $eachEventItem->field_kony_location['und'][0]['value'];
?>
<article class="post">
   <h5><a target="_blank" href="<?php print $eachEventLink; ?>"><?php print $eachEventTitle; ?></a></h5>
  <p><?php print date('M d, Y',$eachEventDate);?></p>
  <p><?php print $eachEventLocation;?> </p>
</article>
