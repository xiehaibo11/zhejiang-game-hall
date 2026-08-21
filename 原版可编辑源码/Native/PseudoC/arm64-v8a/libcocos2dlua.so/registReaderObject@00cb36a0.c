
/* cocos2d::CSLoader::registReaderObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Ref* (*)()) */

void __thiscall
cocos2d::CSLoader::registReaderObject(CSLoader *this,basic_string *param_1,_func_Ref_ptr *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  ObjectFactory *this_00;
  TInfo aTStack_90 [24];
  _func_Ref_ptr *local_78;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  ObjectFactory::TInfo::TInfo(aTStack_90);
  if (aTStack_90 != (TInfo *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           aTStack_90,(char *)pbVar2,uVar1);
  }
  local_78 = param_2;
  this_00 = (ObjectFactory *)ObjectFactory::getInstance();
  ObjectFactory::registerType(this_00,aTStack_90);
  ObjectFactory::TInfo::~TInfo(aTStack_90);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

