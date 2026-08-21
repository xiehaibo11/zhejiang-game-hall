
/* v8::internal::Accessors::ArrayLengthSetter(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<v8::Boolean> const&) */

void v8::internal::Accessors::ArrayLengthSetter(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  Factory *this;
  double dVar12;
  double dVar13;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_44;
  
  this = *(Factory **)(*param_3 + 0x10);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x71);
  }
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  puVar9 = (ulong *)(*param_3 + 8);
  uVar4 = JSArray::HasReadOnlyLength(puVar9);
  local_44 = 0;
  uVar5 = JSArray::AnythingToArrayLength(this,param_2,&local_44);
  if ((uVar5 & 1) == 0) {
LAB_00ed9e80:
    Isolate::OptionalRescheduleException((Isolate *)this,false);
    goto LAB_00ed9f48;
  }
  if (((uVar4 & 1) == 0) && (uVar4 = JSArray::HasReadOnlyLength(puVar9), (uVar4 & 1) != 0)) {
    uVar3 = *(uint *)(*puVar9 + 0xb);
    dVar13 = (double)NEON_ucvtf((ulong)local_44);
    if ((uVar3 & 1) == 0) {
      dVar12 = (double)((int)uVar3 >> 1);
    }
    else {
      dVar12 = *(double *)((*puVar9 & 0xffffffff00000000 | (ulong)uVar3) + 3);
    }
    if (dVar12 == dVar13) goto LAB_00ed9da4;
    plVar10 = (long *)*param_3;
    if (*plVar10 != 2) {
      if ((*plVar10 == 4) && (uVar4 = ShouldThrowOnError((Isolate *)plVar10[2]), (uVar4 & 1) == 0))
      goto LAB_00ed9f38;
      puVar7 = (ulong *)Object::TypeOf(this,puVar9);
      uVar8 = 0xa5;
LAB_00ed9e6c:
      puVar6 = (undefined8 *)Factory::NewTypeError(this,uVar8,param_1,puVar7,puVar9);
      Isolate::Throw((Isolate *)this,*puVar6,0);
      goto LAB_00ed9e80;
    }
LAB_00ed9f3c:
    lVar11 = *(long *)(plVar10[2] + 0xc0);
  }
  else {
LAB_00ed9da4:
    JSArray::SetLength(puVar9,local_44);
    uVar3 = *(uint *)(*puVar9 + 0xb);
    if ((uVar3 & 1) == 0) {
      if ((int)uVar3 < 0) goto LAB_00ed9fa8;
      dVar13 = (double)(ulong)(uVar3 >> 1);
    }
    else {
      uVar5 = *puVar9 & 0xffffffff00000000;
      uVar4 = uVar5 | uVar3;
      if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
LAB_00ed9fa8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","array->length().ToArrayLength(&actual_new_len)");
      }
      dVar12 = *(double *)(uVar4 + 3);
      dVar13 = dVar12 + 4503599627370496.0;
      if (((ulong)dVar13 >> 0x20 != 0x43300000) || (dVar12 != (double)((ulong)dVar13 & 0xffffffff)))
      goto LAB_00ed9fa8;
    }
    plVar10 = (long *)*param_3;
    if (SUB84(dVar13,0) != local_44) {
      if (*plVar10 != 2) {
        if ((*plVar10 != 4) || (uVar4 = ShouldThrowOnError((Isolate *)plVar10[2]), (uVar4 & 1) != 0)
           ) {
          param_1 = Factory::NewNumberFromUint(this,SUB84(dVar13,0) - 1);
          uVar8 = 0xa3;
          puVar7 = puVar9;
          puVar9 = (ulong *)0x0;
          goto LAB_00ed9e6c;
        }
LAB_00ed9f38:
        plVar10 = (long *)*param_3;
      }
      goto LAB_00ed9f3c;
    }
    lVar11 = *(long *)(plVar10[2] + 0xb8);
  }
  plVar10[4] = lVar11;
LAB_00ed9f48:
  *(undefined8 *)(this + 0x95a0) = uVar1;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar2) {
    *(long *)(this + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions((Isolate *)this);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return;
}

