
/* cocostudio::FlatBuffersSerialize::createBlendFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createBlendFrame(FlatBuffersSerialize *this,XMLElement *param_1)

{
  void *pvVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  size_t sVar12;
  long lVar13;
  void *pvVar14;
  int *piVar15;
  int local_a0;
  int iStack_9c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  int *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  lVar13 = *(long *)(param_1 + 0x60);
  if (lVar13 == 0) {
    iVar8 = 0;
    iVar9 = 0x303;
    bVar5 = true;
    iVar6 = 1;
  }
  else {
    iVar8 = 0;
    iVar6 = 1;
    iVar9 = 0x303;
    pvVar14 = (void *)((ulong)local_80 | 1);
    piVar15 = (int *)((ulong)local_98 | 1);
    bVar5 = true;
    do {
      while( true ) {
        pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
        sVar12 = strlen(pcVar11);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_80,pcVar11,sVar12);
        pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
        sVar12 = strlen(pcVar11);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_98,pcVar11,sVar12);
        uVar2 = (ulong)((byte)local_80[0] >> 1);
        if (((byte)local_80[0] & 1) != 0) {
          uVar2 = local_78;
        }
        if (uVar2 == 3) break;
        if (uVar2 == 5) {
          pvVar1 = pvVar14;
          if (((byte)local_80[0] & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar7 = memcmp(pvVar1,"Tween",5);
          if (iVar7 != 0) goto LAB_00cc2ed4;
          uVar2 = (ulong)((byte)local_98[0] >> 1);
          if (((byte)local_98[0] & 1) != 0) {
            uVar2 = local_90;
          }
          if (uVar2 == 4) {
            piVar3 = piVar15;
            if (((byte)local_98[0] & 1) != 0) {
              piVar3 = local_88;
            }
            bVar5 = *piVar3 == 0x65757254;
            lVar13 = *(long *)(lVar13 + 0x38);
          }
          else {
            bVar5 = false;
            lVar13 = *(long *)(lVar13 + 0x38);
          }
        }
        else {
          if (uVar2 == 10) {
            pvVar1 = pvVar14;
            if (((byte)local_80[0] & 1) != 0) {
              pvVar1 = local_70;
            }
            iVar7 = memcmp(pvVar1,"FrameIndex",10);
            if (iVar7 == 0) {
              piVar3 = piVar15;
              if (((byte)local_98[0] & 1) != 0) {
                piVar3 = local_88;
              }
              iVar8 = atoi((char *)piVar3);
              lVar13 = *(long *)(lVar13 + 0x38);
              goto joined_r0x00cc2fe4;
            }
          }
LAB_00cc2ed4:
          lVar13 = *(long *)(lVar13 + 0x38);
        }
joined_r0x00cc2fe4:
        if (lVar13 == 0) goto LAB_00cc306c;
      }
      pvVar1 = pvVar14;
      if (((byte)local_80[0] & 1) != 0) {
        pvVar1 = local_70;
      }
      iVar7 = memcmp(pvVar1,"Src",3);
      if (iVar7 == 0) {
        piVar3 = piVar15;
        if (((byte)local_98[0] & 1) != 0) {
          piVar3 = local_88;
        }
        iVar6 = atoi((char *)piVar3);
        goto LAB_00cc2ed4;
      }
      iVar7 = memcmp(pvVar1,"Dst",3);
      if (iVar7 != 0) goto LAB_00cc2ed4;
      piVar3 = piVar15;
      if (((byte)local_98[0] & 1) != 0) {
        piVar3 = local_88;
      }
      iVar9 = atoi((char *)piVar3);
      lVar13 = *(long *)(lVar13 + 0x38);
    } while (lVar13 != 0);
  }
LAB_00cc306c:
  local_a0 = iVar6;
  iStack_9c = iVar9;
  uVar10 = flatbuffers::CreateBlendFrame(*(undefined8 *)(this + 0x38),iVar8,bVar5,&local_a0,0);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

