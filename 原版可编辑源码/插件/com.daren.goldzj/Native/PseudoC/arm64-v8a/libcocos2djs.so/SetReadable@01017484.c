
/* v8::internal::PagedSpace::SetReadable() */

void __thiscall v8::internal::PagedSpace::SetReadable(PagedSpace *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  MemoryChunk *pMVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  pMVar8 = *(MemoryChunk **)(this + 0x20);
joined_r0x01017498:
  if (pMVar8 == (MemoryChunk *)0x0) {
    return;
  }
  uVar2 = *(ulong *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x150);
  if (uVar2 != 0) {
    uVar3 = ((ulong)(uint)((int)pMVar8 << 3) + 8 ^ (ulong)pMVar8 >> 0x20) * -0x622015f714c7d297;
    uVar10 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar2 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar2))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = (uVar3 ^ (ulong)pMVar8 >> 0x20 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar3 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar3 < 2) {
      uVar5 = uVar2 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x148) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((MemoryChunk *)plVar6[2] == pMVar8) goto LAB_010174b4;
        }
        else {
          if (uVar3 < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) break;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","heap()->memory_allocator()->IsMemoryChunkExecutable(page)");
LAB_010174b4:
  MemoryChunk::DecrementWriteUnprotectCounterAndMaybeSetPermissions(pMVar8,1);
  pMVar8 = *(MemoryChunk **)(pMVar8 + 0xe0);
  goto joined_r0x01017498;
}

