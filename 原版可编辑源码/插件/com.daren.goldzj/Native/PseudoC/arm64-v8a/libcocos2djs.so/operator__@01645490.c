
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ArchOpcode const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,ArchOpcode *param_2)

{
  char *pcVar1;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    pcVar1 = "ArchCallCodeObject";
    goto LAB_0164695c;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"ArchTailCallCodeObjectFromJSFunction",0x24);
    return;
  case 2:
    pcVar1 = "ArchTailCallCodeObject";
    goto LAB_01646c50;
  case 3:
    pcVar1 = "ArchCallJSFunction";
    goto LAB_0164695c;
  case 4:
    pcVar1 = "ArchTailCallAddress";
    goto LAB_01646c28;
  case 5:
    pcVar1 = "ArchPrepareCallCFunction";
    goto LAB_01646b8c;
  case 6:
    pcVar1 = "ArchSaveCallerRegisters";
    goto LAB_01646824;
  case 7:
    pcVar1 = "ArchRestoreCallerRegisters";
    goto LAB_01646bd4;
  case 8:
    pcVar1 = "ArchCallCFunction";
    goto LAB_0164697c;
  case 9:
    pcVar1 = "ArchPrepareTailCall";
    goto LAB_01646c28;
  case 10:
    pcVar1 = "ArchCallWasmFunction";
    goto LAB_01646c14;
  case 0xb:
    pcVar1 = "ArchTailCallWasm";
    goto LAB_01646ba0;
  case 0xc:
    pcVar1 = "ArchCallBuiltinPointer";
    goto LAB_01646c50;
  case 0xd:
    pcVar1 = "ArchJmp";
    goto LAB_016468a0;
  case 0xe:
    pcVar1 = "ArchBinarySearchSwitch";
    goto LAB_01646c50;
  case 0xf:
    pcVar1 = "ArchLookupSwitch";
    goto LAB_01646ba0;
  case 0x10:
    pcVar1 = "ArchTableSwitch";
    goto LAB_01646a84;
  case 0x11:
    pcVar1 = "ArchNop";
    goto LAB_016468a0;
  case 0x12:
    pcVar1 = "ArchAbortCSAAssert";
    goto LAB_0164695c;
  case 0x13:
    pcVar1 = "ArchDebugBreak";
    goto LAB_01646bb4;
  case 0x14:
    pcVar1 = "ArchComment";
    goto LAB_01646a28;
  case 0x15:
    pcVar1 = "ArchThrowTerminator";
    goto LAB_01646c28;
  case 0x16:
    pcVar1 = "ArchDeoptimize";
    goto LAB_01646bb4;
  case 0x17:
    pcVar1 = "ArchRet";
    goto LAB_016468a0;
  case 0x18:
    pcVar1 = "ArchFramePointer";
    goto LAB_01646ba0;
  case 0x19:
    pcVar1 = "ArchParentFramePointer";
    goto LAB_01646c50;
  case 0x1a:
    pcVar1 = "ArchTruncateDoubleToI";
    goto LAB_01646bf4;
  case 0x1b:
    pcVar1 = "ArchStoreWithWriteBarrier";
    goto LAB_01646abc;
  case 0x1c:
    pcVar1 = "ArchStackSlot";
    break;
  case 0x1d:
    pcVar1 = "ArchWordPoisonOnSpeculation";
    goto LAB_01646b4c;
  case 0x1e:
    pcVar1 = "ArchStackPointerGreaterThan";
    goto LAB_01646b4c;
  case 0x1f:
    pcVar1 = "ArchStackCheckOffset";
    goto LAB_01646c14;
  case 0x20:
    pcVar1 = "Word32AtomicLoadInt8";
    goto LAB_01646c14;
  case 0x21:
    pcVar1 = "Word32AtomicLoadUint8";
    goto LAB_01646bf4;
  case 0x22:
    pcVar1 = "Word32AtomicLoadInt16";
    goto LAB_01646bf4;
  case 0x23:
    pcVar1 = "Word32AtomicLoadUint16";
    goto LAB_01646c50;
  case 0x24:
    pcVar1 = "Word32AtomicLoadWord32";
    goto LAB_01646c50;
  case 0x25:
    pcVar1 = "Word32AtomicStoreWord8";
    goto LAB_01646c50;
  case 0x26:
    pcVar1 = "Word32AtomicStoreWord16";
    goto LAB_01646824;
  case 0x27:
    pcVar1 = "Word32AtomicStoreWord32";
    goto LAB_01646824;
  case 0x28:
    pcVar1 = "Word32AtomicExchangeInt8";
    goto LAB_01646b8c;
  case 0x29:
    pcVar1 = "Word32AtomicExchangeUint8";
    goto LAB_01646abc;
  case 0x2a:
    pcVar1 = "Word32AtomicExchangeInt16";
    goto LAB_01646abc;
  case 0x2b:
    pcVar1 = "Word32AtomicExchangeUint16";
    goto LAB_01646bd4;
  case 0x2c:
    pcVar1 = "Word32AtomicExchangeWord32";
    goto LAB_01646bd4;
  case 0x2d:
    pcVar1 = "Word32AtomicCompareExchangeInt8";
    goto LAB_016468e4;
  case 0x2e:
    pcVar1 = "Word32AtomicCompareExchangeUint8";
    goto LAB_016468f8;
  case 0x2f:
    pcVar1 = "Word32AtomicCompareExchangeInt16";
LAB_016468f8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x20);
    return;
  case 0x30:
    pcVar1 = "Word32AtomicCompareExchangeUint16";
    goto LAB_0164690c;
  case 0x31:
    pcVar1 = "Word32AtomicCompareExchangeWord32";
