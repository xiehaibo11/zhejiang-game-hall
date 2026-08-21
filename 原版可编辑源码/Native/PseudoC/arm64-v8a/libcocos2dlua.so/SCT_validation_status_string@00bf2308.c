
char * SCT_validation_status_string(void)

{
  uint uVar1;
  
  uVar1 = SCT_get_validation_status();
  if (uVar1 < 6) {
    return (&PTR_s_not_set_013d59d1_0x10_016c78d0)[(int)uVar1];
  }
  return "unknown status";
}

