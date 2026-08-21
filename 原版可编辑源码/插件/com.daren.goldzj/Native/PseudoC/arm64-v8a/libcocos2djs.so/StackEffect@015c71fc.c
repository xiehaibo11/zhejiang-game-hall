
/* v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::StackEffect(unsigned
   char const*) */

ulong __thiscall
v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::StackEffect
          (WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0> *this,uchar *param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  bVar2 = *param_1;
  uVar8 = (ulong)bVar2;
  plVar3 = (long *)WasmOpcodes::Signature(uVar8);
  if ((plVar3 != (long *)0x0) ||
     (plVar3 = (long *)WasmOpcodes::AsmjsSignature(uVar8), plVar3 != (long *)0x0))
  goto LAB_015c7238;
  lVar7 = 1;
  uVar4 = 3;
  switch(uVar8) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x12:
  case 0x13:
    uVar4 = 0;
    lVar7 = 0;
    break;
  case 4:
  case 9:
  case 0xd:
  case 0xe:
  case 0x1a:
  case 0x21:
  case 0x24:
    lVar7 = 0;
    uVar4 = 1;
    break;
  case 8:
    uVar6 = param_1[1] & 0x7f;
    if ((((char)param_1[1] < '\0') &&
        (uVar6 = uVar6 | (param_1[2] & 0x7f) << 7, (char)param_1[2] < '\0')) &&
       ((uVar6 = uVar6 | (param_1[3] & 0x7f) << 0xe, (char)param_1[3] < '\0' &&
        (uVar6 = uVar6 | (param_1[4] & 0x7f) << 0x15, (char)param_1[4] < '\0')))) {
      uVar6 = uVar6 | (uint)param_1[5] << 0x1c;
    }
    uVar4 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(this + 0x48) + 0x100) + (ulong)uVar6 * 8)
                            + 8);
    lVar7 = 0;
    break;
  case 0x10:
    uVar6 = param_1[1] & 0x7f;
    if ((((char)param_1[1] < '\0') &&
        (uVar6 = uVar6 | (param_1[2] & 0x7f) << 7, (char)param_1[2] < '\0')) &&
       ((uVar6 = uVar6 | (param_1[3] & 0x7f) << 0xe, (char)param_1[3] < '\0' &&
        (uVar6 = uVar6 | (param_1[4] & 0x7f) << 0x15, (char)param_1[4] < '\0')))) {
      uVar6 = uVar6 | (uint)param_1[5] << 0x1c;
    }
    plVar3 = *(long **)(*(long *)(*(long *)(this + 0x48) + 0x88) + (ulong)uVar6 * 0x20);
    goto LAB_015c7238;
  case 0x11:
    uVar6 = param_1[1] & 0x7f;
    if (((((char)param_1[1] < '\0') &&
         (uVar6 = uVar6 | (param_1[2] & 0x7f) << 7, (char)param_1[2] < '\0')) &&
        (uVar6 = uVar6 | (param_1[3] & 0x7f) << 0xe, (char)param_1[3] < '\0')) &&
       (uVar6 = uVar6 | (param_1[4] & 0x7f) << 0x15, (char)param_1[4] < '\0')) {
      uVar6 = uVar6 | (uint)param_1[5] << 0x1c;
    }
    plVar3 = *(long **)(*(long *)(*(long *)(this + 0x48) + 0x58) + (ulong)uVar6 * 8);
    lVar7 = *plVar3;
    uVar4 = plVar3[1] + 1;
    break;
  default:
switchD_015c7278_caseD_14:
    uVar5 = WasmOpcodes::OpcodeName(uVar8);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented opcode: %x (%s)",uVar8,uVar5);
  case 0x1b:
  case 0x1c:
    break;
  case 0x20:
  case 0x23:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0xd0:
  case 0xd2:
    uVar4 = 0;
    goto LAB_015c72a0;
  case 0x22:
  case 0x25:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x40:
    uVar4 = 1;
LAB_015c72a0:
    lVar7 = 1;
    break;
  case 0x26:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    lVar7 = 0;
    uVar4 = 2;
    break;
  case 0xfc:
  case 0xfd:
  case 0xfe:
    uVar1 = (uint)CONCAT11(bVar2,param_1[1]);
    uVar6 = uVar1 + 0x2fd;
    if (((uVar6 & 0xffff) < 0x15) && ((0x1b6dddU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
      uVar4 = (ulong)*(uint *)(&DAT_01a53bd8 +
                              (-((ulong)(uVar6 >> 0xf) & 1) & 0xfffffffffff80000 |
                              ((ulong)uVar6 & 0xffff) << 3));
      goto LAB_015c72a0;
    }
    plVar3 = (long *)WasmOpcodes::Signature(uVar1);
    uVar8 = (ulong)uVar1;
    if (plVar3 == (long *)0x0) goto switchD_015c7278_caseD_14;
LAB_015c7238:
    uVar4 = (ulong)*(uint *)(plVar3 + 1);
    lVar7 = *plVar3;
  }
  return uVar4 & 0xffffffff | lVar7 << 0x20;
}