LAB_0164690c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x21);
    return;
  case 0x32:
    pcVar1 = "Word32AtomicAddInt8";
    goto LAB_01646c28;
  case 0x33:
    pcVar1 = "Word32AtomicAddUint8";
    goto LAB_01646c14;
  case 0x34:
    pcVar1 = "Word32AtomicAddInt16";
    goto LAB_01646c14;
  case 0x35:
    pcVar1 = "Word32AtomicAddUint16";
    goto LAB_01646bf4;
  case 0x36:
    pcVar1 = "Word32AtomicAddWord32";
    goto LAB_01646bf4;
  case 0x37:
    pcVar1 = "Word32AtomicSubInt8";
    goto LAB_01646c28;
  case 0x38:
    pcVar1 = "Word32AtomicSubUint8";
    goto LAB_01646c14;
  case 0x39:
    pcVar1 = "Word32AtomicSubInt16";
    goto LAB_01646c14;
  case 0x3a:
    pcVar1 = "Word32AtomicSubUint16";
    goto LAB_01646bf4;
  case 0x3b:
    pcVar1 = "Word32AtomicSubWord32";
    goto LAB_01646bf4;
  case 0x3c:
    pcVar1 = "Word32AtomicAndInt8";
    goto LAB_01646c28;
  case 0x3d:
    pcVar1 = "Word32AtomicAndUint8";
    goto LAB_01646c14;
  case 0x3e:
    pcVar1 = "Word32AtomicAndInt16";
    goto LAB_01646c14;
  case 0x3f:
    pcVar1 = "Word32AtomicAndUint16";
    goto LAB_01646bf4;
  case 0x40:
    pcVar1 = "Word32AtomicAndWord32";
    goto LAB_01646bf4;
  case 0x41:
    pcVar1 = "Word32AtomicOrInt8";
    goto LAB_0164695c;
  case 0x42:
    pcVar1 = "Word32AtomicOrUint8";
    goto LAB_01646c28;
  case 0x43:
    pcVar1 = "Word32AtomicOrInt16";
    goto LAB_01646c28;
  case 0x44:
    pcVar1 = "Word32AtomicOrUint16";
    goto LAB_01646c14;
  case 0x45:
    pcVar1 = "Word32AtomicOrWord32";
    goto LAB_01646c14;
  case 0x46:
    pcVar1 = "Word32AtomicXorInt8";
    goto LAB_01646c28;
  case 0x47:
    pcVar1 = "Word32AtomicXorUint8";
    goto LAB_01646c14;
  case 0x48:
    pcVar1 = "Word32AtomicXorInt16";
    goto LAB_01646c14;
  case 0x49:
    pcVar1 = "Word32AtomicXorUint16";
    goto LAB_01646bf4;
  case 0x4a:
    pcVar1 = "Word32AtomicXorWord32";
    goto LAB_01646bf4;
  case 0x4b:
    pcVar1 = "Ieee754Float64Acos";
    goto LAB_0164695c;
  case 0x4c:
    pcVar1 = "Ieee754Float64Acosh";
    goto LAB_01646c28;
  case 0x4d:
    pcVar1 = "Ieee754Float64Asin";
    goto LAB_0164695c;
  case 0x4e:
    pcVar1 = "Ieee754Float64Asinh";
    goto LAB_01646c28;
  case 0x4f:
    pcVar1 = "Ieee754Float64Atan";
    goto LAB_0164695c;
  case 0x50:
    pcVar1 = "Ieee754Float64Atanh";
    goto LAB_01646c28;
  case 0x51:
    pcVar1 = "Ieee754Float64Atan2";
    goto LAB_01646c28;
  case 0x52:
    pcVar1 = "Ieee754Float64Cbrt";
    goto LAB_0164695c;
  case 0x53:
    pcVar1 = "Ieee754Float64Cos";
    goto LAB_0164697c;
  case 0x54:
    pcVar1 = "Ieee754Float64Cosh";
    goto LAB_0164695c;
  case 0x55:
    pcVar1 = "Ieee754Float64Exp";
    goto LAB_0164697c;
  case 0x56:
    pcVar1 = "Ieee754Float64Expm1";
    goto LAB_01646c28;
  case 0x57:
    pcVar1 = "Ieee754Float64Log";
    goto LAB_0164697c;
  case 0x58:
    pcVar1 = "Ieee754Float64Log1p";
    goto LAB_01646c28;
  case 0x59:
    pcVar1 = "Ieee754Float64Log10";
    goto LAB_01646c28;
  case 0x5a:
    pcVar1 = "Ieee754Float64Log2";
    goto LAB_0164695c;
  case 0x5b:
    pcVar1 = "Ieee754Float64Pow";
    goto LAB_0164697c;
  case 0x5c:
    pcVar1 = "Ieee754Float64Sin";
    goto LAB_0164697c;
  case 0x5d:
    pcVar1 = "Ieee754Float64Sinh";
    goto LAB_0164695c;
  case 0x5e:
    pcVar1 = "Ieee754Float64Tan";
    goto LAB_0164697c;
  case 0x5f:
    pcVar1 = "Ieee754Float64Tanh";
    goto LAB_0164695c;
  case 0x60:
    pcVar1 = "Arm64Add";
    goto LAB_01646a08;
  case 0x61:
    pcVar1 = "Arm64Add32";
    goto LAB_01646b20;
  case 0x62:
    pcVar1 = "Arm64And";
    goto LAB_01646a08;
  case 99:
    pcVar1 = "Arm64And32";
    goto LAB_01646b20;
  case 100:
    pcVar1 = "Arm64Bic";
    goto LAB_01646a08;
  case 0x65:
    pcVar1 = "Arm64Bic32";
    goto LAB_01646b20;
  case 0x66:
    pcVar1 = "Arm64Clz";
    goto LAB_01646a08;
  case 0x67:
    pcVar1 = "Arm64Clz32";
    goto LAB_01646b20;
  case 0x68:
    pcVar1 = "Arm64Cmp";
    goto LAB_01646a08;
  case 0x69:
    pcVar1 = "Arm64Cmp32";
    goto LAB_01646b20;
  case 0x6a:
    pcVar1 = "Arm64Cmn";
    goto LAB_01646a08;
  case 0x6b:
    pcVar1 = "Arm64Cmn32";
    goto LAB_01646b20;
  case 0x6c:
    pcVar1 = "Arm64Tst";
    goto LAB_01646a08;
  case 0x6d:
    pcVar1 = "Arm64Tst32";
    goto LAB_01646b20;
  case 0x6e:
    pcVar1 = "Arm64Or";
