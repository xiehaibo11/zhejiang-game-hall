
/* v8::internal::Debug::IsFrameBlackboxed(v8::internal::JavaScriptFrame*) */

undefined4 __thiscall v8::internal::Debug::IsFrameBlackboxed(Debug *this,JavaScriptFrame *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  undefined4 uVar7;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  
  pIVar6 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar6 + 0x95a0);
  lVar2 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  local_68 = (undefined8 *)0x0;
  JavaScriptFrame::GetFunctions(param_1,(vector *)&local_68);
  puVar4 = local_60;
  puVar3 = local_68;
  do {
    if (puVar3 == puVar4) {
      uVar7 = 1;
      goto joined_r0x00f0c2a4;
    }
    uVar5 = IsBlackboxed(this,*puVar3);
    puVar3 = puVar3 + 1;
  } while ((uVar5 & 1) != 0);
  uVar7 = 0;
joined_r0x00f0c2a4:
  if (local_68 != (undefined8 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (pIVar6 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar6 + 0x95a0) = uVar1;
    *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
    if (*(long *)(pIVar6 + 0x95a8) != lVar2) {
      *(long *)(pIVar6 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar6);
    }
  }
  return uVar7;
}

