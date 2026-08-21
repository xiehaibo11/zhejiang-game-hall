
/* universe::network::Everywhere::~Everywhere() */

void __thiscall universe::network::Everywhere::~Everywhere(Everywhere *this)

{
  OStream *this_00;
  
  clear(this);
  this_00 = *(OStream **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (this_00 != (OStream *)0x0) {
    OStream::~OStream(this_00);
    operator_delete(this_00);
  }
                    /* try { // try from 00a06d08 to 00b06d1f has its CatchHandler @ 00a06f00 */
  std::__ndk1::
  stack<universe::network::AUpdates*,std::__ndk1::deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>>
  ::~stack((stack<universe::network::AUpdates*,std::__ndk1::deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>>
            *)this);
  return;
}

