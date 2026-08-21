
/* cocos2d::renderer::VertexFormat::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::VertexFormat&&) */

VertexFormat * __thiscall
cocos2d::renderer::VertexFormat::operator=(VertexFormat *this,VertexFormat *param_1)

{
  byte *pbVar1;
  VertexFormat *pVVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* catch() { ... } // from try @ 009b9a30 with catch @ 009b9c10 */
                    /* catch() { ... } // from try @ 009b9978 with catch @ 009b9c20 */
  if (this != param_1) {
                    /* catch() { ... } // from try @ 009b9944 with catch @ 009b9c38 */
    pVVar2 = this + 0x10;
    pbVar3 = *(byte **)pVVar2;
    if (pbVar3 != (byte *)0x0) {
                    /* catch() { ... } // from try @ 009b9874 with catch @ 009b9c48 */
                    /* catch() { ... } // from try @ 009b9868 with catch @ 009b9c4c */
      pbVar1 = *(byte **)(this + 0x18);
                    /* catch() { ... } // from try @ 009b9848 with catch @ 009b9c50 */
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x18;
                    /* catch() { ... } // from try @ 009b9880 with catch @ 009b9c60
                       catch() { ... } // from try @ 009b9b64 with catch @ 009b9c60 */
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar4;
        } while (pbVar3 != pbVar4);
        pbVar4 = *(byte **)pVVar2;
      }
      *(byte **)(this + 0x18) = pbVar3;
      operator_delete(pbVar4);
      *(undefined8 *)pVVar2 = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
    }
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 009b9cb8 to 00ab9cfb has its CatchHandler @ 009b9cb8
                       catch() { ... } // from try @ 009b9cb8 with catch @ 009b9cb8
                       catch() { ... } // from try @ 009b9d34 with catch @ 009b9cb8 */
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
    ::__move_assign(this + 0x28,param_1 + 0x28);
  }
  return this;
}

