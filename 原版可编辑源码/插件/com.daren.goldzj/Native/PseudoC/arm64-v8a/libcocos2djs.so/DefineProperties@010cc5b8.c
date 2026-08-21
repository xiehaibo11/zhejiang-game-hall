
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::JSReceiver::DefineProperties(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::JSReceiver::DefineProperties(Factory *param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  ushort uVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  char *local_c0;
  undefined8 uStack_b8;
  byte local_64 [4];
  
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
    uStack_b8 = __strlen_chk("Object.defineProperties",0x18);
    local_c0 = "Object.defineProperties";
    uVar5 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_c0);
    puVar6 = (undefined8 *)Factory::NewTypeError(param_1,0x19,uVar5,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar6,0);
    return (ulong *)0x0;
  }
  uVar10 = *param_3;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
    param_3 = (ulong *)Object::ToObjectImpl(param_1,param_3,0);
  }
  if (param_3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  puVar3 = (ulong *)KeyAccumulator::GetKeys(param_3,0,0,1,0,0);
  if (puVar3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar10 = *puVar3;
  uVar9 = *(uint *)(uVar10 + 3);
  if ((int)uVar9 >> 1 == 0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar14 = (long)((ulong)uVar9 << 0x20) >> 0x21;
    pbVar4 = operator_new(lVar14 * 0x28);
    pbVar11 = pbVar4;
    do {
      pbVar11[0x10] = 0;
      pbVar11[0x11] = 0;
      pbVar11[0x12] = 0;
      pbVar11[0x13] = 0;
      pbVar11[0x14] = 0;
      pbVar11[0x15] = 0;
      pbVar11[0x16] = 0;
      pbVar11[0x17] = 0;
      pbVar11[8] = 0;
      pbVar11[9] = 0;
      pbVar11[10] = 0;
      pbVar11[0xb] = 0;
      pbVar11[0xc] = 0;
      pbVar11[0xd] = 0;
      pbVar11[0xe] = 0;
      pbVar11[0xf] = 0;
      pbVar11[0x20] = 0;
      pbVar11[0x21] = 0;
      pbVar11[0x22] = 0;
      pbVar11[0x23] = 0;
      pbVar11[0x24] = 0;
      pbVar11[0x25] = 0;
      pbVar11[0x26] = 0;
      pbVar11[0x27] = 0;
      pbVar11[0x18] = 0;
      pbVar11[0x19] = 0;
      pbVar11[0x1a] = 0;
      pbVar11[0x1b] = 0;
      pbVar11[0x1c] = 0;
      pbVar11[0x1d] = 0;
      pbVar11[0x1e] = 0;
      pbVar11[0x1f] = 0;
      lVar14 = lVar14 + -1;
      *pbVar11 = *pbVar11 & 0xc0;
      pbVar11 = pbVar11 + 0x28;
    } while (lVar14 != 0);
    uVar10 = *puVar3;
    uVar9 = *(uint *)(uVar10 + 3);
  }
  if (1 < (int)uVar9) {
    iVar13 = 0;
    lVar14 = 0;
    lVar12 = 0;
    do {
      uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + (long)iVar13 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_1 + 0x95a0);
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      }
      local_64[0] = 0;
      LookupIterator::PropertyOrElement
                ((LookupIterator *)&local_c0,param_1,param_3,puVar7,local_64,1);
      uVar10 = GetPropertyAttributes((LookupIterator *)&local_c0);
      if ((uVar10 & 0xff) == 0) {
LAB_010cc860:
        param_2 = (ulong *)0x0;
        goto LAB_010cc864;
      }
      uVar9 = (uint)(uVar10 >> 0x20);
      if ((uVar9 != 0x40) && ((uVar9 >> 1 & 1) == 0)) {
        lVar8 = Object::GetProperty((LookupIterator *)&local_c0,false);
        if (lVar8 != 0) {
          bVar1 = PropertyDescriptor::ToPropertyDescriptor(param_1,lVar8,pbVar4 + lVar12 * 0x28);
          local_64[0] = bVar1 & 1;
          if ((bVar1 & 1) != 0) {
            lVar8 = lVar12 * 0x28;
            lVar12 = lVar12 + 1;
            *(ulong **)(pbVar4 + lVar8 + 0x20) = puVar7;
            goto LAB_010cc75c;
          }
        }
        goto LAB_010cc860;
      }
LAB_010cc75c:
      uVar10 = *puVar3;
      lVar14 = lVar14 + 1;
      iVar13 = iVar13 + 4;
    } while (lVar14 < *(int *)(uVar10 + 3) >> 1);
    pbVar11 = pbVar4;
    if (lVar12 != 0) {
      do {
        uVar2 = DefineOwnProperty(param_1,param_2,*(undefined8 *)(pbVar11 + 0x20),pbVar11,1);
        if ((uVar2 & 0xff) == 0) {
          param_2 = (ulong *)0x0;
          break;
        }
        if (uVar2 < 0x100) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","status.FromJust()");
        }
        lVar12 = lVar12 + -1;
        pbVar11 = pbVar11 + 0x28;
      } while (lVar12 != 0);
      goto LAB_010cc868;
    }
  }
LAB_010cc864:
  if (pbVar4 == (byte *)0x0) {
    return param_2;
  }
LAB_010cc868:
  operator_delete(pbVar4);
  return param_2;
}

