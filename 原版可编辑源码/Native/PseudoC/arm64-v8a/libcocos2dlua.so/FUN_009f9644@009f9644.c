
undefined8 FUN_009f9644(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  
                    /* try { // try from 009f9648 to 00af9663 has its CatchHandler @ 009f9718 */
  lVar2 = FUN_009f9a54();
  uVar1 = luaL_checkoption(param_1,1,0,&PTR_s_enum_as_name_01769930);
                    /* try { // try from 009f9684 to 00af96bf has its CatchHandler @ 009f971c */
  switch(uVar1) {
  case 0:
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xfe;
    break;
  case 1:
    bVar3 = *(byte *)(lVar2 + 0x484) | 1;
    break;
  case 2:
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xe7;
    break;
  case 3:
                    /* try { // try from 009f96c0 to 00af9737 has its CatchHandler @ 009f95d0 */
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xef | 8;
    break;
  case 4:
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xe7 | 0x10;
    break;
  case 5:
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xf9;
    break;
  case 6:
    bVar3 = *(byte *)(lVar2 + 0x484) | 6;
    break;
  case 7:
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xfb | 2;
    break;
  case 8:
    bVar3 = *(byte *)(lVar2 + 0x484) & 0xf9 | 4;
    break;
  default:
    goto switchD_009f9694_default;
  }
  *(byte *)(lVar2 + 0x484) = bVar3;
switchD_009f9694_default:
                    /* catch() { ... } // from try @ 009f9648 with catch @ 009f9718 */
                    /* catch() { ... } // from try @ 009f9684 with catch @ 009f971c */
  return 0;
}

