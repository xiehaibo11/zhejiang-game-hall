
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
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  int *piVar16;
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this_01;
  TimelineData *pTVar17;
  int *piVar18;
  ulong uVar19;
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
  pcVar14 = (char *)((long)param_2 + -1);
  pcVar9 = pcVar14;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  piVar18 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar23 = (ulong)uVar3;
  piVar21 = piVar18 + uVar23 * 0xc;
  piVar16 = piVar18;
  if (uVar3 == 0) {
LAB_00d956d8:
    if (piVar21 != piVar16) {
      do {
        pcVar14 = pcVar14 + 1;
      } while (*pcVar14 != '\0');
      if (uVar3 == 0) {
LAB_00d95764:
        if (piVar18 != piVar21) {
          uVar3 = piVar18[6];
          uVar23 = (ulong)uVar3;
          if (uVar3 == 0) goto LAB_00d957c8;
          pTVar17 = BaseObject::borrowObject<dragonBones::TimelineData>();
          *(undefined4 *)(pTVar17 + 0x10) = param_4;
          lVar22 = *(long *)(this + 0x180);
          this_00 = (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x180);
          uVar12 = *(long *)(this + 0x188) - lVar22 >> 1;
          uVar13 = uVar23 + 5 + uVar12;
          *(int *)(pTVar17 + 0x14) = (int)uVar12;
          if (uVar12 < uVar13) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                      (this_00,uVar23 + 5);
          }
          else if (uVar13 < uVar12) {
            *(ulong *)(this + 0x188) = lVar22 + uVar13 * 2;
          }
          fVar24 = (float)_getNumber(param_1,DataParser::SCALE,1.0);
          *(short *)(*(long *)this_00 + (ulong)*(uint *)(pTVar17 + 0x14) * 2) =
               (short)(int)(fVar24 * 100.0);
          fVar24 = (float)_getNumber(param_1,DataParser::OFFSET,0.0);
          iVar6 = *(int *)(pTVar17 + 0x14);
          lVar22 = *(long *)this_00;
          *(short *)(lVar22 + (ulong)(iVar6 + 1) * 2) = (short)(int)(fVar24 * 100.0);
          *(short *)(lVar22 + (ulong)(iVar6 + 2) * 2) = (short)uVar3;
          *(undefined2 *)(lVar22 + (ulong)(iVar6 + 3) * 2) = param_7;
          if ((param_5 & 1) == 0) {
            if ((param_6 & 1) != 0) {
              sVar5 = (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x14);
              sVar11 = (short)((ulong)(*(long *)(this + 0x158) - *(long *)(this + 0x150)) >> 2);
              goto LAB_00d958ac;
            }
            sVar11 = 0;
          }
          else {
            sVar5 = (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x10);
            sVar11 = (short)((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138)) >> 1);
LAB_00d958ac:
            sVar11 = sVar11 - sVar5;
          }
          *(short *)(lVar22 + (ulong)(iVar6 + 4) * 2) = sVar11;
          *(TimelineData **)(this + 0x60) = pTVar17;
          if (uVar3 == 1) {
            *(undefined4 *)(pTVar17 + 0x18) = 0xffffffff;
            uVar8 = *(undefined8 *)(piVar18 + 8);
            local_80 = 0;
            plVar7 = *(long **)(param_8 + 0x20);
            if (plVar7 == (long *)0x0) {
LAB_00d95ad0:
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4(0,uVar8);
            }
            sVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,uVar8,(long)&local_80 + 4,&local_80);
            *(short *)(*(long *)(this + 0x180) + (ulong)(*(int *)(pTVar17 + 0x14) + 5) * 2) =
                 sVar5 - (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x18);
          }
          else {
            lVar22 = *(long *)(this + 0x28);
            this_01 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar22 + 0x48);
            uVar19 = *(long *)(lVar22 + 0x50) - *(long *)this_01;
            uVar12 = (long)uVar19 >> 2;
            uVar1 = *(int *)(*(long *)(this + 0x58) + 0x1c) + 1;
            iVar6 = (int)uVar12;
            uVar13 = (ulong)(uVar1 + iVar6);
            if (uVar12 < uVar13) {
              std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                        (this_01,uVar13 - uVar12);
              *(int *)(pTVar17 + 0x18) = iVar6;
            }
            else {
              if (uVar12 != uVar13) {
                *(ulong *)(lVar22 + 0x50) = *(long *)this_01 + uVar13 * 4;
              }
              *(int *)(pTVar17 + 0x18) = iVar6;
            }
            if (uVar1 != 0) {
              lVar22 = 0;
              uVar15 = 0;
              uVar10 = 0;
              uVar13 = 0;
              uVar12 = 0;
              if (uVar23 != 0) goto LAB_00d95a40;
              while( true ) {
                lVar22 = lVar22 + -1;
                *(int *)(*(long *)this_01 + (uVar19 >> 2 & 0xffffffff) * 4 + uVar12 * 4) =
                     (int)uVar13 + -1;
                uVar12 = uVar12 + 1;
                if (uVar1 == uVar12) break;
                if (uVar13 < uVar23) {
LAB_00d95a40:
                  if (uVar15 + uVar10 <= uVar12) {
                    pGVar20 = (GenericValue *)
                              (*(long *)(piVar18 + 8) + (uVar13 & 0xffffffff) * 0x18);
                    auVar25 = _getNumber(pGVar20,DataParser::DURATION,1);
                    uVar8 = auVar25._8_8_;
                    if (uVar13 == uVar3 - 1) {
                      uVar15 = lVar22 + (ulong)*(uint *)(*(long *)(this + 0x58) + 0x1c);
                    }
                    else {
                      uVar15 = auVar25._0_8_ & 0xffffffff;
                    }
                    local_80 = CONCAT44((int)uVar12,(int)uVar15);
                    plVar7 = *(long **)(param_8 + 0x20);
                    if (plVar7 == (long *)0x0) goto LAB_00d95ad0;
                    sVar5 = (**(code **)(*plVar7 + 0x30))
                                      (plVar7,pGVar20,(long)&local_80 + 4,&local_80);
                    lVar2 = uVar13 + (*(int *)(pTVar17 + 0x14) + 5);
                    uVar13 = uVar13 + 1;
                    *(short *)(*(long *)(this + 0x180) + lVar2 * 2) =
                         sVar5 - (short)*(undefined4 *)(*(long *)(this + 0x58) + 0x18);
                    uVar10 = uVar12;
                  }
                }
              }
            }
          }
          *(undefined8 *)(this + 0x60) = 0;
          goto LAB_00d95a90;
        }
      }
      else {
        lVar22 = uVar23 * 0x30;
        do {
          iVar6 = *piVar18;
          if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - *(char *)((long)piVar18 + 0x15);
          }
          if (iVar6 == (int)((long)pcVar14 - (long)param_2)) {
            piVar16 = *(int **)(piVar18 + 2);
            if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
              piVar16 = piVar18;
            }
            if ((piVar16 == param_2) ||
               (iVar6 = memcmp(param_2,piVar16,(long)pcVar14 - (long)param_2 & 0xffffffff),
               iVar6 == 0)) goto LAB_00d95764;
          }
          lVar22 = lVar22 + -0x30;
          piVar18 = piVar18 + 0xc;
        } while (lVar22 != 0);
      }
      pTVar17 = (TimelineData *)0x0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00d95a90;
    }
  }
  else {
    lVar22 = uVar23 * 0x30;
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
        if ((__s2 == param_2) ||
           (iVar6 = memcmp(param_2,__s2,(long)pcVar9 - (long)param_2 & 0xffffffff), iVar6 == 0))
        goto LAB_00d956d8;
      }
      lVar22 = lVar22 + -0x30;
      piVar16 = piVar16 + 0xc;
    } while (lVar22 != 0);
  }
LAB_00d957c8:
  pTVar17 = (TimelineData *)0x0;
LAB_00d95a90:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pTVar17;
}

