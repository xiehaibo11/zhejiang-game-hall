
/* v8::internal::PagedSpace::SetReadAndWritable() */

void __thiscall v8::internal::PagedSpace::SetReadAndWritable(PagedSpace *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  MemoryChunk *this_00;
  undefined2 uVar8;
  undefined8 uVar9;
  
  this_00 = *(MemoryChunk **)(this + 0x20);
joined_r0x01017710:
  if (this_00 == (MemoryChunk *)0x0) {
    return;
  }
  uVar2 = *(ulong *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x150);
  if (uVar2 != 0) {
    uVar3 = ((ulong)(uint)((int)this_00 << 3) + 8 ^ (ulong)this_00 >> 0x20) * -0x622015f714c7d297;
    uVar9 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar2 >> 
                                                  8)),POPCOUNT((char)uVar2))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar3 ^ (ulong)this_00 >> 0x20 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar3 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
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
          if ((MemoryChunk *)plVar6[2] == this_00) goto LAB_0101772c;
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
LAB_0101772c:
  MemoryChunk::SetReadAndWritable(this_00);
  this_00 = *(MemoryChunk **)(this_00 + 0xe0);
  goto joined_r0x01017710;
}

