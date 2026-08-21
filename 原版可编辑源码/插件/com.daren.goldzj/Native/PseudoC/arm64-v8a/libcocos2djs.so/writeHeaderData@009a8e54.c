
/* cocos2d::network::writeHeaderData(void*, unsigned long, cocos2d::network::HttpResponse*) */

ulong cocos2d::network::writeHeaderData(void *param_1,ulong param_2,HttpResponse *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x40) = uVar1;
  std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
            ((vector<char,std::__ndk1::allocator<char>> *)(param_3 + 0x38),uVar1,param_1,
             (long)param_1 + param_2);
                    /* try { // try from 009a8e80 to 00aa8ed7 has its CatchHandler @ 009a8e80
                       catch() { ... } // from try @ 009a8e80 with catch @ 009a8e80
                       catch() { ... } // from try @ 009a9104 with catch @ 009a8e80 */
  return param_2;
}

