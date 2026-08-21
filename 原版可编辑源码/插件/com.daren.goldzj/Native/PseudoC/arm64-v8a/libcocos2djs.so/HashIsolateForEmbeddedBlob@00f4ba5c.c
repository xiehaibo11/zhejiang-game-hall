
/* v8::internal::Isolate::HashIsolateForEmbeddedBlob() */

void __thiscall v8::internal::Isolate::HashIsolateForEmbeddedBlob(Isolate *this)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    lVar1 = Heap::builtin((Heap *)(this + 0x8850),iVar2);
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x1b));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x1c));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x1d));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x1e));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x1f));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x20));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x21));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x22));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x23));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x24));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x25));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x26));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x27));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x28));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x29));
    uVar3 = base::hash_combine(uVar3,(ulong)*(byte *)(lVar1 + 0x2a));
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x5bc);
  base::hash_combine(uVar3,(long)((ulong)*(uint *)(*(long *)(this + 0xf30) + 3) << 0x20) >> 0x21);
  return;
}

