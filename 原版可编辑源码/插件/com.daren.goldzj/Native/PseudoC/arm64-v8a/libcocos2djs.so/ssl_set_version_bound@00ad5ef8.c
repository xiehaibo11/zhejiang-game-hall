
undefined8 ssl_set_version_bound(int param_1,uint param_2,uint *param_3)

{
  if (param_2 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_1 == 0x1ffff) {
    if ((3 < param_2 - 0xfefd) && (param_2 != 0x100)) {
      return 0;
    }
  }
  else {
    if (param_1 != 0x10000) {
      return 0;
    }
    if ((param_2 & 0xfffffffc) != 0x300) {
      return 0;
    }
  }
  *param_3 = param_2;
  return 1;
}

