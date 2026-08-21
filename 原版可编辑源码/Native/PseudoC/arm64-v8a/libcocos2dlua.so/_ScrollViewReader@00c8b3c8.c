
/* cocostudio::ScrollViewReader::~ScrollViewReader() */

void __thiscall cocostudio::ScrollViewReader::~ScrollViewReader(ScrollViewReader *this)

{
  LayoutReader::~LayoutReader((LayoutReader *)this);
  operator_delete(this);
  return;
}

