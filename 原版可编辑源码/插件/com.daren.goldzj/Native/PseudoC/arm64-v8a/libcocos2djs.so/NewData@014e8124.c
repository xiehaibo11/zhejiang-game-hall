
/* v8::internal::BasicBlockProfiler::NewData(unsigned long) */

Data * __thiscall v8::internal::BasicBlockProfiler::NewData(BasicBlockProfiler *this,ulong param_1)

{
  Data *this_00;
  long *plVar1;
  long lVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0x18));
  this_00 = operator_new(0x80);
  Data::Data(this_00,param_1);
  plVar1 = operator_new(0x18);
  plVar1[1] = (long)this;
  plVar1[2] = (long)this_00;
  lVar2 = *(long *)this;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)this = plVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  base::Mutex::Unlock((Mutex *)(this + 0x18));
  return this_00;
}

