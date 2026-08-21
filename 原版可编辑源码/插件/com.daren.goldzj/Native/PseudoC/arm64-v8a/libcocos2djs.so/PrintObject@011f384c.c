
/* v8::internal::StringStream::PrintObject(v8::internal::Object) */

void __thiscall v8::internal::StringStream::PrintObject(StringStream *this,ulong *param_2)

{
  ulong *puVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
  *this_00;
  undefined *puVar6;
  ulong uVar7;
  ulong *local_50;
  ulong *local_48;
  
  local_50 = param_2;
  Object::ShortPrint((Object *)&local_50,this);
  if (((ulong)local_50 & 1) != 0) {
    uVar5 = (ulong)local_50 & 0xffffffff00000000 | 7;
    if (*(ushort *)(uVar5 + *(uint *)((long)local_50 - 1)) < 0x40) {
      if (*(int *)((long)local_50 + 7) < 0x401) {
        return;
      }
    }
    else {
      if (*(short *)(uVar5 + *(uint *)((long)local_50 - 1)) == 0x42) {
        return;
      }
      if (*(short *)(uVar5 + *(uint *)((long)local_50 - 1)) == 0x43) {
        return;
      }
    }
    if (*(int *)(this + 8) == 1) {
      pIVar2 = (Isolate *)base::Thread::GetThreadLocal(Isolate::isolate_key_);
      puVar1 = local_50;
      this_00 = *(vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
                  **)(pIVar2 + 47000);
      uVar5 = *(long *)(this_00 + 8) - *(long *)this_00;
      if (uVar5 != 0) {
        uVar7 = 0;
        do {
          if (**(int **)(*(long *)this_00 + uVar7 * 8) == (int)local_50) {
            puVar6 = &DAT_019e24e4;
            uVar3 = __strlen_chk(&DAT_019e24e4,5);
            local_48 = (ulong *)CONCAT44(local_48._4_4_,(int)uVar7);
            goto LAB_011f3a14;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (ulong)((long)uVar5 >> 3));
        if (0xff < (ulong)((long)uVar5 >> 3)) {
          puVar6 = &DAT_019e24e9;
          uVar3 = __strlen_chk(&DAT_019e24e9,4);
          local_48 = puVar1;
LAB_011f3a14:
          Add(this,puVar6,uVar3,&local_48,1);
          return;
        }
      }
      uVar3 = __strlen_chk(&DAT_019e24e4,5);
      local_48 = (ulong *)CONCAT44(local_48._4_4_,(int)(uVar5 >> 3));
      Add(this,&DAT_019e24e4,uVar3,&local_48,1);
      puVar1 = local_50;
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar4 + 1;
        *puVar4 = (ulong)puVar1;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),(ulong)local_50);
      }
      if (*(long **)(this_00 + 8) < *(long **)(this_00 + 0x10)) {
        **(long **)(this_00 + 8) = (long)puVar4;
        *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
      }
      else {
        local_48 = puVar4;
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::HeapObject>>
                  (this_00,(Handle *)&local_48);
      }
    }
  }
  return;
}

