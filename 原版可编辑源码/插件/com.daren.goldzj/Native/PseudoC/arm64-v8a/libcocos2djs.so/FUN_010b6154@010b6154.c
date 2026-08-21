
undefined8 FUN_010b6154(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  undefined2 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  Factory *this;
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
  char *local_80;
  undefined8 uStack_78;
  
  uVar8 = *param_3;
  this = (Factory *)(uVar8 & 0xffffffff00000000);
  if ((*(uint *)(((ulong)this | (ulong)*(uint *)(uVar8 + 0xb)) + 0x1b) >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination_ta->WasDetached()");
  }
  if (param_4 == 0) goto LAB_010b6314;
  uVar7 = *param_2;
  if ((uVar7 & 1) != 0) {
    uVar9 = uVar7 & 0xffffffff00000000;
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x41b) {
      if ((((byte)(*(byte *)((uVar9 | 10) + (ulong)*(uint *)(uVar7 - 1)) >> 3 | 1) != 0x1b) &&
          ((*(uint *)((uVar9 | *(uint *)(uVar7 + 0xb)) + 0x1b) >> 2 & 1) == 0)) &&
         (param_5 + param_4 <= *(ulong *)(uVar7 + 0x1f))) {
        FUN_0107cbc8(uVar7,uVar8,param_4,param_5);
        goto LAB_010b6314;
      }
    }
    else if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x423) {
      uVar1 = *(uint *)(uVar7 + 0xb);
      if ((uVar1 & 1) == 0) {
        if (-1 < (int)uVar1) {
          uVar9 = (ulong)(uVar1 >> 1);
joined_r0x010b6404:
          if (param_4 <= uVar9) {
            uVar8 = FUN_01079ce8(*(undefined8 *)(this + 0x2bc8),uVar7,uVar8,param_4,param_5);
            if ((uVar8 & 1) != 0) goto LAB_010b6314;
            this = (Factory *)((ulong)*(uint *)((long)param_3 + 4) << 0x20);
          }
        }
      }
      else {
        dVar11 = *(double *)((uVar9 | uVar1) + 3);
        if ((0.0 <= dVar11) && (dVar11 < 1.8446744073709552e+19)) {
          uVar9 = (ulong)dVar11;
          goto joined_r0x010b6404;
        }
      }
    }
  }
  uVar8 = 0;
  do {
    if (((*param_2 & 1) == 0) ||
       (puVar3 = param_2, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
      puVar3 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(this,param_2,uVar8);
    }
    local_d8[0] = 3;
    local_cc = 0xc000000000;
    local_b8 = (ulong *)0x0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    local_88 = 0xffffffffffffffff;
    local_c0 = this;
    puVar4 = local_b8;
    local_a8 = param_2;
    local_98 = puVar3;
    uStack_90 = uVar8;
    if (((0xfffffffe < uVar8) &&
        (*(short *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) != 0x41b))
       && (puVar4 = (ulong *)v8::internal::Factory::SizeToString(this,uVar8,true),
          (*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) & 0xffe0)
          == 0x20)) {
      puVar4 = (ulong *)v8::internal::StringTable::LookupString(this);
    }
    local_b8 = puVar4;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)local_d8);
    puVar3 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_d8,false);
    if ((puVar3 == (ulong *)0x0) ||
       (((uVar7 = *puVar3, (uVar7 & 1) != 0 &&
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) &&
        (puVar3 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(this,puVar3,0),
        puVar3 == (ulong *)0x0)))) {
      return *(undefined8 *)(this + 0x180);
    }
    uVar7 = *param_3;
    if ((*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 0x1b) >> 2 & 1) !=
        0) {
      uStack_78 = __strlen_chk("set",4);
      local_80 = "set";
      lVar10 = v8::internal::Factory::NewStringFromOneByte(this,&local_80,0);
      if (lVar10 != 0) {
        puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError(this,0x31,lVar10,0,0);
        uVar6 = v8::internal::Isolate::Throw((Isolate *)this,*puVar5,0);
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    lVar10 = *(long *)(uVar7 + 0x27);
    uVar1 = *(uint *)(uVar7 + 0x2f);
    uVar2 = FUN_010b6dd4(*puVar3);
    *(undefined2 *)(lVar10 + (ulong)uVar1 + param_5 * 2 + uVar8 * 2) = uVar2;
    uVar8 = uVar8 + 1;
  } while (param_4 != uVar8);
LAB_010b6314:
  return *(undefined8 *)(this + 0xa0);
}

