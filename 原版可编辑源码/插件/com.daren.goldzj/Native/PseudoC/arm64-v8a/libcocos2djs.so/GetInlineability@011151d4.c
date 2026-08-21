
/* v8::internal::SharedFunctionInfo::GetInlineability() const */

undefined4 __thiscall v8::internal::SharedFunctionInfo::GetInlineability(SharedFunctionInfo *this)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_18;
  
  uVar2 = *(ulong *)this;
  uVar4 = uVar2 & 0xffffffff00000000;
  uVar5 = uVar4 | *(uint *)(uVar2 + 0xf);
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
    uVar5 = uVar4 | *(uint *)(uVar5 + 0xb);
  }
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x65) {
    if ((*(int *)(uVar4 + 0xb810) == 2) && ((*(uint *)(uVar2 + 0x1b) >> 0x1b & 1) == 0)) {
      uVar1 = 2;
    }
    else if ((*(uint *)(uVar2 + 0x1b) & 0xf00000) == 0) {
      if ((*(uint *)(uVar2 + 3) & 1) == 0) {
        uVar1 = 4;
      }
      else {
        uVar4 = *(ulong *)this;
        uVar2 = uVar4 & 0xffffffff00000000;
        uVar5 = uVar2 | *(uint *)(uVar4 + 0xf);
        if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
          uVar5 = uVar2 | *(uint *)(uVar5 + 0xb);
        }
        if ((((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0))) &&
           ((*(uint *)(uVar5 + 0x17) & 0xfffffffe) == 4)) {
          if (((*(uint *)(uVar4 + 3) & 1) == 0) ||
             (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(uVar4 + 3)) - 1)) != 0x86
             )) {
            uVar3 = *(uint *)(*(ulong *)this + 3);
            if (((uVar3 & 1) == 0) ||
               (uVar2 = *(ulong *)this & 0xffffffff00000000,
               *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) != 0x61)) {
              return 6;
            }
          }
          uVar5 = *(ulong *)this;
          uVar2 = uVar5 & 0xffffffff00000000;
          uVar6 = uVar2 | *(uint *)(uVar5 + 0xf);
          uVar4 = uVar2 | 7;
          if ((*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x5b) &&
             (*(short *)(uVar4 + *(uint *)((uVar2 | *(uint *)(uVar6 + 0x13)) - 1)) == 0x86)) {
            uVar3 = *(uint *)(uVar6 + 0xf);
          }
          else if (((*(uint *)(uVar5 + 3) & 1) == 0) ||
                  (*(short *)(uVar4 + *(uint *)((uVar2 | *(uint *)(uVar5 + 3)) - 1)) != 0x86)) {
            uVar2 = *(ulong *)this & 0xffffffff00000000;
            uVar3 = *(uint *)((uVar2 | *(uint *)(*(ulong *)this + 3)) + 3);
          }
          else {
            uVar3 = *(uint *)(*(ulong *)this + 3);
            uVar2 = *(ulong *)this & 0xffffffff00000000;
          }
          if (FLAG_max_inlined_bytecode_size < *(int *)((uVar2 | uVar3) + 3) >> 1) {
            uVar1 = 7;
          }
          else {
            uVar2 = *(ulong *)this & 0xffffffff00000000;
            local_18 = uVar2 | *(uint *)(*(ulong *)this + 0xf);
            if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
              uVar2 = DebugInfo::HasBreakInfo((DebugInfo *)&local_18);
              uVar1 = 8;
              if ((uVar2 & 1) == 0) {
                uVar1 = 0;
              }
            }
            else {
              uVar1 = 0;
            }
          }
        }
        else {
          uVar1 = 5;
        }
      }
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

