
/* v8::internal::JsonStringifier::SerializeJSProxy(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::Object>) */

int v8::internal::JsonStringifier::SerializeJSProxy(JsonStringifier *param_1,ulong *param_2)

{
  IncrementalStringBuilder *this;
  undefined8 uVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  short *psVar12;
  Isolate *pIVar13;
  Factory *this_00;
  double dVar14;
  
  pIVar13 = *(Isolate **)param_1;
  uVar1 = *(undefined8 *)(pIVar13 + 0x95a0);
  lVar2 = *(long *)(pIVar13 + 0x95a8);
  *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
  iVar6 = StackPush();
  if (iVar6 != 1) goto joined_r0x0104ef84;
  uVar9 = *param_2;
  if ((uVar9 & 1) == 0) {
LAB_0104eef0:
    iVar6 = SerializeJSReceiverSlow(param_1,param_2);
    if (iVar6 != 1) goto joined_r0x0104ef84;
  }
  else {
    uVar10 = uVar9 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x423) {
      if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0xa9) {
        uVar5 = JSProxy::IsArray(param_2);
        if ((uVar5 & 0xff) == 0) goto LAB_0104ef80;
        if (0xff < uVar5) goto LAB_0104ee74;
      }
      goto LAB_0104eef0;
    }
LAB_0104ee74:
    puVar7 = (ulong *)Object::GetLengthFromArrayLike(*(undefined8 *)param_1,param_2);
    if (puVar7 == (ulong *)0x0) {
LAB_0104ef80:
      iVar6 = 2;
      goto joined_r0x0104ef84;
    }
    uVar9 = *puVar7;
    if ((uVar9 & 1) != 0) {
      if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x42) {
        dVar14 = *(double *)(uVar9 + 3) + 4503599627370496.0;
        if (((ulong)dVar14 >> 0x20 == 0x43300000) &&
           (*(double *)(uVar9 + 3) == (double)((ulong)dVar14 & 0xffffffff))) goto LAB_0104ee94;
      }
LAB_0104ef64:
      this_00 = *(Factory **)param_1;
      puVar8 = (undefined8 *)Factory::NewInvalidStringLengthError(this_00);
      Isolate::Throw((Isolate *)this_00,*puVar8,0);
      goto LAB_0104ef80;
    }
    if ((int)uVar9 < 0) goto LAB_0104ef64;
    dVar14 = (double)(uVar9 >> 1 & 0x7fffffff);
LAB_0104ee94:
    iVar6 = *(int *)(param_1 + 0x1c);
    this = (IncrementalStringBuilder *)(param_1 + 8);
    lVar11 = **(long **)(param_1 + 0x28);
    *(int *)(param_1 + 0x1c) = iVar6 + 1;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined1 *)(lVar11 + iVar6 + 0xb) = 0x5b;
    }
    else {
      *(undefined2 *)(lVar11 + (long)iVar6 * 2 + 0xb) = 0x5b;
    }
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
      IncrementalStringBuilder::Extend(this);
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    iVar6 = SerializeArrayLikeSlow(param_1,param_2,0,(ulong)dVar14 & 0xffffffff);
    if (iVar6 != 1) goto joined_r0x0104ef84;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    if ((SUB84(dVar14,0) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      iVar6 = *(int *)(param_1 + 0x1c);
      lVar11 = **(long **)(param_1 + 0x28);
      *(int *)(param_1 + 0x1c) = iVar6 + 1;
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined1 *)(lVar11 + iVar6 + 0xb) = 10;
      }
      else {
        *(undefined2 *)(lVar11 + (long)iVar6 * 2 + 0xb) = 10;
      }
      if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
        IncrementalStringBuilder::Extend(this);
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        iVar6 = 0;
        do {
          psVar12 = *(short **)(param_1 + 0x48);
          sVar3 = *psVar12;
          if (*(int *)(param_1 + 0x10) == 0) {
            while (sVar3 != 0) {
              psVar12 = psVar12 + 1;
              iVar4 = *(int *)(param_1 + 0x1c);
              lVar11 = **(long **)(param_1 + 0x28);
              *(int *)(param_1 + 0x1c) = iVar4 + 1;
              *(char *)(lVar11 + iVar4 + 0xb) = (char)sVar3;
              if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
                IncrementalStringBuilder::Extend(this);
              }
              sVar3 = *psVar12;
            }
          }
          else {
            while (sVar3 != 0) {
              psVar12 = psVar12 + 1;
              iVar4 = *(int *)(param_1 + 0x1c);
              lVar11 = **(long **)(param_1 + 0x28);
              *(int *)(param_1 + 0x1c) = iVar4 + 1;
              *(short *)(lVar11 + (long)iVar4 * 2 + 0xb) = sVar3;
              if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
                IncrementalStringBuilder::Extend(this);
              }
              sVar3 = *psVar12;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x50));
      }
    }
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar11 = **(long **)(param_1 + 0x28);
    *(int *)(param_1 + 0x1c) = iVar6 + 1;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined1 *)(lVar11 + iVar6 + 0xb) = 0x5d;
    }
    else {
      *(undefined2 *)(lVar11 + (long)iVar6 * 2 + 0xb) = 0x5d;
    }
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
      IncrementalStringBuilder::Extend(this);
    }
  }
  iVar6 = 1;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -0x10;
joined_r0x0104ef84:
  if (pIVar13 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar13 + 0x95a0) = uVar1;
    *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
    if (*(long *)(pIVar13 + 0x95a8) != lVar2) {
      *(long *)(pIVar13 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar13);
    }
  }
  return iVar6;
}

