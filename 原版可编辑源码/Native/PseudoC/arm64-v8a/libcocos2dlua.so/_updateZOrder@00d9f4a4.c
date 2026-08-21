
/* dragonBones::CCSlot::_updateZOrder() */

void __thiscall dragonBones::CCSlot::_updateZOrder(CCSlot *this)

{
  int iVar1;
  
                    /* try { // try from 00d9f4ac to 00e9f4d7 has its CatchHandler @ 00d9f6f0 */
  iVar1 = (**(code **)(**(long **)(this + 400) + 0x30))();
  if (iVar1 == *(int *)(this + 0x98)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d9f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 400) + 0x18))();
  return;
}

