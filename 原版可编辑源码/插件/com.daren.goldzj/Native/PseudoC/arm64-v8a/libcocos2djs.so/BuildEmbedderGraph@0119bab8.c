
/* v8::internal::HeapProfiler::BuildEmbedderGraph(v8::internal::Isolate*, v8::EmbedderGraph*) */

void __thiscall
v8::internal::HeapProfiler::BuildEmbedderGraph
          (HeapProfiler *this,Isolate *param_1,EmbedderGraph *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x78);
  for (puVar2 = *(undefined8 **)(this + 0x70); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  }
  return;
}

