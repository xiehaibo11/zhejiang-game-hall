
/* v8::internal::HeapObjectsMap::HeapObjectsMap(v8::internal::Heap*) */

void __thiscall v8::internal::HeapObjectsMap::HeapObjectsMap(HeapObjectsMap *this,Heap *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  bool local_2c [4];
  int local_28 [2];
  
  *(undefined4 *)this = 0x33;
  puVar1 = malloc(0xc0);
  *(undefined8 **)(this + 8) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this + 0x10) = 8;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  uVar2 = 4;
  lVar3 = 0x60;
  do {
    uVar2 = uVar2 + 1;
    *(undefined8 *)(*(long *)(this + 8) + lVar3) = 0;
    lVar3 = lVar3 + 0x18;
  } while (uVar2 < *(uint *)(this + 0x10));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(Heap **)(this + 0x78) = param_1;
  local_28[1] = 0;
  local_28[0] = 0;
  local_2c[0] = true;
  std::__ndk1::
  vector<v8::internal::HeapObjectsMap::EntryInfo,std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo>>
  ::__emplace_back_slow_path<int,unsigned_long_const&,int,bool>
            ((vector<v8::internal::HeapObjectsMap::EntryInfo,std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo>>
              *)(this + 0x20),local_28 + 1,(ulong *)&DAT_019dd950,local_28,local_2c);
  return;
}

