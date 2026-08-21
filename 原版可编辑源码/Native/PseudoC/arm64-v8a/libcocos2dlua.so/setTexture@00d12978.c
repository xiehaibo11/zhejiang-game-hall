
/* cocos2d::BatchMesh::setTexture(cocos2d::Texture2D*, cocos2d::NTextureData::Usage) */

void __thiscall cocos2d::BatchMesh::setTexture(BatchMesh *this,Ref *param_1,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  BatchMesh *pBVar3;
  Director *pDVar4;
  TextureCache *pTVar5;
  Image *this_00;
  Technique *pTVar6;
  long *plVar7;
  GLProgramState *this_01;
  __tree_node_base *p_Var8;
  undefined8 *puVar9;
  __tree_node_base *p_Var10;
  BatchMesh *pBVar11;
  BatchMesh *pBVar12;
  BatchMesh *pBVar13;
  undefined4 local_74;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (Ref *)0x0) {
    pDVar4 = (Director *)Director::getInstance();
    pTVar5 = (TextureCache *)Director::getTextureCache(pDVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"/dummyTexture");
    param_1 = (Ref *)TextureCache::getTextureForKey(pTVar5,(basic_string *)local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (param_1 == (Ref *)0x0) {
      local_74 = 0;
      this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
      if (this_00 != (Image *)0x0) {
        Image::Image(this_00);
      }
      Image::initWithRawData(this_00,(uchar *)&local_74,4,1,1,1,false);
      pDVar4 = (Director *)Director::getInstance();
      pTVar5 = (TextureCache *)Director::getTextureCache(pDVar4);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,"/dummyTexture");
      param_1 = (Ref *)TextureCache::addImage(pTVar5,this_00,(basic_string *)local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      Ref::release((Ref *)this_00);
      if (param_1 == (Ref *)0x0) goto LAB_00d12a88;
    }
  }
  Ref::retain(param_1);
LAB_00d12a88:
  pBVar11 = this + 0x48;
  pBVar12 = pBVar11;
  pBVar13 = pBVar11;
  if (*(BatchMesh **)pBVar11 == (BatchMesh *)0x0) {
LAB_00d12ad8:
    p_Var10 = *(__tree_node_base **)pBVar12;
  }
  else {
    pBVar12 = this + 0x48;
    pBVar3 = *(BatchMesh **)pBVar11;
    do {
      while (pBVar13 = pBVar3, *(int *)(pBVar13 + 0x20) <= param_3) {
        if (param_3 <= *(int *)(pBVar13 + 0x20)) goto LAB_00d12ad8;
        pBVar12 = pBVar13 + 8;
        pBVar3 = *(BatchMesh **)pBVar12;
        if (*(BatchMesh **)pBVar12 == (BatchMesh *)0x0) goto LAB_00d12ad8;
      }
      pBVar12 = pBVar13;
      pBVar3 = *(BatchMesh **)pBVar13;
    } while (*(BatchMesh **)pBVar13 != (BatchMesh *)0x0);
    p_Var10 = *(__tree_node_base **)pBVar13;
  }
  if (p_Var10 == (__tree_node_base *)0x0) {
    p_Var10 = operator_new(0x30);
    *(int *)(p_Var10 + 0x20) = param_3;
    *(undefined8 *)(p_Var10 + 0x28) = 0;
    *(undefined8 *)p_Var10 = 0;
    *(undefined8 *)(p_Var10 + 8) = 0;
    *(BatchMesh **)(p_Var10 + 0x10) = pBVar13;
    *(__tree_node_base **)pBVar12 = p_Var10;
    p_Var8 = p_Var10;
    if (**(long **)(this + 0x40) != 0) {
      *(long *)(this + 0x40) = **(long **)(this + 0x40);
      p_Var8 = *(__tree_node_base **)pBVar12;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),p_Var8);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  if (*(long *)(p_Var10 + 0x28) != 0) {
    pBVar12 = pBVar11;
    pBVar13 = pBVar11;
    if (*(BatchMesh **)pBVar11 == (BatchMesh *)0x0) {
LAB_00d12b94:
      p_Var10 = *(__tree_node_base **)pBVar12;
    }
    else {
      pBVar12 = this + 0x48;
      pBVar3 = *(BatchMesh **)pBVar11;
      do {
        while (pBVar13 = pBVar3, *(int *)(pBVar13 + 0x20) <= param_3) {
          if (param_3 <= *(int *)(pBVar13 + 0x20)) goto LAB_00d12b94;
          pBVar12 = pBVar13 + 8;
          pBVar3 = *(BatchMesh **)pBVar12;
          if (*(BatchMesh **)pBVar12 == (BatchMesh *)0x0) goto LAB_00d12b94;
        }
        pBVar12 = pBVar13;
        pBVar3 = *(BatchMesh **)pBVar13;
      } while (*(BatchMesh **)pBVar13 != (BatchMesh *)0x0);
      p_Var10 = *(__tree_node_base **)pBVar13;
    }
    if (p_Var10 == (__tree_node_base *)0x0) {
      p_Var10 = operator_new(0x30);
      *(int *)(p_Var10 + 0x20) = param_3;
      *(undefined8 *)(p_Var10 + 0x28) = 0;
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *(BatchMesh **)(p_Var10 + 0x10) = pBVar13;
      *(__tree_node_base **)pBVar12 = p_Var10;
      p_Var8 = p_Var10;
      if (**(long **)(this + 0x40) != 0) {
        *(long *)(this + 0x40) = **(long **)(this + 0x40);
        p_Var8 = *(__tree_node_base **)pBVar12;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x48),p_Var8);
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
    }
    Ref::release(*(Ref **)(p_Var10 + 0x28));
  }
  if (*(BatchMesh **)pBVar11 == (BatchMesh *)0x0) {
    p_Var10 = *(__tree_node_base **)pBVar11;
    pBVar12 = pBVar11;
  }
  else {
    pBVar13 = *(BatchMesh **)pBVar11;
    pBVar12 = this + 0x48;
LAB_00d12c24:
    do {
      pBVar11 = pBVar13;
      if (*(int *)(pBVar11 + 0x20) <= param_3) {
        if (*(int *)(pBVar11 + 0x20) < param_3) {
          pBVar12 = pBVar11 + 8;
          pBVar13 = *(BatchMesh **)pBVar12;
          if (*(BatchMesh **)pBVar12 != (BatchMesh *)0x0) goto LAB_00d12c24;
        }
        p_Var10 = *(__tree_node_base **)pBVar12;
        goto joined_r0x00d12c6c;
      }
      pBVar13 = *(BatchMesh **)pBVar11;
      pBVar12 = pBVar11;
    } while (*(BatchMesh **)pBVar11 != (BatchMesh *)0x0);
    p_Var10 = *(__tree_node_base **)pBVar11;
  }
