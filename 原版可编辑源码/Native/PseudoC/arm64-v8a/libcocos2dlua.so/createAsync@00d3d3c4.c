
/* cocos2d::Sprite3D::createAsync(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Sprite3D*, void*)> const&, void*) */

void cocos2d::Sprite3D::createAsync
               (basic_string *param_1,basic_string *param_2,function *param_3,void *param_4)

{
  basic_string *pbVar1;
  long lVar2;
  Sprite3D *this;
  ulong uVar3;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar4;
  long *plVar5;
  AsyncTaskPool *pAVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *local_f8;
  undefined **local_f0;
  Sprite3D *pSStack_e8;
  undefined ***local_d0;
  undefined **local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  Sprite3D *local_a8;
  undefined ***local_a0;
  Sprite3D *local_90 [4];
  Sprite3D **local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x460,(nothrow_t *)&std::nothrow);
  if (this != (Sprite3D *)0x0) {
    Sprite3D(this);
  }
  uVar3 = loadFromCache(this,param_1);
  if ((uVar3 & 1) != 0) {
    Ref::autorelease((Ref *)this);
    uVar3 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    if (uVar3 != 0) {
      this_00 = (Director *)Director::getInstance();
      this_01 = (TextureCache *)Director::getTextureCache(this_00);
      pTVar4 = (Texture2D *)TextureCache::addImage(this_01,param_2);
      puVar9 = *(undefined8 **)(this + 0x358);
      for (puVar8 = *(undefined8 **)(this + 0x350); puVar8 != puVar9; puVar8 = puVar8 + 1) {
        Mesh::setTexture((Mesh *)*puVar8,pTVar4);
      }
    }
    plVar5 = *(long **)(param_3 + 0x20);
    local_f8 = param_4;
    local_90[0] = this;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,local_90,&local_f8);
    goto LAB_00d3d6a4;
  }
  plVar5 = *(long **)(param_3 + 0x20);
  if (plVar5 == (long *)0x0) {
    local_70 = (Sprite3D **)0x0;
  }
  else if ((long *)param_3 == plVar5) {
    local_70 = local_90;
    (**(code **)(*plVar5 + 0x18))(plVar5,local_90);
  }
  else {
    local_70 = (Sprite3D **)(**(code **)(*plVar5 + 0x10))();
  }
  FUN_00d40da4(local_90,this + 0x3d0);
  if (local_90 == local_70) {
    pcVar7 = *(code **)(*local_70 + 0x20);
LAB_00d3d524:
    (*pcVar7)();
  }
  else if (local_70 != (Sprite3D **)0x0) {
    pcVar7 = *(code **)(*local_70 + 0x28);
    goto LAB_00d3d524;
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x428) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar3 = *(ulong *)(param_2 + 8);
    pbVar1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar3 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x428),(char *)pbVar1,uVar3);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x410) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar3 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar3 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x410),(char *)pbVar1,uVar3);
  }
  *(void **)(this + 0x400) = param_4;
  puVar8 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
  }
  *(undefined8 **)(this + 0x448) = puVar8;
  puVar8 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
  }
  *(undefined8 **)(this + 0x440) = puVar8;
  puVar8 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[2] = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR__NodeDatas_016d2d18;
    puVar8[6] = 0;
    puVar8[5] = 0;
  }
  *(undefined8 **)(this + 0x450) = puVar8;
  pAVar6 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
  local_c0 = &PTR_FUN_016d4350;
  local_f0 = &PTR_FUN_016d4400;
  local_a0 = &local_c0;
  uStack_b0 = 0;
  local_b8 = afterAsyncLoad;
  pSStack_e8 = this;
  local_d0 = &local_f0;
  local_a8 = this;
  AsyncTaskPool::enqueue(pAVar6,0,&local_c0,this + 0x3d0,&local_f0);
  if (&local_f0 == local_d0) {
    pcVar7 = (code *)(*local_d0)[4];
LAB_00d3d674:
    (*pcVar7)();
  }
  else if (local_d0 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_d0)[5];
    goto LAB_00d3d674;
  }
  if (&local_c0 == local_a0) {
    pcVar7 = (code *)(*local_a0)[4];
  }
  else {
    if (local_a0 == (undefined ***)0x0) goto LAB_00d3d6a4;
    pcVar7 = (code *)(*local_a0)[5];
  }
  (*pcVar7)();
LAB_00d3d6a4:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

