
void FUN_0086db10(long *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  float fVar2;
  float *__src;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_c0 [2];
  undefined1 *local_b8;
  long local_b0;
  float *local_a8;
  float *local_a0;
  float *local_98;
  undefined1 local_90;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  if ((DAT_01d35b48 & 1) == 0) {
    local_a8 = (float *)0x0;
    local_a0 = (float *)0x0;
    local_98 = (float *)0x0;
    local_b0 = lVar9;
    local_90 = param_2;
    uVar3 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
    uVar5 = (ulong)uVar3 * 4 + 0xf & 0x7fffffff0;
    lVar9 = (long)afStack_c0 - uVar5;
    lVar11 = lVar9 - uVar5;
    local_b8 = (undefined1 *)afStack_c0;
    (**(code **)(*param_1 + 0x658))(param_1,param_3,0,uVar3,lVar9);
    (**(code **)(*param_1 + 0x668))(param_1,param_4,0,uVar3,lVar11);
    (**(code **)(*param_1 + 0x668))(param_1,param_5,0,uVar3,lVar11 - uVar5);
    if (0 < (int)uVar3) {
      lVar12 = 0;
      fVar14 = (float)NEON_ucvtf((uint)*(byte *)(cocos2d::Application::_instance + 0x28));
      pfVar6 = (float *)0x0;
      pfVar7 = (float *)0x0;
      do {
        __src = local_a8;
        lVar10 = lVar12 * 4;
        fVar2 = *(float *)(lVar9 + lVar10);
        fVar16 = *(float *)(lVar11 + lVar10) / fVar14;
        fVar15 = *(float *)((lVar11 - uVar5) + lVar10) / fVar14;
        if (pfVar6 == pfVar7) {
          __n = (long)pfVar7 - (long)local_a8;
          lVar10 = (long)__n >> 2;
          uVar1 = lVar10 * -0x5555555555555555 + 1;
          if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar13 = 0x1555555555555555;
          if ((ulong)(lVar10 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
            uVar13 = uVar1;
            if (uVar1 <= (ulong)(lVar10 * 0x5555555555555556)) {
              uVar13 = lVar10 * 0x5555555555555556;
            }
            if (uVar13 != 0) goto LAB_0086dce0;
            pvVar4 = (void *)0x0;
          }
          else {
LAB_0086dce0:
            pvVar4 = operator_new(uVar13 * 0xc);
          }
          lVar8 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          pfVar6 = (float *)((long)pvVar4 + lVar10 * 4);
          pfVar6[2] = fVar2;
          *pfVar6 = fVar16;
          pfVar6[1] = fVar15;
          if (0 < (long)__n) {
            memcpy(pfVar6 + ((lVar8 >> 1) - (lVar8 >> 0x3f)) * 3,__src,__n);
          }
          local_a8 = pfVar6 + ((lVar8 >> 1) - (lVar8 >> 0x3f)) * 3;
          local_a0 = pfVar6 + 3;
          local_98 = (float *)((long)pvVar4 + uVar13 * 0xc);
          if (__src != (float *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *pfVar6 = fVar16;
          pfVar6[1] = fVar15;
          pfVar6[2] = fVar2;
          local_a0 = local_a0 + 3;
        }
        lVar12 = lVar12 + 1;
        pfVar6 = local_a0;
        pfVar7 = local_98;
      } while (lVar12 < (int)uVar3);
    }
    cocos2d::EventDispatcher::dispatchTouchEvent((TouchEvent *)&local_a8);
    lVar9 = local_b0;
    if (local_a8 != (float *)0x0) {
      local_a0 = local_a8;
      operator_delete(local_a8);
      lVar9 = local_b0;
    }
  }
  if (*(long *)(lVar9 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

