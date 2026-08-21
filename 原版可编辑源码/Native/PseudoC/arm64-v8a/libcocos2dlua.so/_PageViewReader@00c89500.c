
/* cocostudio::PageViewReader::~PageViewReader() */

void __thiscall cocostudio::PageViewReader::~PageViewReader(PageViewReader *this)

{
  LayoutReader::~LayoutReader((LayoutReader *)this);
  operator_delete(this);
  return;
}

