
undefined4 FUN_00a559a8(long *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x218);
  uVar1 = FUN_00a35ac4(param_1,param_2,*(int *)(lVar2 + 0x87c) == 0xb | param_3 & 1);
  if (lVar3 != 0) {
    if ((*(long *)(lVar3 + 0x88) == *(long *)(lVar3 + 0x90)) || (*(int *)(lVar2 + 0x87c) == 0xb)) {
      if ((*(int *)(lVar2 + 0x87c) == 0xb) && ((int)param_1[0xc5] == -1)) {
        FUN_00a38740(lVar2,"Got an RTP Receive with a CSeq of %ld\n",*(long *)(lVar3 + 0x90));
      }
    }
    else {
      FUN_00a38a08(lVar2,"The CSeq of this request %ld did not match the response %ld");
      uVar1 = 0x55;
    }
  }
  return uVar1;
}

