
/* v8::internal::interpreter::BytecodeArrayWriter::BytecodeArrayWriter(v8::internal::Zone*,
   v8::internal::interpreter::ConstantArrayBuilder*,
   v8::internal::SourcePositionTableBuilder::RecordingMode) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::BytecodeArrayWriter
          (BytecodeArrayWriter *this,undefined8 param_1,undefined8 param_2,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  BytecodeArrayWriter BVar3;
  long lVar4;
  Zone *this_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 8) = 0x7f7f7f7f;
  *(undefined8 *)this = 0x7f7f0000007f;
  SourcePositionTableBuilder::SourcePositionTableBuilder
            ((SourcePositionTableBuilder *)(this + 0x38),param_4);
  *(undefined8 *)(this + 0x70) = param_2;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x88] = (BytecodeArrayWriter)0x0;
  lVar5 = *(long *)(this + 0x10);
  this[0x78] = (BytecodeArrayWriter)0xb6;
  BVar3 = FLAG_ignition_elide_noneffectful_bytecodes;
  this[0x8a] = (BytecodeArrayWriter)0x0;
  this[0x89] = BVar3;
  if ((ulong)(*(long *)(this + 0x20) - lVar5) < 0x200) {
    this_00 = *(Zone **)(this + 0x28);
    lVar7 = *(long *)(this + 0x18);
    lVar4 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar4) < 0x200) {
      lVar4 = Zone::NewExpand(this_00,0x200);
    }
    else {
      *(long *)(this_00 + 0x10) = lVar4 + 0x200;
    }
    puVar2 = *(undefined1 **)(this + 0x10);
    puVar8 = *(undefined1 **)(this + 0x18);
    puVar1 = (undefined1 *)(lVar4 + (lVar7 - lVar5));
    puVar6 = puVar1;
    while (puVar8 != puVar2) {
      puVar8 = puVar8 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar8;
    }
    *(undefined1 **)(this + 0x10) = puVar6;
    *(undefined1 **)(this + 0x18) = puVar1;
    *(long *)(this + 0x20) = lVar4 + 0x200;
  }
  return;
}

