
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualArrayBoilerplateDescription(v8::internal::ArrayBoilerplateDescription)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualArrayBoilerplateDescription
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  RecordVirtualObjectsForConstantPoolOrEmbeddedObjects
            (this,param_2,param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7),0xc);
  return;
}

