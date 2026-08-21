
/* cocostudio::SliderReader::~SliderReader() */

void __thiscall cocostudio::SliderReader::~SliderReader(SliderReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

