
/* v8::internal::SharedFunctionInfo::Hash() */

void __thiscall v8::internal::SharedFunctionInfo::Hash(SharedFunctionInfo *this)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = StartPosition(this);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar3 = uVar4 | *(uint *)(*(ulong *)this + 0xf);
  uVar5 = uVar3;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
    uVar5 = uVar4 | *(uint *)(uVar3 + 0xb);
  }
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x65) {
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
      uVar3 = uVar4 | *(uint *)(uVar3 + 0xb);
    }
    uVar2 = *(int *)(uVar3 + 0x1f) >> 1;
  }
  else {
    uVar2 = 0;
  }
  uVar5 = base::hash_value(uVar2);
  uVar5 = base::hash_combine(0,uVar5);
  uVar3 = base::hash_value(uVar1);
  base::hash_combine(uVar5,uVar3);
  return;
}

