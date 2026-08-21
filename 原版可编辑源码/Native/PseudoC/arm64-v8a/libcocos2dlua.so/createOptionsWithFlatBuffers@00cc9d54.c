
/* WARNING: Removing unreachable block (ram,0x00cca158) */
/* TabControlReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
TabControlReader::createOptionsWithFlatBuffers
          (TabControlReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  char *pcVar12;
  XMLNode *pXVar13;
  Ref *this_00;
  TabItemReader *this_01;
  bool bVar14;
  long lVar15;
  void *pvVar16;
  bool bVar17;
  char *pcVar18;
  double dVar19;
  float fVar20;
  int local_e4;
  int local_dc;
  undefined8 local_d8;
  undefined4 local_c8 [2];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  void *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *puStack_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  plVar11 = (long *)cocostudio::WidgetReader::getInstance();
  uVar7 = (**(code **)(*plVar11 + 0x28))(plVar11,param_1,param_2);
  local_88 = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x0;
  lVar15 = *(long *)(param_1 + 0x60);
  if (lVar15 == 0) {
    local_e4 = 0x32;
    local_dc = 0x14;
    local_d8 = 0;
    fVar20 = 0.0;
    bVar6 = true;
  }
  else {
    bVar6 = true;
    fVar20 = 0.0;
    local_dc = 0x14;
    pvVar16 = (void *)((ulong)local_a8 | 1);
    pcVar18 = (char *)((ulong)local_c0 | 1);
    local_d8 = 0;
    local_e4 = 0x32;
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar12);
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c0,pcVar12);
      bVar4 = local_a8[0];
      uVar2 = (ulong)((byte)local_a8[0] >> 1);
      if (((byte)local_a8[0] & 1) != 0) {
        uVar2 = local_a0;
      }
      switch(uVar2) {
      case 0xb:
        pvVar1 = pvVar16;
        if (((byte)local_a8[0] & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar9 = memcmp(pvVar1,"HeaderPlace",0xb);
        if (iVar9 == 0) {
          pcVar12 = pcVar18;
          if (((byte)local_c0[0] & 1) != 0) {
            pcVar12 = local_b0;
          }
          iVar9 = strcmp(pcVar12,"TOP");
          if (iVar9 == 0) {
            local_d8 = local_d8 & 0xffffffff;
          }
          else {
            iVar9 = strcmp(pcVar12,"LEFT");
            if (iVar9 == 0) {
              uVar10 = 1;
            }
            else {
              iVar9 = strcmp(pcVar12,"BOTTOM");
              if (iVar9 == 0) {
                uVar10 = 2;
              }
              else {
                iVar9 = strcmp(pcVar12,"RIGHT");
                uVar10 = 3;
                if (iVar9 != 0) {
                  uVar10 = local_d8._4_4_;
                }
              }
            }
            local_d8 = CONCAT44(uVar10,(undefined4)local_d8);
          }
        }
        else {
          iVar9 = memcmp(pvVar1,&DAT_012e2350,0xb);
          if (iVar9 == 0) {
            pcVar12 = pcVar18;
            if (((byte)local_c0[0] & 1) != 0) {
              pcVar12 = local_b0;
            }
            local_e4 = atoi(pcVar12);
          }
        }
        break;
      case 0xc:
        pvVar1 = pvVar16;
        if (((byte)local_a8[0] & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar9 = memcmp(pvVar1,"HeaderHeight",0xc);
        if (iVar9 == 0) {
          pcVar12 = pcVar18;
          if (((byte)local_c0[0] & 1) != 0) {
            pcVar12 = local_b0;
          }
          local_dc = atoi(pcVar12);
        }
        break;
      case 0xf:
        pvVar1 = pvVar16;
        if (((byte)local_a8[0] & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar9 = memcmp(pvVar1,"SelectedTabZoom",0xf);
        if (iVar9 == 0) {
          pcVar12 = pcVar18;
          if (((byte)local_c0[0] & 1) != 0) {
            pcVar12 = local_b0;
          }
          dVar19 = atof(pcVar12);
          fVar20 = (float)dVar19;
        }
        break;
      case 0x10:
        pvVar1 = pvVar16;
        if (((byte)local_a8[0] & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar9 = memcmp(pvVar1,"SelectedTabIndex",0x10);
        if (iVar9 == 0) {
          pcVar12 = pcVar18;
          if (((byte)local_c0[0] & 1) != 0) {
            pcVar12 = local_b0;
          }
          iVar9 = atoi(pcVar12);
          local_d8 = CONCAT44(local_d8._4_4_,iVar9);
        }
        break;
      case 0x17:
        pvVar1 = pvVar16;
        if (((byte)local_a8[0] & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar9 = memcmp(pvVar1,"IgnoreHeaderTextureSize",0x17);
        if (iVar9 == 0) {
          uVar2 = (ulong)((byte)local_c0[0] >> 1);
          if (((byte)local_c0[0] & 1) != 0) {
            uVar2 = local_b8;
          }
          sVar3 = 4;
          if (uVar2 < 5) {
            sVar3 = uVar2;
          }
          if (sVar3 == 0) {
LAB_00cc9fd8:
            uVar8 = (uint)(4 < uVar2);
            if (uVar2 < 4) {
              uVar8 = 0xffffffff;
            }
          }
          else {
            pcVar12 = pcVar18;
            if (((byte)local_c0[0] & 1) != 0) {
              pcVar12 = local_b0;
            }
            uVar8 = memcmp(pcVar12,&DAT_01414ef8,sVar3);
            if (uVar8 == 0) goto LAB_00cc9fd8;
          }
          bVar6 = uVar8 == 0;
        }
      }
      lVar15 = *(long *)(lVar15 + 0x38);
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
        bVar4 = local_a8[0];
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(local_98);
      }
    } while (lVar15 != 0);
  }
  for (pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
      pXVar13 != (XMLNode *)0x0;
      pXVar13 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar13,(char *)0x0)) {
    pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
    iVar9 = strcmp("Children",pcVar18);
    if (iVar9 == 0) {
      pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
      goto LAB_00cca170;
    }
  }
  goto LAB_00cca2fc;
LAB_00cca170:
  do {
    if (pXVar13 == (XMLNode *)0x0) break;
    lVar15 = *(long *)(pXVar13 + 0x60);
    bVar14 = true;
    do {
      if (lVar15 == 0) break;
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar18);
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c0,pcVar18);
      uVar2 = (ulong)((byte)local_a8[0] >> 1);
      if (((byte)local_a8[0] & 1) != 0) {
        uVar2 = local_a0;
      }
      if (uVar2 == 5) {
        pvVar16 = (void *)((ulong)local_a8 | 1);
        if (((byte)local_a8[0] & 1) != 0) {
          pvVar16 = local_98;
        }
        iVar9 = memcmp(pvVar16,"ctype",5);
        if (iVar9 != 0) goto LAB_00cca1ec;
        uVar2 = (ulong)((byte)local_c0[0] >> 1);
        if (((byte)local_c0[0] & 1) != 0) {
          uVar2 = local_b8;
        }
        sVar3 = 0x11;
        if (uVar2 < 0x12) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
LAB_00cca250:
          this_01 = (TabItemReader *)0x0;
          if (0x11 < uVar2 == 0x10 < uVar2) goto LAB_00cca2d8;
          this_00 = TabItemReader::_tabItemReaderInstance;
          if (TabItemReader::_tabItemReaderInstance == (Ref *)0x0) {
            this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
            this_01 = (TabItemReader *)0x0;
            if (this_00 != (Ref *)0x0) {
              this_01 = (TabItemReader *)cocos2d::Ref::Ref(this_00);
              *(undefined ***)this_00 = &PTR__TabItemReader_016ce0e8;
              *(undefined ***)(this_00 + 0x28) = &PTR__TabItemReader_016ce120;
            }
          }
          TabItemReader::_tabItemReaderInstance = this_00;
          local_c8[0] = TabItemReader::createTabItemOptionWithFlatBuffers
                                  (this_01,(XMLElement *)pXVar13,param_2);
          if (local_88 == puStack_80) {
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::TabItemOption>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::TabItemOption>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::TabItemOption>const&>
                      ((vector<flatbuffers::Offset<flatbuffers::TabItemOption>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::TabItemOption>>>
                        *)&local_90,(Offset *)local_c8);
          }
          else {
            *local_88 = local_c8[0];
            local_88 = local_88 + 1;
          }
        }
        else {
          pcVar18 = (char *)((ulong)local_c0 | 1);
          if (((byte)local_c0[0] & 1) != 0) {
            pcVar18 = local_b0;
          }
          iVar9 = memcmp(pcVar18,"TabItemObjectData",sVar3);
          if (iVar9 == 0) goto LAB_00cca250;
LAB_00cca2d8:
          bVar14 = false;
        }
        bVar17 = false;
      }
      else {
LAB_00cca1ec:
        lVar15 = *(long *)(lVar15 + 0x38);
        bVar17 = true;
      }
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
    } while (bVar17);
    pXVar13 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar13,(char *)0x0);
  } while (bVar14);
LAB_00cca2fc:
  uVar10 = flatbuffers::FlatBufferBuilder::
           CreateVector<flatbuffers::Offset<flatbuffers::TabItemOption>>
                     (param_2,(Offset *)local_90,(long)local_88 - (long)local_90 >> 2);
  uVar7 = flatbuffers::CreateTabControlOption
                    (fVar20,param_2,uVar7,local_d8._4_4_,local_e4,local_dc,local_d8 & 0xffffffff,
                     bVar6,uVar10);
  if (local_90 != (undefined4 *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

