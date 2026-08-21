
/* TabHeaderReader::destroyInstance() */

void TabHeaderReader::destroyInstance(void)

{
  if (_tabheaderReaderInstance != (long *)0x0) {
    (**(code **)(*_tabheaderReaderInstance + 8))();
  }
  _tabheaderReaderInstance = (long *)0x0;
  return;
}

