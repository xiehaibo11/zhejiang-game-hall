
/* v8::platform::tracing::TraceObject::InitializeForTesting(char, unsigned char const*, char const*,
   char const*, unsigned long, unsigned long, int, char const**, unsigned char const*, unsigned long
   const*, std::__ndk1::unique_ptr<v8::ConvertableToTraceFormat,
   std::__ndk1::default_delete<v8::ConvertableToTraceFormat> >*, unsigned int, int, int, long, long,
   unsigned long, unsigned long) */

void v8::platform::tracing::TraceObject::InitializeForTesting
               (char param_1,uchar *param_2,char *param_3,char *param_4,ulong param_5,ulong param_6,
               int param_7,char **param_8,uchar *param_9,ulong *param_10,unique_ptr *param_11,
               uint param_12,int param_13,int param_14,long param_15,long param_16,ulong param_17,
               ulong param_18)

{
  int *piVar1;
  undefined8 in_stack_00000050;
  
  piVar1 = (int *)(ulong)(byte)param_1;
  *(char *)(piVar1 + 2) = (char)param_2;
  *(char **)(piVar1 + 4) = param_4;
  *(ulong *)(piVar1 + 6) = param_5;
  *(char **)(piVar1 + 8) = param_3;
  *(ulong *)(piVar1 + 10) = param_6;
  *(ulong *)(piVar1 + 0xc) = (ulong)(uint)param_7;
  piVar1[0xe] = (int)param_8;
  *piVar1 = param_14;
  piVar1[1] = (int)param_15;
  piVar1[0x20] = param_13;
  *(ulong *)(piVar1 + 0x24) = param_17;
  *(long *)(piVar1 + 0x22) = param_16;
  *(ulong *)(piVar1 + 0x26) = param_18;
  *(undefined8 *)(piVar1 + 0x28) = in_stack_00000050;
  return;
}

