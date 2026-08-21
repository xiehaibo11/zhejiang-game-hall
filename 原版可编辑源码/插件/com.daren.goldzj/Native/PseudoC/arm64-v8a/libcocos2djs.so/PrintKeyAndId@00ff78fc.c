
/* v8::internal::ObjectStats::PrintKeyAndId(char const*, int) */

void __thiscall
v8::internal::ObjectStats::PrintKeyAndId(ObjectStats *this,char *param_1,int param_2)

{
  PrintF("\"isolate\": \"%p\", \"id\": %d, \"key\": \"%s\", ",*(long *)this + -0x8850,
         (ulong)(uint)param_2,param_1);
  return;
}

