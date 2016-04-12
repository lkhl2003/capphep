<?php
/**
 * @file
 * vanban.features.inc
 */

/**
 * Implements hook_node_info().
 */
function vanban_node_info() {
  $items = array(
    'coquanbanhanh' => array(
      'name' => t('Cơ quan ban hành'),
      'base' => 'node_content',
      'description' => t('Dữ liệu về cơ quan ban hành văn bản'),
      'has_title' => '1',
      'title_label' => t('Tên cơ quan'),
      'help' => '',
    ),
    'hinhthucvanban' => array(
      'name' => t('Hình thức văn bản'),
      'base' => 'node_content',
      'description' => t('Các hình thức của văn bản như: Nghị định, Thông tư...'),
      'has_title' => '1',
      'title_label' => t('Tên hình thức văn bản'),
      'help' => '',
    ),
    'loaivanban' => array(
      'name' => t('Loại văn bản'),
      'base' => 'node_content',
      'description' => t('Phân loại văn bản theo từng lĩnh vực'),
      'has_title' => '1',
      'title_label' => t('Tên loại văn bản'),
      'help' => '',
    ),
    'vanban' => array(
      'name' => t('Văn bản'),
      'base' => 'node_content',
      'description' => t('Văn bản quy phạm pháp luật'),
      'has_title' => '1',
      'title_label' => t('Số, ký hiệu'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
