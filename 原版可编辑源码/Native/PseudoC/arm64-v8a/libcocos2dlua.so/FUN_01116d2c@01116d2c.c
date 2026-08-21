
void FUN_01116d2c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_5 != 0) {
    switch(param_2) {
    case 1:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "Incorrect count for \"%s\"; tag ignored";
      goto LAB_01116e58;
    case 2:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "Incompatible type for \"%s\"; tag ignored";
      break;
    case 3:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "IO error during reading of \"%s\"; tag ignored";
      break;
    case 4:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "Incorrect value for \"%s\"; tag ignored";
      break;
    case 5:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "Cannot handle different values per sample for \"%s\"; tag ignored";
      break;
    case 6:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "Sanity check on size of \"%s\" value failed; tag ignored";
      break;
    case 7:
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar2 = "Out of memory reading of \"%s\"; tag ignored";
      break;
    default:
switchD_01116d4c_default:
      return;
    }
    TIFFWarningExt(uVar1,param_3,pcVar2);
    return;
  }
  switch(param_2) {
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "Incorrect count for \"%s\"";
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "Incompatible type for \"%s\"";
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "IO error during reading of \"%s\"";
    break;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "Incorrect value for \"%s\"";
    break;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "Cannot handle different values per sample for \"%s\"";
    break;
  case 6:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "Sanity check on size of \"%s\" value failed";
    break;
  case 7:
    uVar1 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar2 = "Out of memory reading of \"%s\"";
    break;
  default:
    goto switchD_01116d4c_default;
  }
LAB_01116e58:
  TIFFErrorExt(uVar1,param_3,pcVar2);
  return;
}

