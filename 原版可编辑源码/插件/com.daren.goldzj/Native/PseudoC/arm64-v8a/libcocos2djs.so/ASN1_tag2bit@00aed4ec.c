
ulong ASN1_tag2bit(int tag)

{
  if (0x1e < (uint)tag) {
    return 0;
  }
  return *(ulong *)(&DAT_018a8df8 + (long)tag * 8);
}

