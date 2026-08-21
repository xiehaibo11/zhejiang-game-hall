
/* fairygui::Transition::stop(bool, bool) */

void __thiscall fairygui::Transition::stop(Transition *this,bool param_1,bool param_2)

{
  long lVar1;
  Transition *pTVar2;
  GObject *pGVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x68] == (Transition)0x0) goto LAB_00a97dcc;
  pTVar2 = *(Transition **)(this + 0xa0);
  this[0x68] = (Transition)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  if (pTVar2 == (Transition *)0x0) {
    local_70 = (long *)0x0;
    *(undefined8 *)(this + 0xa0) = 0;
  }
  else {
    if (this + 0x80 == pTVar2) {
      local_70 = alStack_90;
      (**(code **)(*(long *)pTVar2 + 0x18))(pTVar2,alStack_90);
    }
    else {
      local_70 = (long *)(**(code **)(*(long *)pTVar2 + 0x10))();
    }
    pTVar2 = *(Transition **)(this + 0xa0);
    *(undefined8 *)(this + 0xa0) = 0;
    if (this + 0x80 == pTVar2) {
      pcVar4 = *(code **)(*(long *)pTVar2 + 0x20);
    }
    else {
      if (pTVar2 == (Transition *)0x0) goto LAB_00a97c58;
      pcVar4 = *(code **)(*(long *)pTVar2 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00a97c58:
  lVar8 = *(long *)(this + 0x48);
  uVar5 = *(long *)(this + 0x50) - lVar8;
  iVar6 = (int)(uVar5 >> 3);
  if (this[0xb4] == (Transition)0x0) {
    if (0 < iVar6) {
      lVar7 = 0;
      while( true ) {
        lVar8 = *(long *)(lVar8 + lVar7 * 8);
        if (*(GObject **)(lVar8 + 0x88) != (GObject *)0x0) {
          if (*(uint *)(lVar8 + 0x90) != 0) {
            GObject::releaseDisplayLock(*(GObject **)(lVar8 + 0x88),*(uint *)(lVar8 + 0x90));
            *(undefined4 *)(lVar8 + 0x90) = 0;
          }
          if (*(GTweener **)(lVar8 + 0x80) != (GTweener *)0x0) {
            GTweener::kill(*(GTweener **)(lVar8 + 0x80),param_1);
            *(undefined8 *)(lVar8 + 0x80) = 0;
            if ((*(int *)(lVar8 + 0x20) == 0xb) && (!param_1)) {
              pGVar3 = *(GObject **)(lVar8 + 0x88);
              pGVar3[0x99] = (GObject)0x1;
              GObject::setPosition
                        (pGVar3,*(float *)(pGVar3 + 0xc0) - *(float *)(*(long *)(lVar8 + 0x48) + 8),
                         *(float *)(pGVar3 + 0xc4) - *(float *)(*(long *)(lVar8 + 0x48) + 0xc));
              *(undefined1 *)(*(long *)(lVar8 + 0x88) + 0x99) = 0;
            }
          }
        }
        if ((uVar5 >> 3 & 0xffffffff) - 1 == lVar7) break;
        lVar8 = *(long *)(this + 0x48);
        lVar7 = lVar7 + 1;
      }
    }
  }
  else if (0 < iVar6) {
    lVar7 = (long)(uVar5 * 0x20000000) >> 0x20;
    while( true ) {
      lVar7 = lVar7 + -1;
      lVar8 = *(long *)(lVar8 + lVar7 * 8);
      if (*(GObject **)(lVar8 + 0x88) != (GObject *)0x0) {
        if (*(uint *)(lVar8 + 0x90) != 0) {
          GObject::releaseDisplayLock(*(GObject **)(lVar8 + 0x88),*(uint *)(lVar8 + 0x90));
          *(undefined4 *)(lVar8 + 0x90) = 0;
        }
        if (*(GTweener **)(lVar8 + 0x80) != (GTweener *)0x0) {
          GTweener::kill(*(GTweener **)(lVar8 + 0x80),param_1);
          *(undefined8 *)(lVar8 + 0x80) = 0;
          if ((*(int *)(lVar8 + 0x20) == 0xb) && (!param_1)) {
            pGVar3 = *(GObject **)(lVar8 + 0x88);
            pGVar3[0x99] = (GObject)0x1;
            GObject::setPosition
                      (pGVar3,*(float *)(pGVar3 + 0xc0) - *(float *)(*(long *)(lVar8 + 0x48) + 8),
                       *(float *)(pGVar3 + 0xc4) - *(float *)(*(long *)(lVar8 + 0x48) + 0xc));
            *(undefined1 *)(*(long *)(lVar8 + 0x88) + 0x99) = 0;
          }
        }
      }
      if (lVar7 < 1) break;
      lVar8 = *(long *)(this + 0x48);
    }
  }
  if ((param_2) && (local_70 != (long *)0x0)) {
    (**(code **)(*local_70 + 0x30))();
  }
  if (alStack_90 == local_70) {
    pcVar4 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00a97dcc;
    pcVar4 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar4)();
LAB_00a97dcc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

