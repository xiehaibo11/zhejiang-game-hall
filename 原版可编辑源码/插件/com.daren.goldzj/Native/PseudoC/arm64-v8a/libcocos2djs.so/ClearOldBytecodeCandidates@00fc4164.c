
/* v8::internal::MarkCompactCollector::ClearOldBytecodeCandidates() */

void __thiscall
v8::internal::MarkCompactCollector::ClearOldBytecodeCandidates(MarkCompactCollector *this)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_18;
  
  local_18 = 0;
  uVar1 = Worklist<v8::internal::SharedFunctionInfo,64>::Pop
                    ((Worklist<v8::internal::SharedFunctionInfo,64> *)(this + 0x20f8),0,
                     (SharedFunctionInfo *)&local_18);
  while ((uVar1 & 1) != 0) {
    uVar1 = local_18 & 0xffffffff00000000;
    uVar5 = uVar1 | *(uint *)(local_18 + 0xf);
    uVar4 = uVar1 | 7;
    if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x5b) &&
       (*(short *)(uVar4 + *(uint *)((uVar1 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
      uVar3 = *(uint *)(uVar5 + 0xf);
    }
    else if (((*(uint *)(local_18 + 3) & 1) == 0) ||
            (*(short *)(uVar4 + *(uint *)((uVar1 | *(uint *)(local_18 + 3)) - 1)) != 0x86)) {
      uVar3 = *(uint *)((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + 3)) + 3);
    }
    else {
      uVar3 = *(uint *)(local_18 + 3);
    }
    uVar4 = local_18 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar1 = uVar3 - uVar4;
    if ((*(uint *)(*(long *)(uVar4 + 0x10) + (uVar1 >> 7 & 0x1ffffff) * 4) >>
         (ulong)((uint)(uVar1 >> 2) & 0x1f) & 1) == 0) {
      FlushBytecodeFromSFI(this,local_18);
    }
    puVar2 = (uint *)(local_18 + 3);
    if (((uint)*(undefined8 *)
                (((ulong)puVar2 & 0xffffffff00000000 | (ulong)*puVar2 & 0xfffc0000) + 8) >> 6 & 1)
        != 0) {
      uVar1 = *(ulong *)((MemoryChunk *)(local_18 & 0xfffffffffffc0000) + 8);
      if ((((uint)uVar1 >> 0xf & 1) != 0) || ((uVar1 & 0x58) == 0)) {
        RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                  ((MemoryChunk *)(local_18 & 0xfffffffffffc0000),(ulong)puVar2);
      }
    }
    uVar1 = Worklist<v8::internal::SharedFunctionInfo,64>::Pop
                      ((Worklist<v8::internal::SharedFunctionInfo,64> *)(this + 0x20f8),0,
                       (SharedFunctionInfo *)&local_18);
  }
  return;
}

