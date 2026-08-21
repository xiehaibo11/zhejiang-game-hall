
/* dragonBones::Armature::advanceTime(float) */

void __thiscall dragonBones::Armature::advanceTime(Armature *this,float param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  BaseObject *this_00;
  undefined8 *puVar10;
  code *local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (((this[0x59] == (Armature)0x0) && (*(long *)(this + 0x20) != 0)) &&
     (*(long *)(*(long *)(this + 0x20) + 0x158) != 0)) {
    iVar3 = *(int *)(this + 0x18);
    Animation::advanceTime(*(Animation **)(this + 0xa8),param_1);
    if (this[0x5a] != (Armature)0x0) {
      this[0x5a] = (Armature)0x0;
      local_80 = _onSortSlots;
      std::__ndk1::__sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                (*(Slot ***)(this + 0x78),*(Slot ***)(this + 0x80),
                 (_func_bool_Slot_ptr_Slot_ptr *)&local_80);
    }
    iVar4 = *(int *)(this + 0x18);
    if ((iVar4 < 0) || (iVar4 != iVar3)) {
      puVar10 = *(undefined8 **)(this + 0x60);
      puVar1 = *(undefined8 **)(this + 0x68);
      if (puVar10 != puVar1) {
        Bone::update((Bone *)*puVar10,iVar4);
        while (puVar10 = puVar10 + 1, puVar10 != puVar1) {
          Bone::update((Bone *)*puVar10,*(int *)(this + 0x18));
        }
      }
      puVar1 = *(undefined8 **)(this + 0x80);
      for (puVar10 = *(undefined8 **)(this + 0x78); puVar10 != puVar1; puVar10 = puVar10 + 1) {
        Slot::update((Slot *)*puVar10,*(int *)(this + 0x18));
      }
    }
    puVar10 = *(undefined8 **)(this + 0x90);
    puVar1 = *(undefined8 **)(this + 0x98);
    if (puVar10 != puVar1) {
      this[0x59] = (Armature)0x1;
      do {
        this_00 = (BaseObject *)*puVar10;
        lVar8 = *(long *)(this_00 + 0x68);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 0)) {
          if (*(long *)(this_00 + 0x58) == 0) {
            lVar9 = *(long *)(this_00 + 0x50);
            if (lVar9 == 0) {
              uVar7 = *(undefined8 *)(this + 0xa8);
              goto LAB_00d28dbc;
            }
            plVar2 = *(long **)(this + 0x80);
            if (*(long **)(this + 0x78) != plVar2) {
              plVar6 = *(long **)(this + 0x78);
              while( true ) {
                if ((*(long *)(*plVar6 + 0x180) == lVar9) &&
                   (lVar9 = *(long *)(*plVar6 + 0x178), lVar9 != 0)) {
                  local_80 = (code *)0x0;
                  uStack_78 = 0;
                  local_70 = (void *)0x0;
                  Animation::fadeIn((Animation *)0xbf800000,*(undefined8 *)(lVar9 + 0xa8),
                                    lVar8 + 0x18,0xffffffff,0,&local_80,3);
                  if (((ulong)local_80 & 1) != 0) {
                    operator_delete(local_70);
                  }
                }
                if (plVar2 == plVar6 + 1) break;
                lVar9 = *(long *)(this_00 + 0x50);
                plVar6 = plVar6 + 1;
              }
            }
          }
          else {
            lVar9 = *(long *)(*(long *)(this_00 + 0x58) + 0x178);
            if (lVar9 != 0) {
              uVar7 = *(undefined8 *)(lVar9 + 0xa8);
LAB_00d28dbc:
              local_80 = (code *)0x0;
              uStack_78 = 0;
              local_70 = (void *)0x0;
              Animation::fadeIn((Animation *)0xbf800000,uVar7,lVar8 + 0x18,0xffffffff,0,&local_80,3)
              ;
              if (((ulong)local_80 & 1) != 0) {
                operator_delete(local_70);
              }
            }
          }
        }
        BaseObject::returnToPool(this_00);
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar1);
      this[0x59] = (Armature)0x0;
      *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
    }
    (**(code **)(**(long **)(this + 0xb0) + 0x40))();
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

