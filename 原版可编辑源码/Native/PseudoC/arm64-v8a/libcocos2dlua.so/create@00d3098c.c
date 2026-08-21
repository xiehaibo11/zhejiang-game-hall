
/* cocos2d::MeshSkin::create(cocos2d::Skeleton3D*,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&,
   std::__ndk1::vector<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> > const&) */

Ref * cocos2d::MeshSkin::create(Skeleton3D *param_1,vector *param_2,vector *param_3)

{
  basic_string *pbVar1;
  long *plVar2;
  basic_string *pbVar3;
  long lVar4;
  Ref *this;
  Ref *pRVar5;
  Ref *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  Ref::Ref(this);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__MeshSkin_016d3568;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Skeleton3D **)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x68) = 0;
  Ref::retain((Ref *)param_1);
  pbVar3 = *(basic_string **)(param_2 + 8);
  for (pbVar1 = *(basic_string **)param_2; pbVar1 != pbVar3; pbVar1 = pbVar1 + 0x18) {
    pRVar5 = (Ref *)Skeleton3D::getBoneByName(param_1,pbVar1);
    if (pRVar5 != (Ref *)0x0) {
      plVar2 = *(long **)(this + 0x30);
      local_60 = pRVar5;
      if (plVar2 == *(long **)(this + 0x38)) {
        std::__ndk1::vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>>::
        __push_back_slow_path<cocos2d::Bone3D*const&>
                  ((vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>> *)
                   (this + 0x28),(Bone3D **)&local_60);
      }
      else {
        *plVar2 = (long)pRVar5;
        *(long **)(this + 0x30) = plVar2 + 1;
      }
      Ref::retain(local_60);
    }
  }
  if ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x40) !=
      (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)param_3) {
    std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::assign<cocos2d::Mat4*>
              ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x40),
               *(Mat4 **)param_3,*(Mat4 **)(param_3 + 8));
  }
  Ref::autorelease(this);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

