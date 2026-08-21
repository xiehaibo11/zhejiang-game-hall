
/* v8::base::hash_combine(unsigned long, unsigned long) */

long v8::base::hash_combine(ulong param_1,ulong param_2)

{
  return ((param_2 * -0x395b586ca42e166b ^ param_2 * -0x395b586ca42e166b >> 0x2f) *
          -0x395b586ca42e166b ^ param_1) * -0x395b586ca42e166b;
}

