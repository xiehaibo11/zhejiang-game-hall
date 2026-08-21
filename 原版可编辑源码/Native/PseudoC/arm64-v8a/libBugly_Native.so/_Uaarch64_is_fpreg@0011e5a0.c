
bool _Uaarch64_is_fpreg(uint param_1)

{
  return (param_1 & 0xffffffe0) == 0x40;
}

