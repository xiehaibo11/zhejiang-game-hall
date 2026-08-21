
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (universe::Downloader2::*)(float),
   universe::Downloader2*&, std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (universe::Downloader2::*)(float),
   universe::Downloader2*&, std::__ndk1::placeholders::__ph<1> const&> >, void (float)>::__clone()
   const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(universe::Downloader2::*)(float),universe::Downloader2*&,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Downloader2::*)(float),universe::Downloader2*&,std::__ndk1::placeholders::__ph<1>const&>>,void(float)>
::__clone(__func<std::__ndk1::__bind<void(universe::Downloader2::*)(float),universe::Downloader2*&,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Downloader2::*)(float),universe::Downloader2*&,std::__ndk1::placeholders::__ph<1>const&>>,void(float)>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009ec01c to 00aec03f has its CatchHandler @ 009ebf10 */
                    /* catch() { ... } // from try @ 009ebf60 with catch @ 009ec024
                       catch() { ... } // from try @ 009ec008 with catch @ 009ec024 */
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_016a0ce8;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

