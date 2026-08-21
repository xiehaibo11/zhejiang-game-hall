
/* cocos2d::network::writeHeaderData(void*, unsigned long, cocos2d::network::HttpResponse*) */

ulong cocos2d::network::writeHeaderData(void *param_1,ulong param_2,HttpResponse *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_3 + 0x58) = uVar1;
  std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
            ((vector<char,std::__ndk1::allocator<char>> *)(param_3 + 0x50),uVar1,param_1,
             (long)param_1 + param_2);
  return param_2;
}

