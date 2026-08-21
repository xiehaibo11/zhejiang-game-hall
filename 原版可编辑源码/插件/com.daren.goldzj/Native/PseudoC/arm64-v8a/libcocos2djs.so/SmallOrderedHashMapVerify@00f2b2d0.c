
/* v8::internal::SmallOrderedHashMap::SmallOrderedHashMapVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::SmallOrderedHashMap::SmallOrderedHashMapVerify
          (SmallOrderedHashMap *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  
  SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::SmallOrderedHashTableVerify
            ((SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *)this,param_1);
  lVar3 = *(long *)this;
  uVar2 = (ulong)*(byte *)(lVar3 + 3);
  if (*(byte *)(lVar3 + 3) < *(byte *)(lVar3 + 4)) {
    puVar4 = (uint *)(lVar3 + uVar2 * 8 + 0xb);
    do {
      uVar1 = puVar4[-1];
      if (((((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa8))) || ((*puVar4 & 1) == 0)) ||
         (*puVar4 != uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","val.IsTheHole(isolate)");
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar2 < *(byte *)(lVar3 + 4));
  }
  return;
}

