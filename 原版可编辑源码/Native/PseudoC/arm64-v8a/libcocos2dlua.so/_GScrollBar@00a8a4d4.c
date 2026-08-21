
/* fairygui::GScrollBar::~GScrollBar() */

void __thiscall fairygui::GScrollBar::~GScrollBar(GScrollBar *this)

{
                    /* try { // try from 00a8a4dc to 00b8a50b has its CatchHandler @ 00a8a628 */
  GComponent::~GComponent((GComponent *)this);
  operator_delete(this);
  return;
}

