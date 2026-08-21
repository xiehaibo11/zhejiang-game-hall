
/* v8::internal::JSTypedArray::DefineOwnProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSTypedArray>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSTypedArray::DefineOwnProperty
          (Factory *param_1,ulong *param_2,ulong *param_3,byte *param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  ulong local_98;
  undefined8 local_8c;
  Factory *local_80;
  ulong *local_78;
  undefined8 local_70;
  ulong *puStack_68;
  undefined8 local_60;
  ulong *puStack_58;
  ulong local_50;
  undefined8 uStack_48;
  
  uVar10 = *param_3;
  if ((uVar10 & 1) != 0) {
    if (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))
    goto LAB_010c8bac;
    puVar7 = (ulong *)String::ToNumber(param_1,param_3);
    uVar10 = *puVar7;
    if ((uVar10 & 1) == 0) {
LAB_010c8afc:
      puVar5 = (ulong *)Object::ConvertToString(param_1,puVar7);
    }
    else {
      uVar11 = uVar10 & 0xffffffff00000000 | 7;
      if ((*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0x42) &&
         (*(long *)(uVar10 + 3) == -0x8000000000000000)) goto joined_r0x010c8b28;
      puVar5 = puVar7;
      if (0x3f < *(ushort *)(uVar11 + *(uint *)(uVar10 - 1))) goto LAB_010c8afc;
    }
    if (puVar5 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    local_98 = *puVar5;
    uVar10 = Object::SameValue((Object *)&local_98,*param_3);
    if ((uVar10 & 1) == 0) {
LAB_010c8bac:
      uVar3 = JSReceiver::OrdinaryDefineOwnProperty(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
    uVar10 = *puVar7;
  }
joined_r0x010c8b28:
  if ((uVar10 & 1) == 0) {
    if (-1 < (int)uVar10) {
      uVar10 = uVar10 >> 1 & 0x7fffffff;
LAB_010c8a38:
      uVar11 = *param_2;
      if ((uVar10 < *(ulong *)(uVar11 + 0x1f)) &&
         ((*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb)) + 0x1b) >> 2 & 1
          ) == 0)) {
        if (((*(long *)(param_4 + 0x10) == 0) &&
            (((*(long *)(param_4 + 0x18) == 0 && (bVar2 = *param_4, (bVar2 & 0x30) != 0x20)) &&
             ((bVar2 & 0xc) != 0xc)))) && (uVar9 = (uint)bVar2, (uVar9 & 3) != 2)) {
          lVar12 = *(long *)(param_4 + 8);
          if (lVar12 == 0) {
            return 0x101;
          }
          uVar1 = uVar9 & 0xfffffff3 | 8;
          if ((bVar2 & 8) != 0) {
            uVar1 = uVar9;
          }
          uVar9 = uVar1 | 3;
          if ((uVar1 & 2) != 0) {
            uVar9 = uVar1;
          }
          if ((((bVar2 >> 3 & 1) == 0) || ((uVar1 >> 1 & 1) == 0)) || ((uVar9 >> 5 & 1) == 0)) {
            bVar2 = (byte)uVar9 | 0x30;
            if ((uVar9 & 0x20) != 0) {
              bVar2 = (byte)uVar9;
            }
            *param_4 = bVar2;
          }
          if (((*param_2 & 1) == 0) ||
             (puStack_58 = param_2,
             *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
            puStack_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_1,param_2,uVar10);
          }
          local_98 = CONCAT44(local_98._4_4_,1);
          local_78 = (ulong *)0x0;
          local_70 = 0;
          local_60 = 0;
          local_8c = 0xc000000000;
          uStack_48 = 0xffffffffffffffff;
          local_80 = param_1;
          puVar7 = local_78;
          puStack_68 = param_2;
          local_50 = uVar10;
          if (((0xfffffffe < uVar10) &&
              (*(short *)((*puStack_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_58 - 1)
                         ) != 0x41b)) &&
             (puVar7 = (ulong *)Factory::SizeToString(param_1,uVar10,true),
             (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
             0xffe0) == 0x20)) {
            puVar7 = (ulong *)StringTable::LookupString(param_1);
          }
          local_78 = puVar7;
          LookupIterator::Start<true>((LookupIterator *)&local_98);
          bVar2 = *param_4;
          lVar12 = JSObject::DefineOwnPropertyIgnoreAttributes
                             (&local_98,lVar12,
                              ~bVar2 & bVar2 >> 1 & 4 | bVar2 & (bVar2 << 1 ^ 0xff) & 2 |
                              bVar2 >> 5 & (bVar2 >> 4 ^ 0xff) & 1,1);
          if (lVar12 != 0) {
            return 0x101;
          }
          return 0;
        }
        iVar4 = GetShouldThrow(param_1,param_5);
        if (iVar4 == 1) {
          return 1;
        }
        uVar8 = 0x96;
        goto LAB_010c8bd4;
      }
    }
  }
  else {
    uVar11 = uVar10 & 0xffffffff00000000 | 7;
    if ((((*(short *)(uVar11 + *(uint *)(uVar10 - 1)) != 0x42) ||
         (*(long *)(uVar10 + 3) != -0x8000000000000000)) &&
        (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0x42)) &&
       (((dVar13 = *(double *)(uVar10 + 3), 0.0 <= dVar13 && (dVar13 <= 9007199254740991.0)) &&
        (uVar10 = (ulong)dVar13, dVar13 == (double)uVar10)))) goto LAB_010c8a38;
  }
  iVar4 = GetShouldThrow(param_1,param_5);
  if (iVar4 == 1) {
    return 1;
  }
  uVar8 = 0xce;
  param_3 = (ulong *)0x0;
LAB_010c8bd4:
  puVar6 = (undefined8 *)Factory::NewTypeError(param_1,uVar8,param_3,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar6,0);
  return 0;
}

