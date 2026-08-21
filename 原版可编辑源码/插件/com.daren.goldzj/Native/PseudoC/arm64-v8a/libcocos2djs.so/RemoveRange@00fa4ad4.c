
/* v8::internal::SlotSet::RemoveRange(unsigned long, unsigned long, unsigned long,
   v8::internal::SlotSet::EmptyBucketMode) */

void __thiscall
v8::internal::SlotSet::RemoveRange
          (SlotSet *this,void *param_1,ulong param_2,ulong param_3,int param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  Malloced *this_00;
  void *extraout_x1;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  SlotSet *pSVar16;
  
  if (param_3 * 0x1000 < param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","end_offset <= buckets * kBitsPerBucket * kTaggedSize");
  }
  uVar10 = (ulong)param_1 >> 0xc;
  uVar3 = -1 << (ulong)((uint)((ulong)param_1 >> 2) & 0x1f);
  lVar11 = *(long *)(this + uVar10 * 8);
  uVar14 = param_2 >> 0xc;
  uVar4 = -1 << (ulong)((uint)(param_2 >> 2) & 0x1f);
  uVar8 = (uint)param_1 >> 7 & 0x1f;
  uVar9 = (uint)param_2 >> 7 & 0x1f;
  uVar5 = ~uVar4;
  if ((uVar10 == uVar14) && (uVar8 == uVar9)) {
    if (lVar11 != 0) {
      uVar3 = uVar3 & uVar5;
      puVar1 = (uint *)(lVar11 + (ulong)uVar8 * 4);
      while (uVar4 = *puVar1, (uVar4 & uVar3) != 0) {
        while (*puVar1 == uVar4) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar4 & ~uVar3;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
  else {
    if (lVar11 != 0) {
      puVar1 = (uint *)(lVar11 + (ulong)uVar8 * 4);
      while (uVar2 = *puVar1, (uVar2 & uVar3) != 0) {
        while (*puVar1 == uVar2) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar2 & ~uVar3;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00fa4bc8;
        }
        ClearExclusiveLocal();
      }
    }
LAB_00fa4bc8:
    uVar15 = (ulong)(uVar8 + 1);
    if (uVar10 < uVar14) {
      if ((uVar8 + 1 < 0x20) && (lVar11 != 0)) {
        do {
          lVar13 = uVar15 * 4;
          uVar15 = uVar15 + 1;
          *(undefined4 *)(lVar11 + lVar13) = 0;
        } while (uVar15 != 0x20);
      }
      uVar15 = 0;
      uVar10 = uVar10 + 1;
    }
    if (uVar10 < uVar14) {
      lVar11 = uVar14 - uVar10;
      pSVar16 = this + uVar10 * 8;
      this_00 = *(Malloced **)pSVar16;
      if (param_5 != 0) goto LAB_00fa4c40;
      do {
        *(undefined8 *)pSVar16 = 0;
        if (this_00 != (Malloced *)0x0) {
          Malloced::operator_delete(this_00,param_1);
          param_1 = extraout_x1;
        }
        while( true ) {
          lVar11 = lVar11 + -1;
          pSVar16 = pSVar16 + 8;
          uVar10 = uVar14;
          if (lVar11 == 0) goto joined_r0x00fa4d5c;
          this_00 = *(Malloced **)pSVar16;
          if (param_5 == 0) break;
LAB_00fa4c40:
          if (this_00 != (Malloced *)0x0) {
            *(undefined4 *)this_00 = 0;
            *(undefined4 *)(this_00 + 4) = 0;
            *(undefined4 *)(this_00 + 8) = 0;
            *(undefined4 *)(this_00 + 0xc) = 0;
            *(undefined4 *)(this_00 + 0x10) = 0;
            *(undefined4 *)(this_00 + 0x14) = 0;
            *(undefined4 *)(this_00 + 0x18) = 0;
            *(undefined4 *)(this_00 + 0x1c) = 0;
            *(undefined4 *)(this_00 + 0x20) = 0;
            *(undefined4 *)(this_00 + 0x24) = 0;
            *(undefined4 *)(this_00 + 0x28) = 0;
            *(undefined4 *)(this_00 + 0x2c) = 0;
            *(undefined4 *)(this_00 + 0x30) = 0;
            *(undefined4 *)(this_00 + 0x34) = 0;
            *(undefined4 *)(this_00 + 0x38) = 0;
            *(undefined4 *)(this_00 + 0x3c) = 0;
            *(undefined4 *)(this_00 + 0x40) = 0;
            *(undefined4 *)(this_00 + 0x44) = 0;
            *(undefined4 *)(this_00 + 0x48) = 0;
            *(undefined4 *)(this_00 + 0x4c) = 0;
            *(undefined4 *)(this_00 + 0x50) = 0;
            *(undefined4 *)(this_00 + 0x54) = 0;
            *(undefined4 *)(this_00 + 0x58) = 0;
            *(undefined4 *)(this_00 + 0x5c) = 0;
            *(undefined4 *)(this_00 + 0x60) = 0;
            *(undefined4 *)(this_00 + 100) = 0;
            *(undefined4 *)(this_00 + 0x68) = 0;
            *(undefined4 *)(this_00 + 0x6c) = 0;
            *(undefined4 *)(this_00 + 0x70) = 0;
            *(undefined4 *)(this_00 + 0x74) = 0;
            *(undefined4 *)(this_00 + 0x78) = 0;
            *(undefined4 *)(this_00 + 0x7c) = 0;
          }
        }
      } while( true );
    }
joined_r0x00fa4d5c:
    if ((uVar10 != param_3) && (lVar11 = *(long *)(this + uVar10 * 8), lVar11 != 0)) {
      if ((uint)uVar15 < uVar9) {
        puVar12 = (undefined4 *)(lVar11 + uVar15 * 4);
        lVar13 = uVar9 - uVar15;
        do {
          *puVar12 = 0;
          lVar13 = lVar13 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar13 != 0);
      }
      puVar1 = (uint *)(lVar11 + (ulong)uVar9 * 4);
      while (uVar3 = *puVar1, (uVar3 & uVar5) != 0) {
        while (*puVar1 == uVar3) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 & uVar4;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
  return;
}

