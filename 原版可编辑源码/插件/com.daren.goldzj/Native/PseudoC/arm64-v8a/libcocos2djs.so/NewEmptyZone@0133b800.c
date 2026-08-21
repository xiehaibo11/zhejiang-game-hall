
/* v8::internal::compiler::ZoneStats::NewEmptyZone(char const*) */

Zone * __thiscall v8::internal::compiler::ZoneStats::NewEmptyZone(ZoneStats *this,char *param_1)

{
  Zone *this_00;
  Zone *local_18;
  
  this_00 = operator_new(0x40);
  Zone::Zone(this_00,*(AccountingAllocator **)(this + 0x40),param_1);
  local_18 = this_00;
  if (*(undefined8 **)(this + 8) == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::vector<v8::internal::Zone*,std::__ndk1::allocator<v8::internal::Zone*>>::
    __push_back_slow_path<v8::internal::Zone*const&>
              ((vector<v8::internal::Zone*,std::__ndk1::allocator<v8::internal::Zone*>> *)this,
               &local_18);
  }
  else {
    **(undefined8 **)(this + 8) = this_00;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  return local_18;
}

