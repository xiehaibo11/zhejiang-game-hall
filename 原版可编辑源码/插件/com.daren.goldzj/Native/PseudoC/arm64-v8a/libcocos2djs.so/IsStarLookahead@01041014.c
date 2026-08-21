
/* v8::internal::interpreter::Bytecodes::IsStarLookahead(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::OperandScale) */

undefined8 v8::internal::interpreter::Bytecodes::IsStarLookahead(undefined1 param_1,char param_2)

{
  if (param_2 == '\x01') {
    switch(param_1) {
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x1a:
    case 0x28:
    case 0x2a:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x40:
    case 0x41:
    case 0x4c:
    case 0x4d:
    case 0x52:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x65:
    case 0x66:
      return 1;
    }
  }
  return 0;
}

