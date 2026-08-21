
/* v8::internal::Module::Reset(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Module>)
    */

void v8::internal::Module::Reset(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::New
                              (param_1,*(int *)((*param_2 & 0xffffffff00000000 |
                                                (ulong)*(uint *)(*param_2 + 0x1b)) + 3) >> 1,0,0);
  uVar3 = *param_2;
  if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x44) {
    SourceTextModule::Reset(param_1,param_2);
    uVar3 = *param_2;
  }
  uVar4 = *puVar1;
  *(int *)(uVar3 + 3) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 3,uVar4);
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 3,uVar4);
    }
  }
  *(undefined4 *)(*param_2 + 0xb) = 0;
  return;
}

