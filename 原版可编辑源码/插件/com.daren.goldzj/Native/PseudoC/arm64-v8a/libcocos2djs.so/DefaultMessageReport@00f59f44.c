
/* v8::internal::MessageHandler::DefaultMessageReport(v8::internal::Isolate*,
   v8::internal::MessageLocation const*, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::MessageHandler::DefaultMessageReport
               (Isolate *param_1,undefined8 *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  void *pvVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  ulong local_68;
  void *local_60;
  char *local_58;
  
  pIVar1 = param_1 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar4 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  puVar9 = (undefined8 *)GetMessage(param_1,param_3);
  local_58 = (char *)*puVar9;
  String::ToCString(&local_60,&local_58,1,1,0);
  if (param_1 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar2;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar4) {
      *(long *)(param_1 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_1);
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    PrintF("%s\n",local_60);
    goto LAB_00f5a100;
  }
  puVar3 = *(ulong **)pIVar1;
  puVar5 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar6 = *(uint *)(*(ulong *)*param_2 + 7);
  uVar12 = *(ulong *)*param_2 & 0xffffffff00000000 | (ulong)uVar6;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = puVar3;
    if (puVar5 == puVar3) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar12;
    if ((uVar6 & 1) != 0) goto LAB_00f5a05c;
LAB_00f5a0b0:
    bVar8 = true;
    pcVar11 = "<unknown>";
    pcVar13 = (char *)0x0;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    uVar12 = *puVar10;
    if ((uVar12 & 1) == 0) goto LAB_00f5a0b0;
LAB_00f5a05c:
    if (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))
    goto LAB_00f5a0b0;
    local_68 = uVar12;
    String::ToCString(&local_58,&local_68,1,1,0);
    bVar8 = local_58 == (char *)0x0;
    pcVar11 = "<unknown>";
    pcVar13 = local_58;
    if (!bVar8) {
      pcVar11 = local_58;
    }
  }
  PrintF("%s:%i: %s\n",pcVar11,(ulong)*(uint *)(param_2 + 1),local_60);
  if (!bVar8) {
    operator_delete__(pcVar13);
  }
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar5) {
    *(ulong **)(param_1 + 0x95a8) = puVar5;
    HandleScope::DeleteExtensions(param_1);
  }
LAB_00f5a100:
  pvVar7 = local_60;
  local_60 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete__(pvVar7);
  }
  return;
}