LAB_016468a0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,7);
    return;
  case 0x6f:
    pcVar1 = "Arm64Or32";
    goto LAB_01646c3c;
  case 0x70:
    pcVar1 = "Arm64Orn";
    goto LAB_01646a08;
  case 0x71:
    pcVar1 = "Arm64Orn32";
    goto LAB_01646b20;
  case 0x72:
    pcVar1 = "Arm64Eor";
    goto LAB_01646a08;
  case 0x73:
    pcVar1 = "Arm64Eor32";
    goto LAB_01646b20;
  case 0x74:
    pcVar1 = "Arm64Eon";
    goto LAB_01646a08;
  case 0x75:
    pcVar1 = "Arm64Eon32";
    goto LAB_01646b20;
  case 0x76:
    pcVar1 = "Arm64Sub";
    goto LAB_01646a08;
  case 0x77:
    pcVar1 = "Arm64Sub32";
    goto LAB_01646b20;
  case 0x78:
    pcVar1 = "Arm64Mul";
    goto LAB_01646a08;
  case 0x79:
    pcVar1 = "Arm64Mul32";
    goto LAB_01646b20;
  case 0x7a:
    pcVar1 = "Arm64Smull";
    goto LAB_01646b20;
  case 0x7b:
    pcVar1 = "Arm64Umull";
    goto LAB_01646b20;
  case 0x7c:
    pcVar1 = "Arm64Madd";
    goto LAB_01646c3c;
  case 0x7d:
    pcVar1 = "Arm64Madd32";
    goto LAB_01646a28;
  case 0x7e:
    pcVar1 = "Arm64Msub";
    goto LAB_01646c3c;
  case 0x7f:
    pcVar1 = "Arm64Msub32";
    goto LAB_01646a28;
  case 0x80:
    pcVar1 = "Arm64Mneg";
    goto LAB_01646c3c;
  case 0x81:
    pcVar1 = "Arm64Mneg32";
    goto LAB_01646a28;
  case 0x82:
    pcVar1 = "Arm64Idiv";
    goto LAB_01646c3c;
  case 0x83:
    pcVar1 = "Arm64Idiv32";
    goto LAB_01646a28;
  case 0x84:
    pcVar1 = "Arm64Udiv";
    goto LAB_01646c3c;
  case 0x85:
    pcVar1 = "Arm64Udiv32";
    goto LAB_01646a28;
  case 0x86:
    pcVar1 = "Arm64Imod";
    goto LAB_01646c3c;
  case 0x87:
    pcVar1 = "Arm64Imod32";
    goto LAB_01646a28;
  case 0x88:
    pcVar1 = "Arm64Umod";
    goto LAB_01646c3c;
  case 0x89:
    pcVar1 = "Arm64Umod32";
    goto LAB_01646a28;
  case 0x8a:
    pcVar1 = "Arm64Not";
    goto LAB_01646a08;
  case 0x8b:
    pcVar1 = "Arm64Not32";
    goto LAB_01646b20;
  case 0x8c:
    pcVar1 = "Arm64Lsl";
    goto LAB_01646a08;
  case 0x8d:
    pcVar1 = "Arm64Lsl32";
    goto LAB_01646b20;
  case 0x8e:
    pcVar1 = "Arm64Lsr";
    goto LAB_01646a08;
  case 0x8f:
    pcVar1 = "Arm64Lsr32";
    goto LAB_01646b20;
  case 0x90:
    pcVar1 = "Arm64Asr";
    goto LAB_01646a08;
  case 0x91:
    pcVar1 = "Arm64Asr32";
    goto LAB_01646b20;
  case 0x92:
    pcVar1 = "Arm64Ror";
    goto LAB_01646a08;
  case 0x93:
    pcVar1 = "Arm64Ror32";
    goto LAB_01646b20;
  case 0x94:
    pcVar1 = "Arm64Mov32";
    goto LAB_01646b20;
  case 0x95:
    pcVar1 = "Arm64Sxtb32";
    goto LAB_01646a28;
  case 0x96:
    pcVar1 = "Arm64Sxth32";
    goto LAB_01646a28;
  case 0x97:
    pcVar1 = "Arm64Sxtb";
    goto LAB_01646c3c;
  case 0x98:
    pcVar1 = "Arm64Sxth";
    goto LAB_01646c3c;
  case 0x99:
    pcVar1 = "Arm64Sxtw";
    goto LAB_01646c3c;
  case 0x9a:
    pcVar1 = "Arm64Sbfx";
    goto LAB_01646c3c;
  case 0x9b:
    pcVar1 = "Arm64Sbfx32";
    goto LAB_01646a28;
  case 0x9c:
    pcVar1 = "Arm64Ubfx";
    goto LAB_01646c3c;
  case 0x9d:
    pcVar1 = "Arm64Ubfx32";
    goto LAB_01646a28;
  case 0x9e:
    pcVar1 = "Arm64Ubfiz32";
    goto LAB_01646b78;
  case 0x9f:
    pcVar1 = "Arm64Bfi";
    goto LAB_01646a08;
  case 0xa0:
    pcVar1 = "Arm64Rbit";
    goto LAB_01646c3c;
  case 0xa1:
    pcVar1 = "Arm64Rbit32";
    goto LAB_01646a28;
  case 0xa2:
    pcVar1 = "Arm64Rev";
    goto LAB_01646a08;
  case 0xa3:
    pcVar1 = "Arm64Rev32";
    goto LAB_01646b20;
  case 0xa4:
    pcVar1 = "Arm64TestAndBranch32";
    goto LAB_01646c14;
  case 0xa5:
    pcVar1 = "Arm64TestAndBranch";
    goto LAB_0164695c;
  case 0xa6:
    pcVar1 = "Arm64CompareAndBranch32";
    goto LAB_01646824;
  case 0xa7:
    pcVar1 = "Arm64CompareAndBranch";
    goto LAB_01646bf4;
  case 0xa8:
    pcVar1 = "Arm64Claim";
    goto LAB_01646b20;
  case 0xa9:
    pcVar1 = "Arm64Poke";
    goto LAB_01646c3c;
  case 0xaa:
    pcVar1 = "Arm64PokePair";
    break;
  case 0xab:
    pcVar1 = "Arm64Peek";
    goto LAB_01646c3c;
  case 0xac:
    pcVar1 = "Arm64Float32Cmp";
    goto LAB_01646a84;
  case 0xad:
    pcVar1 = "Arm64Float32Add";
    goto LAB_01646a84;
  case 0xae:
    pcVar1 = "Arm64Float32Sub";
    goto LAB_01646a84;
  case 0xaf:
    pcVar1 = "Arm64Float32Mul";
    goto LAB_01646a84;
  case 0xb0:
    pcVar1 = "Arm64Float32Div";
    goto LAB_01646a84;
  case 0xb1:
    pcVar1 = "Arm64Float32Abs";
    goto LAB_01646a84;
  case 0xb2:
    pcVar1 = "Arm64Float32Neg";
    goto LAB_01646a84;
  case 0xb3:
    pcVar1 = "Arm64Float32Sqrt";
    goto LAB_01646ba0;
  case 0xb4:
    pcVar1 = "Arm64Float32Fnmul";
    goto LAB_0164697c;
  case 0xb5:
    pcVar1 = "Arm64Float32RoundDown";
    goto LAB_01646bf4;
  case 0xb6:
    pcVar1 = "Arm64Float32Max";
    goto LAB_01646a84;
  case 0xb7:
    pcVar1 = "Arm64Float32Min";
    goto LAB_01646a84;
  case 0xb8:
    pcVar1 = "Arm64Float64Cmp";
    goto LAB_01646a84;
  case 0xb9:
    pcVar1 = "Arm64Float64Add";
    goto LAB_01646a84;
  case 0xba:
    pcVar1 = "Arm64Float64Sub";
    goto LAB_01646a84;
  case 0xbb:
    pcVar1 = "Arm64Float64Mul";
    goto LAB_01646a84;
  case 0xbc:
    pcVar1 = "Arm64Float64Div";
    goto LAB_01646a84;
  case 0xbd:
    pcVar1 = "Arm64Float64Mod";
    goto LAB_01646a84;
  case 0xbe:
    pcVar1 = "Arm64Float64Max";
    goto LAB_01646a84;
  case 0xbf:
    pcVar1 = "Arm64Float64Min";
    goto LAB_01646a84;
  case 0xc0:
    pcVar1 = "Arm64Float64Abs";
    goto LAB_01646a84;
  case 0xc1:
    pcVar1 = "Arm64Float64Neg";
    goto LAB_01646a84;
  case 0xc2:
    pcVar1 = "Arm64Float64Sqrt";
    goto LAB_01646ba0;
  case 0xc3:
    pcVar1 = "Arm64Float64Fnmul";
    goto LAB_0164697c;
  case 0xc4:
    pcVar1 = "Arm64Float64RoundDown";
    goto LAB_01646bf4;
  case 0xc5:
    pcVar1 = "Arm64Float32RoundUp";
    goto LAB_01646c28;
  case 0xc6:
    pcVar1 = "Arm64Float64RoundUp";
    goto LAB_01646c28;
  case 199:
    pcVar1 = "Arm64Float64RoundTiesAway";
    goto LAB_01646abc;
  case 200:
    pcVar1 = "Arm64Float32RoundTruncate";
    goto LAB_01646abc;
  case 0xc9:
    pcVar1 = "Arm64Float64RoundTruncate";
    goto LAB_01646abc;
  case 0xca:
    pcVar1 = "Arm64Float32RoundTiesEven";
    goto LAB_01646abc;
  case 0xcb:
    pcVar1 = "Arm64Float64RoundTiesEven";
    goto LAB_01646abc;
  case 0xcc:
    pcVar1 = "Arm64Float64SilenceNaN";
    goto LAB_01646c50;
  case 0xcd:
    pcVar1 = "Arm64Float32ToFloat64";
    goto LAB_01646bf4;
  case 0xce:
    pcVar1 = "Arm64Float64ToFloat32";
    goto LAB_01646bf4;
  case 0xcf:
    pcVar1 = "Arm64Float32ToInt32";
    goto LAB_01646c28;
  case 0xd0:
    pcVar1 = "Arm64Float64ToInt32";
    goto LAB_01646c28;
  case 0xd1:
    pcVar1 = "Arm64Float32ToUint32";
    goto LAB_01646c14;
  case 0xd2:
    pcVar1 = "Arm64Float64ToUint32";
    goto LAB_01646c14;
  case 0xd3:
    pcVar1 = "Arm64Float32ToInt64";
    goto LAB_01646c28;
  case 0xd4:
    pcVar1 = "Arm64Float64ToInt64";
    goto LAB_01646c28;
  case 0xd5:
    pcVar1 = "Arm64Float32ToUint64";
    goto LAB_01646c14;
  case 0xd6:
    pcVar1 = "Arm64Float64ToUint64";
    goto LAB_01646c14;
  case 0xd7:
    pcVar1 = "Arm64Int32ToFloat32";
    goto LAB_01646c28;
  case 0xd8:
    pcVar1 = "Arm64Int32ToFloat64";
    goto LAB_01646c28;
  case 0xd9:
    pcVar1 = "Arm64Int64ToFloat32";
    goto LAB_01646c28;
  case 0xda:
    pcVar1 = "Arm64Int64ToFloat64";
    goto LAB_01646c28;
  case 0xdb:
    pcVar1 = "Arm64Uint32ToFloat32";
    goto LAB_01646c14;
  case 0xdc:
    pcVar1 = "Arm64Uint32ToFloat64";
    goto LAB_01646c14;
  case 0xdd:
    pcVar1 = "Arm64Uint64ToFloat32";
    goto LAB_01646c14;
  case 0xde:
    pcVar1 = "Arm64Uint64ToFloat64";
    goto LAB_01646c14;
  case 0xdf:
    pcVar1 = "Arm64Float64ExtractLowWord32";
    goto LAB_0164636c;
  case 0xe0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"Arm64Float64ExtractHighWord32",0x1d);
    return;
  case 0xe1:
    pcVar1 = "Arm64Float64InsertLowWord32";
    goto LAB_01646b4c;
  case 0xe2:
    pcVar1 = "Arm64Float64InsertHighWord32";
    goto LAB_0164636c;
  case 0xe3:
    pcVar1 = "Arm64Float64MoveU64";
    goto LAB_01646c28;
  case 0xe4:
    pcVar1 = "Arm64U64MoveFloat64";
    goto LAB_01646c28;
  case 0xe5:
    pcVar1 = "Arm64LdrS";
    goto LAB_01646c3c;
  case 0xe6:
    pcVar1 = "Arm64StrS";
    goto LAB_01646c3c;
  case 0xe7:
    pcVar1 = "Arm64LdrD";
    goto LAB_01646c3c;
  case 0xe8:
    pcVar1 = "Arm64StrD";
    goto LAB_01646c3c;
  case 0xe9:
    pcVar1 = "Arm64LdrQ";
    goto LAB_01646c3c;
  case 0xea:
    pcVar1 = "Arm64StrQ";
    goto LAB_01646c3c;
  case 0xeb:
    pcVar1 = "Arm64Ldrb";
    goto LAB_01646c3c;
  case 0xec:
    pcVar1 = "Arm64Ldrsb";
    goto LAB_01646b20;
  case 0xed:
    pcVar1 = "Arm64Strb";
    goto LAB_01646c3c;
  case 0xee:
    pcVar1 = "Arm64Ldrh";
    goto LAB_01646c3c;
  case 0xef:
    pcVar1 = "Arm64Ldrsh";
    goto LAB_01646b20;
  case 0xf0:
    pcVar1 = "Arm64Strh";
    goto LAB_01646c3c;
  case 0xf1:
    pcVar1 = "Arm64Ldrsw";
