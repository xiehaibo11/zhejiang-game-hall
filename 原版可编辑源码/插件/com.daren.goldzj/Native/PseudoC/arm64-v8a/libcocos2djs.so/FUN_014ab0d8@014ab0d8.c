
undefined8 FUN_014ab0d8(Factory *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined4 local_d8 [3];
  undefined8 local_cc;
  Factory *local_c0;
  ulong *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined1 auStack_74 [4];
  
  puVar8 = *(ulong **)(param_2 + 2);
  uVar7 = *puVar8;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
    puVar8 = (ulong *)v8::internal::Object::ToObjectImpl(param_1,puVar8,0);
  }
  if ((puVar8 != (ulong *)0x0) &&
     (puVar3 = (ulong *)v8::internal::Object::GetLengthFromArrayLike(param_1,puVar8),
     puVar3 != (ulong *)0x0)) {
    uVar7 = *puVar3;
    uVar1 = *param_2 - 5;
    if ((uVar7 & 1) == 0) {
      dVar11 = (double)((int)uVar7 >> 1);
    }
    else {
      dVar11 = *(double *)(uVar7 + 3);
    }
    if (9007199254740991.0 - dVar11 < (double)(int)uVar1) {
      uVar4 = v8::internal::Factory::NewNumberFromInt(param_1,uVar1);
      puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError(param_1,0x11a,uVar4,puVar3,0);
      uVar4 = v8::internal::Isolate::Throw((Isolate *)param_1,*puVar5,0);
      return uVar4;
    }
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        lVar9 = *(long *)(param_2 + 2) - (ulong)((int)lVar10 + 8);
        if (4294967294.0 < dVar11) {
          uVar4 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar11);
          v8::internal::LookupIterator::PropertyOrElement
                    ((LookupIterator *)local_d8,param_1,puVar8,uVar4,auStack_74,3);
          cVar2 = v8::internal::Object::SetProperty(local_d8,lVar9,0,1);
        }
        else {
          uVar7 = (ulong)(uint)(int)dVar11;
          if (((*puVar8 & 1) == 0) ||
             (puVar3 = puVar8,
             *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*puVar8 - 1)) < 0xa9)) {
            puVar3 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                        (param_1,puVar8,uVar7);
          }
          local_d8[0] = 3;
          local_cc = 0xc000000000;
          local_b8 = (ulong *)0x0;
          uStack_b0 = 0;
          uStack_a0 = 0;
          local_88 = 0xffffffffffffffff;
          local_c0 = param_1;
          puVar6 = local_b8;
          local_a8 = puVar8;
          local_98 = puVar3;
          uStack_90 = uVar7;
          if ((((int)dVar11 == 0xffffffff) &&
              (*(short *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) !=
               0x41b)) &&
             (puVar6 = (ulong *)v8::internal::Factory::SizeToString(param_1,0xffffffff,true),
             (*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) &
             0xffe0) == 0x20)) {
            puVar6 = (ulong *)v8::internal::StringTable::LookupString(param_1);
          }
          local_b8 = puVar6;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)local_d8);
          cVar2 = v8::internal::Object::SetProperty(local_d8,lVar9,0,1);
          if (lVar9 == 0) goto LAB_014ab3ac;
        }
        if (cVar2 == '\0') goto LAB_014ab3ac;
        lVar10 = lVar10 + 8;
        dVar11 = dVar11 + 1.0;
      } while ((ulong)uVar1 * 8 - lVar10 != 0);
    }
    puVar5 = (undefined8 *)
             v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar11);
    lVar10 = v8::internal::Object::SetProperty(param_1,puVar8,param_1 + 0x7b8,puVar5,0,1);
    if (lVar10 != 0) {
      return *puVar5;
    }
  }
LAB_014ab3ac:
  return *(undefined8 *)(param_1 + 0x180);
}

