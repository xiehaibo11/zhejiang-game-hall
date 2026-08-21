
/* v8::internal::Heap::ExternalStringTable::CleanUpYoung() */

void __thiscall v8::internal::Heap::ExternalStringTable::CleanUpYoung(ExternalStringTable *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong local_48;
  
  lVar1 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) == lVar1) {
    iVar5 = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)this;
    iVar5 = 0;
    uVar4 = 0;
    do {
      local_48 = *(ulong *)(lVar1 + uVar4 * 8);
      if ((local_48 & 1) == 0) {
LAB_00f99b3c:
        if (*(ulong **)(this + 0x28) == *(ulong **)(this + 0x30)) {
          std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
          __push_back_slow_path<v8::internal::Object_const&>
                    ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
                     (this + 0x20),(Object *)&local_48);
        }
        else {
          **(ulong **)(this + 0x28) = local_48;
          *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
        }
      }
      else if (((int)local_48 != *(int *)(lVar3 + -0x87a8)) &&
              ((uVar2 = local_48 & 0xffffffff00000000 | 7,
               0x3f < *(ushort *)(uVar2 + *(uint *)(local_48 - 1)) ||
               ((*(ushort *)(uVar2 + *(uint *)(local_48 - 1)) & 7) != 5)))) {
        if ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0) goto LAB_00f99b3c;
        *(ulong *)(lVar1 + (long)iVar5 * 8) = local_48;
        iVar5 = iVar5 + 1;
      }
      lVar1 = *(long *)(this + 8);
      uVar4 = uVar4 + 1;
      uVar2 = *(long *)(this + 0x10) - lVar1 >> 3;
    } while (uVar4 < uVar2);
  }
  uVar4 = (ulong)iVar5;
  if (uVar2 < uVar4) {
    std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::__append
              ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
               (this + 8),uVar4 - uVar2);
  }
  else if (uVar2 != uVar4) {
    *(ulong *)(this + 0x10) = lVar1 + uVar4 * 8;
  }
  return;
}