LAB_01646b20:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,10);
    return;
  case 0xf2:
    pcVar1 = "Arm64LdrW";
    goto LAB_01646c3c;
  case 0xf3:
    pcVar1 = "Arm64StrW";
LAB_01646c3c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,9);
    return;
  case 0xf4:
    pcVar1 = "Arm64Ldr";
    goto LAB_01646a08;
  case 0xf5:
    pcVar1 = "Arm64LdrDecompressTaggedSigned";
    goto LAB_01646678;
  case 0xf6:
    pcVar1 = "Arm64LdrDecompressTaggedPointer";
    goto LAB_016468e4;
  case 0xf7:
    pcVar1 = "Arm64LdrDecompressAnyTagged";
    goto LAB_01646b4c;
  case 0xf8:
    pcVar1 = "Arm64Str";
LAB_01646a08:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,8);
    return;
  case 0xf9:
    pcVar1 = "Arm64StrCompressTagged";
    goto LAB_01646c50;
  case 0xfa:
    pcVar1 = "Arm64DmbIsh";
    goto LAB_01646a28;
  case 0xfb:
    pcVar1 = "Arm64DsbIsb";
    goto LAB_01646a28;
  case 0xfc:
    pcVar1 = "Arm64F64x2Splat";
    goto LAB_01646a84;
  case 0xfd:
    pcVar1 = "Arm64F64x2ExtractLane";
    goto LAB_01646bf4;
  case 0xfe:
    pcVar1 = "Arm64F64x2ReplaceLane";
    goto LAB_01646bf4;
  case 0xff:
    pcVar1 = "Arm64F64x2Abs";
    break;
  case 0x100:
    pcVar1 = "Arm64F64x2Neg";
    break;
  case 0x101:
    pcVar1 = "Arm64F64x2Sqrt";
    goto LAB_01646bb4;
  case 0x102:
    pcVar1 = "Arm64F64x2Add";
    break;
  case 0x103:
    pcVar1 = "Arm64F64x2Sub";
    break;
  case 0x104:
    pcVar1 = "Arm64F64x2Mul";
    break;
  case 0x105:
    pcVar1 = "Arm64F64x2Div";
    break;
  case 0x106:
    pcVar1 = "Arm64F64x2Min";
    break;
  case 0x107:
    pcVar1 = "Arm64F64x2Max";
    break;
  case 0x108:
    pcVar1 = "Arm64F64x2Eq";
    goto LAB_01646b78;
  case 0x109:
    pcVar1 = "Arm64F64x2Ne";
    goto LAB_01646b78;
  case 0x10a:
    pcVar1 = "Arm64F64x2Lt";
    goto LAB_01646b78;
  case 0x10b:
    pcVar1 = "Arm64F64x2Le";
    goto LAB_01646b78;
  case 0x10c:
    pcVar1 = "Arm64F64x2Qfma";
    goto LAB_01646bb4;
  case 0x10d:
    pcVar1 = "Arm64F64x2Qfms";
    goto LAB_01646bb4;
  case 0x10e:
    pcVar1 = "Arm64F32x4Splat";
    goto LAB_01646a84;
  case 0x10f:
    pcVar1 = "Arm64F32x4ExtractLane";
    goto LAB_01646bf4;
  case 0x110:
    pcVar1 = "Arm64F32x4ReplaceLane";
    goto LAB_01646bf4;
  case 0x111:
    pcVar1 = "Arm64F32x4SConvertI32x4";
    goto LAB_01646824;
  case 0x112:
    pcVar1 = "Arm64F32x4UConvertI32x4";
    goto LAB_01646824;
  case 0x113:
    pcVar1 = "Arm64F32x4Abs";
    break;
  case 0x114:
    pcVar1 = "Arm64F32x4Neg";
    break;
  case 0x115:
    pcVar1 = "Arm64F32x4Sqrt";
    goto LAB_01646bb4;
  case 0x116:
    pcVar1 = "Arm64F32x4RecipApprox";
    goto LAB_01646bf4;
  case 0x117:
    pcVar1 = "Arm64F32x4RecipSqrtApprox";
    goto LAB_01646abc;
  case 0x118:
    pcVar1 = "Arm64F32x4Add";
    break;
  case 0x119:
    pcVar1 = "Arm64F32x4AddHoriz";
    goto LAB_0164695c;
  case 0x11a:
    pcVar1 = "Arm64F32x4Sub";
    break;
  case 0x11b:
    pcVar1 = "Arm64F32x4Mul";
    break;
  case 0x11c:
    pcVar1 = "Arm64F32x4Div";
    break;
  case 0x11d:
    pcVar1 = "Arm64F32x4Min";
    break;
  case 0x11e:
    pcVar1 = "Arm64F32x4Max";
    break;
  case 0x11f:
    pcVar1 = "Arm64F32x4Eq";
    goto LAB_01646b78;
  case 0x120:
    pcVar1 = "Arm64F32x4Ne";
    goto LAB_01646b78;
  case 0x121:
    pcVar1 = "Arm64F32x4Lt";
    goto LAB_01646b78;
  case 0x122:
    pcVar1 = "Arm64F32x4Le";
    goto LAB_01646b78;
  case 0x123:
    pcVar1 = "Arm64F32x4Qfma";
    goto LAB_01646bb4;
  case 0x124:
    pcVar1 = "Arm64F32x4Qfms";
    goto LAB_01646bb4;
  case 0x125:
    pcVar1 = "Arm64I64x2Splat";
    goto LAB_01646a84;
  case 0x126:
    pcVar1 = "Arm64I64x2ExtractLane";
    goto LAB_01646bf4;
  case 0x127:
    pcVar1 = "Arm64I64x2ReplaceLane";
    goto LAB_01646bf4;
  case 0x128:
    pcVar1 = "Arm64I64x2Neg";
    break;
  case 0x129:
    pcVar1 = "Arm64I64x2Shl";
    break;
  case 0x12a:
    pcVar1 = "Arm64I64x2ShrS";
    goto LAB_01646bb4;
  case 299:
    pcVar1 = "Arm64I64x2Add";
    break;
  case 300:
    pcVar1 = "Arm64I64x2Sub";
    break;
  case 0x12d:
    pcVar1 = "Arm64I64x2Mul";
    break;
  case 0x12e:
    pcVar1 = "Arm64I64x2Eq";
    goto LAB_01646b78;
  case 0x12f:
    pcVar1 = "Arm64I64x2Ne";
    goto LAB_01646b78;
  case 0x130:
    pcVar1 = "Arm64I64x2GtS";
    break;
  case 0x131:
    pcVar1 = "Arm64I64x2GeS";
    break;
  case 0x132:
    pcVar1 = "Arm64I64x2ShrU";
    goto LAB_01646bb4;
  case 0x133:
    pcVar1 = "Arm64I64x2GtU";
    break;
  case 0x134:
    pcVar1 = "Arm64I64x2GeU";
    break;
  case 0x135:
    pcVar1 = "Arm64I32x4Splat";
    goto LAB_01646a84;
  case 0x136:
    pcVar1 = "Arm64I32x4ExtractLane";
    goto LAB_01646bf4;
  case 0x137:
    pcVar1 = "Arm64I32x4ReplaceLane";
    goto LAB_01646bf4;
  case 0x138:
    pcVar1 = "Arm64I32x4SConvertF32x4";
    goto LAB_01646824;
  case 0x139:
    pcVar1 = "Arm64I32x4SConvertI16x8Low";
    goto LAB_01646bd4;
  case 0x13a:
    pcVar1 = "Arm64I32x4SConvertI16x8High";
    goto LAB_01646b4c;
  case 0x13b:
    pcVar1 = "Arm64I32x4Neg";
    break;
  case 0x13c:
    pcVar1 = "Arm64I32x4Shl";
    break;
  case 0x13d:
    pcVar1 = "Arm64I32x4ShrS";
    goto LAB_01646bb4;
  case 0x13e:
    pcVar1 = "Arm64I32x4Add";
    break;
  case 0x13f:
    pcVar1 = "Arm64I32x4AddHoriz";
    goto LAB_0164695c;
  case 0x140:
    pcVar1 = "Arm64I32x4Sub";
    break;
  case 0x141:
    pcVar1 = "Arm64I32x4Mul";
    break;
  case 0x142:
    pcVar1 = "Arm64I32x4MinS";
    goto LAB_01646bb4;
  case 0x143:
    pcVar1 = "Arm64I32x4MaxS";
    goto LAB_01646bb4;
  case 0x144:
    pcVar1 = "Arm64I32x4Eq";
    goto LAB_01646b78;
  case 0x145:
    pcVar1 = "Arm64I32x4Ne";
    goto LAB_01646b78;
  case 0x146:
    pcVar1 = "Arm64I32x4GtS";
    break;
  case 0x147:
    pcVar1 = "Arm64I32x4GeS";
    break;
  case 0x148:
    pcVar1 = "Arm64I32x4UConvertF32x4";
    goto LAB_01646824;
  case 0x149:
    pcVar1 = "Arm64I32x4UConvertI16x8Low";
    goto LAB_01646bd4;
  case 0x14a:
    pcVar1 = "Arm64I32x4UConvertI16x8High";
    goto LAB_01646b4c;
  case 0x14b:
    pcVar1 = "Arm64I32x4ShrU";
    goto LAB_01646bb4;
  case 0x14c:
    pcVar1 = "Arm64I32x4MinU";
    goto LAB_01646bb4;
  case 0x14d:
    pcVar1 = "Arm64I32x4MaxU";
    goto LAB_01646bb4;
  case 0x14e:
    pcVar1 = "Arm64I32x4GtU";
    break;
  case 0x14f:
    pcVar1 = "Arm64I32x4GeU";
    break;
  case 0x150:
    pcVar1 = "Arm64I16x8Splat";
    goto LAB_01646a84;
  case 0x151:
    pcVar1 = "Arm64I16x8ExtractLaneU";
    goto LAB_01646c50;
  case 0x152:
    pcVar1 = "Arm64I16x8ExtractLaneS";
    goto LAB_01646c50;
  case 0x153:
    pcVar1 = "Arm64I16x8ReplaceLane";
    goto LAB_01646bf4;
  case 0x154:
    pcVar1 = "Arm64I16x8SConvertI8x16Low";
    goto LAB_01646bd4;
  case 0x155:
    pcVar1 = "Arm64I16x8SConvertI8x16High";
    goto LAB_01646b4c;
  case 0x156:
    pcVar1 = "Arm64I16x8Neg";
    break;
  case 0x157:
    pcVar1 = "Arm64I16x8Shl";
    break;
  case 0x158:
    pcVar1 = "Arm64I16x8ShrS";
    goto LAB_01646bb4;
  case 0x159:
    pcVar1 = "Arm64I16x8SConvertI32x4";
    goto LAB_01646824;
  case 0x15a:
    pcVar1 = "Arm64I16x8Add";
    break;
  case 0x15b:
    pcVar1 = "Arm64I16x8AddSaturateS";
    goto LAB_01646c50;
  case 0x15c:
    pcVar1 = "Arm64I16x8AddHoriz";
    goto LAB_0164695c;
  case 0x15d:
    pcVar1 = "Arm64I16x8Sub";
    break;
  case 0x15e:
    pcVar1 = "Arm64I16x8SubSaturateS";
    goto LAB_01646c50;
  case 0x15f:
    pcVar1 = "Arm64I16x8Mul";
    break;
  case 0x160:
    pcVar1 = "Arm64I16x8MinS";
    goto LAB_01646bb4;
  case 0x161:
    pcVar1 = "Arm64I16x8MaxS";
    goto LAB_01646bb4;
  case 0x162:
    pcVar1 = "Arm64I16x8Eq";
    goto LAB_01646b78;
  case 0x163:
    pcVar1 = "Arm64I16x8Ne";
    goto LAB_01646b78;
  case 0x164:
    pcVar1 = "Arm64I16x8GtS";
    break;
  case 0x165:
    pcVar1 = "Arm64I16x8GeS";
    break;
  case 0x166:
    pcVar1 = "Arm64I16x8UConvertI8x16Low";
    goto LAB_01646bd4;
  case 0x167:
    pcVar1 = "Arm64I16x8UConvertI8x16High";
    goto LAB_01646b4c;
  case 0x168:
    pcVar1 = "Arm64I16x8ShrU";
    goto LAB_01646bb4;
  case 0x169:
    pcVar1 = "Arm64I16x8UConvertI32x4";
    goto LAB_01646824;
  case 0x16a:
    pcVar1 = "Arm64I16x8AddSaturateU";
    goto LAB_01646c50;
  case 0x16b:
    pcVar1 = "Arm64I16x8SubSaturateU";
    goto LAB_01646c50;
  case 0x16c:
    pcVar1 = "Arm64I16x8MinU";
    goto LAB_01646bb4;
  case 0x16d:
    pcVar1 = "Arm64I16x8MaxU";
    goto LAB_01646bb4;
  case 0x16e:
    pcVar1 = "Arm64I16x8GtU";
    break;
  case 0x16f:
    pcVar1 = "Arm64I16x8GeU";
    break;
  case 0x170:
    pcVar1 = "Arm64I8x16Splat";
    goto LAB_01646a84;
  case 0x171:
    pcVar1 = "Arm64I8x16ExtractLaneU";
    goto LAB_01646c50;
  case 0x172:
    pcVar1 = "Arm64I8x16ExtractLaneS";
    goto LAB_01646c50;
  case 0x173:
    pcVar1 = "Arm64I8x16ReplaceLane";
