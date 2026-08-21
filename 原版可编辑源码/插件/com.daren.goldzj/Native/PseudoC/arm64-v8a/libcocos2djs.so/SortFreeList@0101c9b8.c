
/* v8::internal::MapSpace::SortFreeList() */

void __thiscall v8::internal::MapSpace::SortFreeList(MapSpace *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  long lStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  
  puStack_48 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  lVar5 = *(long *)(this + 0x20);
  if (lVar5 != 0) {
    uVar4 = 0;
    lVar3 = lVar5;
    do {
      lVar3 = *(long *)(lVar3 + 0xe0);
      uVar4 = uVar4 + 0x10;
    } while (lVar3 != 0);
    local_50 = operator_new(uVar4);
    local_40 = (undefined8 *)((long)local_50 + uVar4);
    puStack_48 = local_50;
    do {
      (**(code **)(**(long **)(this + 0x60) + 0x40))
                (*(long **)(this + 0x60),**(undefined8 **)(lVar5 + 0xf0));
      local_60 = *(undefined8 *)(lVar5 + 0xc0);
      lStack_58 = lVar5;
      if (puStack_48 < local_40) {
        puStack_48[1] = lVar5;
        *puStack_48 = local_60;
        puStack_48 = puStack_48 + 2;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<unsigned_long,v8::internal::Page*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,v8::internal::Page*>>>
        ::__push_back_slow_path<std::__ndk1::pair<unsigned_long,v8::internal::Page*>>
                  ((vector<std::__ndk1::pair<unsigned_long,v8::internal::Page*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,v8::internal::Page*>>>
                    *)&local_50,(pair *)&local_60);
      }
      lVar5 = *(long *)(lVar5 + 0xe0);
    } while (lVar5 != 0);
  }
  FUN_01020ce0(local_50,puStack_48);
  puVar2 = puStack_48;
  for (puVar1 = local_50; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(**(long **)(this + 0x60) + 0x38))
              (*(long **)(this + 0x60),**(undefined8 **)(puVar1[1] + 0xf0));
  }
  if (local_50 != (undefined8 *)0x0) {
    puStack_48 = local_50;
    operator_delete(local_50);
  }
  return;
}

