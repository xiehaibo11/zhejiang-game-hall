
/* cocos2d::AutoPolygon::marchSquare(cocos2d::Rect const&, cocos2d::Vec2 const&, float) */

void cocos2d::AutoPolygon::marchSquare(Rect *param_1,Vec2 *param_2,float param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long lVar4;
  undefined4 uVar5;
  float *in_x2;
  vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *in_x8;
  long lVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b8;
  float fStack_b4;
  int local_ac;
  int *local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  long local_78;
  
                    /* try { // try from 00f633b4 to 010633b7 has its CatchHandler @ 00f634b8 */
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  fVar14 = *in_x2;
  fVar15 = in_x2[1];
  local_88 = (int *)0x0;
  local_80 = (int *)0x0;
                    /* try { // try from 00f63410 to 01063417 has its CatchHandler @ 00f63478 */
  local_98 = (int *)0x0;
  local_90 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_a0 = (int *)0x0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  iVar12 = 0;
  iVar11 = 0;
  uVar8 = (int)fVar15;
  uVar9 = (int)fVar14;
  do {
    uVar5 = getSquareValue((AutoPolygon *)param_1,uVar9,uVar8,param_2,param_3);
    iVar10 = iVar11;
    iVar13 = iVar12;
                    /* try { // try from 00f63440 to 01063443 has its CatchHandler @ 00f634d4 */
                    /* try { // try from 00f63444 to 0106348b has its CatchHandler @ 00f632a0 */
    switch(uVar5) {
    case 1:
    case 5:
    case 0xd:
switchD_00f63464_caseD_1:
      iVar10 = 0;
      iVar13 = -1;
      break;
    case 2:
    case 3:
    case 7:
switchD_00f63464_caseD_2:
LAB_00f635e4:
      iVar13 = 0;
      iVar10 = 1;
      break;
    case 4:
    case 0xc:
    case 0xe:
      iVar13 = 0;
      iVar10 = -1;
      break;
    case 6:
                    /* try { // try from 00f6348c to 0106348f has its CatchHandler @ 00f634b4 */
                    /* try { // try from 00f63490 to 010634e7 has its CatchHandler @ 00f632a0 */
      local_ac = uVar9 + *(int *)(param_1 + 0x28) * uVar8;
      piVar7 = local_a8;
      if ((local_a8 != local_a0) && (*local_a8 != local_ac)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f6348c with catch @ 00f634b4
                        */
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f633b4 with catch @ 00f634b8
                        */
          if (local_a0 + -1 == piVar7) goto LAB_00f6358c;
          piVar1 = piVar7 + 1;
          piVar7 = piVar7 + 1;
        } while (*piVar1 != local_ac);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f63440 with catch @ 00f634d4
                        */
      if (piVar7 == local_a0) {
LAB_00f6358c:
        if (local_98 == local_a0) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_a8,&local_ac);
          goto switchD_00f63464_caseD_2;
        }
        *local_a0 = local_ac;
        local_a0 = local_a0 + 1;
        goto LAB_00f635e4;
      }
      sVar3 = (long)local_a0 - (long)(piVar7 + 1);
      if (sVar3 != 0) {
        memmove(piVar7,piVar7 + 1,sVar3);
      }
      local_a0 = piVar7 + ((long)sVar3 >> 2);
      iVar13 = 0;
      iVar10 = -1;
      break;
    case 8:
    case 10:
    case 0xb:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f6339c with catch @ 00f63474
                        */
      iVar10 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f63410 with catch @ 00f63478
                        */
      iVar13 = 1;
      break;
    case 9:
      local_ac = uVar9 + *(int *)(param_1 + 0x28) * uVar8;
      piVar7 = local_90;
      if ((local_90 != local_88) && (*local_90 != local_ac)) {
        do {
          if (local_88 + -1 == piVar7) goto LAB_00f635ac;
          piVar1 = piVar7 + 1;
          piVar7 = piVar7 + 1;
        } while (*piVar1 != local_ac);
      }
      if (piVar7 == local_88) {
LAB_00f635ac:
        if (local_80 == local_88) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_90,&local_ac);
          goto switchD_00f63464_caseD_1;
        }
        *local_88 = local_ac;
        iVar10 = 0;
        iVar13 = -1;
        local_88 = local_88 + 1;
      }
      else {
        sVar3 = (long)local_88 - (long)(piVar7 + 1);
        if (sVar3 != 0) {
          memmove(piVar7,piVar7 + 1,sVar3);
        }
        iVar10 = 0;
        iVar13 = 1;
        local_88 = piVar7 + ((long)sVar3 >> 2);
      }
    }
    uVar9 = iVar10 + uVar9;
    uVar8 = iVar13 + uVar8;
    if ((iVar13 == iVar12) && (iVar10 == iVar11)) {
      fVar16 = *(float *)(param_1 + 0x30);
      lVar6 = *(long *)(in_x8 + 8);
      *(float *)(lVar6 + -8) = ((float)(int)uVar9 - *(float *)param_2) / fVar16;
      *(float *)(lVar6 + -4) =
           ((*(float *)(param_2 + 0xc) - (float)(int)uVar8) + *(float *)(param_2 + 4)) / fVar16;
    }
    else {
      puVar2 = *(undefined8 **)(in_x8 + 8);
      local_b8 = ((float)(int)uVar9 - *(float *)param_2) / *(float *)(param_1 + 0x30);
      fStack_b4 = ((*(float *)(param_2 + 0xc) - (float)(int)uVar8) + *(float *)(param_2 + 4)) /
                  *(float *)(param_1 + 0x30);
      if (puVar2 < *(undefined8 **)(in_x8 + 0x10)) {
        *puVar2 = CONCAT44(fStack_b4,local_b8);
        *(undefined8 **)(in_x8 + 8) = puVar2 + 1;
      }
      else {
        std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
        __push_back_slow_path<cocos2d::Vec2>(in_x8,(Vec2 *)&local_b8);
      }
    }
    iVar12 = iVar13;
    iVar11 = iVar10;
    if ((uVar8 == (int)fVar15) && (uVar9 == (int)fVar14)) {
      if (local_a8 != (int *)0x0) {
        local_a0 = local_a8;
        operator_delete(local_a8);
      }
      if (local_90 != (int *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
      if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}

