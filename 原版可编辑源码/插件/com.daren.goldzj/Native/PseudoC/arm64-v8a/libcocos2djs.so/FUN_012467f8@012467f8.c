
void FUN_012467f8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  char *pcStack_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  HandleScope aHStack_48 [24];
  
  v8::HandleScope::HandleScope(aHStack_48,*(Isolate **)(*param_1 + 8));
  lVar2 = *param_1;
  uVar5 = *(undefined8 *)(lVar2 + 8);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  pcStack_70 = "WebAssembly.Module.customSections()";
  local_78 = uVar5;
  if ((int)param_1[2] < 1) {
    uVar4 = *(ulong *)(*(long *)(lVar2 + 8) + 0xa0);
    if ((uVar4 & 1) != 0) goto LAB_0124686c;
LAB_01246894:
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Argument 0 must be a WebAssembly.Module");
    if (local_68 != 0) goto LAB_012469b4;
    lVar2 = 0;
  }
  else {
    uVar4 = *(ulong *)param_1[1];
    if ((uVar4 & 1) == 0) goto LAB_01246894;
LAB_0124686c:
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x436)
    goto LAB_01246894;
    if ((int)param_1[2] < 1) {
      lVar2 = *(long *)(lVar2 + 8) + 0xa0;
    }
    else {
      lVar2 = param_1[1];
    }
  }
  if ((int)param_1[2] < 2) {
    puVar3 = (ulong *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    puVar3 = (ulong *)(param_1[1] + -8);
  }
  uVar4 = *puVar3;
  if ((((uVar4 & 3) == 1) &&
      (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar4 - 1)) == 0x43)) &&
     ((*(uint *)(uVar4 + 0x17) & 0xfffffffe) == 10)) {
    v8::internal::wasm::ErrorThrower::TypeError((char *)&local_78,"Argument 1 is required");
    goto LAB_012469b4;
  }
  if ((int)param_1[2] < 2) {
    puVar3 = (ulong *)(*(long *)(*param_1 + 8) + 0xa0);
    uVar4 = *puVar3;
    if ((uVar4 & 1) != 0) goto LAB_0124695c;
LAB_01246974:
    puVar3 = (ulong *)v8::internal::Object::ConvertToString(uVar5,puVar3);
  }
  else {
    puVar3 = (ulong *)(param_1[1] + -8);
    uVar4 = *puVar3;
    if ((uVar4 & 1) == 0) goto LAB_01246974;
LAB_0124695c:
    if (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))
    goto LAB_01246974;
  }
  if (puVar3 != (ulong *)0x0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar1 = (undefined8 *)v8::internal::wasm::GetCustomSections(uVar5,lVar2,puVar3,&local_78);
    if (local_68 == 0) {
      if (puVar1 == (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(*param_1 + 0x10);
      }
      else {
        uVar5 = *puVar1;
      }
      *(undefined8 *)(*param_1 + 0x18) = uVar5;
    }
  }
LAB_012469b4:
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

