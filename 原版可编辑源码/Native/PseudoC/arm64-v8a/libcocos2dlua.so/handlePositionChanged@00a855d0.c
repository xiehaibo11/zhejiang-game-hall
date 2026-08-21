
/* fairygui::GObject::handlePositionChanged() */

void __thiscall fairygui::GObject::handlePositionChanged(GObject *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long **)(this + 0xa8) == (long *)0x0) goto LAB_00a856c4;
  fVar4 = -(float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20);
  local_40 = (float)*(undefined8 *)(this + 0xc0);
  _local_40 = CONCAT44(fVar4,local_40);
  fVar5 = local_40;
  if (this[0xe8] == (GObject)0x0) {
    fVar5 = *(float *)(this + 200) * *(float *)(this + 0xd8) + local_40;
    fVar4 = fVar4 - *(float *)(this + 0xcc) * *(float *)(this + 0xdc);
    _local_40 = CONCAT44(fVar4,fVar5);
  }
  if (this[0x9a] != (GObject)0x0) {
    lVar2 = (**(code **)(**(long **)(this + 0xa8) + 0x260))();
    if (lVar2 == 0) {
      if (*(long *)(this + 0xa0) == 0) goto LAB_00a85694;
      plVar3 = *(long **)(*(long *)(this + 0xa0) + 0xa8);
    }
    else {
      plVar3 = (long *)(**(code **)(**(long **)(this + 0xa8) + 0x260))();
    }
    lVar2 = (**(code **)(*plVar3 + 0x168))();
    fVar4 = *(float *)(lVar2 + 4) + fVar4;
    _local_40 = CONCAT44(fVar4,local_40);
  }
LAB_00a85694:
  if (this[0x120] != (GObject)0x0) {
    _local_40 = CONCAT44((float)(int)fVar4,(float)(int)fVar5);
  }
  (**(code **)(**(long **)(this + 0xa8) + 0x98))(*(long **)(this + 0xa8),&local_40);
LAB_00a856c4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

