
/* cocos2d::PUMeshSurfaceEmitter::setMeshName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::PUMeshSurfaceEmitter::setMeshName
          (PUMeshSurfaceEmitter *this,basic_string *param_1,bool param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x200) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x200),(char *)pbVar2,uVar1);
  }
  if (param_2) {
    puVar5 = *(undefined8 **)(this + 0x238);
    if (puVar5 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00e37258 with catch @ 00e373b4 */
      pvVar4 = (void *)*puVar5;
      puVar5[1] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        puVar5[1] = pvVar4;
        operator_delete(pvVar4);
      }
                    /* catch() { ... } // from try @ 00e37228 with catch @ 00e373cc */
      operator_delete(puVar5);
                    /* catch() { ... } // from try @ 00e3715c with catch @ 00e373d0 */
      *(undefined8 *)(this + 0x238) = 0;
    }
                    /* catch() { ... } // from try @ 00e36f50 with catch @ 00e373d8 */
    puVar5 = operator_new(0x20,(nothrow_t *)&std::nothrow);
    if (puVar5 != (undefined8 *)0x0) {
      uVar3 = *(undefined4 *)(this + 0x234);
                    /* catch() { ... } // from try @ 00e36f30 with catch @ 00e373ec */
      *puVar5 = 0;
      puVar5[1] = 0;
                    /* catch() { ... } // from try @ 00e3730c with catch @ 00e373f0 */
      puVar5[2] = 0;
      *(undefined4 *)(puVar5 + 3) = uVar3;
    }
    *(undefined8 **)(this + 0x238) = puVar5;
  }
  return;
}

