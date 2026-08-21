
/* v8::internal::Debug::TemporaryObjectsTracker::HasObject(v8::internal::Handle<v8::internal::HeapObject>)
   const */

bool __thiscall
v8::internal::Debug::TemporaryObjectsTracker::HasObject
          (TemporaryObjectsTracker *this,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar4 = *param_2;
  puVar5 = (uint *)(uVar4 - 1);
  if (0xa9 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1))) {
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar5;
    bVar1 = *(byte *)(uVar4 + 3);
    if (bVar1 != 0) {
      if (*(short *)(uVar4 + 7) == 0x421) {
        iVar3 = 0xc;
      }
      else {
        iVar3 = JSObject::GetHeaderSize(*(short *)(uVar4 + 7),*(char *)(uVar4 + 9) < '\0');
      }
      if (2 < (((int)((uint)bVar1 * 4 - iVar3) >> 2) - (uint)*(byte *)(uVar4 + 3)) +
              (uint)*(byte *)(uVar4 + 4) + 1) {
        return false;
      }
      puVar5 = (uint *)(*param_2 - 1);
    }
  }
  puVar6 = *(uint **)(this + 0x10);
  if (puVar6 == (uint *)0x0) {
LAB_00f0df14:
    plVar9 = (long *)0x0;
  }
  else {
    uVar12 = CONCAT17(POPCOUNT((char)((ulong)puVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)puVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)puVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)puVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)puVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)puVar6 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  puVar6 >> 8)),POPCOUNT((char)puVar6))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar4 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar4 < 2) {
      puVar7 = (uint *)((long)puVar6 - 1U & (ulong)puVar5);
    }
    else {
      puVar7 = puVar5;
      if (puVar6 <= puVar5) {
        uVar2 = 0;
        if (puVar6 != (uint *)0x0) {
          uVar2 = (ulong)puVar5 / (ulong)puVar6;
        }
        puVar7 = (uint *)((long)puVar5 - uVar2 * (long)puVar6);
      }
    }
    plVar8 = *(long **)(*(long *)(this + 8) + (long)puVar7 * 8);
    plVar9 = (long *)0x0;
    if ((plVar8 != (long *)0x0) && (plVar9 = (long *)*plVar8, plVar9 != (long *)0x0)) {
      do {
        puVar10 = (uint *)plVar9[1];
        if (puVar5 == puVar10) {
          if ((uint *)plVar9[2] == puVar5) break;
        }
        else {
          if (uVar4 < 2) {
            puVar10 = (uint *)((ulong)puVar10 & (long)puVar6 - 1U);
          }
          else if (puVar6 <= puVar10) {
            uVar2 = 0;
            if (puVar6 != (uint *)0x0) {
              uVar2 = (ulong)puVar10 / (ulong)puVar6;
            }
            puVar10 = (uint *)((long)puVar10 - uVar2 * (long)puVar6);
          }
          if (puVar10 != puVar7) goto LAB_00f0df14;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return plVar9 != (long *)0x0;
}

