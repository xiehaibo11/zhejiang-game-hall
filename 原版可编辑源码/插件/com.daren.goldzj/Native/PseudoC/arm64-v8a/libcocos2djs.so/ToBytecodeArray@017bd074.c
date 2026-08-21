
/* v8::internal::interpreter::BytecodeArrayWriter::ToBytecodeArray(v8::internal::Isolate*, int, int,
   v8::internal::Handle<v8::internal::ByteArray>) */

ulong * __thiscall
v8::internal::interpreter::BytecodeArrayWriter::ToBytecodeArray
          (BytecodeArrayWriter *this,Isolate *param_1,int param_2,undefined4 param_3,ulong *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x10);
  uVar3 = ConstantArrayBuilder::ToFixedArray(*(ConstantArrayBuilder **)(this + 0x70),param_1);
  puVar4 = (ulong *)Factory::NewBytecodeArray
                              ((Factory *)param_1,iVar1 - iVar2,*(undefined8 *)(this + 0x10),
                               param_2 << 3,param_3,uVar3);
  uVar7 = *puVar4;
  uVar6 = *param_5;
  *(int *)(uVar7 + 0xb) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar6);
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar6);
    }
  }
  return puVar4;
}

