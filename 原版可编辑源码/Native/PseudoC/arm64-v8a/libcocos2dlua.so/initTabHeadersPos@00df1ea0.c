
/* cocos2d::ui::TabControl::initTabHeadersPos(int) */

void __thiscall cocos2d::ui::TabControl::initTabHeadersPos(TabControl *this,int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 0x550);
  iVar5 = (int)((ulong)(*(long *)(this + 0x558) - lVar4) >> 3);
  if (iVar5 <= param_1) {
LAB_00df1ff0:
    if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar1 = *(int *)(this + 0x528);
                    /* catch() { ... } // from try @ 00df1dd8 with catch @ 00df1ee8 */
  fVar9 = *(float *)(this + 0x84);
  fVar7 = (float)*(int *)(this + 0x52c);
  fVar8 = (float)iVar1;
  fVar10 = fVar7 * 0.5;
  fVar11 = fVar9 - fVar8;
  switch(*(undefined4 *)(this + 0x530)) {
  case 0:
    fVar12 = 0.0;
    break;
  case 1:
    fVar11 = fVar9 + fVar8 * -0.5;
    fVar12 = (float)-iVar1;
    fVar10 = fVar7;
    fVar7 = 0.0;
    break;
  case 2:
    fVar12 = 0.0;
    fVar11 = fVar8;
    break;
  case 3:
    fVar12 = (float)-iVar1;
    fVar10 = *(float *)(this + 0x80) - fVar7;
    fVar11 = fVar9 + fVar8 * -0.5;
    fVar7 = 0.0;
    break;
  default:
    fVar12 = 0.0;
    fVar7 = 0.0;
  }
  uVar6 = (ulong)param_1;
  if (uVar6 < (ulong)(*(long *)(this + 0x558) - lVar4 >> 3)) {
    do {
      fVar8 = (float)(int)uVar6;
      plVar3 = (long *)**(undefined8 **)(lVar4 + uVar6 * 8);
      local_60 = fVar10 + fVar7 * fVar8;
      fStack_5c = fVar11 + fVar12 * fVar8;
      (**(code **)(*plVar3 + 0x98))(plVar3,&local_60);
      if (iVar5 + -1 == (int)uVar6) goto LAB_00df1ff0;
      lVar4 = *(long *)(this + 0x550);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(*(long *)(this + 0x558) - lVar4 >> 3));
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

