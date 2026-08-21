
/* fairygui::GImage::~GImage() */

void __thiscall fairygui::GImage::~GImage(GImage *this)

{
  GObject::~GObject((GObject *)this);
  operator_delete(this);
  return;
}

