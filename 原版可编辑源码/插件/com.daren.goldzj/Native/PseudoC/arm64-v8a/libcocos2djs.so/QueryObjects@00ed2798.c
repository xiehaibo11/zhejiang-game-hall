
/* v8::debug::QueryObjects(v8::Local<v8::Context>, v8::debug::QueryObjectPredicate*,
   v8::PersistentValueVector<v8::Object, v8::DefaultPersistentValueVectorTraits>*) */

void v8::debug::QueryObjects(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  lVar3 = (ulong)uVar1 << 0x20;
  uVar2 = *(undefined4 *)(lVar3 + 0x2c60);
  *(undefined4 *)(lVar3 + 0x2c60) = 5;
  internal::HeapProfiler::QueryObjects
            (*(HeapProfiler **)((ulong)uVar1 << 0x20 | 0xb6d0),param_1,param_2,param_3);
  *(undefined4 *)(lVar3 + 0x2c60) = uVar2;
  return;
}

