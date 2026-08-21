
/* v8::internal::compiler::OperatorProperties::HasFrameStateInput(v8::internal::compiler::Operator
   const*) */

undefined8 v8::internal::compiler::OperatorProperties::HasFrameStateInput(Operator *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  switch(*(undefined2 *)(param_1 + 0x10)) {
  case 0x26:
  case 0x29:
  case 0x2b1:
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
  case 0x2d4:
  case 0x2d5:
  case 0x2d6:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e7:
  case 0x2e9:
  case 0x2ea:
  case 0x2eb:
  case 0x2ec:
  case 0x2ed:
  case 0x2ee:
  case 0x2ef:
  case 0x2f0:
  case 0x2f2:
  case 0x2f3:
  case 0x2f4:
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
  case 0x304:
  case 0x305:
  case 0x306:
  case 0x308:
  case 0x309:
  case 0x30b:
  case 0x316:
  case 0x317:
  case 0x318:
  case 0x319:
  case 0x31a:
  case 0x31b:
  case 0x31c:
  case 0x31d:
    goto switchD_0179d680_caseD_26;
  default:
    uVar2 = 0;
switchD_0179d680_caseD_26:
    return uVar2;
  case 0x307:
    puVar1 = (undefined4 *)CallRuntimeParametersOf(param_1);
    uVar2 = Linkage::NeedsFrameStateInput(*puVar1);
    return uVar2;
  }
}

