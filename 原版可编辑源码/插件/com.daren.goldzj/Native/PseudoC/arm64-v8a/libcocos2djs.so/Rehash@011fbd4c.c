
/* v8::internal::IdentityMapBase::Rehash() */

void __thiscall v8::internal::IdentityMapBase::Rehash(IdentityMapBase *this)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong local_68;
  ulong uStack_60;
  ulong *local_58;
  ulong *local_50;
  ulong *puStack_48;
  
  if (this[0x38] != (IdentityMapBase)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!is_iterable()");
  }
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(*(long *)(this + 0x10) + 0x1b4);
  local_50 = (ulong *)0x0;
  puStack_48 = (ulong *)0x0;
  local_58 = (ulong *)0x0;
  if (0 < *(int *)(this + 0x20)) {
    uVar8 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
    uVar7 = 0;
    uVar9 = 0xffffffff;
    do {
      uVar6 = *(ulong *)(*(long *)(this + 0x28) + uVar7 * 8);
      if (uVar6 == uVar8) {
LAB_011fbdcc:
        uVar9 = uVar7 & 0xffffffff;
      }
      else {
        if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) == uVar6) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
        }
        uVar4 = base::hash_value(uVar6);
        if (((int)(*(uint *)(this + 0x24) & uVar4) <= (int)uVar9) ||
           ((long)uVar7 < (long)(int)(*(uint *)(this + 0x24) & uVar4))) {
          lVar10 = uVar7 * 8;
          local_68 = *(ulong *)(*(long *)(this + 0x28) + lVar10);
          uStack_60 = *(ulong *)(*(long *)(this + 0x30) + lVar10);
          if (local_50 < puStack_48) {
            local_50[1] = uStack_60;
            *local_50 = local_68;
            local_50 = local_50 + 2;
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::pair<unsigned_long,void*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,void*>>>
            ::__push_back_slow_path<std::__ndk1::pair<unsigned_long,void*>>
                      ((vector<std::__ndk1::pair<unsigned_long,void*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,void*>>>
                        *)&local_58,(pair *)&local_68);
          }
          *(ulong *)(*(long *)(this + 0x28) + lVar10) = uVar8;
          *(undefined8 *)(*(long *)(this + 0x30) + lVar10) = 0;
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
          goto LAB_011fbdcc;
        }
      }
      puVar3 = local_50;
      uVar7 = uVar7 + 1;
      puVar1 = local_58;
      puVar2 = local_50;
    } while ((long)uVar7 < (long)*(int *)(this + 0x20));
    for (; puVar1 != puVar3; puVar1 = puVar1 + 2) {
      uVar7 = puVar1[1];
      iVar5 = InsertKey(this,*puVar1);
      *(ulong *)(*(long *)(this + 0x30) + (long)iVar5 * 8) = uVar7;
      puVar2 = local_58;
    }
    if (puVar2 != (ulong *)0x0) {
      local_50 = puVar2;
      operator_delete(puVar2);
    }
  }
  return;
}

