
/* v8::internal::JsonStringifier::ConstructCircularStructureErrorMessage(v8::internal::Handle<v8::internal::Object>,
   unsigned long) */

long __thiscall
v8::internal::JsonStringifier::ConstructCircularStructureErrorMessage
          (JsonStringifier *this,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  IncrementalStringBuilder aIStack_78 [40];
  
  IncrementalStringBuilder::IncrementalStringBuilder(aIStack_78,*(Isolate **)this);
  uVar3 = *(long *)(this + 0x60) - *(long *)(this + 0x58) >> 4;
  CircularStructureMessageBuilder::AppendStartLine
            ((CircularStructureMessageBuilder *)aIStack_78,
             *(undefined8 *)(*(long *)(this + 0x58) + param_3 * 0x10 + 8));
  uVar2 = param_3 + 3U;
  if (uVar3 <= param_3 + 3U) {
    uVar2 = uVar3;
  }
  uVar5 = param_3 + 1;
  if (uVar5 < uVar2) {
    lVar4 = param_3 << 4;
    do {
      lVar1 = param_3;
      CircularStructureMessageBuilder::AppendNormalLine
                ((CircularStructureMessageBuilder *)aIStack_78,
                 *(undefined8 *)(*(long *)(this + 0x58) + lVar4 + 0x10),
                 *(undefined8 *)(*(long *)(this + 0x58) + lVar4 + 0x18));
      param_3 = lVar1 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar1 + 2U < uVar2);
    uVar5 = lVar1 + 2;
  }
  if (param_3 + 2U < uVar3) {
    CircularStructureMessageBuilder::AppendEllipsis((CircularStructureMessageBuilder *)aIStack_78);
  }
  uVar2 = uVar3 - 1;
  if (uVar3 - 1 <= uVar5) {
    uVar2 = uVar5;
  }
  if (uVar2 < uVar3) {
    lVar4 = uVar2 << 4;
    do {
      CircularStructureMessageBuilder::AppendNormalLine
                ((CircularStructureMessageBuilder *)aIStack_78,
                 *(undefined8 *)(*(long *)(this + 0x58) + lVar4),
                 ((undefined8 *)(*(long *)(this + 0x58) + lVar4))[1]);
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar2 < uVar3);
  }
  CircularStructureMessageBuilder::AppendClosingLine
            ((CircularStructureMessageBuilder *)aIStack_78,param_2);
  lVar4 = IncrementalStringBuilder::Finish(aIStack_78);
  if (lVar4 == 0) {
    lVar4 = *(long *)this + 200;
  }
  return lVar4;
}

