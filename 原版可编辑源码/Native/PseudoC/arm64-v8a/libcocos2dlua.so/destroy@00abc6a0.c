
/* fairygui::HtmlObject::destroy() */

void __thiscall fairygui::HtmlObject::destroy(HtmlObject *this)

{
  if (*(int *)(*(long *)(this + 8) + 8) == 1) {
    GLoader::setURL(*(GLoader **)(this + 0x18),(basic_string *)&cocos2d::STD_STRING_EMPTY);
    return;
  }
  return;
}

