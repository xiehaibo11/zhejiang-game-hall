
/* v8::internal::compiler::JSInliningHeuristic::CollectFunctions(v8::internal::compiler::Node*, int)
    */

void v8::internal::compiler::JSInliningHeuristic::CollectFunctions(Node *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  Operator *pOVar3;
  undefined8 *puVar4;
  int in_w2;
  char *in_x8;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  undefined1 auVar10 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar2 = (ulong)(uint)param_2;
  plVar7 = (long *)(uVar2 + 0x20);
  if ((~*(uint *)(uVar2 + 0x14) & 0xf000000) == 0) {
    plVar7 = (long *)(*plVar7 + 0x10);
  }
  plVar7 = (long *)*plVar7;
  *in_x8 = '\0';
  in_x8[8] = '\0';
  in_x8[0x18] = '\0';
  in_x8[0x20] = '\0';
  in_x8[0x30] = '\0';
  in_x8[0x38] = '\0';
  in_x8[0x48] = '\0';
  in_x8[0x50] = '\0';
  in_x8[0x68] = '\0';
  in_x8[0x70] = '\0';
  in_x8[0x80] = '\0';
  in_x8[0x88] = '\0';
  in_x8[0x98] = '\0';
  in_x8[0xa0] = '\0';
  in_x8[0xb0] = '\0';
  in_x8[0xb8] = '\0';
  in_x8[200] = '\0';
  in_x8[0xd0] = '\0';
  *(ulong *)(in_x8 + 0xe8) = uVar2;
  in_x8[0xf0] = '\0';
  in_x8[0xf1] = '\0';
  in_x8[0xf2] = -0x40;
  in_x8[0xf3] = '\x7f';
  in_x8[0xf4] = '\0';
  in_x8[0xf5] = '\0';
  in_x8[0xf6] = '\0';
  in_x8[0xf7] = '\0';
  if (*(short *)(*plVar7 + 0x10) == 0x1e) {
    uVar6 = *(undefined8 *)(*plVar7 + 0x30);
    ObjectRef::ObjectRef((ObjectRef *)&local_70,*(undefined8 *)(param_1 + 0x98),uVar6,0);
    uVar2 = ObjectRef::IsHeapObject((ObjectRef *)&local_70);
    if ((uVar2 & 1) == 0) {
LAB_0173e62c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar2 = ObjectRef::IsJSFunction((ObjectRef *)&local_70);
    if ((uVar2 & 1) == 0) goto LAB_0173e3f4;
    ObjectRef::ObjectRef((ObjectRef *)&local_70,*(undefined8 *)(param_1 + 0x98),uVar6,0);
    uVar2 = ObjectRef::IsHeapObject((ObjectRef *)&local_70);
    if ((uVar2 & 1) == 0) goto LAB_0173e62c;
    local_80._0_8_ = local_70;
    local_80._8_8_ = uStack_68;
    auVar10 = ObjectRef::AsJSFunction((ObjectRef *)local_80);
    *(undefined1 (*) [16])(in_x8 + 8) = auVar10;
    if (*in_x8 == '\0') {
      *in_x8 = '\x01';
    }
    uStack_68 = *(undefined8 *)(in_x8 + 0x10);
    local_70 = *(undefined8 *)(in_x8 + 8);
    uVar2 = FUN_0173e668(*(undefined8 *)(param_1 + 0x98),&local_70);
    if ((uVar2 & 1) == 0) goto LAB_0173e3f4;
    local_80 = JSFunctionRef::shared((JSFunctionRef *)&local_70);
  }
  else {
LAB_0173e3f4:
    pOVar3 = (Operator *)*plVar7;
    if (*(short *)(pOVar3 + 0x10) != 0x2da) {
      if (*(short *)(pOVar3 + 0x10) == 0x23) {
        uVar1 = *(uint *)(pOVar3 + 0x14);
        if ((int)uVar1 <= in_w2) {
          if (0 < (int)uVar1) {
            lVar8 = 0;
            pcVar9 = in_x8;
            do {
              plVar5 = plVar7 + 4;
              if ((~*(uint *)((long)plVar7 + 0x14) & 0xf000000) == 0) {
                plVar5 = (long *)(plVar7[4] + 0x10);
              }
              if (*(short *)(**(long **)((long)plVar5 + lVar8) + 0x10) != 0x1e) goto LAB_0173e418;
              uVar6 = *(undefined8 *)(**(long **)((long)plVar5 + lVar8) + 0x30);
              ObjectRef::ObjectRef((ObjectRef *)&local_70,*(undefined8 *)(param_1 + 0x98),uVar6,0);
              uVar2 = ObjectRef::IsHeapObject((ObjectRef *)&local_70);
              if ((uVar2 & 1) == 0) goto LAB_0173e62c;
              uVar2 = ObjectRef::IsJSFunction((ObjectRef *)&local_70);
              if ((uVar2 & 1) == 0) goto LAB_0173e418;
              ObjectRef::ObjectRef((ObjectRef *)&local_70,*(undefined8 *)(param_1 + 0x98),uVar6,0);
              uVar2 = ObjectRef::IsHeapObject((ObjectRef *)&local_70);
              if ((uVar2 & 1) == 0) goto LAB_0173e62c;
              local_80._0_8_ = local_70;
              local_80._8_8_ = uStack_68;
              auVar10 = ObjectRef::AsJSFunction((ObjectRef *)local_80);
              *(undefined1 (*) [16])(pcVar9 + 8) = auVar10;
              if (*pcVar9 == '\0') {
                *pcVar9 = '\x01';
              }
              uStack_68 = *(undefined8 *)(pcVar9 + 0x10);
              local_70 = *(undefined8 *)(pcVar9 + 8);
              uVar2 = FUN_0173e668(*(undefined8 *)(param_1 + 0x98),&local_70);
              if ((uVar2 & 1) != 0) {
                local_80 = JSFunctionRef::shared((JSFunctionRef *)&local_70);
                auVar10 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_80)
                ;
                *(undefined1 (*) [16])(pcVar9 + 0x70) = auVar10;
                if (pcVar9[0x68] == '\0') {
                  pcVar9[0x68] = '\x01';
                }
              }
              lVar8 = lVar8 + 8;
              pcVar9 = pcVar9 + 0x18;
            } while ((ulong)uVar1 * 8 - lVar8 != 0);
          }
          *(uint *)(in_x8 + 0xe0) = uVar1;
          return;
        }
      }
LAB_0173e418:
      in_x8[0xe0] = '\0';
      in_x8[0xe1] = '\0';
      in_x8[0xe2] = '\0';
      in_x8[0xe3] = '\0';
      return;
    }
    puVar4 = (undefined8 *)CreateClosureParametersOf(pOVar3);
    ObjectRef::ObjectRef((ObjectRef *)&local_70,*(undefined8 *)(param_1 + 0x98),puVar4[1],0);
    uVar2 = ObjectRef::IsFeedbackCell((ObjectRef *)&local_70);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFeedbackCell()");
    }
    ObjectRef::ObjectRef((ObjectRef *)local_80,*(undefined8 *)(param_1 + 0x98),*puVar4,0);
    uVar2 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)local_80);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    *(undefined8 *)(in_x8 + 0xd8) = local_80._8_8_;
    *(undefined8 *)(in_x8 + 0xd0) = local_80._0_8_;
    if (in_x8[200] == '\0') {
      in_x8[200] = '\x01';
    }
    local_90 = FeedbackCellRef::value((FeedbackCellRef *)&local_70);
    uVar2 = ObjectRef::IsFeedbackVector((ObjectRef *)local_90);
    if ((uVar2 & 1) == 0) goto LAB_0173e4e4;
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    local_b0 = FeedbackCellRef::value((FeedbackCellRef *)&local_70);
    local_a0 = ObjectRef::AsFeedbackVector((ObjectRef *)local_b0);
    uVar2 = FUN_0173e9e8(uVar6,local_80,local_a0);
    if ((uVar2 & 1) == 0) goto LAB_0173e4e4;
  }
  auVar10 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_80);
  *(undefined1 (*) [16])(in_x8 + 0x70) = auVar10;
  if (in_x8[0x68] == '\0') {
    in_x8[0x68] = '\x01';
  }
LAB_0173e4e4:
  in_x8[0xe0] = '\x01';
  in_x8[0xe1] = '\0';
  in_x8[0xe2] = '\0';
  in_x8[0xe3] = '\0';
  return;
}

