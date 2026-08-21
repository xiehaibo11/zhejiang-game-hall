
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (universe::network::Network::*)(float),
   universe::network::Network*&, std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (universe::network::Network::*)(float),
   universe::network::Network*&, std::__ndk1::placeholders::__ph<1> const&> >, void
   (float)>::TEMPNAMEPLACEHOLDERVALUE(float&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(universe::network::Network::*)(float),universe::network::Network*&,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::network::Network::*)(float),universe::network::Network*&,std::__ndk1::placeholders::__ph<1>const&>>,void(float)>
::operator()(__func<std::__ndk1::__bind<void(universe::network::Network::*)(float),universe::network::Network*&,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::network::Network::*)(float),universe::network::Network*&,std::__ndk1::placeholders::__ph<1>const&>>,void(float)>
             *this,float *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x009f62c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}

