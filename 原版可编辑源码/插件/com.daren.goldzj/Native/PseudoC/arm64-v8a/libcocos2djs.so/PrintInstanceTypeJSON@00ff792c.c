
/* v8::internal::ObjectStats::PrintInstanceTypeJSON(char const*, int, char const*, int) */

void __thiscall
v8::internal::ObjectStats::PrintInstanceTypeJSON
          (ObjectStats *this,char *param_1,int param_2,char *param_3,int param_4)

{
  PrintF("{ ",param_1,(ulong)(uint)param_2);
  PrintF("\"isolate\": \"%p\", \"id\": %d, \"key\": \"%s\", ",*(long *)this + -0x8850,
         (ulong)(uint)param_2,param_1);
  PrintF("\"type\": \"instance_type_data\", ");
  PrintF("\"instance_type\": %d, ",(ulong)(uint)param_4);
  PrintF("\"instance_type_name\": \"%s\", ",param_3);
  PrintF("\"overall\": %zu, ",*(undefined8 *)(this + (long)param_4 * 8 + 0x4898));
  PrintF("\"count\": %zu, ",*(undefined8 *)(this + (long)param_4 * 8 + 8));
  PrintF("\"over_allocated\": %zu, ",*(undefined8 *)(this + (long)param_4 * 8 + 0x9128));
  PrintF("\"histogram\": ");
  FUN_00ff7a48(this + (long)param_4 * 0x80 + 0xb570);
  PrintF(",");
  PrintF("\"over_allocated_histogram\": ");
  FUN_00ff7a48(this + (long)param_4 * 0x80 + 0x2f9f0);
  PrintF(" }\n");
  return;
}

