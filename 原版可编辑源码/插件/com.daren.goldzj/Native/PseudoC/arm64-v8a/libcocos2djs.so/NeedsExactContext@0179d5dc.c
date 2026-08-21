
/* v8::internal::compiler::OperatorProperties::NeedsExactContext(v8::internal::compiler::Operator
   const*) */

ulong v8::internal::compiler::OperatorProperties::NeedsExactContext(Operator *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar3 = 0;
  switch(*(undefined2 *)(param_1 + 0x10)) {
  case 0x2b1:
  case 0x2b2:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2bd:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
  case 0x2c6:
  case 0x2c7:
  case 0x2c8:
  case 0x2c9:
  case 0x2ca:
  case 0x2cb:
  case 0x2cc:
  case 0x2cd:
  case 0x2ce:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
  case 0x2d2:
  case 0x2d3:
  case 0x2d6:
  case 0x2dc:
  case 0x2dd:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
  case 0x2e8:
  case 0x2eb:
  case 0x2ef:
  case 0x2f4:
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
  case 0x308:
  case 0x309:
  case 0x30a:
  case 0x30b:
  case 0x30c:
  case 0x30d:
  case 0x311:
  case 0x312:
  case 0x313:
  case 0x314:
  case 0x31a:
    break;
  case 0x2d4:
    pcVar1 = (char *)CreateArgumentsTypeOf(param_1);
    uVar3 = (ulong)(*pcVar1 == '\0');
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x2da:
  case 0x2de:
  case 0x2e9:
  case 0x2ea:
  case 0x2ec:
  case 0x2ed:
  case 0x2ee:
  case 0x2f0:
  case 0x2f1:
  case 0x2f2:
  case 0x2f3:
  case 0x2f5:
  case 0x2f6:
  case 0x2f7:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x30e:
  case 0x30f:
  case 0x310:
  case 0x31d:
    uVar3 = 1;
    break;
  case 0x307:
    puVar2 = (undefined4 *)CallRuntimeParametersOf(param_1);
    uVar3 = Runtime::NeedsExactContext(*puVar2);
    return uVar3;
  }
  return uVar3;
}