LAB_01646bf4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x15);
    return;
  case 0x174:
    pcVar1 = "Arm64I8x16Neg";
    break;
  case 0x175:
    pcVar1 = "Arm64I8x16Shl";
    break;
  case 0x176:
    pcVar1 = "Arm64I8x16ShrS";
    goto LAB_01646bb4;
  case 0x177:
    pcVar1 = "Arm64I8x16SConvertI16x8";
    goto LAB_01646824;
  case 0x178:
    pcVar1 = "Arm64I8x16Add";
    break;
  case 0x179:
    pcVar1 = "Arm64I8x16AddSaturateS";
    goto LAB_01646c50;
  case 0x17a:
    pcVar1 = "Arm64I8x16Sub";
    break;
  case 0x17b:
    pcVar1 = "Arm64I8x16SubSaturateS";
    goto LAB_01646c50;
  case 0x17c:
    pcVar1 = "Arm64I8x16Mul";
    break;
  case 0x17d:
    pcVar1 = "Arm64I8x16MinS";
    goto LAB_01646bb4;
  case 0x17e:
    pcVar1 = "Arm64I8x16MaxS";
    goto LAB_01646bb4;
  case 0x17f:
    pcVar1 = "Arm64I8x16Eq";
    goto LAB_01646b78;
  case 0x180:
    pcVar1 = "Arm64I8x16Ne";
    goto LAB_01646b78;
  case 0x181:
    pcVar1 = "Arm64I8x16GtS";
    break;
  case 0x182:
    pcVar1 = "Arm64I8x16GeS";
    break;
  case 0x183:
    pcVar1 = "Arm64I8x16ShrU";
    goto LAB_01646bb4;
  case 0x184:
    pcVar1 = "Arm64I8x16UConvertI16x8";
    goto LAB_01646824;
  case 0x185:
    pcVar1 = "Arm64I8x16AddSaturateU";
    goto LAB_01646c50;
  case 0x186:
    pcVar1 = "Arm64I8x16SubSaturateU";
