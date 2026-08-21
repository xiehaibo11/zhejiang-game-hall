
undefined8 FUN_010bfb3c(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong uVar11;
  Factory *this;
  double dVar12;
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
  
  uVar9 = *param_3;
  this = (Factory *)(uVar9 & 0xffffffff00000000);
  if ((*(uint *)(((ulong)this | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination_ta->WasDetached()");
  }
  if (param_4 == 0) {
LAB_010bfe48:
    return *(undefined8 *)(this + 0xa0);
  }
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
    uVar11 = uVar8 & 0xffffffff00000000;
    if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x41b) {
      if ((((byte)(*(byte *)((uVar11 | 10) + (ulong)*(uint *)(uVar8 - 1)) >> 3 | 1) != 0x1b) &&
          ((*(uint *)((uVar11 | *(uint *)(uVar8 + 0xb)) + 0x1b) >> 2 & 1) == 0)) &&
         (param_5 + param_4 <= *(ulong *)(uVar8 + 0x1f))) {
        FUN_0107e884(uVar8,uVar9,param_4,param_5);
        goto LAB_010bfe48;
      }
    }
    else if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x423) {
      uVar2 = *(uint *)(uVar8 + 0xb);
      if ((uVar2 & 1) == 0) {
        if ((int)uVar2 < 0) goto LAB_010bfb94;
        uVar11 = (ulong)(uVar2 >> 1);
      }
      else {
        dVar12 = *(double *)((uVar11 | uVar2) + 3);
        if ((dVar12 < 0.0) || (1.8446744073709552e+19 <= dVar12)) goto LAB_010bfb94;
        uVar11 = (ulong)dVar12;
      }
      if (param_4 <= uVar11) {
        uVar9 = FUN_0107b07c(*(undefined8 *)(this + 0x2bc8),uVar8,uVar9,param_4,param_5);
        if ((uVar9 & 1) != 0) goto LAB_010bfe48;
        this = (Factory *)((ulong)*(uint *)((long)param_3 + 4) << 0x20);
      }
    }
  }
LAB_010bfb94:
  uVar9 = 0;
  uVar8 = *param_2;
  do {
    if (((uVar8 & 1) == 0) ||
       (puVar3 = param_2, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)) {
      puVar3 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(this,param_2,uVar9);
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
    uStack_90 = uVar9;
    if (((0xfffffffe < uVar9) &&
        (*(short *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) != 0x41b))
       && (puVar4 = (ulong *)v8::internal::Factory::SizeToString(this,uVar9,true),
          (*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) & 0xffe0)
          == 0x20)) {
      puVar4 = (ulong *)v8::internal::StringTable::LookupString(this);
    }
    local_b8 = puVar4;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)local_d8);
    puVar3 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)local_d8,false);
    if ((puVar3 == (ulong *)0x0) ||
       (((uVar8 = *puVar3, (uVar8 & 1) != 0 &&
         (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42)) &&
        (puVar3 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(this,puVar3,0),
        puVar3 == (ulong *)0x0)))) {
      return *(undefined8 *)(this + 0x180);
    }
    uVar8 = *param_3;
    if ((*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x1b) >> 2 & 1) !=
        0) {
      uStack_78 = __strlen_chk("set",4);
      local_80 = "set";
      lVar5 = v8::internal::Factory::NewStringFromOneByte(this,&local_80,0);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError(this,0x31,lVar5,0,0);
        uVar7 = v8::internal::Isolate::Throw((Isolate *)this,*puVar6,0);
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar11 = *puVar3;
    if ((uVar11 & 1) == 0) {
      if ((int)uVar11 < 0) {
LAB_010bfbc0:
        uVar10 = 0;
      }
      else {
        iVar1 = (int)uVar11 >> 1;
        if (0xfe < iVar1) {
          iVar1 = 0xff;
        }
        uVar10 = (undefined1)iVar1;
      }
    }
    else {
      dVar12 = *(double *)(uVar11 + 3);
      if (dVar12 <= 0.0) goto LAB_010bfbc0;
      if (dVar12 <= 255.0) {
        uVar10 = (undefined1)(long)(double)(long)dVar12;
      }
      else {
        uVar10 = 0xff;
      }
    }
    *(undefined1 *)(*(long *)(uVar8 + 0x27) + (ulong)*(uint *)(uVar8 + 0x2f) + param_5 + uVar9) =
         uVar10;
    uVar9 = uVar9 + 1;
    if (param_4 == uVar9) goto LAB_010bfe48;
    uVar8 = *param_2;
  } while( true );
}

