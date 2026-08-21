
ulong FUN_014d7724(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  
  pIVar8 = param_3 + 0xa0;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (*(int *)(param_2 - (param_1 * 8 + -8)) != *(int *)pIVar8) {
    puVar5 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x59,param_3 + 0xa18,0,0);
    uVar6 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
    goto LAB_014d7878;
  }
  puVar3 = (ulong *)v8::internal::Factory::NewSymbol((Factory *)param_3,1);
  pIVar4 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar4 = pIVar8;
  }
  uVar6 = *(ulong *)pIVar4;
  if ((uVar6 & 1) == 0) {
LAB_014d77cc:
    pIVar4 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
LAB_014d77d8:
    if (pIVar4 == (Isolate *)0x0) {
      uVar6 = *(ulong *)(param_3 + 0x180);
      goto LAB_014d7878;
    }
    uVar9 = *puVar3;
    uVar6 = *(ulong *)pIVar4;
    *(int *)(uVar9 + 0xb) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar6);
        uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar6);
      }
    }
  }
  else if ((int)uVar6 != *(int *)pIVar8) {
    if (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))
    goto LAB_014d77cc;
    goto LAB_014d77d8;
  }
  uVar6 = *puVar3;
LAB_014d7878:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

