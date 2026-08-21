
/* fairygui::GComponent::addChild(fairygui::GObject*) */

GObject * __thiscall fairygui::GComponent::addChild(GComponent *this,GObject *param_1)

{
                    /* try { // try from 00a7032c to 00b7043b has its CatchHandler @ 00a7005c */
  (**(code **)(*(long *)this + 0xb0))
            (this,param_1,(ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
  return param_1;
}

