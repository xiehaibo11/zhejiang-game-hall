
/* cocos2d::Mesh::create(std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&,
   std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> > const&, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > const&) */

undefined8 cocos2d::Mesh::create(vector *param_1,vector *param_2,vector *param_3,vector *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  vector *extraout_x1;
  vector *extraout_x1_00;
  vector *extraout_x1_01;
  vector *extraout_x1_02;
  vector *extraout_x1_03;
  vector *extraout_x1_04;
  vector *extraout_x1_05;
  vector *extraout_x1_06;
  vector *extraout_x1_07;
  vector *pvVar8;
  vector *extraout_x1_08;
  vector *extraout_x1_09;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *puStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_78 = (undefined4 *)0x0;
  puStack_70 = (undefined4 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_80 = (undefined4 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a8 = 0x140600000003;
  uStack_a0 = CONCAT44(0xc,(undefined4)uStack_a0);
  pvVar8 = param_2;
  if (*(long *)(param_1 + 8) != *(long *)param_1) {
    uStack_a0 = 0xc00000000;
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::__push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
              ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                *)&local_98,(MeshVertexAttrib *)&local_a8);
    pvVar8 = extraout_x1;
  }
  if (*(long *)(param_2 + 8) != *(long *)param_2) {
    uStack_a0 = CONCAT44(uStack_a0._4_4_,6);
    if (local_90 == local_88) {
      std::__ndk1::
      vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
      __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                  *)&local_98,(MeshVertexAttrib *)&local_a8);
      pvVar8 = extraout_x1_00;
    }
    else {
      local_90[1] = uStack_a0;
      *local_90 = local_a8;
      local_90 = local_90 + 2;
    }
  }
  if (*(long *)(param_3 + 8) != *(long *)param_3) {
    local_a8 = CONCAT44(local_a8._4_4_,2);
    uStack_a0 = 0x800000002;
    if (local_90 == local_88) {
      std::__ndk1::
      vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
      __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                  *)&local_98,(MeshVertexAttrib *)&local_a8);
      pvVar8 = extraout_x1_01;
    }
    else {
      local_90[1] = 0x800000002;
      *local_90 = local_a8;
      local_90 = local_90 + 2;
    }
  }
  iVar7 = (int)pvVar8;
  lVar11 = *(long *)param_1;
  uVar9 = *(long *)(param_1 + 8) - lVar11 >> 2;
  if (2 < uVar9) {
    lVar1 = *(long *)param_2;
    lVar3 = *(long *)(param_2 + 8);
    lVar13 = 0;
    lVar14 = 0;
    lVar2 = *(long *)param_3;
    lVar4 = *(long *)(param_3 + 8);
    uVar12 = 1;
    do {
      if (local_78 == puStack_70) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
        __push_back_slow_path<float_const&>
                  ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                   (float *)(lVar11 + lVar14));
        lVar11 = *(long *)param_1;
        pvVar8 = extraout_x1_02;
      }
      else {
        *local_78 = *(undefined4 *)(lVar11 + lVar14);
        local_78 = local_78 + 1;
      }
      if (local_78 == puStack_70) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
        __push_back_slow_path<float_const&>
                  ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                   (float *)(lVar11 + lVar14 + 4));
        lVar11 = *(long *)param_1;
        pvVar8 = extraout_x1_03;
      }
      else {
        *local_78 = *(undefined4 *)(lVar11 + lVar14 + 4);
        local_78 = local_78 + 1;
      }
      if (local_78 == puStack_70) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
        __push_back_slow_path<float_const&>
                  ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                   (float *)(lVar11 + lVar14 + 8));
        pvVar8 = extraout_x1_04;
        if (lVar3 != lVar1) goto LAB_00d2e6b0;
LAB_00d2e744:
        if (lVar4 == lVar2) goto LAB_00d2e7b8;
LAB_00d2e74c:
        lVar11 = *(long *)param_3;
        if (local_78 == puStack_70) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                     (float *)(lVar11 + lVar13));
          lVar11 = *(long *)param_3;
          pvVar8 = extraout_x1_08;
        }
        else {
          *local_78 = *(undefined4 *)(lVar11 + lVar13);
          local_78 = local_78 + 1;
        }
        iVar7 = (int)pvVar8;
        if (local_78 == puStack_70) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                     (float *)(lVar11 + lVar13 + 4));
          pvVar8 = extraout_x1_09;
          goto LAB_00d2e7b8;
        }
        *local_78 = *(undefined4 *)(lVar11 + lVar13 + 4);
        local_78 = local_78 + 1;
      }
      else {
        puVar10 = local_78 + 1;
        *local_78 = *(undefined4 *)(lVar11 + lVar14 + 8);
        local_78 = puVar10;
        if (lVar3 == lVar1) goto LAB_00d2e744;
LAB_00d2e6b0:
        lVar11 = *(long *)param_2;
        if (local_78 == puStack_70) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                     (float *)(lVar11 + lVar14));
          lVar11 = *(long *)param_2;
          pvVar8 = extraout_x1_05;
        }
        else {
          *local_78 = *(undefined4 *)(lVar11 + lVar14);
          local_78 = local_78 + 1;
        }
        if (local_78 == puStack_70) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                     (float *)(lVar11 + lVar14 + 4));
          lVar11 = *(long *)param_2;
          pvVar8 = extraout_x1_06;
        }
        else {
          *local_78 = *(undefined4 *)(lVar11 + lVar14 + 4);
          local_78 = local_78 + 1;
        }
        if (local_78 == puStack_70) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,
                     (float *)(lVar11 + lVar14 + 8));
          pvVar8 = extraout_x1_07;
          goto LAB_00d2e744;
        }
        puVar10 = local_78 + 1;
        *local_78 = *(undefined4 *)(lVar11 + lVar14 + 8);
        local_78 = puVar10;
        if (lVar4 != lVar2) goto LAB_00d2e74c;
LAB_00d2e7b8:
        iVar7 = (int)pvVar8;
      }
      if (uVar9 / 3 <= uVar12) break;
      lVar11 = *(long *)param_1;
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0xc;
      lVar13 = lVar13 + 8;
    } while( true );
  }
  uVar6 = create((vector *)&local_80,iVar7,param_4,(vector *)&local_98);
  if (local_98 != (undefined8 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_80 != (undefined4 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

