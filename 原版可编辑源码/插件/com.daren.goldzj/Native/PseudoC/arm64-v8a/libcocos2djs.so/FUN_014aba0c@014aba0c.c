
undefined8 FUN_014aba0c(Isolate *param_1,long param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  ushort uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  Isolate *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  
  uVar8 = 0;
  uVar7 = 0;
  do {
    if (param_3 <= (uint)uVar7) {
      uVar8 = *(uint *)(param_4 + 0x10) + param_3;
      if (CARRY4(*(uint *)(param_4 + 0x10),param_3)) {
        uVar8 = 0xffffffff;
      }
      *(uint *)(param_4 + 0x10) = uVar8;
      if (((*(byte *)(param_4 + 0x14) & 1) != 0) &&
         ((uint)(*(int *)(**(long **)(param_4 + 8) + 3) >> 1) < uVar8)) {
        FUN_014acb2c();
      }
      return 1;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x95a0);
    lVar2 = *(long *)(param_1 + 0x95a8);
    uVar8 = uVar8 + 0x400;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    if ((uint)uVar7 < uVar8) {
      uVar7 = uVar7 & 0xffffffff;
      do {
        local_c8 = 3;
        local_bc = 0xc000000000;
        local_b0 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        local_78 = 0xffffffffffffffff;
        local_98 = param_2;
        local_88 = param_2;
        uStack_80 = uVar7;
        v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_c8);
        uVar4 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_c8);
        if ((uVar4 & 0xff) == 0) {
LAB_014abb80:
          bVar3 = true;
          goto joined_r0x014abb88;
        }
        if (0xff < uVar4) {
          local_c8 = 3;
          local_bc = 0xc000000000;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_90 = 0;
          local_78 = 0xffffffffffffffff;
          local_b0 = param_1;
          local_98 = param_2;
          local_88 = param_2;
          uStack_80 = uVar7;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_c8);
          if (local_c4 == 4) {
            pIVar5 = local_b0 + 0xa0;
          }
          else {
            pIVar5 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_c8,false)
            ;
            if (pIVar5 == (Isolate *)0x0) goto LAB_014abb80;
          }
          uVar6 = FUN_014ab840(param_4,uVar7 & 0xffffffff,pIVar5);
          if ((uVar6 & 1) == 0) goto LAB_014abb80;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 < param_3) && (uVar7 < uVar8));
    }
    bVar3 = false;
joined_r0x014abb88:
    if (param_1 != (Isolate *)0x0) {
      *(undefined8 *)(param_1 + 0x95a0) = uVar1;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(long *)(param_1 + 0x95a8) != lVar2) {
        *(long *)(param_1 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions(param_1);
      }
    }
    if (bVar3) {
      return 0;
    }
  } while( true );
}

