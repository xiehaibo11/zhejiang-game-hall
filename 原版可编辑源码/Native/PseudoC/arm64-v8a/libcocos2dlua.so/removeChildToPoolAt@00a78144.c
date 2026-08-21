
/* fairygui::GList::removeChildToPoolAt(int) */

void __thiscall fairygui::GList::removeChildToPoolAt(GList *this,int param_1)

{
  GObject *pGVar1;
  
  pGVar1 = (GObject *)GComponent::getChildAt((GComponent *)this,param_1);
  GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar1);
                    /* WARNING: Could not recover jumptable at 0x00a78184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb8))(this,param_1);
  return;
}

