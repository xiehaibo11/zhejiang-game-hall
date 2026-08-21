
/* astcGetWidth(unsigned char const*) */

ulong astcGetWidth(uchar *param_1)

{
  return (ulong)*(uint3 *)(param_1 + 7);
}

