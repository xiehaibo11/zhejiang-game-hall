
/* v8::internal::OrderedNameDictionaryHandler::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>) */

ulong * v8::internal::OrderedNameDictionaryHandler::Shrink(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  puVar3 = param_2;
  if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x94) {
    if (*(byte *)(uVar4 + 7) < *(byte *)(uVar4 + 9) >> 1) {
      puVar3 = (ulong *)SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash
                                  (param_1,param_2);
      *(undefined4 *)(*puVar3 + 3) = *(undefined4 *)(*param_2 + 3);
    }
  }
  else {
    uVar2 = *(uint *)(uVar4 + 0x13);
    if (*(int *)(uVar4 + 0xb) >> 1 < (int)uVar2 >> 2) {
      uVar1 = uVar2 & 0xfffffffe | 1;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2 & 0xfffffffe;
      }
      puVar3 = (ulong *)OrderedHashTable<v8::internal::OrderedNameDictionary,3>::Rehash
                                  (param_1,param_2,(int)uVar1 >> 1);
      if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      *(uint *)(*puVar3 + 7) = *(uint *)(*param_2 + 7) & 0xfffffffe;
    }
  }
  return puVar3;
}

