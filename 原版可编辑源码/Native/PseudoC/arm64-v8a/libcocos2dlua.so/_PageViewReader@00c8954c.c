
/* non-virtual thunk to cocostudio::PageViewReader::~PageViewReader() */

void __thiscall cocostudio::PageViewReader::~PageViewReader(PageViewReader *this)

{
  LayoutReader::~LayoutReader((LayoutReader *)(this + -0x30));
  operator_delete((LayoutReader *)(this + -0x30));
  return;
}

