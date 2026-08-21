
/* v8::internal::IsSpecialIndex(v8::internal::String) */

void v8::internal::IsSpecialIndex(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ushort local_84 [4];
  undefined8 auStack_7c [5];
  internal aiStack_54 [28];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 7);
  uVar14 = (ulong)uVar1;
  bVar3 = false;
  if ((uVar1 == 0) || (0x18 < (int)uVar1)) goto LAB_01064aa8;
  String::WriteToFlat<unsigned_short>(param_1,local_84,0,uVar1);
  if (local_84[0] - 0x30 < 10) {
LAB_010648b0:
    uVar7 = 0;
LAB_010648b4:
    iVar6 = (int)uVar7;
    if ((int)(uVar1 - iVar6) < 0x10) {
      if (iVar6 < (int)uVar1) {
        uVar11 = uVar14 - uVar7;
        if (uVar11 < 0x10) {
          uVar12 = 1;
          uVar8 = uVar7;
LAB_01064a00:
          lVar9 = uVar14 - uVar8;
          puVar5 = local_84 + uVar8;
          do {
            lVar9 = lVar9 + -1;
            uVar10 = (uint)uVar12 & (uint)(*puVar5 - 0x30 < 10);
            uVar12 = (ulong)uVar10;
            puVar5 = puVar5 + 1;
          } while (lVar9 != 0);
        }
        else {
          uVar13 = uVar11 & 0xfffffffffffffff0;
          uVar12 = 0;
          uVar15 = 0x101010101010101;
          uVar8 = uVar13 | uVar7;
          uVar17 = 0x101010101010101;
          do {
            lVar9 = (uVar12 | uVar7) * 2;
            uVar19 = *(undefined8 *)((long)auStack_7c + lVar9);
            uVar18 = *(undefined8 *)(local_84 + (uVar12 | uVar7));
            uVar21 = *(undefined8 *)((long)auStack_7c + lVar9 + 0x10);
            uVar20 = *(undefined8 *)((long)auStack_7c + lVar9 + 8);
            uVar12 = uVar12 + 0x10;
            uVar15 = uVar15 & CONCAT17(-((ushort)((ulong)uVar19 >> 0x30) - 0x30 < 10),
                                       CONCAT16(-((ushort)((ulong)uVar19 >> 0x20) - 0x30 < 10),
                                                CONCAT15(-((ushort)((ulong)uVar19 >> 0x10) - 0x30 <
                                                          10),CONCAT14(-((ushort)uVar19 - 0x30 < 10)
                                                                       ,CONCAT13(-((ushort)((ulong)
                                                  uVar18 >> 0x30) - 0x30 < 10),
                                                  CONCAT12(-((ushort)((ulong)uVar18 >> 0x20) - 0x30
                                                            < 10),CONCAT11(-((ushort)((ulong)uVar18
                                                                                     >> 0x10) - 0x30
                                                                            < 10),-(((uint)uVar18 &
                                                                                    0xffff) - 0x30 <
                                                                                   10))))))));
            uVar17 = uVar17 & CONCAT17(-((ushort)((ulong)uVar21 >> 0x30) - 0x30 < 10),
                                       CONCAT16(-((ushort)((ulong)uVar21 >> 0x20) - 0x30 < 10),
                                                CONCAT15(-((ushort)((ulong)uVar21 >> 0x10) - 0x30 <
                                                          10),CONCAT14(-((ushort)uVar21 - 0x30 < 10)
                                                                       ,CONCAT13(-((ushort)((ulong)
                                                  uVar20 >> 0x30) - 0x30 < 10),
                                                  CONCAT12(-((ushort)((ulong)uVar20 >> 0x20) - 0x30
                                                            < 10),CONCAT11(-((ushort)((ulong)uVar20
                                                                                     >> 0x10) - 0x30
                                                                            < 10),-(((uint)uVar20 &
                                                                                    0xffff) - 0x30 <
                                                                                   10))))))));
          } while (uVar13 != uVar12);
          uVar17 = uVar17 & uVar15;
          uVar7 = NEON_ext(uVar17,uVar17,4,1);
          uVar17 = uVar17 & uVar7;
          uVar7 = NEON_ext(uVar17,uVar17,2,1);
          uVar12 = uVar17 & uVar7 & (uVar17 & uVar7) >> 8 & 0xff;
          uVar10 = (uint)uVar12;
          if (uVar11 != uVar13) goto LAB_01064a00;
        }
        if (uVar10 == 0) goto LAB_01064a44;
      }
      if (local_84[0] == 0x30) {
        bVar3 = iVar6 == uVar1 - 1;
        goto LAB_01064aa8;
      }
    }
    else {
LAB_01064a44:
      dVar16 = InternalStringToDouble<unsigned_short_const*,unsigned_short_const*>
                         (local_84,local_84 + (int)uVar1,0,0.0);
      if (NAN(dVar16)) goto LAB_01064aa4;
      pbVar4 = (byte *)DoubleToCString(aiStack_54,0x19);
      if (0 < (int)uVar1) {
        puVar5 = local_84;
        do {
          if (*puVar5 != (ushort)*pbVar4) goto LAB_01064aa4;
          puVar5 = puVar5 + 1;
          uVar14 = uVar14 - 1;
          pbVar4 = pbVar4 + 1;
        } while (uVar14 != 0);
      }
    }
    bVar3 = true;
  }
  else {
    if (local_84[0] != 0x2d) {
      if ((uVar1 != 8) || (local_84[0] != 0x49)) {
        bVar3 = false;
        if ((uVar1 == 3) && (local_84[0] == 0x4e)) {
          bVar3 = local_84[1] == 0x61 && local_84[2] == 0x4e;
        }
        goto LAB_01064aa8;
      }
      goto LAB_010648b0;
    }
    if (uVar1 != 1) {
      if ((9 < local_84[1] - 0x30) && ((bVar3 = false, uVar1 != 9 || (local_84[1] != 0x49))))
      goto LAB_01064aa8;
      uVar7 = 1;
      local_84[0] = local_84[1];
      goto LAB_010648b4;
    }
LAB_01064aa4:
    bVar3 = false;
  }
LAB_01064aa8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}

