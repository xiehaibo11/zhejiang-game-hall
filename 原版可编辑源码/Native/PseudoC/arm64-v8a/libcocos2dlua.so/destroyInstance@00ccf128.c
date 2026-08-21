
/* TabItemReader::destroyInstance() */

void TabItemReader::destroyInstance(void)

{
  if (_tabItemReaderInstance != (long *)0x0) {
    (**(code **)(*_tabItemReaderInstance + 8))();
  }
  _tabItemReaderInstance = (long *)0x0;
  return;
}

