
/* v8::Module::CreateSyntheticModule(v8::Isolate*, v8::Local<v8::String>,
   std::__ndk1::vector<v8::Local<v8::String>, std::__ndk1::allocator<v8::Local<v8::String> > >
   const&, v8::MaybeLocal<v8::Value> (*)(v8::Local<v8::Context>, v8::Local<v8::Module>)) */

void v8::Module::CreateSyntheticModule
               (Factory *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  puVar2 = (ulong *)internal::Factory::NewFixedArray(param_1,(ulong)(param_3[1] - *param_3) >> 3,0);
  uVar5 = *puVar2;
  if (1 < *(int *)(uVar5 + 3)) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      uVar6 = **(ulong **)(*param_3 + lVar8 * 8);
      if (0x1f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
        puVar3 = (ulong *)internal::StringTable::LookupString(param_1);
        uVar5 = *puVar2;
        uVar6 = *puVar3;
      }
      *(int *)(uVar5 + (long)iVar7 + 7) = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar5 + (long)iVar7 + 7;
        if (((uint)uVar4 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(uVar5,lVar1,uVar6);
          uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(uVar5,lVar1,uVar6);
        }
      }
      uVar5 = *puVar2;
      lVar8 = lVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (lVar8 < *(int *)(uVar5 + 3) >> 1);
  }
  internal::Factory::NewSyntheticModule(param_1,param_2,puVar2,param_4);
  return;
}

