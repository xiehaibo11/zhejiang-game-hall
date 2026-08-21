
/* cocostudio::DataReaderHelper::decodeTexture(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*)
    */

TextureData *
cocostudio::DataReaderHelper::decodeTexture(CocoLoader *param_1,stExpCocoNode *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  double dVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TextureData *this;
  long lVar9;
  char *pcVar10;
  size_t sVar11;
  stExpCocoNode *psVar12;
  Ref *this_00;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  void *local_78;
  Ref *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (TextureData *)0x0) {
    TextureData::TextureData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  if (param_2 != (stExpCocoNode *)0x0) {
    uVar6 = stExpCocoNode::GetChildNum(param_2);
    lVar9 = stExpCocoNode::GetChildArray(param_2,param_1);
    if (0 < (int)uVar6) {
      uVar13 = 0;
      pvVar14 = (void *)((ulong)local_88 | 1);
      do {
        psVar12 = (stExpCocoNode *)(lVar9 + uVar13 * 0x10);
        pcVar10 = (char *)stExpCocoNode::GetName(psVar12,param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_88,pcVar10);
        pcVar10 = (char *)stExpCocoNode::GetValue(psVar12,param_1);
        bVar5 = local_88[0];
        uVar15 = (ulong)((byte)local_88[0] >> 1);
        if (((byte)local_88[0] & 1) != 0) {
          uVar15 = local_80;
        }
        sVar11 = 4;
        if (uVar15 < 5) {
          sVar11 = uVar15;
        }
        if (sVar11 == 0) {
LAB_00c50a98:
          if (4 < uVar15 == 3 < uVar15) goto LAB_00c50ad0;
          if (pcVar10 != (char *)0x0) {
            sVar11 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x38),pcVar10,sVar11);
          }
        }
        else {
          pvVar1 = pvVar14;
          if (((byte)local_88[0] & 1) != 0) {
            pvVar1 = local_78;
          }
          iVar7 = memcmp(pvVar1,"name",sVar11);
          if (iVar7 == 0) goto LAB_00c50a98;
LAB_00c50ad0:
          sVar11 = 5;
          if (uVar15 < 6) {
            sVar11 = uVar15;
          }
          if (sVar11 == 0) {
            if (5 < uVar15 != 4 < uVar15) {
LAB_00c50b10:
              if (pcVar10 != (char *)0x0) {
                dVar4 = (double)cocos2d::utils::atof(pcVar10);
                *(float *)(this + 0x28) = (float)dVar4;
              }
              goto joined_r0x00c50b9c;
            }
          }
          else {
            pvVar1 = pvVar14;
            if (((byte)bVar5 & 1) != 0) {
              pvVar1 = local_78;
            }
            iVar7 = memcmp(pvVar1,"width",sVar11);
            if ((iVar7 == 0) && (5 < uVar15 != 4 < uVar15)) goto LAB_00c50b10;
          }
          sVar11 = 6;
          if (uVar15 < 7) {
            sVar11 = uVar15;
          }
          if (sVar11 == 0) {
            if (6 < uVar15 == 5 < uVar15) goto LAB_00c50bb8;
          }
          else {
            pvVar1 = pvVar14;
            if (((byte)bVar5 & 1) != 0) {
              pvVar1 = local_78;
            }
            iVar7 = memcmp(pvVar1,"height",sVar11);
            if ((iVar7 != 0) || (6 < uVar15 == 5 < uVar15)) {
LAB_00c50bb8:
              sVar11 = 2;
              if (uVar15 < 3) {
                sVar11 = uVar15;
              }
              if (sVar11 == 0) {
LAB_00c50be8:
                if (2 < uVar15 != 1 < uVar15) {
                  if (pcVar10 != (char *)0x0) {
                    dVar4 = (double)cocos2d::utils::atof(pcVar10);
                    *(float *)(this + 0x2c) = (float)dVar4;
                  }
                  goto joined_r0x00c50b9c;
                }
                if (sVar11 != 0) goto LAB_00c50c24;
LAB_00c50c44:
                if (2 < uVar15 != 1 < uVar15) {
                  if (pcVar10 != (char *)0x0) {
                    dVar4 = (double)cocos2d::utils::atof(pcVar10);
                    *(float *)(this + 0x30) = (float)dVar4;
                  }
                  goto joined_r0x00c50b9c;
                }
              }
              else {
                pvVar1 = pvVar14;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar1 = local_78;
                }
                iVar7 = memcmp(pvVar1,&DAT_01412bd6,sVar11);
                if (iVar7 == 0) goto LAB_00c50be8;
LAB_00c50c24:
                pvVar1 = pvVar14;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar1 = local_78;
                }
                iVar7 = memcmp(pvVar1,"pY",sVar11);
                if (iVar7 == 0) goto LAB_00c50c44;
              }
              sVar11 = 0xc;
              if (uVar15 < 0xd) {
                sVar11 = uVar15;
              }
              if (sVar11 != 0) {
                pvVar1 = pvVar14;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar1 = local_78;
                }
                iVar7 = memcmp(pvVar1,"contour_data",sVar11);
                if (iVar7 != 0) goto joined_r0x00c50b9c;
              }
              if (0xc < uVar15 != 0xb < uVar15) {
                uVar8 = stExpCocoNode::GetChildNum(psVar12);
                uVar15 = (ulong)uVar8;
                psVar12 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar12,param_1);
                if (0 < (int)uVar8) {
                  do {
                    this_00 = (Ref *)decodeContour(param_1,psVar12);
                    puVar2 = *(undefined8 **)(this + 0x58);
                    local_70 = this_00;
                    if (puVar2 == *(undefined8 **)(this + 0x60)) {
                      std::__ndk1::
                      vector<cocostudio::ContourData*,std::__ndk1::allocator<cocostudio::ContourData*>>
                      ::__push_back_slow_path<cocostudio::ContourData*const&>
                                ((vector<cocostudio::ContourData*,std::__ndk1::allocator<cocostudio::ContourData*>>
                                  *)(this + 0x50),(ContourData **)&local_70);
                    }
                    else {
                      *puVar2 = this_00;
                      *(undefined8 **)(this + 0x58) = puVar2 + 1;
                    }
                    cocos2d::Ref::retain(local_70);
                    cocos2d::Ref::release(this_00);
                    uVar15 = uVar15 - 1;
                    psVar12 = psVar12 + 0x10;
                  } while (uVar15 != 0);
                }
              }
              goto joined_r0x00c50b9c;
            }
          }
          if (pcVar10 != (char *)0x0) {
            dVar4 = (double)cocos2d::utils::atof(pcVar10);
            *(float *)(this + 0x24) = (float)dVar4;
          }
        }
joined_r0x00c50b9c:
        if (((byte)local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

