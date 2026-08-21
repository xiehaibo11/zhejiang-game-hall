
void FUN_00fa4648(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  EventDispatcher *this;
  void *__dest;
  long lVar14;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar14 = *param_2;
  cVar12 = *(char *)(lVar14 + 0x80);
  if (cVar12 == '\0') {
LAB_00fa4874:
    uVar9 = 0;
  }
  else {
    plVar10 = *(long **)(param_1 + 8);
    this = *(EventDispatcher **)(param_1 + 0x18);
    *(undefined8 *)(*plVar10 + 0x30) = *(undefined8 *)(lVar14 + 0x88);
    lVar11 = *plVar10;
    iVar3 = *(int *)(lVar11 + 0x38);
    if (iVar3 == 0) {
      plVar10 = *(long **)(lVar14 + 0xc0);
      if (plVar10 != (long *)0x0) {
                    /* try { // try from 00fa4734 to 010a4737 has its CatchHandler @ 00fa4750 */
                    /* try { // try from 00fa4738 to 010a48a7 has its CatchHandler @ 00fa46c8 */
        lStack_50 = **(long **)(param_1 + 0x10);
        local_58 = lVar11;
                    /* catch() { ... } // from try @ 00fa4734 with catch @ 00fa4750 */
        uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10,&lStack_50,&local_58);
        if ((uVar7 & 1) != 0) {
          if (*(char *)(lVar14 + 0x80) != '\0') {
            puVar2 = *(undefined8 **)(lVar14 + 0x168);
            if (puVar2 == *(undefined8 **)(lVar14 + 0x170)) {
              std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
              __push_back_slow_path<cocos2d::Touch*const&>
                        ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)
                         (lVar14 + 0x160),*(Touch ***)(param_1 + 0x10));
            }
            else {
              *puVar2 = **(Touch ***)(param_1 + 0x10);
              *(undefined8 **)(lVar14 + 0x168) = puVar2 + 1;
            }
          }
          goto LAB_00fa47ec;
        }
      }
LAB_00fa4784:
      bVar6 = false;
    }
    else {
      plVar10 = *(long **)(lVar14 + 0x160);
      plVar8 = *(long **)(lVar14 + 0x168);
      if ((plVar8 == plVar10) || (plVar10 == plVar8)) goto LAB_00fa4784;
      lVar13 = **(long **)(param_1 + 0x10);
      if (*plVar10 != lVar13) {
                    /* catch() { ... } // from try @ 00fa4738 with catch @ 00fa46c8 */
        do {
          if (plVar8 + -1 == plVar10) goto LAB_00fa4784;
          plVar1 = plVar10 + 1;
          plVar10 = plVar10 + 1;
        } while (*plVar1 != lVar13);
      }
      if (plVar10 == plVar8) goto LAB_00fa4784;
      if (iVar3 == 3) {
        plVar8 = *(long **)(lVar14 + 0x150);
      }
      else {
        if (iVar3 != 2) {
          if ((iVar3 == 1) && (plVar10 = *(long **)(lVar14 + 0xf0), plVar10 != (long *)0x0)) {
            local_58 = lVar11;
            lStack_50 = lVar13;
            (**(code **)(*plVar10 + 0x30))(plVar10,&lStack_50,&local_58);
          }
          goto LAB_00fa47ec;
        }
        plVar8 = *(long **)(lVar14 + 0x120);
      }
      if (plVar8 != (long *)0x0) {
        local_58 = lVar11;
        lStack_50 = lVar13;
        (**(code **)(*plVar8 + 0x30))(plVar8,&lStack_50,&local_58);
        cVar12 = *(char *)(lVar14 + 0x80);
      }
      if (cVar12 != '\0') {
        sVar4 = *(long *)(lVar14 + 0x168) - (long)(plVar10 + 1);
        if (sVar4 != 0) {
          memmove(plVar10,plVar10 + 1,sVar4);
        }
        *(long **)(lVar14 + 0x168) = plVar10 + ((long)sVar4 >> 3);
      }
LAB_00fa47ec:
      bVar6 = true;
    }
    if (((Event *)**(undefined8 **)(param_1 + 8))[0x28] == (Event)0x0) {
      if (((!bVar6) || (*(char *)(lVar14 + 0x80) == '\0')) || (*(char *)(lVar14 + 0x178) == '\0'))
      goto LAB_00fa4874;
      if (**(char **)(param_1 + 0x20) != '\0') {
        lVar14 = *(long *)(param_1 + 0x30);
        __dest = (void *)**(undefined8 **)(param_1 + 0x28);
        sVar4 = *(long *)(lVar14 + 8) - ((long)__dest + 8);
        if (sVar4 != 0) {
          memmove(__dest,(void *)((long)__dest + 8),sVar4);
        }
        *(void **)(lVar14 + 8) = (void *)((long)__dest + ((long)sVar4 >> 3) * 8);
        uVar9 = 1;
        **(undefined8 **)(param_1 + 0x28) = __dest;
        **(undefined1 **)(param_1 + 0x38) = 1;
        goto LAB_00fa4878;
      }
    }
    else {
      cocos2d::EventDispatcher::updateListeners(this,(Event *)**(undefined8 **)(param_1 + 8));
    }
    uVar9 = 1;
  }
LAB_00fa4878:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

