
/* v8::internal::StringToBigIntHelper::GetResult() */

undefined8 __thiscall v8::internal::StringToBigIntHelper::GetResult(StringToBigIntHelper *this)

{
  undefined8 uVar1;
  
  StringToIntHelper::ParseInt((StringToIntHelper *)this);
  if (((*(int *)(this + 0x40) == 0) && (*(int *)(this + 0x2c) != 2)) &&
     (*(int *)(this + 0x20) != 10)) {
switchD_010639ec_caseD_1:
    return 0;
  }
  switch(*(undefined4 *)(this + 0x34)) {
  case 1:
  case 2:
    goto switchD_010639ec_caseD_1;
  case 3:
    if (*(int *)(this + 0x40) != 0) goto switchD_010639ec_default;
    *(undefined4 *)(this + 0x34) = 4;
  case 4:
    uVar1 = BigInt::Zero(*(Isolate **)(this + 8));
    return uVar1;
  case 5:
    uVar1 = BigInt::Finalize(*(undefined8 *)(this + 0x38),*(int *)(this + 0x2c) == 0);
    return uVar1;
  default:
switchD_010639ec_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

