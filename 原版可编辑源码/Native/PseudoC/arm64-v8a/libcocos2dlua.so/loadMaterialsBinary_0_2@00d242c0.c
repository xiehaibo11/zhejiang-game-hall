
/* cocos2d::Bundle3D::loadMaterialsBinary_0_2(cocos2d::MaterialDatas&) */

void __thiscall cocos2d::Bundle3D::loadMaterialsBinary_0_2(Bundle3D *this,MaterialDatas *param_1)

{
  ulong uVar1;
  NMaterialData *pNVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *__src;
  long lVar7;
  undefined8 uVar8;
  NMaterialData *pNVar9;
  uint uVar10;
  ulong *puVar11;
  void *pvVar12;
  void *__dest;
  ulong local_120;
  NMaterialData *pNStack_118;
  void *local_110;
  basic_string local_108 [8];
  ulong local_100;
  void *local_f8;
  ulong *local_f0;
  ulong *puStack_e8;
  ulong *local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  void *local_c8;
  uint local_b4;
  ulong local_b0;
  NMaterialData *pNStack_a8;
  void *local_a0;
  ulong uStack_98;
  NMaterialData *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b0,"");
  lVar7 = seekToFirstType(this,0x10,(basic_string *)&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    pNVar9 = (NMaterialData *)0x4;
    local_b4 = 1;
    BundleReader::read((BundleReader *)(this + 0xe0),&local_b4,4,1);
    if (local_b4 != 0) {
      uVar10 = 0;
      do {
        uStack_d8 = 0;
        local_e0 = (ulong *)0x0;
        local_c8 = (void *)0x0;
        uStack_d0 = 0;
        puStack_e8 = (ulong *)0x0;
        local_f0 = (ulong *)0x0;
        BundleReader::readString();
        uVar1 = (ulong)((byte)local_108[0] >> 1);
        if (((byte)local_108[0] & 1) != 0) {
          uVar1 = local_100;
        }
        if (uVar1 == 0) {
          bVar4 = true;
        }
        else {
          uStack_98 = 0;
          local_a0 = (void *)0x0;
          local_88 = (undefined1 *)0x0;
          local_90 = (NMaterialData *)0x0;
          pNStack_a8 = (NMaterialData *)0x0;
          local_b0 = 0;
          std::__ndk1::operator+((__ndk1 *)(this + 8),local_108,(basic_string *)pNVar9);
          if ((uStack_98 & 1) != 0) {
            *local_88 = 0;
            local_90 = (NMaterialData *)0x0;
            if ((uStack_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
          local_88 = local_110;
          local_90 = pNStack_118;
          uStack_98 = local_120;
          local_80 = 2;
          pNVar9 = (NMaterialData *)0x0;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,"",0);
          pvVar12 = local_a0;
          pNVar2 = pNStack_a8;
          puVar6 = puStack_e8;
          if (puStack_e8 == local_e0) {
            std::__ndk1::vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>
            ::__push_back_slow_path<cocos2d::NTextureData_const&>
                      ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>
                        *)&local_f0,(NTextureData *)&local_b0);
          }
          else {
            *puStack_e8 = 0;
            puStack_e8[1] = 0;
            puStack_e8[2] = 0;
            if ((local_b0 & 1) == 0) {
              puStack_e8[2] = (ulong)local_a0;
              puStack_e8[1] = (ulong)pNStack_a8;
              *puStack_e8 = local_b0;
            }
            else {
              if ((NMaterialData *)0xffffffffffffffef < pNStack_a8) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (pNStack_a8 < (NMaterialData *)0x17) {
                __dest = (void *)((long)puStack_e8 + 1);
                *(char *)puStack_e8 = (char)((int)pNStack_a8 << 1);
                if (pNStack_a8 != (NMaterialData *)0x0) goto LAB_00d244bc;
              }
              else {
                pNVar9 = pNStack_a8 + 0x10;
                __dest = operator_new((ulong)pNVar9 & 0xfffffffffffffff0);
                puVar6[1] = (ulong)pNVar2;
                puVar6[2] = (ulong)__dest;
                *puVar6 = (ulong)pNVar9 & 0xfffffffffffffff0 | 1;
LAB_00d244bc:
                pNVar9 = pNVar2;
                memcpy(__dest,pvVar12,(size_t)pNVar2);
              }
              *(NMaterialData *)((long)__dest + (long)pNVar2) = (NMaterialData)0x0;
            }
            __src = local_88;
            puVar11 = puVar6 + 3;
            *puVar11 = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            if ((uStack_98 & 1) == 0) {
              puVar6[5] = (ulong)local_88;
              puVar6[4] = (ulong)local_90;
              *puVar11 = uStack_98;
            }
            else {
              if ((NMaterialData *)0xffffffffffffffef < local_90) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (local_90 < (NMaterialData *)0x17) {
                pvVar12 = (void *)((long)puVar6 + 0x19);
                *(char *)puVar11 = (char)((int)local_90 << 1);
                if (local_90 != (NMaterialData *)0x0) goto LAB_00d24544;
              }
              else {
                pvVar12 = operator_new((ulong)(local_90 + 0x10) & 0xfffffffffffffff0);
                puVar6[4] = (ulong)local_90;
                puVar6[5] = (ulong)pvVar12;
                puVar6[3] = (ulong)(local_90 + 0x10) & 0xfffffffffffffff0 | 1;
LAB_00d24544:
                pNVar9 = local_90;
                memcpy(pvVar12,__src,(size_t)local_90);
              }
              *(NMaterialData *)((long)pvVar12 + (long)local_90) = (NMaterialData)0x0;
            }
            puStack_e8 = puVar6 + 8;
            *(undefined4 *)(puVar6 + 7) = local_78;
            puVar6[6] = CONCAT44(uStack_7c,local_80);
          }
          pNVar2 = *(NMaterialData **)(param_1 + 8);
          if (pNVar2 == *(NMaterialData **)(param_1 + 0x10)) {
            std::__ndk1::
            vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
            __push_back_slow_path<cocos2d::NMaterialData_const&>
                      ((vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>
                        *)param_1,(NMaterialData *)&local_f0);
          }
          else {
            pNVar9 = (NMaterialData *)&local_f0;
            std::__ndk1::allocator<cocos2d::NMaterialData>::
            construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                      ((allocator<cocos2d::NMaterialData> *)(param_1 + 0x10),pNVar2,pNVar9);
            *(NMaterialData **)(param_1 + 8) = pNVar2 + 0x30;
          }
          if ((uStack_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          bVar4 = false;
        }
        if (((byte)local_108[0] & 1) != 0) {
          operator_delete(local_f8);
        }
        if ((uStack_d8 & 1) != 0) {
          operator_delete(local_c8);
        }
        puVar6 = local_f0;
        puVar11 = puStack_e8;
        if (local_f0 != (ulong *)0x0) {
          while (puVar5 = puVar11, puVar5 != puVar6) {
            if ((puVar5[-5] & 1) != 0) {
              operator_delete((void *)puVar5[-3]);
            }
            puVar11 = puVar5 + -8;
            if ((puVar5[-8] & 1) != 0) {
              operator_delete((void *)puVar5[-6]);
            }
          }
          puStack_e8 = puVar6;
          operator_delete(local_f0);
        }
      } while ((!bVar4) && (uVar10 = uVar10 + 1, uVar10 < local_b4));
    }
    uVar8 = 1;
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

