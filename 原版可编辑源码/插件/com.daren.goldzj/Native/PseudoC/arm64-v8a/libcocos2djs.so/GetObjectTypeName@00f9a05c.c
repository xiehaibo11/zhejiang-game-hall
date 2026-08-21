
/* v8::internal::Heap::GetObjectTypeName(unsigned long, char const**, char const**) */

undefined8 v8::internal::Heap::GetObjectTypeName(ulong param_1,char **param_2,char **param_3)

{
  undefined8 uVar1;
  
  if ((char **)0x488 < param_2) {
    return 0;
  }
  if ((uint)param_2 < 0x489) {
                    /* WARNING: Could not recover jumptable at 0x00f9a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_00f9a094 +
                      (ulong)*(ushort *)(&DAT_019c06dc + ((ulong)param_2 & 0xffffffff) * 2) * 4))(0)
    ;
    return uVar1;
  }
  return 0;
}

