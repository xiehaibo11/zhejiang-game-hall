
/* v8::internal::compiler::IsCheckedWithFeedback(v8::internal::compiler::Operator const*) */

undefined8 v8::internal::compiler::IsCheckedWithFeedback(Operator *param_1)

{
  switch(*(undefined2 *)(param_1 + 0x10)) {
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x67:
  case 0x69:
  case 0x6d:
  case 0x6e:
  case 0xbf:
  case 0xd4:
  case 0xd7:
  case 0xdb:
  case 0xdd:
    return 1;
  default:
    return 0;
  }
}

