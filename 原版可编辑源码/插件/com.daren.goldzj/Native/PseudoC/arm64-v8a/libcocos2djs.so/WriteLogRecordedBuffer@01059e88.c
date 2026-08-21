
/* v8::internal::PerfBasicLogger::WriteLogRecordedBuffer(unsigned long, int, char const*, int) */

void __thiscall
v8::internal::PerfBasicLogger::WriteLogRecordedBuffer
          (PerfBasicLogger *this,ulong param_1,int param_2,char *param_3,int param_4)

{
  base::OS::FPrint(*(__sFILE **)(this + 0x18),"%lx %x %.*s\n",param_1,(ulong)(uint)param_2,
                   (ulong)(uint)param_4,param_3);
  return;
}

