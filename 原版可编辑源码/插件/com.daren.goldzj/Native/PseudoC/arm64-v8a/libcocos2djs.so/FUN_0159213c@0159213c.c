
ulong * FUN_0159213c(Isolate *param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,
                    ulong param_5,undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_58;
  char local_4c [4];
  undefined1 auStack_48 [4];
  char local_44 [4];
  uint local_28;
  int local_24;
  
  puVar3 = (ulong *)v8::internal::Context::Lookup
                              (param_2,param_3,param_6,&local_24,&local_28,local_44,auStack_48,
                               local_4c);
  if (puVar3 == (ulong *)0x0) {
    if ((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) {
      return (ulong *)0x0;
    }
    if ((int)*(ulong *)(param_1 + 0x2bd8) != *(int *)(param_1 + 0xa8)) {
      return (ulong *)0x0;
    }
LAB_015921e8:
    if (local_24 == -1) {
      if (local_28 != 0x40) {
LAB_01592354:
        puVar3 = (ulong *)v8::internal::Object::SetProperty(param_1,puVar3,param_3,param_4,0,0);
        return puVar3;
      }
      if ((param_5 & 1) == 0) {
        local_58 = *param_2;
        uVar6 = v8::internal::Context::global_object((Context *)&local_58);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(param_1 + 0x95a0);
          if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
            puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar6;
        }
        else {
          puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
        }
        goto LAB_01592354;
      }
    }
    else if (((local_44[0] != '\0') ||
             (uVar2 = *(uint *)(*puVar3 + (long)(local_24 << 2) + 7), (uVar2 & 1) == 0)) ||
            (uVar2 != *(uint *)(param_1 + 0xa8))) {
      if ((local_28 & 1) == 0) {
        uVar7 = *puVar3;
        uVar6 = *param_4;
        lVar1 = uVar7 + (long)(local_24 << 2);
        *(int *)(lVar1 + 7) = (int)uVar6;
        if ((uVar6 & 1) == 0) {
          return param_4;
        }
        uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar7,lVar1,uVar6);
          uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar5 & 0x18) != 0) {
          if ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar6);
            return param_4;
          }
          return param_4;
        }
        return param_4;
      }
      if ((local_4c[0] != '\0') && ((param_5 & 1) == 0)) {
        return param_4;
      }
      goto LAB_015922c8;
    }
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewReferenceError((Factory *)param_1,0xb2,param_3,0,0);
  }
  else {
    uVar6 = *puVar3;
    if (((uVar6 & 1) == 0) ||
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x44))
    goto LAB_015921e8;
    if ((local_28 & 1) == 0) {
      v8::internal::SourceTextModule::StoreVariable(puVar3,local_24,param_4);
      return param_4;
    }
LAB_015922c8:
    puVar4 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_1,0x24,param_3,0,0);
  }
  v8::internal::Isolate::Throw(param_1,*puVar4,0);
  return (ulong *)0x0;
}