LAB_01646c50:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x16);
    return;
  case 0x187:
    pcVar1 = "Arm64I8x16MinU";
    goto LAB_01646bb4;
  case 0x188:
    pcVar1 = "Arm64I8x16MaxU";
LAB_01646bb4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0xe);
    return;
  case 0x189:
    pcVar1 = "Arm64I8x16GtU";
    break;
  case 0x18a:
    pcVar1 = "Arm64I8x16GeU";
    break;
  case 0x18b:
    pcVar1 = "Arm64S128Zero";
    break;
  case 0x18c:
    pcVar1 = "Arm64S128Dup";
    goto LAB_01646b78;
  case 0x18d:
    pcVar1 = "Arm64S128And";
    goto LAB_01646b78;
  case 0x18e:
    pcVar1 = "Arm64S128Or";
LAB_01646a28:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0xb);
    return;
  case 399:
    pcVar1 = "Arm64S128Xor";
    goto LAB_01646b78;
  case 400:
    pcVar1 = "Arm64S128Not";
LAB_01646b78:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0xc);
    return;
  case 0x191:
    pcVar1 = "Arm64S128Select";
LAB_01646a84:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0xf);
    return;
  case 0x192:
    pcVar1 = "Arm64S32x4ZipLeft";
    goto LAB_0164697c;
  case 0x193:
    pcVar1 = "Arm64S32x4ZipRight";
    goto LAB_0164695c;
  case 0x194:
    pcVar1 = "Arm64S32x4UnzipLeft";
    goto LAB_01646c28;
  case 0x195:
    pcVar1 = "Arm64S32x4UnzipRight";
    goto LAB_01646c14;
  case 0x196:
    pcVar1 = "Arm64S32x4TransposeLeft";
    goto LAB_01646824;
  case 0x197:
    pcVar1 = "Arm64S32x4TransposeRight";
    goto LAB_01646b8c;
  case 0x198:
    pcVar1 = "Arm64S32x4Shuffle";
    goto LAB_0164697c;
  case 0x199:
    pcVar1 = "Arm64S16x8ZipLeft";
    goto LAB_0164697c;
  case 0x19a:
    pcVar1 = "Arm64S16x8ZipRight";
    goto LAB_0164695c;
  case 0x19b:
    pcVar1 = "Arm64S16x8UnzipLeft";
    goto LAB_01646c28;
  case 0x19c:
    pcVar1 = "Arm64S16x8UnzipRight";
    goto LAB_01646c14;
  case 0x19d:
    pcVar1 = "Arm64S16x8TransposeLeft";
    goto LAB_01646824;
  case 0x19e:
    pcVar1 = "Arm64S16x8TransposeRight";
    goto LAB_01646b8c;
  case 0x19f:
    pcVar1 = "Arm64S8x16ZipLeft";
    goto LAB_0164697c;
  case 0x1a0:
    pcVar1 = "Arm64S8x16ZipRight";
    goto LAB_0164695c;
  case 0x1a1:
    pcVar1 = "Arm64S8x16UnzipLeft";
    goto LAB_01646c28;
  case 0x1a2:
    pcVar1 = "Arm64S8x16UnzipRight";
