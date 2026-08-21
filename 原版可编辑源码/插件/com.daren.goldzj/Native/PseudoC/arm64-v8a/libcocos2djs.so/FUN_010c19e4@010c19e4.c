
undefined8 FUN_010c19e4(undefined8 param_1,ulong *param_2,ulong *param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  Factory *this;
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
  if (param_4 != 0) {
    uVar2 = *param_2;
    if ((uVar2 & 1) != 0) {
      uVar9 = uVar2 & 0xffffffff00000000;
      if ((((*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x41b) &&
           ((byte)(*(byte *)((uVar9 | 10) + (ulong)*(uint *)(uVar2 - 1)) >> 3 | 1) == 0x1b)) &&
          ((*(uint *)((uVar9 | *(uint *)(uVar2 + 0xb)) + 0x1b) >> 2 & 1) == 0)) &&
         ((ulong)(param_5 + param_4) <= *(ulong *)(uVar2 + 0x1f))) {
        FUN_0107ef7c(uVar2,uVar8,param_4,param_5);
        goto LAB_010c1bfc;
      }
    }
    uVar8 = 0;
    while( true ) {
      if (((uVar2 & 1) == 0) ||
         (puVar3 = param_2, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0xa9)) {
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
            (*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) &
            0xffe0) == 0x20)) {
        puVar4 = (ulong *)v8::internal::StringTable::LookupString(this);
      }
      local_b8 = puVar4;
      v8::internal::LookupIterator::Start<true>((LookupIterator *)local_d8);
      lVar5 = v8::internal::Object::GetProperty((LookupIterator *)local_d8,false);
      if ((lVar5 == 0) ||
         (puVar6 = (undefined8 *)v8::internal::BigInt::FromObject(this,lVar5),
         puVar6 == (undefined8 *)0x0)) {
        return *(undefined8 *)(this + 0x180);
      }
      uVar2 = *param_3;
      if ((*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 0x1b) >> 2 & 1)
          != 0) {
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
      lVar5 = *(long *)(uVar2 + 0x27);
      uVar1 = *(uint *)(uVar2 + 0x2f);
      local_80 = (char *)*puVar6;
      uVar7 = v8::internal::BigInt::AsUint64((BigInt *)&local_80,(bool *)0x0);
      *(undefined8 *)(lVar5 + (ulong)uVar1 + param_5 * 8 + uVar8 * 8) = uVar7;
      if (param_4 - 1U == uVar8) break;
      uVar2 = *param_2;
      uVar8 = uVar8 + 1;
    }
  }
LAB_010c1bfc:
  return *(undefined8 *)(this + 0xa0);
}

