
/* v8::internal::wasm::StreamingDecoder::DecodeVarInt32::ReadBytes(v8::internal::wasm::StreamingDecoder*,
   v8::internal::Vector<unsigned char const>) */

size_t v8::internal::wasm::StreamingDecoder::DecodeVarInt32::ReadBytes
                 (long *param_1,long *param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long extraout_x1;
  long lVar3;
  size_t __n;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined **local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  int local_78;
  undefined4 local_70 [2];
  ulong local_68;
  ulong local_60;
  void *local_58;
  
  auVar5 = (**(code **)(*param_1 + 0x20))();
  lVar3 = auVar5._0_8_;
  uVar4 = auVar5._8_8_ - param_1[1];
  __n = uVar4;
  if (param_4 <= uVar4) {
    __n = param_4;
  }
  memcpy((void *)(lVar3 + param_1[1]),param_3,__n);
  local_68 = 0;
  local_60 = 0;
  local_70[0] = 0;
  local_58 = (void *)0x0;
  local_98 = &PTR__Decoder_01cbc3a8;
  local_78 = *(int *)((long)param_2 + 0x2c) - (int)param_1[1];
  lStack_80 = lVar3 + ((int)__n + (int)param_1[1]);
  lStack_90 = lVar3;
  local_88 = lVar3;
  uVar1 = Decoder::consume_u32v((Decoder *)&local_98,(char *)param_1[4]);
  param_1[5] = uVar1 & 0xffffffff;
  param_1[6] = local_88 - lVar3;
  uVar1 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar1 = local_60;
  }
  if (uVar1 == 0) {
    __n = (local_88 - lVar3) - param_1[1];
    (**(code **)(*param_1 + 0x20))(param_1);
    lVar3 = extraout_x1;
  }
  else {
    if (uVar4 <= param_4) {
      plVar2 = (long *)*param_2;
      if (plVar2 == (long *)0x0) {
        *param_2 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x40))(plVar2,local_70);
        plVar2 = (long *)*param_2;
        *param_2 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
    lVar3 = param_1[1] + __n;
  }
  param_1[1] = lVar3;
  local_98 = &PTR__Decoder_01cbc3a8;
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  return __n;
}

