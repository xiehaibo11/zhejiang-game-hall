
/* WARNING: Removing unreachable block (ram,0x014fe640) */
/* v8::internal::KeyedLoadIC::LoadElementPolymorphicHandlers(std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > >*,
   std::__ndk1::vector<v8::internal::MaybeObjectHandle,
   std::__ndk1::allocator<v8::internal::MaybeObjectHandle> >*, v8::internal::KeyedAccessLoadMode) */

void __thiscall
v8::internal::KeyedLoadIC::LoadElementPolymorphicHandlers
          (KeyedLoadIC *this,long *param_1,
          vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
          *param_2,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong local_60;
  ulong uStack_58;
  
  puVar11 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  puVar8 = puVar11;
  uVar2 = local_60;
  if (puVar11 != puVar10) {
    uVar1 = *(uint *)(*(long *)*puVar11 + 0xb);
    while ((uVar1 >> 0x18 & 1) == 0) {
      puVar8 = puVar8 + 1;
      if (puVar10 == puVar8) goto joined_r0x014fe658;
      uVar1 = *(uint *)(*(long *)*puVar8 + 0xb);
    }
  }
  if ((puVar8 != puVar10) && (puVar5 = puVar8 + 1, puVar7 = puVar8, puVar5 != puVar10)) {
    do {
      puVar8 = puVar7;
      if ((*(uint *)(*(long *)*puVar5 + 0xb) >> 0x18 & 1) == 0) {
        puVar8 = puVar7 + 1;
        *puVar7 = (long *)*puVar5;
      }
      puVar5 = puVar5 + 1;
      puVar7 = puVar8;
    } while (puVar10 != puVar5);
    puVar11 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
  }
  if (puVar10 != puVar8) {
    param_1[1] = (long)puVar8;
    puVar10 = puVar8;
  }
joined_r0x014fe658:
  for (; puVar11 != puVar10; puVar11 = puVar11 + 1) {
    puVar9 = (ulong *)*puVar11;
    local_60 = *puVar9;
    if (((*(uint *)(local_60 + 0xb) >> 0x19 & 1) == 0) &&
       (iVar3 = Map::FindElementsKindTransitionedMap((Isolate *)&local_60,*(vector **)(this + 8)),
       uVar2 = local_60, iVar3 != 0)) {
      uVar6 = *puVar9;
      uVar4 = *(undefined8 *)(this + 8);
      if ((*(uint *)(uVar6 + 0xb) >> 0x19 & 1) == 0) {
        *(uint *)(uVar6 + 0xb) = *(uint *)(uVar6 + 0xb) | 0x2000000;
        local_60 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x1b);
        DependentCode::DeoptimizeDependentCodeGroup(&local_60,uVar4,1);
        uVar2 = local_60;
      }
    }
    local_60 = uVar2;
    uStack_58 = LoadElementHandler(this,puVar9,param_4);
    local_60 = CONCAT44(local_60._4_4_,1);
    puVar9 = *(ulong **)(param_2 + 8);
    if (puVar9 < *(ulong **)(param_2 + 0x10)) {
      puVar9[1] = uStack_58;
      *puVar9 = local_60;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
    }
    else {
      std::__ndk1::
      vector<v8::internal::MaybeObjectHandle,std::__ndk1::allocator<v8::internal::MaybeObjectHandle>>
      ::__push_back_slow_path<v8::internal::MaybeObjectHandle>
                (param_2,(MaybeObjectHandle *)&local_60);
    }
    uVar2 = local_60;
  }
  return;
}

