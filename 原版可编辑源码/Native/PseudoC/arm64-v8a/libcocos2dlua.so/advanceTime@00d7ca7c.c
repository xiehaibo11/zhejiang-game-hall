
/* dragonBones::Armature::advanceTime(float) */

void __thiscall dragonBones::Armature::advanceTime(Armature *this,float param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  BaseObject *this_00;
  undefined8 *puVar9;
  long *plVar10;
  code *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (((this[0x59] == (Armature)0x0) && (*(long *)(this + 0x20) != 0)) &&
     (*(long *)(*(long *)(this + 0x20) + 0x158) != 0)) {
    iVar3 = *(int *)(this + 0x18);
    Animation::advanceTime(*(Animation **)(this + 0xa8),param_1);
    if (this[0x5a] != (Armature)0x0) {
                    /* try { // try from 00d7cb08 to 00e7cb4f has its CatchHandler @ 00d7d92c */
      this[0x5a] = (Armature)0x0;
      local_80 = _onSortSlots;
      std::__ndk1::__sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                (*(Slot ***)(this + 0x78),*(Slot ***)(this + 0x80),
                 (_func_bool_Slot_ptr_Slot_ptr *)&local_80);
    }
    iVar4 = *(int *)(this + 0x18);
    if ((iVar4 < 0) || (iVar4 != iVar3)) {
      puVar9 = *(undefined8 **)(this + 0x60);
      puVar1 = *(undefined8 **)(this + 0x68);
      if (puVar9 != puVar1) {
        Bone::update((Bone *)*puVar9,iVar4);
        while (puVar9 = puVar9 + 1, puVar9 != puVar1) {
          Bone::update((Bone *)*puVar9,*(int *)(this + 0x18));
                    /* try { // try from 00d7cb5c to 00e7cb63 has its CatchHandler @ 00d7d8c0 */
        }
      }
                    /* try { // try from 00d7cb64 to 00e7cb8f has its CatchHandler @ 00d7be30 */
      puVar1 = *(undefined8 **)(this + 0x80);
      for (puVar9 = *(undefined8 **)(this + 0x78); puVar9 != puVar1; puVar9 = puVar9 + 1) {
        Slot::update((Slot *)*puVar9,*(int *)(this + 0x18));
      }
    }
    puVar9 = *(undefined8 **)(this + 0x90);
    puVar1 = *(undefined8 **)(this + 0x98);
    if (puVar9 != puVar1) {
                    /* try { // try from 00d7cb90 to 00e7cb9b has its CatchHandler @ 00d7d8c4 */
      this[0x59] = (Armature)0x1;
      do {
        this_00 = (BaseObject *)*puVar9;
        lVar7 = *(long *)(this_00 + 0x68);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == 0)) {
                    /* try { // try from 00d7cbcc to 00e7cc43 has its CatchHandler @ 00d7d92c */
          if (*(long *)(this_00 + 0x58) == 0) {
            lVar8 = *(long *)(this_00 + 0x50);
            if (lVar8 == 0) {
              uVar6 = *(undefined8 *)(this + 0xa8);
              goto LAB_00d7cc70;
            }
            plVar10 = *(long **)(this + 0x78);
            plVar2 = *(long **)(this + 0x80);
            if (plVar10 != plVar2) {
              while( true ) {
                if ((*(long *)(*plVar10 + 0x180) == lVar8) &&
                   (lVar8 = *(long *)(*plVar10 + 0x178), lVar8 != 0)) {
                  local_78 = 0;
                  local_70 = (void *)0x0;
                    /* try { // try from 00d7cc48 to 00e7cc53 has its CatchHandler @ 00d7d8b8 */
                  local_80 = (code *)0x0;
                  Animation::fadeIn((Animation *)0xbf800000,*(undefined8 *)(lVar8 + 0xa8),
                                    lVar7 + 0x18,0xffffffff,0,&local_80,3);
                  if (((ulong)local_80 & 1) != 0) {
                    /* try { // try from 00d7cc58 to 00e7cc5f has its CatchHandler @ 00d7d8b4 */
                    operator_delete(local_70);
                    /* try { // try from 00d7cc60 to 00e7cc67 has its CatchHandler @ 00d7d8b0 */
                  }
                }
                if (plVar2 + -1 == plVar10) break;
                lVar8 = *(long *)(this_00 + 0x50);
                plVar10 = plVar10 + 1;
              }
            }
          }
          else {
            lVar8 = *(long *)(*(long *)(this_00 + 0x58) + 0x178);
            if (lVar8 != 0) {
              uVar6 = *(undefined8 *)(lVar8 + 0xa8);
LAB_00d7cc70:
                    /* try { // try from 00d7cc84 to 00e7cc8b has its CatchHandler @ 00d7d8d4 */
              local_78 = 0;
              local_70 = (void *)0x0;
              local_80 = (code *)0x0;
              Animation::fadeIn((Animation *)0xbf800000,uVar6,lVar7 + 0x18,0xffffffff,0,&local_80,3)
              ;
                    /* try { // try from 00d7cc94 to 00e7ccab has its CatchHandler @ 00d7d928 */
              if (((ulong)local_80 & 1) != 0) {
                operator_delete(local_70);
              }
            }
          }
        }
        BaseObject::returnToPool(this_00);
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1);
                    /* try { // try from 00d7ccac to 00e7cccb has its CatchHandler @ 00d7d8f8 */
      this[0x59] = (Armature)0x0;
      *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
    }
    (**(code **)(**(long **)(this + 0xb0) + 0x40))();
  }
                    /* try { // try from 00d7cab8 to 00e7cac7 has its CatchHandler @ 00d7d8c0 */
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

