
undefined8 ossl_statem_server_max_message_size(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00ad834c to 00bd839b has its CatchHandler @ 00ad82f0 */
  uVar1 = 0x20144;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    goto switchD_00ad8374_caseD_14;
  default:
                    /* catch() { ... } // from try @ 00ad8338 with catch @ 00ad8380 */
    uVar1 = 0;
switchD_00ad8374_caseD_14:
    return uVar1;
  case 0x1b:
    return *(undefined8 *)(param_1 + 0x1f8);
  case 0x1c:
    return 0x800;
  case 0x1d:
    return 0x4000;
  case 0x1e:
    return 0x202;
  case 0x1f:
    return 1;
  case 0x20:
    return 0x40;
  }
}

