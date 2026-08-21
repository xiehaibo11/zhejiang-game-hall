
/* cocos2d::AutoPolygon::rdp(std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> > const&, float) */

void cocos2d::AutoPolygon::rdp(vector *param_1,float param_2)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  vector *in_x1;
  vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *in_x8;
  float *pfVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  void *local_b0;
  undefined8 *local_98;
  undefined8 *local_80;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f63a64 to 01063a7b has its CatchHandler @ 00f6432c */
  pfVar10 = *(float **)in_x1;
  pfVar1 = *(float **)(in_x1 + 8);
  uVar7 = (long)pfVar1 - (long)pfVar10 >> 3;
                    /* try { // try from 00f63a7c to 01064347 has its CatchHandler @ 00f638d4 */
  if (uVar7 < 3) {
    std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::vector(in_x8,in_x1);
  }
  else {
    if (1 < uVar7 - 1) {
      pfVar4 = pfVar10 + 3;
      fVar13 = *pfVar10;
      fVar14 = pfVar1[-2];
      fVar12 = 0.0;
      iVar8 = -1;
      uVar9 = 2;
      if (fVar13 != fVar14) goto LAB_00f63afc;
      do {
        fVar15 = ABS(pfVar4[-1] - fVar14);
        iVar11 = iVar8;
        while( true ) {
          iVar8 = (int)uVar9;
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + -1;
          if (fVar15 <= fVar12) {
            iVar8 = iVar11;
            fVar15 = fVar12;
          }
          fVar12 = fVar15;
          pfVar4 = pfVar4 + 2;
          if (uVar7 == uVar9) goto LAB_00f63b58;
          if (fVar13 == fVar14) break;
LAB_00f63afc:
          fVar15 = pfVar10[1];
          fVar16 = pfVar1[-1];
          iVar11 = iVar8;
          if (fVar15 == fVar16) {
            fVar15 = ABS(*pfVar4 - fVar16);
          }
          else {
            fVar16 = (fVar16 - fVar15) / (fVar14 - fVar13);
            fVar15 = ABS((fVar15 - fVar13 * fVar16) + (fVar16 * pfVar4[-1] - *pfVar4)) /
                     SQRT(fVar16 * fVar16 + 1.0);
          }
        }
      } while( true );
    }
    iVar8 = -1;
    fVar12 = 0.0;
LAB_00f63b58:
    if (fVar12 <= param_2) {
      *(undefined8 *)in_x8 = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      *(undefined8 *)(in_x8 + 0x10) = 0;
      std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
      __push_back_slow_path<cocos2d::Vec2_const&>(in_x8,(Vec2 *)pfVar10);
      puVar3 = *(undefined8 **)(in_x8 + 8);
      if (puVar3 == *(undefined8 **)(in_x8 + 0x10)) {
        std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
        __push_back_slow_path<cocos2d::Vec2_const&>(in_x8,(Vec2 *)(*(long *)(in_x1 + 8) + -8));
      }
      else {
        *puVar3 = *(undefined8 *)(*(long *)(in_x1 + 8) + -8);
        *(undefined8 **)(in_x8 + 8) = puVar3 + 1;
      }
    }
    else {
      pfVar4 = pfVar10 + (long)iVar8 * 2;
      uVar7 = (long)(pfVar4 + 2) - (long)pfVar10;
      local_80 = (undefined8 *)0x0;
      if (uVar7 != 0) {
        if ((ulong)((long)uVar7 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        local_80 = operator_new(uVar7);
        if (pfVar4 + 2 != pfVar10) {
          lVar5 = (long)iVar8 * 8 + 8;
          puVar3 = local_80;
          do {
            lVar5 = lVar5 + -8;
            *puVar3 = *(undefined8 *)pfVar10;
            puVar3 = puVar3 + 1;
            pfVar10 = pfVar10 + 2;
          } while (lVar5 != 0);
        }
      }
      uVar7 = (long)pfVar1 - (long)pfVar4;
      local_98 = (undefined8 *)0x0;
      if (uVar7 != 0) {
        if ((ulong)((long)uVar7 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        local_98 = operator_new(uVar7);
        puVar3 = local_98;
        for (; pfVar4 != pfVar1; pfVar4 = pfVar4 + 2) {
          *puVar3 = *(undefined8 *)pfVar4;
          puVar3 = puVar3 + 1;
        }
      }
      rdp(param_1,param_2);
      rdp(param_1,param_2);
      std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
      insert<std::__ndk1::__wrap_iter<cocos2d::Vec2*>>();
      if (local_b0 != (void *)0x0) {
        operator_delete(local_b0);
      }
      if (local_98 != (undefined8 *)0x0) {
        operator_delete(local_98);
      }
      if (local_80 != (undefined8 *)0x0) {
        operator_delete(local_80);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

