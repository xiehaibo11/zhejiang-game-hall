
/* dragonBones::CCSlot::_updateBlendMode() */

void __thiscall dragonBones::CCSlot::_updateBlendMode(CCSlot *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(this + 0x178);
  if (lVar3 != 0) {
    plVar1 = *(long **)(lVar3 + 0x80);
    for (plVar4 = *(long **)(lVar3 + 0x78); plVar4 != plVar1; plVar4 = plVar4 + 1) {
      plVar2 = (long *)*plVar4;
      *(undefined4 *)((long)plVar2 + 0x94) = *(undefined4 *)(this + 0x94);
      (**(code **)(*plVar2 + 0x80))();
    }
  }
  return;
}

