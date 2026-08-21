
/* cocostudio::ComRender::onAdd() */

void __thiscall cocostudio::ComRender::onAdd(ComRender *this)

{
  long lVar1;
  
  if ((*(long *)(this + 0x28) != 0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x50) + 0x260))(), lVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c5b17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x28) + 0x208))
              (*(long **)(this + 0x28),*(undefined8 *)(this + 0x50));
    return;
  }
  return;
}

