
/* v8::internal::CompilationCacheTable::Remove(v8::internal::Object) */

void __thiscall v8::internal::CompilationCacheTable::Remove(CompilationCacheTable *this,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)this;
  if ((int)*(uint *)(uVar6 + 0xf) >> 1 != 0) {
    lVar2 = (long)((ulong)*(uint *)(uVar6 + 0xf) << 0x20) >> 0x21;
    uVar1 = *(undefined4 *)((uVar6 & 0xffffffff00000000) + 0xa8);
    lVar3 = 0x1400000000;
    lVar4 = 0x1000000000;
    lVar5 = 0xc00000000;
    while( true ) {
      lVar2 = lVar2 + -1;
      if (*(int *)(uVar6 + (lVar4 >> 0x20) + 7) == param_2) {
        *(undefined4 *)(uVar6 + (lVar5 >> 0x20) + 7) = uVar1;
        *(undefined4 *)(*(long *)this + (lVar4 >> 0x20) + 7) = uVar1;
        *(undefined4 *)(*(long *)this + (lVar3 >> 0x20) + 7) = uVar1;
        *(uint *)(*(long *)this + 7) = *(uint *)(*(long *)this + 7) - 2 & 0xfffffffe;
        *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) + 2 & 0xfffffffe;
      }
      if (lVar2 == 0) break;
      uVar6 = *(ulong *)this;
      lVar3 = lVar3 + 0xc00000000;
      lVar4 = lVar4 + 0xc00000000;
      lVar5 = lVar5 + 0xc00000000;
    }
  }
  return;
}

