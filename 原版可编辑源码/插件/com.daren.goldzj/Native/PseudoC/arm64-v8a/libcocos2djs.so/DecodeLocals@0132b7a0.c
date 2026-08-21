
/* v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals(v8::internal::wasm::WasmFeatures
   const&, v8::internal::wasm::Decoder*, v8::internal::Signature<v8::internal::wasm::ValueType>
   const*, v8::internal::ZoneVector<v8::internal::wasm::ValueType>*) */

undefined4
v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
          (WasmFeatures *param_1,Decoder *param_2,Signature *param_3,ZoneVector *param_4)

{
  Decoder DVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  undefined1 local_64 [4];
  
  if (param_3 != (Signature *)0x0) {
    std::__ndk1::
    vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>
    ::assign<v8::internal::wasm::ValueType_const*>
              ((vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>
                *)param_4,(ValueType *)(*(long *)(param_3 + 0x10) + *(long *)param_3),
               (ValueType *)(*(long *)(param_3 + 0x10) + *(long *)param_3) + *(long *)(param_3 + 8))
    ;
  }
  iVar2 = Decoder::consume_u32v(param_2,"local decls count");
  if (((byte)param_2[0x30] & 1) == 0) {
    if ((byte)param_2[0x30] >> 1 == 0) {
LAB_0132b80c:
      if (iVar2 == 0) {
        return 1;
      }
      pcVar7 = "invalid local type";
      do {
        if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(param_2 + 0x10)) {
          return 1;
        }
        uVar3 = Decoder::consume_u32v(param_2,"local count");
        DVar1 = param_2[0x30];
        if (((byte)DVar1 & 1) == 0) {
          if ((byte)DVar1 >> 1 != 0) {
            return 0;
          }
        }
        else if (*(long *)(param_2 + 0x38) != 0) {
          return 0;
        }
        if ((*(long *)param_4 - *(long *)(param_4 + 8)) + 50000U < (uVar3 & 0xffffffff)) {
          pcVar5 = *(char **)(param_2 + 0x10);
          pcVar7 = "local count too large";
          goto LAB_0132b9ec;
        }
        pcVar4 = *(char **)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x18) == (int)pcVar4) {
          Decoder::errorf((uchar *)param_2,pcVar4,"expected %u bytes, fell off end",1);
          pcVar5 = *(char **)(param_2 + 0x18);
          DVar1 = param_2[0x30];
          cVar6 = '\0';
          *(char **)(param_2 + 0x10) = pcVar5;
          if (((byte)DVar1 & 1) != 0) goto LAB_0132b8fc;
LAB_0132b8c8:
          if ((byte)DVar1 >> 1 != 0) {
            return 0;
          }
        }
        else {
          pcVar5 = pcVar4 + 1;
          cVar6 = *pcVar4;
          *(char **)(param_2 + 0x10) = pcVar5;
          if (((byte)DVar1 & 1) == 0) goto LAB_0132b8c8;
LAB_0132b8fc:
          if (*(long *)(param_2 + 0x38) != 0) {
            return 0;
          }
        }
        switch(cVar6) {
        case 'h':
          if (((byte)*param_1 & 1) == 0) {
            pcVar7 = "invalid local type \'exception ref\', enable with --experimental-wasm-eh";
            goto switchD_0132b91c_caseD_69;
          }
          local_64[0] = 9;
          break;
        default:
switchD_0132b91c_caseD_69:
LAB_0132b9ec:
          Decoder::error(param_2,(uchar *)(pcVar5 + -1),pcVar7);
          return 0;
        case 'o':
          if (((byte)*param_1 >> 5 & 1) == 0) {
            pcVar7 = "invalid local type \'anyref\', enable with --experimental-wasm-anyref";
            goto switchD_0132b91c_caseD_69;
          }
          local_64[0] = 6;
          break;
        case 'p':
          if (((byte)*param_1 >> 5 & 1) == 0) {
            pcVar7 = "invalid local type \'funcref\', enable with --experimental-wasm-anyref";
            goto switchD_0132b91c_caseD_69;
          }
          local_64[0] = 7;
          break;
        case '{':
          if (((byte)*param_1 >> 2 & 1) == 0) {
            pcVar7 = "invalid local type \'Simd128\', enable with --experimental-wasm-simd";
            goto switchD_0132b91c_caseD_69;
          }
          local_64[0] = 5;
          break;
        case '|':
          local_64[0] = 4;
          break;
        case '}':
          local_64[0] = 3;
          break;
        case '~':
          local_64[0] = 2;
          break;
        case '\x7f':
          local_64[0] = 1;
        }
        iVar2 = iVar2 + -1;
        std::__ndk1::
        vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>
        ::insert((vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>
                  *)param_4,*(undefined8 *)(param_4 + 8),uVar3 & 0xffffffff,local_64);
        if (iVar2 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  else if (*(long *)(param_2 + 0x38) == 0) goto LAB_0132b80c;
  return 0;
}

