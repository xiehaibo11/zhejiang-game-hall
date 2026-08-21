
/* cocostudio::FlatBuffersSerialize::createPointFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createPointFrame(FlatBuffersSerialize *this,XMLElement *param_1)

{
  ulong uVar1;
  int *piVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  XMLElement *pXVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  char *pcVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  int *local_98;
  float local_90;
  float fStack_8c;
  ulong local_88;
  char *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  iVar7 = 0;
  lVar12 = *(long *)(param_1 + 0x60);
  if (lVar12 == 0) {
    bVar5 = true;
    fVar17 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = 0.0;
    bVar5 = true;
    pcVar14 = (char *)((ulong)&local_90 | 1);
    piVar13 = (int *)((ulong)local_a8 | 1);
    fVar17 = 0.0;
    do {
      pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,pcVar9);
      pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar9);
      bVar3 = local_90._0_1_;
      uVar1 = (ulong)((byte)local_90._0_1_ >> 1);
      if (((uint)local_90 & 1) != 0) {
        uVar1 = local_88;
      }
      if (uVar1 == 10) {
        pcVar9 = pcVar14;
        if (((uint)local_90 & 1) != 0) {
          pcVar9 = local_80;
        }
        iVar6 = memcmp(pcVar9,"FrameIndex",10);
        if (iVar6 == 0) {
          piVar2 = piVar13;
          if (((byte)local_a8[0] & 1) != 0) {
            piVar2 = local_98;
          }
          iVar7 = atoi((char *)piVar2);
        }
      }
      else if (uVar1 == 5) {
        pcVar9 = pcVar14;
        if (((uint)local_90 & 1) != 0) {
          pcVar9 = local_80;
        }
        iVar6 = memcmp(pcVar9,"Tween",5);
        if (iVar6 == 0) {
          uVar1 = (ulong)((byte)local_a8[0] >> 1);
          if (((byte)local_a8[0] & 1) != 0) {
            uVar1 = local_a0;
          }
          if (uVar1 == 4) {
            piVar2 = piVar13;
            if (((byte)local_a8[0] & 1) != 0) {
              piVar2 = local_98;
            }
            bVar5 = *piVar2 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
      }
      else if (uVar1 == 1) {
        pcVar9 = pcVar14;
        if (((uint)local_90 & 1) != 0) {
          pcVar9 = local_80;
        }
        if (*pcVar9 == 'Y') {
          piVar2 = piVar13;
          if (((byte)local_a8[0] & 1) != 0) {
            piVar2 = local_98;
          }
          dVar15 = atof((char *)piVar2);
          fVar17 = (float)dVar15;
        }
        else if (*pcVar9 == 'X') {
          piVar2 = piVar13;
          if (((byte)local_a8[0] & 1) != 0) {
            piVar2 = local_98;
          }
          dVar15 = atof((char *)piVar2);
          fVar16 = (float)dVar15;
        }
      }
      lVar12 = *(long *)(lVar12 + 0x38);
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
        bVar3 = local_90._0_1_;
      }
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(local_80);
      }
    } while (lVar12 != 0);
  }
  uVar11 = *(undefined8 *)(this + 0x38);
  local_90 = fVar16;
  fStack_8c = fVar17;
  pXVar10 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  uVar8 = createEasingData(this,pXVar10);
  uVar8 = flatbuffers::CreatePointFrame(uVar11,iVar7,bVar5,&local_90,uVar8);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

