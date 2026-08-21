
/* v8::debug::GetLoadedScripts(v8::Isolate*, v8::PersistentValueVector<v8::debug::Script,
   v8::DefaultPersistentValueVectorTraits>&) */

void v8::debug::GetLoadedScripts(Isolate *param_1,PersistentValueVector *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_70;
  Iterator aIStack_68 [16];
  ulong local_58;
  
  uVar4 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::Script::Iterator::Iterator(aIStack_68,(Isolate *)param_1);
  local_70 = internal::Script::Iterator::Next(aIStack_68);
  if ((int)local_70 != 0) {
    pIVar1 = param_1 + 0x95a0;
    do {
      uVar6 = internal::Script::IsUserJavaScript((Script *)&local_70);
      uVar5 = local_70;
      if ((uVar6 & 1) != 0) {
        if ((*(uint *)(local_70 + 3) & 1) != 0) {
          uVar9 = local_70 & 0xffffffff00000000;
          uVar6 = uVar9 | *(uint *)(local_70 + 3);
          uVar8 = uVar9 | 7;
          if ((((*(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) < 0x40) &&
               ((*(ushort *)((uVar9 | *(uint *)(uVar6 - 1)) + 7) & 7) == 2)) &&
              (((*(byte *)(uVar8 + *(uint *)(uVar6 - 1)) >> 3 & 1) != 0 ||
               ((*(byte *)(uVar8 + *(uint *)(uVar6 - 1)) >> 3 & 1) == 0)))) &&
             (*(long *)(uVar6 + 0xb) == 0)) goto LAB_00ed1970;
        }
        puVar2 = *(ulong **)pIVar1;
        puVar3 = *(ulong **)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = puVar2;
          if (puVar3 == puVar2) {
            puVar7 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar5;
          if (puVar7 == (ulong *)0x0) goto LAB_00ed1a48;
LAB_00ed1a14:
          local_58 = V8::GlobalizeReference(*(Isolate **)param_2,puVar7);
        }
        else {
          puVar7 = (ulong *)internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_70);
          if (puVar7 != (ulong *)0x0) goto LAB_00ed1a14;
LAB_00ed1a48:
          local_58 = 0;
        }
        if (*(ulong **)(param_2 + 0x10) == *(ulong **)(param_2 + 0x18)) {
          std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
          __push_back_slow_path<unsigned_long_const&>
                    ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(param_2 + 8),
                     &local_58);
        }
        else {
          **(ulong **)(param_2 + 0x10) = local_58;
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 8;
        }
        *(ulong **)pIVar1 = puVar2;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
          *(ulong **)(param_1 + 0x95a8) = puVar3;
          internal::HandleScope::DeleteExtensions((Isolate *)param_1);
        }
      }
LAB_00ed1970:
      local_70 = internal::Script::Iterator::Next(aIStack_68);
    } while ((int)local_70 != 0);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar4;
  return;
}

