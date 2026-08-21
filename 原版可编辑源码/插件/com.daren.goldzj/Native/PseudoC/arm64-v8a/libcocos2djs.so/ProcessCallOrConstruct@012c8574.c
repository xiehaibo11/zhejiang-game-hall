
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCallOrConstruct(v8::internal::compiler::Hints,
   v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints>*, v8::internal::FeedbackSlot,
   v8::internal::compiler::MissingArgumentsPolicy) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCallOrConstruct
               (SerializerForBackgroundCompilation *param_1,undefined8 *param_2,ulong param_3,
               undefined8 *param_4,
               vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
               *param_5,int param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  ProcessedFeedback *this;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  Zone *pZVar8;
  undefined4 uVar9;
  HeapObjectRef *this_00;
  undefined1 local_b0 [16];
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_2;
  if (param_6 == -1) {
LAB_012c86c8:
    uVar9 = 1;
  }
  else {
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)local_68,*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_6);
    this = (ProcessedFeedback *)
           JSHeapBroker::ProcessFeedbackForCall
                     (*(JSHeapBroker **)param_1,(FeedbackSource *)local_68);
    if (((((byte)param_1[0x68] & 1) != 0) && (*(int *)(param_1 + 0x6c) == -1)) &&
       (*(int *)this == 0)) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38) =
           *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
      goto LAB_012c87d0;
    }
    if (*(int *)this == 0) goto LAB_012c86c8;
    lVar3 = ProcessedFeedback::AsCall(this);
    uVar9 = *(undefined4 *)(lVar3 + 0x24);
    lVar3 = ProcessedFeedback::AsCall(this);
    uStack_98 = *(undefined8 *)(lVar3 + 0x10);
    local_a0 = *(undefined8 **)(lVar3 + 8);
    local_90 = *(undefined8 *)(lVar3 + 0x18);
    if (local_a0._0_1_ != (Hints)0x0) {
      this_00 = (HeapObjectRef *)((ulong)&local_a0 | 8);
      local_b0 = HeapObjectRef::map(this_00);
      uVar4 = MapRef::is_callable((MapRef *)local_b0);
      if ((uVar4 & 1) != 0) {
        pZVar8 = *(Zone **)(param_1 + 0x20);
        if (pZVar8 == (Zone *)0x0) {
          pZVar8 = (Zone *)ZoneStats::NewEmptyZone
                                     (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
          *(Zone **)(param_1 + 0x20) = pZVar8;
        }
        if (param_2 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6 = *(undefined8 **)(pZVar8 + 0x10);
          if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar6) < 0x30) {
            puVar6 = (undefined8 *)Zone::NewExpand(pZVar8,0x30);
          }
          else {
            *(undefined8 **)(pZVar8 + 0x10) = puVar6 + 6;
          }
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
          puVar6[4] = 0;
          puVar6[5] = pZVar8;
          *puVar6 = *param_2;
          puVar6[1] = local_70[1];
          puVar6[3] = local_70[3];
          puVar6[2] = local_70[2];
          puVar6[4] = local_70[4];
          param_3 = local_80 & 0xff;
        }
        local_70 = puVar6;
        if ((param_3 & 0xff) == 0) {
          uVar5 = HeapObjectRef::object(this_00);
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 == 0) {
            lVar3 = ZoneStats::NewEmptyZone
                              (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
            *(long *)(param_1 + 0x20) = lVar3;
          }
          Hints::AddConstant((Hints *)&local_70,uVar5,lVar3);
        }
        else {
          pZVar8 = *(Zone **)(param_1 + 0x20);
          if (pZVar8 == (Zone *)0x0) {
            pZVar8 = (Zone *)ZoneStats::NewEmptyZone
                                       (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
            *(Zone **)(param_1 + 0x20) = pZVar8;
          }
          puVar6 = local_78;
          if (local_78 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            puVar7 = *(undefined8 **)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar7) < 0x30) {
              puVar7 = (undefined8 *)Zone::NewExpand(pZVar8,0x30);
            }
            else {
              *(undefined8 **)(pZVar8 + 0x10) = puVar7 + 6;
            }
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            puVar7[4] = 0;
            puVar7[5] = pZVar8;
            *puVar7 = *puVar6;
            puVar7[1] = local_78[1];
            puVar7[3] = local_78[3];
            puVar7[2] = local_78[2];
            puVar7[4] = local_78[4];
            param_3 = local_80 & 0xff;
          }
          if ((param_3 & 0xff) == 0) {
            local_80 = CONCAT71(local_80._1_7_,1);
          }
          local_78 = puVar7;
          uVar5 = HeapObjectRef::object(this_00);
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 == 0) {
            lVar3 = ZoneStats::NewEmptyZone
                              (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
            *(long *)(param_1 + 0x20) = lVar3;
          }
          Hints::AddConstant((Hints *)&local_78,uVar5,lVar3);
          uVar5 = HeapObjectRef::object(this_00);
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 == 0) {
            lVar3 = ZoneStats::NewEmptyZone
                              (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
            *(long *)(param_1 + 0x20) = lVar3;
          }
          Hints::AddConstant((Hints *)&local_70,uVar5,lVar3);
          param_3 = local_80 & 0xff;
        }
      }
    }
  }
  local_a0 = (undefined8 *)0x0;
  if ((param_3 & 0xff) != 0) {
    ProcessNewTargetForConstruct(param_1,(Hints *)&local_78,(Hints *)&local_a0);
    std::__ndk1::
    vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
    ::insert(param_5,*(undefined8 *)param_5,&local_a0);
  }
  pZVar8 = *(Zone **)(param_1 + 0x20);
  if (pZVar8 == (Zone *)0x0) {
    pZVar8 = (Zone *)ZoneStats::NewEmptyZone
                               (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
    *(Zone **)(param_1 + 0x20) = pZVar8;
    if (local_a0 == (undefined8 *)0x0) goto LAB_012c8778;
LAB_012c870c:
    local_68[0] = *(undefined8 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)local_68[0]) < 0x30) {
      local_68[0] = (undefined8 *)Zone::NewExpand(pZVar8,0x30);
    }
    else {
      *(undefined8 **)(pZVar8 + 0x10) = local_68[0] + 6;
    }
    local_68[0][1] = 0;
    *local_68[0] = 0;
    local_68[0][3] = 0;
    local_68[0][2] = 0;
    local_68[0][4] = 0;
    local_68[0][5] = pZVar8;
    *local_68[0] = *local_a0;
    local_68[0][1] = local_a0[1];
    local_68[0][3] = local_a0[3];
    local_68[0][2] = local_a0[2];
    local_68[0][4] = local_a0[4];
  }
  else {
    if (local_a0 != (undefined8 *)0x0) goto LAB_012c870c;
LAB_012c8778:
    local_68[0] = (undefined8 *)0x0;
  }
  ProcessCallOrConstructRecursive
            (param_1,&local_70,local_80,local_78,param_5,uVar9,param_7,local_68);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = *(int *)(lVar3 + 0x1c) + *(int *)(lVar3 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar3 + 0x38) - *(long *)(lVar3 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 **)(*(long *)(lVar3 + 0x30) + (long)(int)uVar1 * 8) = local_68[0];
LAB_012c87d0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

