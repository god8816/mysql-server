if (`SELECT COUNT(*) = 0 FROM performance_schema.global_status WHERE LOWER(variable_name) = 'innodb_page_size' AND variable_value >= 16384`)
{
  --skip Test requires InnoDB with page size >= 16k.
}
