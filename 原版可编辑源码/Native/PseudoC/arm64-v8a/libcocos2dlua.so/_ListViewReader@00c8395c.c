
/* cocostudio::ListViewReader::~ListViewReader() */

void __thiscall cocostudio::ListViewReader::~ListViewReader(ListViewReader *this)

{
  ScrollViewReader::~ScrollViewReader((ScrollViewReader *)this);
  operator_delete(this);
  return;
}

