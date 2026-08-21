
undefined8 inflateEnd(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x38), lVar2 == 0)) ||
     (pcVar3 = *(code **)(param_1 + 0x48), pcVar3 == (code *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*(long *)(lVar2 + 0x40) != 0) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x40));
      pcVar3 = *(code **)(param_1 + 0x48);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    (*pcVar3)(*(undefined8 *)(param_1 + 0x50),lVar2);
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return uVar1;
}

