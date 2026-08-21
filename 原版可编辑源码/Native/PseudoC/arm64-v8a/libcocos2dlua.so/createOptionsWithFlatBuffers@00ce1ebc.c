
/* cocostudio::Sprite3DReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::Sprite3DReader::createOptionsWithFlatBuffers
          (Sprite3DReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  char *pcVar10;
  size_t sVar11;
  XMLNode *this_00;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined4 local_d4;
  undefined8 local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar9 = (long *)Node3DReader::getInstance();
  uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,param_1,param_2);
  local_78 = 0;
  local_70 = (char *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  lVar14 = *(long *)(param_1 + 0x60);
  if (lVar14 == 0) {
    local_d4 = 0;
    local_d0 = 0;
  }
  else {
    plVar9 = (long *)((ulong)local_b0 | 1);
    local_d0 = 0;
    local_d4 = 0;
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
      sVar11 = strlen(pcVar10);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,pcVar10,sVar11);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar10);
      uVar13 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar13 = local_90;
      }
      uVar8 = local_d4;
      if (uVar13 == 9) {
        pvVar1 = (void *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pvVar1 = local_88;
        }
        iVar5 = memcmp(pvVar1,"IsFlipped",9);
        if (iVar5 == 0) {
          uVar13 = (ulong)((byte)local_b0[0] >> 1);
          if (((byte)local_b0[0] & 1) != 0) {
            uVar13 = local_a8;
          }
          if (uVar13 == 4) {
            plVar2 = plVar9;
            if (((byte)local_b0[0] & 1) != 0) {
              plVar2 = local_a0;
            }
            local_d0 = (ulong)CONCAT14((int)*plVar2 == 0x65757254,(undefined4)local_d0);
          }
          else {
            local_d0 = local_d0 & 0xffffffff;
          }
        }
        else {
          iVar5 = memcmp(pvVar1,"LightFlag",9);
          if (iVar5 == 0) {
            uVar13 = (ulong)((byte)local_b0[0] >> 1);
            if (((byte)local_b0[0] & 1) != 0) {
              uVar13 = local_a8;
            }
            if (uVar13 == 7) {
              plVar2 = plVar9;
              if (((byte)local_b0[0] & 1) != 0) {
                plVar2 = local_a0;
              }
              iVar5 = memcmp(plVar2,"LIGHT10",7);
              if (iVar5 == 0) {
                uVar8 = 0x400;
              }
              else {
                iVar5 = memcmp(plVar2,"LIGHT11",7);
                if (iVar5 == 0) {
                  uVar8 = 0x800;
                }
                else {
                  iVar5 = memcmp(plVar2,"LIGHT12",7);
                  uVar8 = 0x1000;
LAB_00ce221c:
                  if (iVar5 != 0) {
                    uVar8 = local_d4;
                  }
                }
              }
            }
            else if (uVar13 == 6) {
              plVar2 = plVar9;
              if (((byte)local_b0[0] & 1) != 0) {
                plVar2 = local_a0;
              }
              iVar5 = memcmp(plVar2,"LIGHT0",6);
              if (iVar5 == 0) {
                uVar8 = 1;
              }
              else {
                iVar5 = memcmp(plVar2,"LIGHT1",6);
                if (iVar5 == 0) {
                  uVar8 = 2;
                }
                else {
                  iVar5 = memcmp(plVar2,"LIGHT2",6);
                  if (iVar5 == 0) {
                    uVar8 = 4;
                  }
                  else {
                    iVar5 = memcmp(plVar2,"LIGHT3",6);
                    if (iVar5 == 0) {
                      uVar8 = 8;
                    }
                    else {
                      iVar5 = memcmp(plVar2,"LIGHT4",6);
                      if (iVar5 == 0) {
                        uVar8 = 0x10;
                      }
                      else {
                        iVar5 = memcmp(plVar2,"LIGHT5",6);
                        if (iVar5 == 0) {
                          uVar8 = 0x20;
                        }
                        else {
                          iVar5 = memcmp(plVar2,"LIGHT6",6);
                          if (iVar5 == 0) {
                            uVar8 = 0x40;
                          }
                          else {
                            iVar5 = memcmp(plVar2,"LIGHT7",6);
                            if (iVar5 == 0) {
                              uVar8 = 0x80;
                            }
                            else {
                              iVar5 = memcmp(plVar2,"LIGHT8",6);
                              if (iVar5 != 0) {
                                iVar5 = memcmp(plVar2,"LIGHT9",6);
                                uVar8 = 0x200;
                                goto LAB_00ce221c;
                              }
                              uVar8 = 0x100;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (uVar13 == 0xb) {
        pvVar1 = (void *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pvVar1 = local_88;
        }
        iVar5 = memcmp(pvVar1,"RunAction3D",0xb);
        if (iVar5 == 0) {
          uVar13 = (ulong)((byte)local_b0[0] >> 1);
          if (((byte)local_b0[0] & 1) != 0) {
            uVar13 = local_a8;
          }
          if (uVar13 == 4) {
            plVar2 = plVar9;
            if (((byte)local_b0[0] & 1) != 0) {
              plVar2 = local_a0;
            }
            local_d0 = CONCAT44(local_d0._4_4_,(uint)((int)*plVar2 == 0x65757254));
          }
          else {
            local_d0 = (ulong)local_d0._4_4_ << 0x20;
          }
        }
      }
      local_d4 = uVar8;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
    } while (lVar14 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  uVar8 = 0;
  if (this_00 != (XMLNode *)0x0) {
    pcVar10 = (char *)((ulong)local_c8 | 1);
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar12);
      uVar13 = (ulong)((byte)local_b0[0] >> 1);
      if (((byte)local_b0[0] & 1) != 0) {
        uVar13 = local_a8;
      }
      if (uVar13 == 8) {
        plVar9 = (long *)((ulong)local_b0 | 1);
        if (((byte)local_b0[0] & 1) != 0) {
          plVar9 = local_a0;
        }
        if (*plVar9 == 0x61746144656c6946) {
          lVar14 = *(long *)(this_00 + 0x60);
          while (lVar14 != 0) {
            pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
            sVar11 = strlen(pcVar12);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_b0,pcVar12,sVar11);
            pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,pcVar12);
            uVar13 = (ulong)((byte)local_b0[0] >> 1);
            if (((byte)local_b0[0] & 1) != 0) {
              uVar13 = local_a8;
            }
            uVar6 = uVar8;
            if (uVar13 == 4) {
              plVar9 = (long *)((ulong)local_b0 | 1);
              if (((byte)local_b0[0] & 1) != 0) {
                plVar9 = local_a0;
              }
              if ((int)*plVar9 == 0x68746150) {
                uVar13 = (ulong)((byte)local_c8[0] >> 1);
                pcVar12 = pcVar10;
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar13 = local_c0;
                  pcVar12 = local_b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,pcVar12,uVar13);
              }
              else if ((int)*plVar9 == 0x65707954) {
                uVar13 = (ulong)((byte)local_c8[0] >> 1);
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar13 = local_c0;
                }
                if (uVar13 == 7) {
                  pcVar12 = pcVar10;
                  if (((byte)local_c8[0] & 1) != 0) {
                    pcVar12 = local_b8;
                  }
                  iVar5 = memcmp(pcVar12,"Default",7);
                  uVar6 = 0;
                  if (iVar5 != 0) {
                    uVar6 = uVar8;
                  }
                }
                else if (uVar13 == 6) {
                  pcVar12 = pcVar10;
                  if (((byte)local_c8[0] & 1) != 0) {
                    pcVar12 = local_b8;
                  }
                  iVar5 = memcmp(pcVar12,"Normal",6);
                  if (iVar5 == 0) {
                    uVar6 = 1;
                  }
                }
              }
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            uVar8 = uVar6;
            if (((byte)local_c8[0] & 1) != 0) {
              operator_delete(local_b8);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar13 = local_80 >> 1 & 0x7f;
  pcVar10 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar13 = local_78;
    pcVar10 = local_70;
  }
  uVar6 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar10,uVar13);
  uVar13 = __strlen_chk(&DAT_013c996e,1);
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,"",uVar13);
  uVar8 = flatbuffers::CreateResourceData(param_2,uVar6,uVar7,uVar8);
  uVar4 = flatbuffers::CreateSprite3DOptions
                    (param_2,uVar4,uVar8,(undefined4)local_d0,local_d0._4_4_,local_d4);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

