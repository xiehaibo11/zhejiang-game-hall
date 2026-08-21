
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::Bundle3D::loadMaterialsBinary(cocos2d::MaterialDatas&) */

undefined8 __thiscall cocos2d::Bundle3D::loadMaterialsBinary(Bundle3D *this,MaterialDatas *param_1)

{
  BundleReader *this_00;
  basic_string *pbVar1;
  NMaterialData *pNVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long lVar8;
  Bundle3D *pBVar9;
  basic_string *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  void *pvVar14;
  undefined8 local_1a8;
  basic_string local_178;
  undefined7 uStack_177;
  basic_string *pbStack_170;
  undefined1 *local_168;
  basic_string local_160;
  undefined7 uStack_15f;
  basic_string *pbStack_158;
  void *local_150;
  uint local_144;
  ulong *local_140;
  ulong *puStack_138;
  ulong *local_130;
  ulong uStack_128;
  basic_string *local_120;
  undefined1 *local_118;
  uint local_104;
  ulong local_100;
  basic_string *pbStack_f8;
  undefined1 *local_f0;
  ulong uStack_e8;
  basic_string *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [56];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_100,"");
  lVar8 = seekToFirstType(this,0x10,(basic_string *)&local_100);
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if (lVar8 == 0) {
LAB_00d24d60:
    local_1a8 = 0;
  }
  else {
    this_00 = (BundleReader *)(this + 0xe0);
    local_1a8 = 1;
    local_104 = 1;
    BundleReader::read(this_00,&local_104,4,1);
    if (local_104 != 0) {
      uVar12 = 0;
      do {
        uStack_128 = 0;
        local_130 = (ulong *)0x0;
        local_118 = (undefined1 *)0x0;
        local_120 = (basic_string *)0x0;
        puStack_138 = (ulong *)0x0;
        local_140 = (ulong *)0x0;
        BundleReader::readString();
        if ((uStack_128 & 1) != 0) {
          *local_118 = 0;
          local_120 = (basic_string *)0x0;
          if ((uStack_128 & 1) != 0) {
            operator_delete(local_118);
          }
        }
        local_118 = local_f0;
        local_120 = pbStack_f8;
        uStack_128 = local_100;
        BundleReader::read(this_00,auStack_b0,4,0xe);
        local_144 = 1;
        pbVar10 = (basic_string *)0x4;
        BundleReader::read(this_00,&local_144,4,1);
        if (local_144 != 0) {
          uVar11 = 0;
          do {
            uStack_e8 = 0;
            local_f0 = (undefined1 *)0x0;
            local_d8 = (undefined1 *)0x0;
            local_e0 = (basic_string *)0x0;
            pbStack_f8 = (basic_string *)0x0;
            local_100 = 0;
            BundleReader::readString();
            if ((local_100 & 1) != 0) {
              *local_f0 = 0;
              pbStack_f8 = (basic_string *)0x0;
              if ((local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
            }
            local_100 = CONCAT71(uStack_15f,local_160);
            pbStack_f8 = pbStack_158;
            local_f0 = local_150;
            pbVar1 = (basic_string *)(ulong)((byte)local_160 >> 1);
            if (((byte)local_160 & 1) != 0) {
              pbVar1 = pbStack_158;
            }
            if (pbVar1 == (basic_string *)0x0) {
              bVar4 = true;
              if ((uStack_e8 & 1) != 0) goto LAB_00d24a14;
LAB_00d24c68:
              if ((local_100 & 1) == 0) goto LAB_00d24c70;
LAB_00d24a24:
              operator_delete(local_f0);
              if (bVar4) goto LAB_00d24d30;
            }
            else {
              BundleReader::readString();
              pbVar1 = (basic_string *)(ulong)((byte)local_160 >> 1);
              if (((byte)local_160 & 1) != 0) {
                pbVar1 = pbStack_158;
              }
              if (pbVar1 == (basic_string *)0x0) {
                bVar4 = true;
              }
              else {
                std::__ndk1::operator+((__ndk1 *)(this + 8),&local_160,pbVar10);
                if ((uStack_e8 & 1) != 0) {
                  *local_d8 = 0;
                  local_e0 = (basic_string *)0x0;
                  if ((uStack_e8 & 1) != 0) {
                    operator_delete(local_d8);
                  }
                }
                uStack_e8 = CONCAT71(uStack_177,local_178);
                local_d8 = local_168;
                local_e0 = pbStack_170;
                pbVar10 = (basic_string *)0x4;
                BundleReader::read(this_00,auStack_c0,4,4);
                pBVar9 = (Bundle3D *)BundleReader::readString();
                local_d0 = parseGLTextureType(pBVar9,&local_178);
                if (((byte)local_178 & 1) != 0) {
                  operator_delete(local_168);
                }
                pBVar9 = (Bundle3D *)BundleReader::readString();
                uStack_cc = parseGLType(pBVar9,&local_178);
                if (((byte)local_178 & 1) != 0) {
                  operator_delete(local_168);
                }
                pBVar9 = (Bundle3D *)BundleReader::readString();
                local_c8 = parseGLType(pBVar9,&local_178);
                if (((byte)local_178 & 1) != 0) {
                  operator_delete(local_168);
                }
                puVar7 = local_f0;
                pbVar1 = pbStack_f8;
                puVar6 = puStack_138;
                if (puStack_138 == local_130) {
                  std::__ndk1::
                  vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::
                  __push_back_slow_path<cocos2d::NTextureData_const&>
                            ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>
                              *)&local_140,(NTextureData *)&local_100);
                }
                else {
                  *puStack_138 = 0;
                  puStack_138[1] = 0;
                  puStack_138[2] = 0;
                  if ((local_100 & 1) == 0) {
                    puStack_138[2] = (ulong)local_f0;
                    puStack_138[1] = (ulong)pbStack_f8;
                    *puStack_138 = local_100;
                  }
                  else {
                    if ((basic_string *)0xffffffffffffffef < pbStack_f8) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (pbStack_f8 < (basic_string *)0x17) {
                      pvVar14 = (void *)((long)puStack_138 + 1);
                      *(char *)puStack_138 = (char)((int)pbStack_f8 << 1);
                      if (pbStack_f8 != (basic_string *)0x0) goto LAB_00d24b90;
                    }
                    else {
                      pbVar10 = pbStack_f8 + 0x10;
                      pvVar14 = operator_new((ulong)pbVar10 & 0xfffffffffffffff0);
                      puVar6[1] = (ulong)pbVar1;
                      puVar6[2] = (ulong)pvVar14;
                      *puVar6 = (ulong)pbVar10 & 0xfffffffffffffff0 | 1;
LAB_00d24b90:
                      pbVar10 = pbVar1;
                      memcpy(pvVar14,puVar7,(size_t)pbVar1);
                    }
                    *(basic_string *)((long)pvVar14 + (long)pbVar1) = (basic_string)0x0;
                  }
                  puVar7 = local_d8;
                  pbVar1 = local_e0;
                  puVar13 = puVar6 + 3;
                  *puVar13 = 0;
                  puVar6[4] = 0;
                  puVar6[5] = 0;
                  if ((uStack_e8 & 1) == 0) {
                    puVar6[5] = (ulong)local_d8;
                    puVar6[4] = (ulong)local_e0;
                    *puVar13 = uStack_e8;
                  }
                  else {
                    if ((basic_string *)0xffffffffffffffef < local_e0) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (local_e0 < (basic_string *)0x17) {
                      pvVar14 = (void *)((long)puVar6 + 0x19);
                      *(char *)puVar13 = (char)((int)local_e0 << 1);
                      if (local_e0 != (basic_string *)0x0) goto LAB_00d24c18;
                    }
                    else {
                      pbVar10 = local_e0 + 0x10;
                      pvVar14 = operator_new((ulong)pbVar10 & 0xfffffffffffffff0);
                      puVar6[4] = (ulong)pbVar1;
                      puVar6[5] = (ulong)pvVar14;
                      puVar6[3] = (ulong)pbVar10 & 0xfffffffffffffff0 | 1;
LAB_00d24c18:
                      pbVar10 = pbVar1;
                      memcpy(pvVar14,puVar7,(size_t)pbVar1);
                    }
                    *(basic_string *)((long)pvVar14 + (long)pbVar1) = (basic_string)0x0;
                  }
                  puStack_138 = puVar6 + 8;
                  *(undefined4 *)(puVar6 + 7) = local_c8;
                  puVar6[6] = CONCAT44(uStack_cc,local_d0);
                }
                bVar4 = false;
              }
              if (((byte)local_160 & 1) != 0) {
                operator_delete(local_150);
              }
              if ((uStack_e8 & 1) == 0) goto LAB_00d24c68;
LAB_00d24a14:
              operator_delete(local_d8);
              if ((local_100 & 1) != 0) goto LAB_00d24a24;
LAB_00d24c70:
              if (bVar4) {
LAB_00d24d30:
                bVar4 = true;
                goto joined_r0x00d24d38;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < local_144);
        }
        pNVar2 = *(NMaterialData **)(param_1 + 8);
        if (pNVar2 == *(NMaterialData **)(param_1 + 0x10)) {
          std::__ndk1::vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>
          ::__push_back_slow_path<cocos2d::NMaterialData_const&>
                    ((vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>
                      *)param_1,(NMaterialData *)&local_140);
        }
        else {
          std::__ndk1::allocator<cocos2d::NMaterialData>::
          construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                    ((allocator<cocos2d::NMaterialData> *)(param_1 + 0x10),pNVar2,
                     (NMaterialData *)&local_140);
          *(NMaterialData **)(param_1 + 8) = pNVar2 + 0x30;
        }
        bVar4 = false;
joined_r0x00d24d38:
        if ((uStack_128 & 1) != 0) {
          operator_delete(local_118);
        }
        puVar6 = local_140;
        puVar13 = puStack_138;
        if (local_140 != (ulong *)0x0) {
          while (puVar5 = puVar13, puVar5 != puVar6) {
            if ((puVar5[-5] & 1) != 0) {
              operator_delete((void *)puVar5[-3]);
            }
            puVar13 = puVar5 + -8;
            if ((puVar5[-8] & 1) != 0) {
              operator_delete((void *)puVar5[-6]);
            }
          }
          puStack_138 = puVar6;
          operator_delete(local_140);
        }
        if (bVar4) goto LAB_00d24d60;
        uVar12 = uVar12 + 1;
      } while (uVar12 < local_104);
      local_1a8 = 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return local_1a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

