
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForInstanceOf(v8::internal::compiler::FeedbackSource
   const&) */

void __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForInstanceOf
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  Zone *pZVar8;
  ulong uVar9;
  FeedbackVector FVar10;
  undefined1 uVar11;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined7 uStack_70;
  undefined4 local_60;
  undefined3 uStack_5c;
  FeedbackVector local_58;
  undefined2 uStack_57;
  undefined4 uStack_55;
  undefined1 uStack_51;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88 = *(undefined8 **)param_1;
  local_78 = *(undefined4 *)(param_1 + 8);
  uStack_80 = 0;
  if (local_88 == (undefined8 *)0x0) {
    local_74 = 0;
  }
  else {
    uVar7 = *local_88;
    local_58 = SUB81(uVar7,0);
    uStack_57 = (undefined2)((ulong)uVar7 >> 8);
    uStack_55 = (undefined4)((ulong)uVar7 >> 0x18);
    uStack_51 = (undefined1)((ulong)uVar7 >> 0x38);
    local_74 = FeedbackVector::GetKind(&local_58);
  }
  iVar3 = FeedbackNexus::ic_state((FeedbackNexus *)&local_88);
  if (iVar3 == 1) {
    pZVar8 = *(Zone **)(this + 0x10);
    puVar6 = *(undefined4 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar6) < 8) {
      puVar6 = (undefined4 *)Zone::NewExpand(pZVar8,8);
    }
    else {
      *(undefined4 **)(pZVar8 + 0x10) = puVar6 + 2;
    }
    *puVar6 = 0;
    puVar6[1] = local_74;
  }
  else {
    lVar4 = FeedbackNexus::GetConstructorFeedback((FeedbackNexus *)&local_88);
    if (lVar4 == 0) {
      uVar11 = 0;
      FVar10 = (FeedbackVector)0x0;
    }
    else {
      ObjectRef::ObjectRef((ObjectRef *)&local_58,this,lVar4,0);
      puVar5 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_58);
      if (*(int *)(puVar5 + 1) == 2) {
        uVar9 = *(ulong *)*puVar5;
        if ((uVar9 & 1) == 0) goto LAB_01738460;
        uVar1 = *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1));
      }
      else {
        if (*(int *)(puVar5 + 1) == 0) goto LAB_01738460;
        uVar1 = *(ushort *)(puVar5[2] + 0x18);
      }
      if (uVar1 < 0xaa) {
LAB_01738460:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSObject()");
      }
      local_48 = CONCAT16(uStack_51,CONCAT42(uStack_55,uStack_57));
      uVar11 = 1;
      uStack_41 = local_50;
      uStack_40 = uStack_4f;
      FVar10 = local_58;
    }
    pZVar8 = *(Zone **)(this + 0x10);
    puVar6 = *(undefined4 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar6) < 0x20) {
      puVar6 = (undefined4 *)Zone::NewExpand(pZVar8,0x20);
    }
    else {
      *(undefined4 **)(pZVar8 + 0x10) = puVar6 + 8;
    }
    local_60 = CONCAT13((char)uStack_55,CONCAT21(uStack_57,local_58));
    uStack_5c = (undefined3)((uint)uStack_55 >> 8);
    uStack_70 = local_48;
    *puVar6 = 7;
    puVar6[1] = local_74;
    *(undefined1 *)(puVar6 + 2) = uVar11;
    *(FeedbackVector *)(puVar6 + 4) = FVar10;
    puVar6[3] = uStack_55;
    *(undefined4 *)((long)puVar6 + 9) = local_60;
    *(ulong *)(puVar6 + 6) = CONCAT71(uStack_40,uStack_41);
    *(ulong *)((long)puVar6 + 0x11) = CONCAT17(uStack_41,local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

