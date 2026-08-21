
/* std::__ndk1::unordered_map<cocos2d::renderer::VertexFormat*, cocos2d::renderer::MeshBuffer*,
   std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,
   std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,
   std::__ndk1::allocator<std::__ndk1::pair<cocos2d::renderer::VertexFormat* const,
   cocos2d::renderer::MeshBuffer*> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::renderer::VertexFormat*const,cocos2d::renderer::MeshBuffer*>>>
::~unordered_map(unordered_map<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::renderer::VertexFormat*const,cocos2d::renderer::MeshBuffer*>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
                    /* try { // try from 009d22d0 to 00ad22e3 has its CatchHandler @ 009d3380 */
  if (pvVar2 == (void *)0x0) {
                    /* try { // try from 009d22e4 to 00ad233f has its CatchHandler @ 009d2270 */
    return;
  }
  operator_delete(pvVar2);
  return;
}

