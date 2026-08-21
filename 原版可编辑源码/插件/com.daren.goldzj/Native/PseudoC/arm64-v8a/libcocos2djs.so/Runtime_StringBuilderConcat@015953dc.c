
/* v8::internal::Runtime_StringBuilderConcat(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StringBuilderConcat(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  byte local_54 [4];
  ulong local_50;
  uint local_44;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_01595770(param_1,param_2,param_3);
    return uVar11;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x423)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSArray()");
  }
  local_50 = param_2[-1];
  uVar11 = Object::ToInt32((Object *)&local_50,(int *)&local_44);
  if ((uVar11 & 1) == 0) {
    puVar6 = (undefined8 *)Factory::NewInvalidStringLengthError((Factory *)param_3);
    uVar9 = *puVar6;
  }
  else {
    uVar11 = param_2[-2];
    if (((uVar11 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsString()");
    }
    uVar11 = *param_2;
    uVar3 = *(uint *)(uVar11 + 0xb);
    if ((uVar3 & 1) == 0) {
      if ((int)uVar3 < 0) {
LAB_01595734:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","TryNumberToSize(array->length(), &actual_array_length)");
      }
      uVar12 = (ulong)(uVar3 >> 1);
    }
    else {
      dVar14 = *(double *)((uVar11 & 0xffffffff00000000 | (ulong)uVar3) + 3);
      if ((dVar14 < 0.0) || (1.8446744073709552e+19 <= dVar14)) goto LAB_01595734;
      uVar12 = (ulong)dVar14;
    }
    if ((int)local_44 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","array_length >= 0");
    }
    if (uVar12 < local_44) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<size_t>(array_length) <= actual_array_length");
    }
    if (0x2f < *(byte *)((uVar11 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar11 - 1))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","array->HasFastElements()");
    }
    JSObject::ValidateElements();
    bVar4 = *(byte *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1)) + 10);
    if ((bVar4 & 0xf0) != 0x10) {
      uVar10 = 2;
      if (((uint)(bVar4 < 0x30) & (bVar4 & 8) >> 3) != 0) {
        uVar10 = 3;
      }
      JSObject::TransitionElementsKind(param_2,uVar10);
    }
    uVar13 = param_2[-2];
    uVar12 = *param_2;
    uVar11 = uVar12 & 0xffffffff00000000;
    if ((*(byte *)((uVar11 | 10) + (ulong)*(uint *)(uVar12 - 1)) & 0xf0) == 0x10) {
      local_54[0] = *(byte *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) >> 3
                    & 1;
      uVar12 = uVar11 | *(uint *)(uVar12 + 7);
      uVar3 = *(int *)(uVar12 + 3) >> 1;
      if ((int)uVar3 < (int)local_44) {
        local_44 = uVar3;
      }
      if (local_44 == 1) {
        if (((*(uint *)(uVar12 + 7) & 1) != 0) &&
           (uVar7 = uVar11 | *(uint *)(uVar12 + 7),
           *(ushort *)((uVar11 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40)) goto LAB_01595614;
LAB_015955e8:
        iVar5 = StringBuilderConcatLength(*(undefined4 *)(uVar13 + 7),uVar12,local_44,local_54);
        if (iVar5 != 0) {
          if (iVar5 == -1) goto LAB_01595600;
          if (local_54[0] == 0) {
            puVar8 = (ulong *)Factory::NewRawTwoByteString((Factory *)param_3,iVar5,0);
            if (puVar8 == (ulong *)0x0) goto LAB_015956e4;
            StringBuilderConcatHelper<unsigned_short>
                      (param_2[-2],*puVar8 + 0xb,
                       *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7),local_44);
          }
          else {
            puVar8 = (ulong *)Factory::NewRawOneByteString((Factory *)param_3,iVar5,0);
            if (puVar8 == (ulong *)0x0) {
LAB_015956e4:
              uVar7 = *(ulong *)(param_3 + 0x180);
              goto LAB_01595614;
            }
            StringBuilderConcatHelper<unsigned_char>
                      (param_2[-2],*puVar8 + 0xb,
                       *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7),local_44);
          }
          uVar7 = *puVar8;
          goto LAB_01595614;
        }
      }
      else if (local_44 != 0) goto LAB_015955e8;
      uVar7 = *(ulong *)(param_3 + 200);
      goto LAB_01595614;
    }
LAB_01595600:
    uVar9 = *(undefined8 *)(param_3 + 0x748);
  }
  uVar7 = Isolate::Throw(param_3,uVar9,0);
LAB_01595614:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

