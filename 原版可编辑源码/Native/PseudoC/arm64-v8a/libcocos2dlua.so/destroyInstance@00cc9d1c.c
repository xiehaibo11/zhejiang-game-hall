
/* TabControlReader::destroyInstance() */

void TabControlReader::destroyInstance(void)

{
  if (_tabReaderInstance != (long *)0x0) {
    (**(code **)(*_tabReaderInstance + 8))();
  }
  _tabReaderInstance = (long *)0x0;
  return;
}

