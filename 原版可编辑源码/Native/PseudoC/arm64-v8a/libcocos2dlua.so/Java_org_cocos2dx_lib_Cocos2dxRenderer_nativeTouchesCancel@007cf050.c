
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesCancel
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_70 [2];
  
  lVar1 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  uVar9 = uVar2 & 0xffffffff;
  uVar4 = uVar9 * 4 + 0xf & 0x7fffffff0;
  lVar3 = (long)alStack_70 + -uVar4;
  uVar13 = uVar2 & 0xffffffff;
  lVar10 = lVar3 - uVar4;
  lVar11 = lVar10 - uVar4;
  (**(code **)(*param_1 + 0x658))(param_1,param_3,0,uVar13,lVar3);
  (**(code **)(*param_1 + 0x668))(param_1,param_4,0,uVar13,lVar10);
  (**(code **)(*param_1 + 0x668))(param_1,param_5,0,uVar13,lVar11);
  lVar12 = lVar11 - (uVar9 * 8 + 0xf & 0xffffffff0);
  if (0 < (int)(uint)uVar2) {
    if ((uint)uVar2 < 4) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 & 0xfffffffc;
      puVar6 = (undefined8 *)((long)alStack_70 + -uVar4 + 8);
      plVar7 = (long *)(lVar12 + 0x10);
      uVar4 = uVar2;
      do {
        uVar14 = puVar6[-1];
        uVar15 = *puVar6;
        puVar6 = puVar6 + 2;
        uVar4 = uVar4 - 4;
        plVar7[-1] = (long)(int)((ulong)uVar14 >> 0x20);
        plVar7[-2] = (long)(int)uVar14;
        plVar7[1] = (long)(int)((ulong)uVar15 >> 0x20);
        *plVar7 = (long)(int)uVar15;
        plVar7 = plVar7 + 4;
      } while (uVar4 != 0);
      if (uVar2 == uVar9) goto LAB_007cf1b8;
    }
    lVar5 = uVar9 - uVar2;
    plVar7 = (long *)(lVar12 + uVar2 * 8);
    piVar8 = (int *)(lVar3 + uVar2 * 4);
    do {
      lVar5 = lVar5 + -1;
      *plVar7 = (long)*piVar8;
      plVar7 = plVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (lVar5 != 0);
  }
LAB_007cf1b8:
  lVar3 = cocos2d::Director::getInstance();
  (**(code **)(**(long **)(lVar3 + 0x108) + 0x118))
            (*(long **)(lVar3 + 0x108),uVar9,lVar12,lVar10,lVar11);
  if (*(long *)(lVar1 + 0x28) == alStack_70[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

