
/* fairygui::GComponent::~GComponent() */

void __thiscall fairygui::GComponent::~GComponent(GComponent *this)

{
                    /* try { // try from 00a701c0 to 00b702ab has its CatchHandler @ 00a703b8 */
  ~GComponent(this);
  operator_delete(this);
  return;
}

