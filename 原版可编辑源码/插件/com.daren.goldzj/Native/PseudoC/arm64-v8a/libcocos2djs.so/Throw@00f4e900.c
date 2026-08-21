
/* v8::internal::Isolate::Throw(v8::internal::Object, v8::internal::MessageLocation*) */

undefined8 __thiscall v8::internal::Isolate::Throw(Isolate *this,ulong param_2,ulong *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  Isolate IVar5;
  bool bVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  undefined8 local_90;
  ulong local_88 [4];
  ulong local_68;
  
  pIVar1 = this + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  local_68 = param_2;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = puVar2;
    if (puVar3 == puVar2) {
      puVar8 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = param_2;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),param_2);
  }
  if (FLAG_print_all_exceptions != '\0') {
    puts("=========================================================");
    puts("Exception thrown:");
    if (param_3 != (ulong *)0x0) {
      puVar13 = (ulong *)*param_3;
      local_88[0] = *puVar13;
      uVar9 = Script::GetNameOrSourceURL((Script *)local_88);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar1;
        if (puVar10 == *(ulong **)(this + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar10 + 1;
        *puVar10 = uVar9;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),uVar9);
      }
      printf("at ");
      uVar9 = *puVar10;
      if ((((uVar9 & 1) == 0) ||
          (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) ||
         (*(int *)(uVar9 + 7) < 1)) {
        printf("<anonymous>");
      }
      else {
        local_88[0] = uVar9;
        String::PrintOn((String *)local_88,(__sFILE *)waitpid);
      }
      local_88[0] = *puVar13;
      iVar7 = Script::GetLineNumber((Script *)local_88,(int)param_3[1]);
      printf(", line %d\n",(ulong)(iVar7 + 1));
    }
    Object::Print((Object *)&local_68);
    puts("Stack Trace:");
    PrintStack(this,waitpid,1);
    puts("=========================================================");
  }
  if ((*(long *)(this + 0x2bb8) == 0) ||
     (bVar4 = *(byte *)(*(long *)(this + 0x2bb8) + 0x28), (bVar4 & 1) != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = (bVar4 & 4) == 0;
  }
  IVar5 = this[0x2c18];
  this[0x2c18] = (Isolate)0x0;
  if ((int)local_68 != *(int *)(this + 0x188)) {
    Debug::OnThrow(*(Debug **)(this + 0xb6c8),puVar8);
  }
  if (!bVar6 && IVar5 == (Isolate)0x0) {
    MessageLocation::MessageLocation((MessageLocation *)local_88);
    if ((param_3 == (ulong *)0x0) &&
       (uVar9 = ComputeLocation(this,(MessageLocation *)local_88), param_3 = local_88,
       (uVar9 & 1) == 0)) {
      param_3 = (ulong *)0x0;
    }
    if (*(int *)(*(long *)(this + 0x9508) + 8) == 0) {
      puVar11 = (undefined8 *)CreateMessage(this,puVar8,param_3);
      *(undefined8 *)(this + 0x2c10) = *puVar11;
      if (((FLAG_abort_on_uncaught_exception != '\0') &&
          (uVar9 = PredictExceptionCatcher(this), (uVar9 & 0xfffffffd) == 0)) &&
         ((*(code **)(this + 0xc720) == (code *)0x0 ||
          (uVar9 = (**(code **)(this + 0xc720))(this), (uVar9 & 1) != 0)))) {
        FLAG_abort_on_uncaught_exception = 0;
        MessageHandler::GetLocalizedMessage(&local_90,this,puVar11);
        PrintF((__sFILE *)__cxa_thread_atexit_impl,"%s\n\nFROM\n",local_90);
        FUN_00f4f284(&local_90);
        PrintCurrentStackTrace(this,(__sFILE *)__cxa_thread_atexit_impl);
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
    }
    else {
      ReportBootstrappingException(puVar8,param_3);
    }
  }
  uVar12 = *(undefined8 *)(this + 0x180);
  *(ulong *)(this + 0x2bd8) = *puVar8;
  *(ulong **)pIVar1 = puVar2;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(ulong **)(this + 0x95a8) != puVar3) {
    *(ulong **)(this + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(this);
  }
  return uVar12;
}

