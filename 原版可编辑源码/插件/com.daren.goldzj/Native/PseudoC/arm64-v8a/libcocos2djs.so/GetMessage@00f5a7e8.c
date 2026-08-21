
/* v8::internal::MessageHandler::GetMessage(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::MessageHandler::GetMessage(Isolate *param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char *local_40;
  undefined8 uStack_38;
  
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  iVar1 = *(int *)(*param_2 + 0xb);
  uVar3 = Object::NoSideEffectsToString(param_1,puVar2);
  lVar4 = MessageFormatter::Format(param_1,iVar1 >> 1,uVar3,param_1 + 200,param_1 + 200);
  if (lVar4 != 0) {
    String::Flatten(param_1,lVar4,0);
    return;
  }
  *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
  local_40 = "<error>";
  uStack_38 = 7;
  Factory::InternalizeString<unsigned_char>((Factory *)param_1,(Vector *)&local_40,false);
  return;
}