LAB_01646c14:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x14);
    return;
  case 0x1a3:
    pcVar1 = "Arm64S8x16TransposeLeft";
LAB_01646824:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x17);
    return;
  case 0x1a4:
    pcVar1 = "Arm64S8x16TransposeRight";
    goto LAB_01646b8c;
  case 0x1a5:
    pcVar1 = "Arm64S8x16Concat";
    goto LAB_01646ba0;
  case 0x1a6:
    pcVar1 = "Arm64S8x16Swizzle";
    goto LAB_0164697c;
  case 0x1a7:
    pcVar1 = "Arm64S8x16Shuffle";
    goto LAB_0164697c;
  case 0x1a8:
    pcVar1 = "Arm64S32x2Reverse";
    goto LAB_0164697c;
  case 0x1a9:
    pcVar1 = "Arm64S16x4Reverse";
    goto LAB_0164697c;
  case 0x1aa:
    pcVar1 = "Arm64S16x2Reverse";
    goto LAB_0164697c;
  case 0x1ab:
    pcVar1 = "Arm64S8x8Reverse";
    goto LAB_01646ba0;
  case 0x1ac:
    pcVar1 = "Arm64S8x4Reverse";
    goto LAB_01646ba0;
  case 0x1ad:
    pcVar1 = "Arm64S8x2Reverse";
    goto LAB_01646ba0;
  case 0x1ae:
    pcVar1 = "Arm64S1x2AnyTrue";
    goto LAB_01646ba0;
  case 0x1af:
    pcVar1 = "Arm64S1x2AllTrue";
    goto LAB_01646ba0;
  case 0x1b0:
    pcVar1 = "Arm64S1x4AnyTrue";
    goto LAB_01646ba0;
  case 0x1b1:
    pcVar1 = "Arm64S1x4AllTrue";
    goto LAB_01646ba0;
  case 0x1b2:
    pcVar1 = "Arm64S1x8AnyTrue";
    goto LAB_01646ba0;
  case 0x1b3:
    pcVar1 = "Arm64S1x8AllTrue";
