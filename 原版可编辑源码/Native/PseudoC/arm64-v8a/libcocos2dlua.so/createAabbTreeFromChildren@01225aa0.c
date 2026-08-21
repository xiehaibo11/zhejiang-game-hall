
/* btCompoundShape::createAabbTreeFromChildren() */

void __thiscall btCompoundShape::createAabbTreeFromChildren(btCompoundShape *this)

{
  long lVar1;
  btDbvt *this_00;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(this + 0x58) == 0) {
    this_00 = (btDbvt *)btAlignedAllocInternal(0x60,0x10);
    btDbvt::btDbvt(this_00);
    *(btDbvt **)(this + 0x58) = this_00;
    if (0 < *(int *)(this + 0x1c)) {
      lVar4 = 0;
      pvVar3 = (void *)0x0;
      do {
        lVar1 = *(long *)(this + 0x28) + lVar4;
        (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))
                  (*(long **)(lVar1 + 0x40),lVar1,&uStack_50,&local_60);
        uStack_78 = uStack_48;
        local_80 = uStack_50;
        uStack_68 = uStack_58;
        local_70 = local_60;
        uVar2 = btDbvt::insert(*(btDbvt **)(this + 0x58),(btDbvtAabbMm *)&local_80,pvVar3);
        *(undefined8 *)(lVar1 + 0x50) = uVar2;
        pvVar3 = (void *)((long)pvVar3 + 1);
        lVar4 = lVar4 + 0x58;
      } while ((long)pvVar3 < (long)*(int *)(this + 0x1c));
    }
  }
  return;
}

