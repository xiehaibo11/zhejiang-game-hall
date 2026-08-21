
/* fairygui::GLoader::setFrame(int) */

void __thiscall fairygui::GLoader::setFrame(GLoader *this,int param_1)

{
  if (*(int *)(this + 0x218) == param_1) {
    return;
  }
  *(int *)(this + 0x218) = param_1;
  if (*(ActionMovieClip **)(this + 0x230) != (ActionMovieClip *)0x0) {
    ActionMovieClip::setFrame(*(ActionMovieClip **)(this + 0x230),param_1);
  }
  GObject::updateGear((GObject *)this,5);
  return;
}

