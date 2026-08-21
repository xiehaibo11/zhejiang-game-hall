
/* v8::internal::MessageHandler::ReportMessageNoExceptions(v8::internal::Isolate*,
   v8::internal::MessageLocation const*, v8::internal::Handle<v8::internal::Object>,
   v8::Local<v8::Value>) */

void v8::internal::MessageHandler::ReportMessageNoExceptions
               (Isolate *param_1,undefined8 param_2,Message *param_3,ulong *param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  int iVar13;
  RuntimeCallStats *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  TryCatch aTStack_98 [48];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar6 = Message::ErrorLevel(param_3);
  uVar9 = *(ulong *)(param_1 + 0xf98);
  iVar1 = *(int *)(uVar9 + 7) >> 1;
  if (iVar1 == 0) {
    DefaultMessageReport(param_1,param_2,param_3);
    if (*(int *)(param_1 + 0x2c20) != (int)*(undefined8 *)(param_1 + 0xa8)) {
      *(undefined8 *)(param_1 + 0x2c20) = *(undefined8 *)(param_1 + 0xa8);
    }
  }
  else if (1 < *(int *)(uVar9 + 7)) {
    iVar13 = 4;
    lVar12 = 1;
    while( true ) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      puVar3 = *(ulong **)(param_1 + 0x95a8);
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
      uVar4 = *(uint *)((long)iVar13 + 7 + uVar9);
      if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(param_1 + 0xa0))) {
        uVar10 = uVar9 & 0xffffffff00000000;
        uVar9 = uVar10 | *(uint *)(uVar9 + (long)iVar13 + 7);
        if ((uVar6 & *(int *)(uVar9 + 0xf) >> 1) != 0) {
          pcVar11 = *(code **)((uVar10 | *(uint *)(uVar9 + 7)) + 3);
          uVar10 = uVar10 | *(uint *)(uVar9 + 0xb);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = puVar2;
            if (puVar3 == puVar2) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar10;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
          }
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = (RuntimeCallStats *)0x0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          if (TracingFlags::runtime_stats != 0) {
            local_c0 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
            RuntimeCallStats::Enter(local_c0,(RuntimeCallTimer *)&uStack_b8,0x9b);
          }
          TryCatch::TryCatch(aTStack_98,(Isolate *)param_1);
          if (((*puVar7 & 1) == 0) || (puVar8 = param_4, (int)*puVar7 != *(int *)(param_1 + 0xa0)))
          {
            puVar8 = puVar7;
          }
          (*pcVar11)(param_3,puVar8);
          TryCatch::~TryCatch(aTStack_98);
          if (local_c0 != (RuntimeCallStats *)0x0) {
            RuntimeCallStats::Leave(local_c0,(RuntimeCallTimer *)&uStack_b8);
          }
          if (*(int *)(param_1 + 0x2c20) != (int)*(undefined8 *)(param_1 + 0xa8)) {
            *(undefined8 *)(param_1 + 0x2c20) = *(undefined8 *)(param_1 + 0xa8);
          }
        }
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
        *(ulong **)(param_1 + 0x95a8) = puVar3;
        HandleScope::DeleteExtensions(param_1);
      }
      if (iVar1 <= lVar12) break;
      uVar9 = *(ulong *)(param_1 + 0xf98);
      iVar13 = iVar13 + 4;
      lVar12 = lVar12 + 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

