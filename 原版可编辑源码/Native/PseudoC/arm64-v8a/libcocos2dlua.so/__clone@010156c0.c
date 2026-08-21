
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::Physics3DDebugDrawer::*)(cocos2d::Mat4 const&, unsigned int),
   cocos2d::Physics3DDebugDrawer*, cocos2d::Mat4 const&, int>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::Physics3DDebugDrawer::*)(cocos2d::Mat4
   const&, unsigned int), cocos2d::Physics3DDebugDrawer*, cocos2d::Mat4 const&, int> >, void
   ()>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Physics3DDebugDrawer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Physics3DDebugDrawer*,cocos2d::Mat4_const&,int>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Physics3DDebugDrawer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Physics3DDebugDrawer*,cocos2d::Mat4_const&,int>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Physics3DDebugDrawer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Physics3DDebugDrawer*,cocos2d::Mat4_const&,int>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Physics3DDebugDrawer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Physics3DDebugDrawer*,cocos2d::Mat4_const&,int>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x68);
  *puVar1 = &PTR____func_017266f8;
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(this + 0x18);
  cocos2d::Mat4::Mat4((Mat4 *)(puVar1 + 4),(Mat4 *)(this + 0x20));
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(this + 0x60);
  return puVar1;
}

