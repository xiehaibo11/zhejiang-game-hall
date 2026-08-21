
/* cocos2d::Bundle3D::loadMaterialsBinary_0_1(cocos2d::MaterialDatas&) */

undefined4 __thiscall
cocos2d::Bundle3D::loadMaterialsBinary_0_1(Bundle3D *this,MaterialDatas *param_1)

{
  NMaterialData *pNVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 *__src;
  long lVar5;
  basic_string *pbVar6;
  undefined4 uVar7;
  ulong *puVar8;
  void *pvVar9;
  void *__dest;
  ulong uVar10;
  ulong uVar11;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  basic_string local_f8 [8];
  ulong local_f0;
  void *local_e8;
  ulong *local_e0;
  ulong *puStack_d8;
  ulong *local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b0,"");
  pbVar6 = (basic_string *)&local_b0;
  lVar5 = seekToFirstType(this,0x10,pbVar6);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (lVar5 == 0) {
    uVar7 = 0;
    goto LAB_00d2414c;
  }
  uStack_c8 = 0;
  local_d0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  puStack_d8 = (ulong *)0x0;
  local_e0 = (ulong *)0x0;
  BundleReader::readString();
  uVar11 = (ulong)((byte)local_f8[0] >> 1);
  if (((byte)local_f8[0] & 1) != 0) {
    uVar11 = local_f0;
  }
  if (uVar11 == 0) {
    uVar7 = 0;
  }
  else {
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    local_88 = (undefined1 *)0x0;
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    std::__ndk1::operator+((__ndk1 *)(this + 8),local_f8,pbVar6);
    if ((uStack_98 & 1) != 0) {
      *local_88 = 0;
      local_90 = 0;
      if ((uStack_98 & 1) != 0) {
        operator_delete(local_88);
      }
    }
    local_88 = local_100;
    local_90 = uStack_108;
    uStack_98 = local_110;
    local_80 = 2;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_b0,"",0);
    pvVar9 = local_a0;
    uVar11 = uStack_a8;
    puVar4 = puStack_d8;
    if (puStack_d8 == local_d0) {
      std::__ndk1::vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::
      __push_back_slow_path<cocos2d::NTextureData_const&>
                ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>> *)
                 &local_e0,(NTextureData *)&local_b0);
    }
    else {
      *puStack_d8 = 0;
      puStack_d8[1] = 0;
      puStack_d8[2] = 0;
      if ((local_b0 & 1) == 0) {
        puStack_d8[2] = (ulong)local_a0;
        puStack_d8[1] = uStack_a8;
        *puStack_d8 = local_b0;
      }
      else {
        if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_a8 < 0x17) {
          __dest = (void *)((long)puStack_d8 + 1);
          *(char *)puStack_d8 = (char)((int)uStack_a8 << 1);
          if (uStack_a8 != 0) goto LAB_00d23fb8;
        }
        else {
          uVar10 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar10);
          puVar4[1] = uVar11;
          puVar4[2] = (ulong)__dest;
          *puVar4 = uVar10 | 1;
LAB_00d23fb8:
          memcpy(__dest,pvVar9,uVar11);
        }
        *(undefined1 *)((long)__dest + uVar11) = 0;
      }
      __src = local_88;
      puVar8 = puVar4 + 3;
      *puVar8 = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      if ((uStack_98 & 1) == 0) {
        puVar4[5] = (ulong)local_88;
        puVar4[4] = local_90;
        *puVar8 = uStack_98;
      }
      else {
        if (0xffffffffffffffef < local_90) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (local_90 < 0x17) {
          pvVar9 = (void *)((long)puVar4 + 0x19);
          *(char *)puVar8 = (char)((int)local_90 << 1);
          if (local_90 != 0) goto LAB_00d2403c;
        }
        else {
          uVar11 = local_90 + 0x10 & 0xfffffffffffffff0;
          pvVar9 = operator_new(uVar11);
          puVar4[4] = local_90;
          puVar4[5] = (ulong)pvVar9;
          puVar4[3] = uVar11 | 1;
LAB_00d2403c:
          memcpy(pvVar9,__src,local_90);
        }
        *(undefined1 *)((long)pvVar9 + local_90) = 0;
      }
      puStack_d8 = puVar4 + 8;
      *(undefined4 *)(puVar4 + 7) = local_78;
      puVar4[6] = CONCAT44(uStack_7c,local_80);
    }
    pNVar1 = *(NMaterialData **)(param_1 + 8);
    if (pNVar1 == *(NMaterialData **)(param_1 + 0x10)) {
      std::__ndk1::vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
      __push_back_slow_path<cocos2d::NMaterialData_const&>
                ((vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>> *)
                 param_1,(NMaterialData *)&local_e0);
    }
    else {
      std::__ndk1::allocator<cocos2d::NMaterialData>::
      construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                ((allocator<cocos2d::NMaterialData> *)(param_1 + 0x10),pNVar1,
                 (NMaterialData *)&local_e0);
      *(NMaterialData **)(param_1 + 8) = pNVar1 + 0x30;
    }
    if ((uStack_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar7 = 1;
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if ((uStack_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  puVar4 = local_e0;
  puVar8 = puStack_d8;
  if (local_e0 != (ulong *)0x0) {
    while (puVar3 = puVar8, puVar3 != puVar4) {
      if ((puVar3[-5] & 1) != 0) {
        operator_delete((void *)puVar3[-3]);
      }
      puVar8 = puVar3 + -8;
      if ((puVar3[-8] & 1) != 0) {
        operator_delete((void *)puVar3[-6]);
      }
    }
    puStack_d8 = puVar4;
    operator_delete(local_e0);
  }
LAB_00d2414c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

