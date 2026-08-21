
/* cocostudio::LoadingBarReader::~LoadingBarReader() */

void __thiscall cocostudio::LoadingBarReader::~LoadingBarReader(LoadingBarReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

