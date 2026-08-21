
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Grow(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashMap>) */

undefined8
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Grow
          (undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(*param_2 + 5);
  if (*(byte *)(*param_2 + 4) < bVar1) {
    uVar3 = 0xfe;
    if (bVar1 != 0x40) {
      uVar3 = (uint)bVar1 << 2;
    }
    if (0xfe < uVar3) {
      return 0;
    }
  }
  else {
    uVar3 = (uint)bVar1 << 1;
  }
  uVar2 = Rehash(param_1,param_2,uVar3);
  return uVar2;
}

