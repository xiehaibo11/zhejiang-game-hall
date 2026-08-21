
/* p2t::SweepContext::SweepContext(std::__ndk1::vector<p2t::Point*,
   std::__ndk1::allocator<p2t::Point*> > const&) */

void __thiscall p2t::SweepContext::SweepContext(SweepContext *this,vector *param_1)

{
                    /* catch() { ... } // from try @ 0102c5fc with catch @ 0102c620 */
  *(undefined8 *)(this + 0x40) = 0;
  this[0x48] = (SweepContext)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x31) = 0;
  *(undefined8 *)(this + 0x29) = 0;
  *(SweepContext **)(this + 0x68) = this + 0x68;
  *(SweepContext **)(this + 0x70) = this + 0x68;
  *(undefined8 *)(this + 0x78) = 0;
  std::__ndk1::vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>>::vector
            ((vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>> *)(this + 0x80),param_1);
                    /* try { // try from 0102c660 to 0112c667 has its CatchHandler @ 0102c67c */
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  InitEdges(this,(vector *)(this + 0x80));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0102c660 with catch @ 0102c67c
                        */
  return;
}

