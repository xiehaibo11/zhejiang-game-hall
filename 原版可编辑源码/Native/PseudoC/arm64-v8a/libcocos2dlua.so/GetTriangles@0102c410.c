
/* p2t::CDT::GetTriangles() */

void p2t::CDT::GetTriangles(void)

{
  undefined8 *in_x0;
  vector *pvVar1;
  vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *in_x8;
  
  pvVar1 = (vector *)SweepContext::GetTriangles((SweepContext *)*in_x0);
  std::__ndk1::vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::vector(in_x8,pvVar1);
  return;
}

