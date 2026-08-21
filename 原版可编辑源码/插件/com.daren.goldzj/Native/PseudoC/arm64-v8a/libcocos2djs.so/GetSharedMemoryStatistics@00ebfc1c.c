
/* v8::V8::GetSharedMemoryStatistics(v8::SharedMemoryStatistics*) */

void v8::V8::GetSharedMemoryStatistics(SharedMemoryStatistics *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

