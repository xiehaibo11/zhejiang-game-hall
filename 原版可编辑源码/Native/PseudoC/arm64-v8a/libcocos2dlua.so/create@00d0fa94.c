
/* cocos2d::BatchMesh::create(cocos2d::Material*, std::__ndk1::vector<cocos2d::MeshVertexAttrib,
   std::__ndk1::allocator<cocos2d::MeshVertexAttrib> > const&, int, int, int) */

BatchMesh *
cocos2d::BatchMesh::create(Material *param_1,vector *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  BatchMesh *this;
  ulong uVar2;
  void *local_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this != (BatchMesh *)0x0) {
    BatchMesh(this);
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::vector((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)
             &local_70,param_2);
    uVar2 = init(this,param_1,&local_70,param_3,param_4,param_5);
    if (local_70 != (void *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (BatchMesh *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

