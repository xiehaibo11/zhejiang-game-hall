
/* cocostudio::FlatBuffersSerialize::createIntFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createIntFrame(FlatBuffersSerialize *this,XMLElement *param_1)

{
  void *pvVar1;
  ulong uVar2;
  int *piVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  XMLElement *pXVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  int *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar15 = *(long *)(param_1 + 0x60);
  if (lVar15 == 0) {
    iVar9 = 0;
    iVar8 = 0;
    bVar6 = true;
  }
  else {
    iVar8 = 0;
    iVar9 = 0;
    bVar6 = true;
    piVar13 = (int *)((ulong)local_98 | 1);
    do {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,pcVar11);
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar11);
      bVar4 = local_80[0];
      uVar2 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar2 = local_78;
      }
      if (uVar2 == 10) {
        pvVar1 = (void *)((ulong)local_80 | 1);
        if (((byte)local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        iVar7 = memcmp(pvVar1,"FrameIndex",10);
        if (iVar7 == 0) {
          piVar3 = piVar13;
          if (((byte)local_98[0] & 1) != 0) {
            piVar3 = local_88;
          }
          iVar8 = atoi((char *)piVar3);
        }
      }
      else if (uVar2 == 5) {
        pvVar1 = (void *)((ulong)local_80 | 1);
        if (((byte)local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        iVar7 = memcmp(pvVar1,"Value",5);
        if (iVar7 == 0) {
          piVar3 = piVar13;
          if (((byte)local_98[0] & 1) != 0) {
            piVar3 = local_88;
          }
          iVar9 = atoi((char *)piVar3);
        }
        else {
          iVar7 = memcmp(pvVar1,"Tween",5);
          if (iVar7 == 0) {
            uVar2 = (ulong)((byte)local_98[0] >> 1);
            if (((byte)local_98[0] & 1) != 0) {
              uVar2 = local_90;
            }
            if (uVar2 == 4) {
              piVar3 = piVar13;
              if (((byte)local_98[0] & 1) != 0) {
                piVar3 = local_88;
              }
              bVar6 = *piVar3 == 0x65757254;
            }
            else {
              bVar6 = false;
            }
          }
        }
      }
      lVar15 = *(long *)(lVar15 + 0x38);
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
        bVar4 = local_80[0];
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(local_70);
      }
    } while (lVar15 != 0);
  }
  uVar14 = *(undefined8 *)(this + 0x38);
  pXVar12 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  uVar10 = createEasingData(this,pXVar12);
  uVar10 = flatbuffers::CreateIntFrame(uVar14,iVar8,bVar6,iVar9,uVar10);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

