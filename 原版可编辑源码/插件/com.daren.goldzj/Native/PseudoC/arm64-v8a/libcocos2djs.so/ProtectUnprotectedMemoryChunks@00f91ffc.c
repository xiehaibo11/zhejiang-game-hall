
/* v8::internal::Heap::ProtectUnprotectedMemoryChunks() */

void __thiscall v8::internal::Heap::ProtectUnprotectedMemoryChunks(Heap *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  MemoryChunk *this_00;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  plVar11 = *(long **)(this + 0xb88);
joined_r0x00f92014:
  if (plVar11 == (long *)0x0) {
    if (*(long *)(this + 0xb90) != 0) {
      puVar2 = *(void **)(this + 0xb88);
      while (puVar2 != (void *)0x0) {
        pvVar12 = (void *)*puVar2;
        operator_delete(puVar2);
        puVar2 = pvVar12;
      }
      lVar4 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb88) = 0;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xb78) + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
      *(undefined8 *)(this + 0xb90) = 0;
    }
    return;
  }
  uVar3 = *(ulong *)(*(long *)(this + 0x820) + 0x150);
  if (uVar3 != 0) {
    this_00 = (MemoryChunk *)plVar11[2];
    uVar14 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar6 = ((ulong)(uint)((int)this_00 << 3) + 8 ^ (ulong)this_00 >> 0x20) * -0x622015f714c7d297;
    uVar7 = (uVar6 ^ (ulong)this_00 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar8 = uVar7 & uVar3 - 1;
    }
    else {
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar7 / uVar3;
        }
        uVar8 = uVar7 - uVar8 * uVar3;
      }
    }
    plVar9 = *(long **)(*(long *)(*(long *)(this + 0x820) + 0x148) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((MemoryChunk *)plVar9[2] == this_00) goto LAB_00f92118;
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar3 - 1;
          }
          else if (uVar3 <= uVar10) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar10 / uVar3;
            }
            uVar10 = uVar10 - uVar1 * uVar3;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) break;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","memory_allocator()->IsMemoryChunkExecutable(*chunk)");
LAB_00f92118:
  if (FLAG_jitless == '\0') {
    MemoryChunk::SetReadAndExecutable(this_00);
  }
  else {
    MemoryChunk::SetReadable(this_00);
  }
  plVar11 = (long *)*plVar11;
  goto joined_r0x00f92014;
}

