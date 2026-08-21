
/* v8::internal::SmallOrderedHashSet::SmallOrderedHashSetVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::SmallOrderedHashSet::SmallOrderedHashSetVerify
          (SmallOrderedHashSet *this,Isolate *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::SmallOrderedHashTableVerify
            ((SmallOrderedHashTable<v8::internal::SmallOrderedHashSet> *)this,param_1);
  lVar4 = *(long *)this;
  bVar2 = *(byte *)(lVar4 + 3);
  uVar3 = (uint)bVar2;
  if ((uint)bVar2 < (uint)*(byte *)(lVar4 + 4)) {
    iVar5 = (uint)bVar2 * 4 + 8;
    do {
      uVar1 = *(uint *)(lVar4 + -1 + (long)iVar5);
      if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","val.IsTheHole(isolate)");
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(byte *)(lVar4 + 4));
  }
  return;
}

