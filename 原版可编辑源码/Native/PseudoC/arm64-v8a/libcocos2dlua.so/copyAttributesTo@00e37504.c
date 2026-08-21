
/* cocos2d::PUMeshSurfaceEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall
cocos2d::PUMeshSurfaceEmitter::copyAttributesTo(PUMeshSurfaceEmitter *this,PUEmitter *param_1)

{
  undefined8 uVar1;
  PUMeshSurfaceEmitter *pPVar2;
  ulong uVar3;
  
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  if (this != (PUMeshSurfaceEmitter *)param_1) {
    pPVar2 = *(PUMeshSurfaceEmitter **)(this + 0x210);
    uVar3 = *(ulong *)(this + 0x208);
                    /* catch() { ... } // from try @ 00e3701c with catch @ 00e37534 */
    if (((byte)this[0x200] & 1) == 0) {
      pPVar2 = this + 0x201;
      uVar3 = (ulong)((byte)this[0x200] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x200),(char *)pPVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(this + 0x234);
  uVar1 = *(undefined8 *)(this + 0x218);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(this + 0x220);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x228);
                    /* catch() { ... } // from try @ 00e37900 with catch @ 00e3756c
                       catch() { ... } // from try @ 00e3793c with catch @ 00e3756c
                       catch() { ... } // from try @ 00e37a2c with catch @ 00e3756c */
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(this + 0x230);
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  return;
}

