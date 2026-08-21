
ulong ASN1_tag2bit(int tag)

{
  if (0x1e < (uint)tag) {
    return 0;
  }
  return *(ulong *)(&DAT_013d9400 + (long)tag * 8);
}

