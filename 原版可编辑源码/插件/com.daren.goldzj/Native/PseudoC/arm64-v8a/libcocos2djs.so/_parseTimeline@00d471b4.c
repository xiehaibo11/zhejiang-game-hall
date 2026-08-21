
/* dragonBones::JSONDataParser::_parseTimeline(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*,
   dragonBones::TimelineType, bool, bool, unsigned int, std::__ndk1::function<unsigned int
   (rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int)>
   const&) */

TimelineData * __thiscall
dragonBones::JSONDataParser::_parseTimeline
          (JSONDataParser *this,GenericValue *param_1,int *param_2,undefined4 param_4,uint param_5,
          uint param_6,undefined2 param_7,long param_8)

{
  uint uVar1;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this_00;
  long lVar2;
  int *__s2;
  uint uVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  short sVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this_01;
  TimelineData *pTVar18;
  int *piVar19;
  GenericValue *pGVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  pcVar13 = (char *)((long)param_2 + -1);
  pcVar9 = pcVar13;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  piVar19 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar23 = (ulong)uVar3;
  piVar21 = piVar19 + uVar23 * 0xc;
  piVar17 = piVar19;
  if (uVar3 != 0) {
    lVar22 = uVar23 * 0x30;
    piVar16 = piVar19;
    do {
      iVar6 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar9 - (long)param_2)) {
        __s2 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          __s2 = piVar16;
        }
        piVar17 = piVar16;
        if ((__s2 == param_2) ||
           (iVar6 = memcmp(param_2,__s2,(long)pcVar9 - (long)param_2 & 0xffffffff), iVar6 == 0))
        break;
      }
      lVar22 = lVar22 + -0x30;
      piVar16 = piVar16 + 0xc;
      piVar17 = piVar21;
    } while (lVar22 != 0);
  }
  if (piVar21 == piVar17) {
LAB_00d47374:
    pTVar18 = (TimelineData *)0x0;
    goto LAB_00d47630;
  }
  do {
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  if (uVar3 == 0) {
LAB_00d47310:
    if (piVar19 != piVar21) {
      uVar3 = piVar19[6];
      if (uVar3 == 0) goto LAB_00d47374;
      pTVar18 = BaseObject::borrowObject<dragonBones::TimelineData>();
      uVar23 = (ulong)uVar3 + 5;
      *(undefined4 *)(pTVar18 + 0x10) = param_4;
      lVar22 = *(long *)(this + 0x180);
      this_00 = (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x180);
      uVar12 = *(long *)(this + 0x188) - lVar22 >> 1;
      uVar14 = uVar23 + uVar12;
      *(int *)(pTVar18 + 0x14) = (int)uVar12;
      if (uVar12 < uVar14) {
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                  (this_00,uVar23);
      }
      else if (uVar14 < uVar12) {
        *(ulong *)(this + 0x188) = lVar22 + uVar14 * 2;
      }
      fVar24 = (float)_getNumber(param_1,DataParser::SCALE,1.0);
      *(short *)(*(long *)this_00 + (ulong)*(uint *)(pTVar18 + 0x14) * 2) =
           (short)(int)(fVar24 * 100.0);
      fVar24 = (float)_getNumber(param_1,DataParser::OFFSET,0.0);
      iVar6 = *(int *)(pTVar18 + 0x14);
      lVar22 = *(long *)this_00;
      *(short *)(lVar22 + (ulong)(iVar6 + 1) * 2) = (short)(int)(fVar24 * 100.0);
      *(short *)(lVar22 + (ulong)(iVar6 + 2) * 2) = (short)uVar3;
      *(undefined2 *)(lVar22 + (ulong)(iVar6 + 3) * 2) = param_7;
      if ((param_5 & 1) == 0) {
        if ((param_6 & 1) != 0) {
          sVar5 = (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x14);
          sVar11 = (short)((ulong)(*(long *)(this + 0x158) - *(long *)(this + 0x150)) >> 2);
          goto LAB_00d47458;
        }
        sVar11 = 0;
      }
      else {
        sVar5 = (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x10);
        sVar11 = (short)((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138)) >> 1);
LAB_00d47458:
        sVar11 = sVar11 - sVar5;
      }
      *(short *)(lVar22 + (ulong)(iVar6 + 4) * 2) = sVar11;
      *(TimelineData **)(this + 0x60) = pTVar18;
      if (uVar3 == 1) {
        *(undefined4 *)(pTVar18 + 0x18) = 0xffffffff;
        uVar8 = *(undefined8 *)(piVar19 + 8);
        local_80 = 0;
        plVar7 = *(long **)(param_8 + 0x20);
        if (plVar7 == (long *)0x0) {
LAB_00d47670:
                    /* WARNING: Subroutine does not return */
          FUN_008589d0(0,uVar8);
        }
        sVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,uVar8,(long)&local_80 + 4,&local_80);
        *(short *)(*(long *)(this + 0x180) + (ulong)(*(int *)(pTVar18 + 0x14) + 5) * 2) =
             sVar5 - (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x18);
      }
      else {
        lVar22 = *(long *)(this + 0x28);
        this_01 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar22 + 0x48);
        uVar12 = *(long *)(lVar22 + 0x50) - *(long *)this_01;
        uVar14 = (long)uVar12 >> 2;
        uVar1 = *(int *)(*(long *)(this + 0x58) + 0x1c) + 1;
        iVar6 = (int)uVar14;
        uVar23 = (ulong)(uVar1 + iVar6);
        if (uVar14 < uVar23) {
          std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                    (this_01,uVar23 - uVar14);
          *(int *)(pTVar18 + 0x18) = iVar6;
        }
        else {
          if (uVar14 != uVar23) {
            *(ulong *)(lVar22 + 0x50) = *(long *)this_01 + uVar23 * 4;
          }
          *(int *)(pTVar18 + 0x18) = iVar6;
        }
        if (uVar1 != 0) {
          lVar22 = 0;
          uVar15 = 0;
          uVar10 = 0;
          uVar23 = 0;
          uVar14 = 0;
          do {
            if ((uVar23 < uVar3) && (uVar15 + uVar10 <= uVar14)) {
              pGVar20 = (GenericValue *)(*(long *)(piVar19 + 8) + (uVar23 & 0xffffffff) * 0x18);
              auVar25 = _getNumber(pGVar20,DataParser::DURATION,1);
              uVar8 = auVar25._8_8_;
              if (uVar23 == uVar3 - 1) {
                uVar15 = lVar22 + (ulong)*(uint *)(*(long *)(this + 0x58) + 0x1c);
              }
              else {
                uVar15 = auVar25._0_8_ & 0xffffffff;
              }
              local_80 = CONCAT44((int)uVar14,(int)uVar15);
              plVar7 = *(long **)(param_8 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_00d47670;
              sVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,pGVar20,(long)&local_80 + 4,&local_80);
              lVar2 = uVar23 + (*(int *)(pTVar18 + 0x14) + 5);
              uVar23 = uVar23 + 1;
              *(short *)(*(long *)(this + 0x180) + lVar2 * 2) =
                   sVar5 - (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x18);
              uVar10 = uVar14;
            }
            lVar22 = lVar22 + -1;
            *(int *)(*(long *)this_01 + (uVar12 >> 2 & 0xffffffff) * 4 + uVar14 * 4) =
                 (int)uVar23 + -1;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar1);
        }
      }
      *(undefined8 *)(this + 0x60) = 0;
      goto LAB_00d47630;
    }
  }
  else {
    lVar22 = uVar23 * 0x30;
    do {
      iVar6 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar13 - (long)param_2)) {
        piVar17 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar17 = piVar19;
        }
        if ((piVar17 == param_2) ||
           (iVar6 = memcmp(param_2,piVar17,(long)pcVar13 - (long)param_2 & 0xffffffff), iVar6 == 0))
        goto LAB_00d47310;
      }
      lVar22 = lVar22 + -0x30;
      piVar19 = piVar19 + 0xc;
    } while (lVar22 != 0);
  }
  pTVar18 = (TimelineData *)0x0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00d47630:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return pTVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