joined_r0x00d12c6c:
  if (p_Var10 == (__tree_node_base *)0x0) {
    p_Var10 = operator_new(0x30);
    *(int *)(p_Var10 + 0x20) = param_3;
    *(undefined8 *)(p_Var10 + 0x28) = 0;
    *(undefined8 *)p_Var10 = 0;
    *(undefined8 *)(p_Var10 + 8) = 0;
    *(BatchMesh **)(p_Var10 + 0x10) = pBVar11;
    *(__tree_node_base **)pBVar12 = p_Var10;
    p_Var8 = p_Var10;
    if (**(long **)(this + 0x40) != 0) {
      *(long *)(this + 0x40) = **(long **)(this + 0x40);
      p_Var8 = *(__tree_node_base **)pBVar12;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),p_Var8);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  *(Ref **)(p_Var10 + 0x28) = param_1;
  if (param_3 == 7) {
    if (*(Material **)(this + 0x2a8) != (Material *)0x0) {
      pTVar6 = (Technique *)Material::getTechnique(*(Material **)(this + 0x2a8));
      plVar7 = (long *)Technique::getPasses(pTVar6);
      puVar1 = (undefined8 *)plVar7[1];
      for (puVar9 = (undefined8 *)*plVar7; puVar9 != puVar1; puVar9 = puVar9 + 1) {
        this_01 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar9);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_70,"u_normalTex");
        GLProgramState::setUniformTexture(this_01,(basic_string *)local_70,(Texture2D *)param_1);
        if (((byte)local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
      }
    }
  }
  else if ((param_3 == 2) && (*(Material **)(this + 0x2a8) != (Material *)0x0)) {
    pTVar6 = (Technique *)Material::getTechnique(*(Material **)(this + 0x2a8));
    plVar7 = (long *)Technique::getPasses(pTVar6);
    puVar1 = (undefined8 *)plVar7[1];
    for (puVar9 = (undefined8 *)*plVar7; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      RenderState::setTexture((RenderState *)*puVar9,(Texture2D *)param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

