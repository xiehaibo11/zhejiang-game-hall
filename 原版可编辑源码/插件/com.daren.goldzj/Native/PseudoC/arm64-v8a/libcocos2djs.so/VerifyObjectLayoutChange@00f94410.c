
/* v8::internal::Heap::VerifyObjectLayoutChange(v8::internal::HeapObject, v8::internal::Map) */

void __thiscall
v8::internal::Heap::VerifyObjectLayoutChange(Heap *this,ulong param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **local_98;
  ulong *local_90;
  ulong *local_88;
  ulong *puStack_80;
  undefined **local_78;
  void *local_70;
  ulong *local_68;
  ulong *puStack_60;
  ulong local_58;
  uint *local_38;
  
  if (FLAG_verify_heap != '\0') {
    if (*(int *)(this + 0xb48) == 0) {
      if (*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0xaa) {
        ppuVar6 = (undefined **)(param_2 - 1);
        local_68 = (ulong *)0x0;
        puStack_60 = (ulong *)0x0;
        local_70 = (void *)0x0;
        local_98 = ppuVar6;
        local_78 = &PTR__SlotCollectingVisitor_01ca7808;
        local_58 = param_2;
        if (ppuVar6 < (undefined **)(param_2 + 3)) {
          do {
            std::__ndk1::
            vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
            ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                      ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                        *)&local_70,(CompressedMaybeObjectSlot *)&local_98);
            while( true ) {
              local_98 = (undefined **)((long)local_98 + 4);
              if ((undefined **)(param_2 + 3) <= local_98) goto LAB_00f944f4;
              if (local_68 == puStack_60) break;
              *local_68 = (ulong)local_98;
              local_68 = local_68 + 1;
            }
          } while( true );
        }
LAB_00f944f4:
        uVar5 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)ppuVar6;
        uVar2 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar5);
        BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::SlotCollectingVisitor*>
                  (*(undefined2 *)(uVar5 + 7),uVar5,local_58,uVar2,&local_78);
        uVar2 = *(undefined4 *)(local_58 - 1);
        *(undefined4 *)(local_58 - 1) = param_3;
        local_90 = (ulong *)0x0;
        local_88 = (ulong *)0x0;
        puStack_80 = (ulong *)0x0;
        puVar4 = (uint *)(local_58 - 1);
        puVar1 = (uint *)(local_58 + 3);
        local_98 = &PTR__SlotCollectingVisitor_01ca7808;
        local_38 = puVar4;
        if (puVar4 < puVar1) {
          do {
            std::__ndk1::
            vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
            ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                      ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                        *)&local_90,(CompressedMaybeObjectSlot *)&local_38);
            while( true ) {
              local_38 = local_38 + 1;
              if (puVar1 <= local_38) {
                puVar4 = (uint *)(local_58 - 1);
                goto LAB_00f945b4;
              }
              if (local_88 == puStack_80) break;
              *local_88 = (ulong)local_38;
              local_88 = local_88 + 1;
            }
          } while( true );
        }
LAB_00f945b4:
        uVar5 = local_58 & 0xffffffff00000000 | (ulong)*puVar4;
        uVar3 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar5);
        BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::SlotCollectingVisitor*>
                  (*(undefined2 *)(uVar5 + 7),uVar5,local_58,uVar3,&local_98);
        *(undefined4 *)(local_58 - 1) = uVar2;
        local_98 = &PTR__SlotCollectingVisitor_01ca7808;
        if (local_90 != (ulong *)0x0) {
          local_88 = local_90;
          operator_delete(local_90);
        }
        if (local_70 != (void *)0x0) {
          local_68 = local_70;
          local_78 = &PTR__SlotCollectingVisitor_01ca7808;
          operator_delete(local_70);
        }
      }
    }
    else {
      *(undefined8 *)(this + 0xb48) = 0;
    }
  }
  return;
}

