
undefined8 TIFFRGBAImageGet(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if ((code *)param_1[8] == (code *)0x0) {
    uVar3 = *(undefined8 *)(*param_1 + 0x3b8);
    uVar1 = TIFFFileName();
    pcVar2 = "No \"get\" routine setup";
  }
  else {
    if (param_1[9] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00dc5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)param_1[8])();
      return uVar1;
    }
    uVar3 = *(undefined8 *)(*param_1 + 0x3b8);
    uVar1 = TIFFFileName();
    pcVar2 = "No \"put\" routine setupl; probably can not handle image format";
  }
  TIFFErrorExt(uVar3,uVar1,pcVar2);
  return 0;
}

