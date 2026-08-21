
/* std::__ndk1::__tree<cocos2d::Terrain::Chunk*, std::__ndk1::less<cocos2d::Terrain::Chunk*>,
   std::__ndk1::allocator<cocos2d::Terrain::Chunk*>
   >::destroy(std::__ndk1::__tree_node<cocos2d::Terrain::Chunk*, void*>*) */

void __thiscall
std::__ndk1::
__tree<cocos2d::Terrain::Chunk*,std::__ndk1::less<cocos2d::Terrain::Chunk*>,std::__ndk1::allocator<cocos2d::Terrain::Chunk*>>
::destroy(__tree<cocos2d::Terrain::Chunk*,std::__ndk1::less<cocos2d::Terrain::Chunk*>,std::__ndk1::allocator<cocos2d::Terrain::Chunk*>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

