
/* fairygui::UBBParser::getInstance() */

UBBParser * fairygui::UBBParser::getInstance(void)

{
  UBBParser *this;
  
  if (_inst == (UBBParser *)0x0) {
    this = operator_new(0x78);
    UBBParser(this);
    _inst = this;
  }
  return _inst;
}

