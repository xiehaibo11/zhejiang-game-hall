
void FUN_016fa1b0(undefined8 *param_1,undefined8 param_2,Node *param_3,ulong *param_4,char *param_5)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  sVar1 = *(short *)(*(Operator **)param_3 + 0x10);
  if (sVar1 == 0x32) {
    if (*param_5 != '\0') {
      uVar3 = *(undefined8 *)(param_5 + 8);
      uVar4 = *(ulong *)(param_5 + 0x10);
      plVar5 = (long *)v8::internal::compiler::NodeProperties::GetValueInput(param_3,0);
      iVar2 = v8::internal::compiler::ParameterIndexOf(*(Operator **)param_3);
      if ((iVar2 == *(int *)(*plVar5 + 0x20) + -2) && (uVar4 <= *param_4)) {
        *param_4 = *param_4 - uVar4;
        v8::internal::compiler::ObjectRef::ObjectRef((ObjectRef *)&local_50,param_2,uVar3,0);
        uVar4 = v8::internal::compiler::ObjectRef::IsContext((ObjectRef *)&local_50);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)param_1 = 1;
          param_1[2] = uStack_48;
          param_1[1] = local_50;
          return;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsContext()");
      }
    }
  }
  else if (sVar1 == 0x1e) {
    uVar3 = v8::internal::compiler::HeapConstantOf(*(Operator **)param_3);
    v8::internal::compiler::ObjectRef::ObjectRef((ObjectRef *)&local_50,param_2,uVar3,0);
    uVar4 = v8::internal::compiler::ObjectRef::IsHeapObject((ObjectRef *)&local_50);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar4 = v8::internal::compiler::ObjectRef::IsContext((ObjectRef *)&local_50);
    if ((uVar4 & 1) != 0) {
      auVar6 = v8::internal::compiler::ObjectRef::AsContext((ObjectRef *)&local_50);
      *(undefined1 *)param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 1) = auVar6;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

