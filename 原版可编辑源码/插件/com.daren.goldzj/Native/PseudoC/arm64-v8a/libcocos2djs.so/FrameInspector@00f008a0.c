
/* v8::internal::FrameInspector::FrameInspector(v8::internal::StandardFrame*, int,
   v8::internal::Isolate*) */

void __thiscall
v8::internal::FrameInspector::FrameInspector
          (FrameInspector *this,StandardFrame *param_1,int param_2,Isolate *param_3)

{
  InterpretedFrame *pIVar1;
  FrameInspector FVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  JavaScriptFrame *pJVar8;
  void *pvVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar10;
  InterpretedFrame *pIVar11;
  Malloced *this_00;
  JavaScriptFrame *pJVar12;
  FrameInspector *pFVar13;
  undefined1 auVar14 [16];
  undefined8 local_88;
  InterpretedFrame *local_80;
  FrameSummary aFStack_78 [8];
  int local_70;
  undefined8 local_60;
  
  *(StandardFrame **)this = param_1;
  *(int *)(this + 8) = param_2;
  pFVar13 = this + 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(Isolate **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x48) = 0xffffffff;
  FrameSummary::Get((FrameSummary *)param_1,(StandardFrame *)(ulong)(uint)param_2,param_2);
  FrameSummary::EnsureSourcePositionsAvailable(aFStack_78);
  bVar3 = FrameSummary::is_constructor(aFStack_78);
  this[0x4f] = (FrameInspector)(bVar3 & 1);
  uVar4 = FrameSummary::SourcePosition(aFStack_78);
  *(undefined4 *)(this + 0x48) = uVar4;
  uVar7 = FrameSummary::FunctionName(aFStack_78);
  *(undefined8 *)(this + 0x40) = uVar7;
  uVar7 = FrameSummary::script(aFStack_78);
  *(undefined8 *)(this + 0x28) = uVar7;
  uVar7 = FrameSummary::receiver(aFStack_78);
  *(undefined8 *)(this + 0x30) = uVar7;
  if (local_70 == 0) {
    *(undefined8 *)(this + 0x38) = local_60;
  }
  uVar5 = (**(code **)(*(long *)param_1 + 8))(param_1);
  if ((uVar5 < 0x15) && ((1 << (ulong)(uVar5 & 0x1f) & 0x119010U) != 0)) {
    (**(code **)(**(long **)this + 8))();
    pJVar8 = *(JavaScriptFrame **)this;
    if (pJVar8 != (JavaScriptFrame *)0x0) {
      FVar2 = (FrameInspector)(*(long *)(**(long **)(pJVar8 + 0x20) + -8) == 0x26);
      pJVar12 = pJVar8;
      goto LAB_00f009d0;
    }
  }
  else {
    pJVar8 = *(JavaScriptFrame **)this;
  }
  pJVar12 = (JavaScriptFrame *)0x0;
  FVar2 = (FrameInspector)0x0;
LAB_00f009d0:
  this[0x4e] = FVar2;
  iVar6 = (**(code **)(*(long *)pJVar8 + 8))();
  this[0x4c] = (FrameInspector)(iVar6 == 4);
  iVar6 = (**(code **)(**(long **)this + 8))(*(long **)this);
  this[0x4d] = (FrameInspector)(iVar6 == 0xc);
  if (this[0x4c] == (FrameInspector)0x0) {
    iVar6 = (**(code **)(**(long **)this + 8))();
    if (iVar6 == 8) {
      local_88 = WasmInterpreterEntryFrame::debug_info(*(WasmInterpreterEntryFrame **)this);
      WasmDebugInfo::GetInterpretedFrame
                ((ulong)&local_88,(int)*(undefined8 *)(*(long *)this + 0x20));
      pIVar1 = local_80;
      local_80 = (InterpretedFrame *)0x0;
      pIVar11 = *(InterpretedFrame **)(this + 0x18);
      *(InterpretedFrame **)(this + 0x18) = pIVar1;
      if (pIVar11 == (InterpretedFrame *)0x0) {
        local_80 = (InterpretedFrame *)0x0;
      }
      else {
        wasm::InterpretedFrameDeleter::operator()((InterpretedFrameDeleter *)(this + 0x18),pIVar11);
        pIVar1 = local_80;
        local_80 = (InterpretedFrame *)0x0;
        if (pIVar1 != (InterpretedFrame *)0x0) {
          wasm::InterpretedFrameDeleter::operator()((InterpretedFrameDeleter *)&local_80,pIVar1);
        }
      }
    }
  }
  else {
    auVar14 = Deoptimizer::DebuggerInspectableFrame(pJVar12,param_2,param_3);
    pvVar10 = auVar14._8_8_;
    this_00 = *(Malloced **)pFVar13;
    *(long *)pFVar13 = auVar14._0_8_;
    if (this_00 != (Malloced *)0x0) {
      pvVar9 = *(void **)(this_00 + 0x28);
      if (pvVar9 != (void *)0x0) {
        *(void **)(this_00 + 0x30) = pvVar9;
        operator_delete(pvVar9);
        pvVar10 = extraout_x1;
      }
      pvVar9 = *(void **)(this_00 + 0x10);
      if (pvVar9 != (void *)0x0) {
        *(void **)(this_00 + 0x18) = pvVar9;
        operator_delete(pvVar9);
        pvVar10 = extraout_x1_00;
      }
      Malloced::operator_delete(this_00,pvVar10);
    }
  }
  FrameSummary::~FrameSummary(aFStack_78);
  return;
}

