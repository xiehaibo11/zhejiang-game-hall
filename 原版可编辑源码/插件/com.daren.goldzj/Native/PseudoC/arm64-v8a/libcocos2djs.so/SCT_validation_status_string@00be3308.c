
char * SCT_validation_status_string(void)

{
  uint uVar1;
  
  uVar1 = SCT_get_validation_status();
  if (uVar1 < 6) {
    return (&PTR_s_not_set_018a72e9_0x10_01c8c980)[(int)uVar1];
  }
  return "unknown status";
}

