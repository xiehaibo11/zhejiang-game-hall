
/* ClipperLib::Param1RightOfParam2(ClipperLib::OutRec*, ClipperLib::OutRec*) */

undefined8 ClipperLib::Param1RightOfParam2(OutRec *param_1,OutRec *param_2)

{
  do {
    param_1 = *(OutRec **)(param_1 + 8);
    if (param_1 == param_2) {
      return 1;
    }
  } while (param_1 != (OutRec *)0x0);
  return 0;
}

