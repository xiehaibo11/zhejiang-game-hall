
/* fairygui::PixelHitTestData::~PixelHitTestData() */

void __thiscall fairygui::PixelHitTestData::~PixelHitTestData(PixelHitTestData *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}

