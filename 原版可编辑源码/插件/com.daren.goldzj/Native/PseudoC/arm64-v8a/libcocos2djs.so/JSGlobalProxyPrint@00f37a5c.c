
/* v8::internal::JSGlobalProxy::JSGlobalProxyPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSGlobalProxy::JSGlobalProxyPrint(JSGlobalProxy *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  ulong local_28;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSGlobalProxy");
  uVar2 = *(ulong *)this;
  if (*(int *)(*(long *)(uVar2 & 0xffffffff00000000 | 0x9508) + 8) == 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - native context: ",0x14);
    local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
    internal::operator<<(pbVar1,(Brief *)&local_28);
    uVar2 = *(ulong *)this;
  }
  FUN_00f3d880(param_1,uVar2,1);
  return;
}

