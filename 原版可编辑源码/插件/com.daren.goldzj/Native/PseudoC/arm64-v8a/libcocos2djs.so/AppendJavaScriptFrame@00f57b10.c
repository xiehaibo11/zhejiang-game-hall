
/* v8::internal::FrameArrayBuilder::AppendJavaScriptFrame(v8::internal::FrameSummary::JavaScriptFrameSummary
   const&) */

void __thiscall
v8::internal::FrameArrayBuilder::AppendJavaScriptFrame
          (FrameArrayBuilder *this,JavaScriptFrameSummary *param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined4 uVar3;
  JavaScriptFrameSummary JVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  
  uVar5 = IsVisibleInStackTrace(this,*(undefined8 *)(param_1 + 0x18));
  if ((uVar5 & 1) != 0) {
    puVar2 = *(ulong **)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    JVar4 = param_1[0x2c];
    if ((this[0x19] == (FrameArrayBuilder)0x0) &&
       (uVar5 = *puVar2,
       uVar10 = *(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 0x1b),
       this[0x19] = (FrameArrayBuilder)((byte)(uVar10 >> 6) & 1), (uVar10 >> 6 & 1) == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 8;
    }
    if (JVar4 != (JavaScriptFrameSummary)0x0) {
      uVar10 = uVar10 | 0x10;
    }
    lVar9 = *(long *)this;
    puVar7 = *(ulong **)(param_1 + 0x10);
    lVar1 = lVar9 + 0x168;
    if (FLAG_detailed_error_stack_trace != '\0') {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    puVar8 = puVar7;
    if (((*puVar7 & 1) != 0) &&
       (puVar8 = (ulong *)(lVar9 + 0xa0), (int)*puVar7 != *(int *)(lVar9 + 0xa8))) {
      puVar8 = puVar7;
    }
    uVar6 = FrameArray::AppendJSFrame
                      (*(undefined8 *)(this + 0x20),puVar8,puVar2,uVar6,uVar3,uVar10,lVar1);
    *(undefined8 *)(this + 0x20) = uVar6;
  }
  return;
}

