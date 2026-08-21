
/* v8::internal::MessageHandler::ReportMessage(v8::internal::Isolate*, v8::internal::MessageLocation
   const*, v8::internal::Handle<v8::internal::JSMessageObject>) */

void v8::internal::MessageHandler::ReportMessage
               (Isolate *param_1,undefined8 param_2,Message *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char *local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar6 = Message::ErrorLevel(param_3);
  if (iVar6 != 8) {
    ReportMessageNoExceptions(param_1,param_2,param_3,0);
    goto LAB_00f5a548;
  }
  uVar11 = *(ulong *)(param_1 + 0x2bd8);
  pIVar1 = param_1 + 0x95a0;
  if (((uVar11 & 1) != 0) && ((int)uVar11 == *(int *)(param_1 + 0xa8))) {
    uVar11 = *(ulong *)(param_1 + 0xa0);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar11;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  uVar11 = *(ulong *)(param_1 + 0x2bd8);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar11;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
  param_1[0x2c19] = (Isolate)0x0;
  uVar4 = *(uint *)(*(ulong *)param_3 + 0xf);
  if (((uVar4 & 1) != 0) &&
     (uVar11 = *(ulong *)param_3 & 0xffffffff00000000,
     0xa9 < *(ushort *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar4) - 1)))) {
    puVar2 = *(ulong **)pIVar1;
    puVar3 = *(ulong **)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    uVar4 = *(uint *)(*(ulong *)param_3 + 0xf);
    uVar11 = *(ulong *)param_3 & 0xffffffff00000000 | (ulong)uVar4;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = puVar2;
      if (puVar3 == puVar2) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = uVar11;
      if ((uVar4 & 1) != 0) goto LAB_00f5a3c8;
LAB_00f5a3f8:
      TryCatch::TryCatch((TryCatch *)&local_98,(Isolate *)param_1);
      TryCatch::SetVerbose((TryCatch *)&local_98,false);
      TryCatch::SetCaptureMessage((TryCatch *)&local_98,false);
      uVar11 = *puVar9;
      if (((uVar11 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
        puVar9 = (ulong *)Object::ConvertToString(param_1,puVar9);
      }
      TryCatch::~TryCatch((TryCatch *)&local_98);
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar9;
      if ((uVar11 & 1) == 0) goto LAB_00f5a3f8;
LAB_00f5a3c8:
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x429)
      goto LAB_00f5a3f8;
      puVar9 = (ulong *)Object::NoSideEffectsToString(param_1,puVar9);
    }
    if (puVar9 == (ulong *)0x0) {
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
      param_1[0x2c19] = (Isolate)0x0;
      uStack_90 = __strlen_chk("exception",10);
      local_98 = "exception";
      puVar9 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_98,0);
      if (puVar9 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
    uVar12 = *(ulong *)param_3;
    uVar11 = *puVar9;
    *(int *)(uVar12 + 0xf) = (int)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar11);
        uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar11);
      }
    }
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
      *(ulong **)(param_1 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_1);
    }
  }
  ReportMessageNoExceptions(param_1,param_2,param_3,puVar7);
  *(ulong *)(param_1 + 0x2bd8) = *puVar8;
LAB_00f5a548:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

