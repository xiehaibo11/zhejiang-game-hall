
/* v8::internal::wasm::StreamingDecoder::DecodeModuleHeader::Next(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeModuleHeader::Next(StreamingDecoder *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *in_x1;
  undefined8 *in_x8;
  long *plVar4;
  undefined1 auVar5 [12];
  
  plVar4 = (long *)*in_x1;
  if (plVar4 != (long *)0x0) {
    auVar5 = (**(code **)(*(long *)in_x1[1] + 0x20))();
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,auVar5._0_8_,(long)auVar5._8_4_,0);
    if ((uVar2 & 1) == 0) {
      plVar4 = (long *)*in_x1;
      *in_x1 = 0;
      puVar3 = (undefined8 *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_015fcdc4;
      (**(code **)(*plVar4 + 8))();
    }
    if (*in_x1 != 0) {
      uVar1 = *(undefined4 *)((long)in_x1 + 0x2c);
      puVar3 = operator_new(0x18);
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined4 *)((long)puVar3 + 0x14) = uVar1;
      *puVar3 = &PTR__DecodingState_01cca0c8;
      puVar3[1] = 0;
      goto LAB_015fcdc4;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_015fcdc4:
  *in_x8 = puVar3;
  return;
}

