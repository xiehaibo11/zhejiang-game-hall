
/* v8::internal::Relocatable::ArchiveState(v8::internal::Isolate*, char*) */

char * v8::internal::Relocatable::ArchiveState(Isolate *param_1,char *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0xb790);
  *(undefined8 *)(param_1 + 0xb790) = 0;
  return param_2 + 8;
}