LAB_01646ba0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x10);
    return;
  case 0x1b4:
    pcVar1 = "Arm64S1x16AnyTrue";
    goto LAB_0164697c;
  case 0x1b5:
    pcVar1 = "Arm64S1x16AllTrue";
LAB_0164697c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x11);
    return;
  case 0x1b6:
    pcVar1 = "Arm64S8x16LoadSplat";
    goto LAB_01646c28;
  case 0x1b7:
    pcVar1 = "Arm64S16x8LoadSplat";
    goto LAB_01646c28;
  case 0x1b8:
    pcVar1 = "Arm64S32x4LoadSplat";
    goto LAB_01646c28;
  case 0x1b9:
    pcVar1 = "Arm64S64x2LoadSplat";
    goto LAB_01646c28;
  case 0x1ba:
    pcVar1 = "Arm64I16x8Load8x8S";
    goto LAB_0164695c;
  case 0x1bb:
    pcVar1 = "Arm64I16x8Load8x8U";
LAB_0164695c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x12);
    return;
  case 0x1bc:
    pcVar1 = "Arm64I32x4Load16x4S";
    goto LAB_01646c28;
  case 0x1bd:
    pcVar1 = "Arm64I32x4Load16x4U";
    goto LAB_01646c28;
  case 0x1be:
    pcVar1 = "Arm64I64x2Load32x2S";
    goto LAB_01646c28;
  case 0x1bf:
    pcVar1 = "Arm64I64x2Load32x2U";
LAB_01646c28:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x13);
    return;
  case 0x1c0:
    pcVar1 = "Arm64Word64AtomicLoadUint8";
    goto LAB_01646bd4;
  case 0x1c1:
    pcVar1 = "Arm64Word64AtomicLoadUint16";
    goto LAB_01646b4c;
  case 0x1c2:
    pcVar1 = "Arm64Word64AtomicLoadUint32";
    goto LAB_01646b4c;
  case 0x1c3:
    pcVar1 = "Arm64Word64AtomicLoadUint64";
    goto LAB_01646b4c;
  case 0x1c4:
    pcVar1 = "Arm64Word64AtomicStoreWord8";
LAB_01646b4c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1b);
    return;
  case 0x1c5:
    pcVar1 = "Arm64Word64AtomicStoreWord16";
    goto LAB_0164636c;
  case 0x1c6:
    pcVar1 = "Arm64Word64AtomicStoreWord32";
    goto LAB_0164636c;
  case 0x1c7:
    pcVar1 = "Arm64Word64AtomicStoreWord64";
LAB_0164636c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1c);
    return;
  case 0x1c8:
    pcVar1 = "Arm64Word64AtomicAddUint8";
    goto LAB_01646abc;
  case 0x1c9:
    pcVar1 = "Arm64Word64AtomicAddUint16";
    goto LAB_01646bd4;
  case 0x1ca:
    pcVar1 = "Arm64Word64AtomicAddUint32";
    goto LAB_01646bd4;
  case 0x1cb:
    pcVar1 = "Arm64Word64AtomicAddUint64";
    goto LAB_01646bd4;
  case 0x1cc:
    pcVar1 = "Arm64Word64AtomicSubUint8";
    goto LAB_01646abc;
  case 0x1cd:
    pcVar1 = "Arm64Word64AtomicSubUint16";
    goto LAB_01646bd4;
  case 0x1ce:
    pcVar1 = "Arm64Word64AtomicSubUint32";
    goto LAB_01646bd4;
  case 0x1cf:
    pcVar1 = "Arm64Word64AtomicSubUint64";
    goto LAB_01646bd4;
  case 0x1d0:
    pcVar1 = "Arm64Word64AtomicAndUint8";
    goto LAB_01646abc;
  case 0x1d1:
    pcVar1 = "Arm64Word64AtomicAndUint16";
    goto LAB_01646bd4;
  case 0x1d2:
    pcVar1 = "Arm64Word64AtomicAndUint32";
    goto LAB_01646bd4;
  case 0x1d3:
    pcVar1 = "Arm64Word64AtomicAndUint64";
    goto LAB_01646bd4;
  case 0x1d4:
    pcVar1 = "Arm64Word64AtomicOrUint8";
LAB_01646b8c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x18);
    return;
  case 0x1d5:
    pcVar1 = "Arm64Word64AtomicOrUint16";
    goto LAB_01646abc;
  case 0x1d6:
    pcVar1 = "Arm64Word64AtomicOrUint32";
    goto LAB_01646abc;
  case 0x1d7:
    pcVar1 = "Arm64Word64AtomicOrUint64";
    goto LAB_01646abc;
  case 0x1d8:
    pcVar1 = "Arm64Word64AtomicXorUint8";
LAB_01646abc:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x19);
    return;
  case 0x1d9:
    pcVar1 = "Arm64Word64AtomicXorUint16";
    goto LAB_01646bd4;
  case 0x1da:
    pcVar1 = "Arm64Word64AtomicXorUint32";
    goto LAB_01646bd4;
  case 0x1db:
    pcVar1 = "Arm64Word64AtomicXorUint64";
LAB_01646bd4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1a);
    return;
  case 0x1dc:
    pcVar1 = "Arm64Word64AtomicExchangeUint8";
LAB_01646678:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1e);
    return;
  case 0x1dd:
    pcVar1 = "Arm64Word64AtomicExchangeUint16";
    goto LAB_016468e4;
  case 0x1de:
    pcVar1 = "Arm64Word64AtomicExchangeUint32";
    goto LAB_016468e4;
  case 0x1df:
    pcVar1 = "Arm64Word64AtomicExchangeUint64";
LAB_016468e4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1f);
    return;
  case 0x1e0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"Arm64Word64AtomicCompareExchangeUint8",0x25);
    return;
  case 0x1e1:
    pcVar1 = "Arm64Word64AtomicCompareExchangeUint16";
    goto LAB_016464cc;
  case 0x1e2:
    pcVar1 = "Arm64Word64AtomicCompareExchangeUint32";
    goto LAB_016464cc;
  case 0x1e3:
    pcVar1 = "Arm64Word64AtomicCompareExchangeUint64";
LAB_016464cc:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x26);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0xd);
  return;
}

