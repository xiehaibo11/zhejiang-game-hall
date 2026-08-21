
/* v8::internal::CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope() */

void __thiscall
v8::internal::CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope
          (CodeSpaceMemoryModificationScope *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  MemoryChunk *this_00;
  undefined2 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)this;
  if (*(char *)(lVar2 + 0x168) != '\0') {
    *(long *)(lVar2 + 0x170) = *(long *)(lVar2 + 0x170) + -1;
    if (FLAG_jitless == '\0') {
      PagedSpace::SetReadAndExecutable(*(PagedSpace **)(*(long *)this + 0xf8));
    }
    else {
      PagedSpace::SetReadable(*(PagedSpace **)(*(long *)this + 0xf8));
    }
    lVar2 = *(long *)this;
    this_00 = *(MemoryChunk **)(*(long *)(lVar2 + 0x110) + 0x20);
    if (this_00 != (MemoryChunk *)0x0) {
LAB_00f5504c:
      uVar3 = *(ulong *)(*(long *)(lVar2 + 0x820) + 0x150);
      if (uVar3 != 0) {
        uVar4 = ((ulong)(uint)((int)this_00 << 3) + 8 ^ (ulong)this_00 >> 0x20) *
                -0x622015f714c7d297;
        uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar3 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar3 >> 8)),POPCOUNT((char)uVar3))))))));
        uVar9 = NEON_uaddlv(uVar10,1);
        uVar5 = (uVar4 ^ (ulong)this_00 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
        uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
        uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
        if (uVar4 < 2) {
          uVar6 = uVar3 - 1 & uVar5;
        }
        else {
          uVar6 = uVar5;
          if (uVar3 <= uVar5) {
            uVar6 = 0;
            if (uVar3 != 0) {
              uVar6 = uVar5 / uVar3;
            }
            uVar6 = uVar5 - uVar6 * uVar3;
          }
        }
        plVar7 = *(long **)(*(long *)(*(long *)(lVar2 + 0x820) + 0x148) + uVar6 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar5) {
              if ((MemoryChunk *)plVar7[2] == this_00) goto LAB_00f55120;
            }
            else {
              if (uVar4 < 2) {
                uVar8 = uVar8 & uVar3 - 1;
              }
              else if (uVar3 <= uVar8) {
                uVar1 = 0;
                if (uVar3 != 0) {
                  uVar1 = uVar8 / uVar3;
                }
                uVar8 = uVar8 - uVar1 * uVar3;
              }
              if (uVar8 != uVar6) break;
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) break;
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","heap_->memory_allocator()->IsMemoryChunkExecutable(page)");
    }
  }
  return;
LAB_00f55120:
  if (FLAG_jitless == '\0') {
    MemoryChunk::SetReadAndExecutable(this_00);
    this_00 = *(MemoryChunk **)(this_00 + 0xe0);
  }
  else {
    MemoryChunk::SetReadable(this_00);
    this_00 = *(MemoryChunk **)(this_00 + 0xe0);
  }
  if (this_00 == (MemoryChunk *)0x0) {
    return;
  }
  lVar2 = *(long *)this;
  goto LAB_00f5504c;
}

