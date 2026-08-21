
/* v8::internal::wasm::StreamingDecoder::DecodeSectionPayload::Next(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeSectionPayload::Next(StreamingDecoder *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *in_x1;
  undefined8 *in_x8;
  long lVar5;
  int iVar6;
  
  plVar2 = (long *)*in_x1;
  puVar4 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x10);
    iVar6 = (int)*(long *)(lVar5 + 0x20);
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,**(undefined1 **)(lVar5 + 0x10),
                       *(undefined1 **)(lVar5 + 0x10) + *(long *)(lVar5 + 0x20),
                       (long)(*(int *)(lVar5 + 0x18) - iVar6),*(int *)(lVar5 + 8) + iVar6);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)*in_x1;
      *in_x1 = 0;
      puVar4 = (undefined8 *)0x0;
      if (plVar2 == (long *)0x0) goto LAB_015fd39c;
      (**(code **)(*plVar2 + 8))();
    }
    if (*in_x1 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((long)in_x1 + 0x2c);
      puVar4 = operator_new(0x18);
      *(undefined1 *)(puVar4 + 2) = 0;
      *(undefined4 *)((long)puVar4 + 0x14) = uVar1;
      *puVar4 = &PTR__DecodingState_01cca0c8;
      puVar4[1] = 0;
    }
  }
LAB_015fd39c:
  *in_x8 = puVar4;
  return;
}

