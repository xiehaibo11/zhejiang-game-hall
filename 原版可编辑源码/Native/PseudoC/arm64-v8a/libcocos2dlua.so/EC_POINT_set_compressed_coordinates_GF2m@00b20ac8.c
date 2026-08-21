
undefined8 EC_POINT_set_compressed_coordinates_GF2m(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int reason;
  int line;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if ((*(code **)(pbVar2 + 0x98) == (code *)0x0) && ((*pbVar2 & 1) == 0)) {
    reason = 0x42;
    line = 0x42;
  }
  else {
    if (pbVar2 == (byte *)*param_2) {
      if ((*pbVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b20b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(pbVar2 + 0x98))();
        return uVar1;
      }
      if (*(int *)(pbVar2 + 4) == 0x196) {
        uVar1 = ec_GFp_simple_set_compressed_coordinates();
        return uVar1;
      }
      uVar1 = ec_GF2m_simple_set_compressed_coordinates();
      return uVar1;
    }
    reason = 0x65;
    line = 0x47;
  }
  ERR_put_error(0x10,0xba,reason,"crypto/ec/ec_oct.c",line);
  return 0;
}

