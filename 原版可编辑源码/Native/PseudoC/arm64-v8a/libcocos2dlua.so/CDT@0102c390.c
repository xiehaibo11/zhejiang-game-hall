
/* p2t::CDT::CDT(std::__ndk1::vector<p2t::Point*, std::__ndk1::allocator<p2t::Point*> > const&) */

void __thiscall p2t::CDT::CDT(CDT *this,vector *param_1)

{
  SweepContext *this_00;
  undefined8 *puVar1;
  
  this_00 = operator_new(200);
  SweepContext::SweepContext(this_00,param_1);
  *(SweepContext **)this = this_00;
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}

