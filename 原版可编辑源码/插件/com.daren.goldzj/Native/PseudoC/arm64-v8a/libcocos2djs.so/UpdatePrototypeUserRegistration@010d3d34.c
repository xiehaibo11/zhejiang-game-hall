
/* v8::internal::JSObject::UpdatePrototypeUserRegistration(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Isolate*) */

void v8::internal::JSObject::UpdatePrototypeUserRegistration
               (ulong *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = UnregisterPrototypeUser(param_1,param_3);
  uVar3 = *param_1;
  uVar5 = *param_2;
  uVar1 = *(uint *)(uVar3 + 0x23);
  *(uint *)(uVar5 + 0x23) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar6 = uVar3 | uVar1;
    uVar3 = uVar3 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x23,uVar6);
      uVar4 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x23,uVar6);
    }
  }
  *(undefined4 *)(*param_1 + 0x23) = 0;
  if (FLAG_trace_prototype_users != '\0') {
    PrintF("Moving prototype_info %p from map %p to map %p.\n",
           *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x23),*param_1);
  }
  if ((uVar2 & 1) != 0) {
    uVar1 = *(uint *)(*param_2 + 0x23);
    if (((uVar1 & 1) != 0) &&
       (uVar3 = *param_2 & 0xffffffff00000000, uVar2 = uVar3 | uVar1,
       *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 100)) {
      *(undefined4 *)(uVar2 + 0xb) = 0xfffffffe;
    }
    LazyRegisterPrototypeUser(param_2,param_3);
    return;
  }
  return;
}

