
/* cocos2d::Mesh::setTexture(cocos2d::Texture2D*, cocos2d::NTextureData::Usage, bool) */

void __thiscall cocos2d::Mesh::setTexture(Mesh *this,Ref *param_1,int param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  Mesh *pMVar3;
  Director *pDVar4;
  TextureCache *pTVar5;
  Image *this_00;
  GLProgramState *this_01;
  __tree_node_base *p_Var6;
  long lVar7;
  undefined8 *puVar8;
  __tree_node_base *p_Var9;
  Mesh *pMVar10;
  Mesh *pMVar11;
  Mesh *pMVar12;
  undefined4 local_84;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1 == (Ref *)0x0) {
    pDVar4 = (Director *)Director::getInstance();
    pTVar5 = (TextureCache *)Director::getTextureCache(pDVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_80,"/dummyTexture");
    param_1 = (Ref *)TextureCache::getTextureForKey(pTVar5,(basic_string *)&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (param_1 == (Ref *)0x0) {
      local_84 = 0;
      this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
      if (this_00 != (Image *)0x0) {
        Image::Image(this_00);
      }
      Image::initWithRawData(this_00,(uchar *)&local_84,4,1,1,1,false);
      pDVar4 = (Director *)Director::getInstance();
      pTVar5 = (TextureCache *)Director::getTextureCache(pDVar4);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_80,"/dummyTexture");
      param_1 = (Ref *)TextureCache::addImage(pTVar5,this_00,(basic_string *)&local_80);
      if (((byte)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      Ref::release((Ref *)this_00);
      if (param_1 == (Ref *)0x0) goto LAB_00d2eecc;
    }
  }
  Ref::retain(param_1);
LAB_00d2eecc:
  pMVar10 = this + 0x30;
  pMVar11 = pMVar10;
  pMVar12 = pMVar10;
  if (*(Mesh **)pMVar10 == (Mesh *)0x0) {
LAB_00d2ef1c:
    p_Var9 = *(__tree_node_base **)pMVar11;
  }
  else {
    pMVar11 = this + 0x30;
    pMVar3 = *(Mesh **)pMVar10;
    do {
      while (pMVar12 = pMVar3, *(int *)(pMVar12 + 0x20) <= param_3) {
        if (param_3 <= *(int *)(pMVar12 + 0x20)) goto LAB_00d2ef1c;
        pMVar11 = pMVar12 + 8;
        pMVar3 = *(Mesh **)pMVar11;
        if (*(Mesh **)pMVar11 == (Mesh *)0x0) goto LAB_00d2ef1c;
      }
      pMVar11 = pMVar12;
      pMVar3 = *(Mesh **)pMVar12;
    } while (*(Mesh **)pMVar12 != (Mesh *)0x0);
    p_Var9 = *(__tree_node_base **)pMVar12;
  }
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(int *)(p_Var9 + 0x20) = param_3;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(Mesh **)(p_Var9 + 0x10) = pMVar12;
    *(__tree_node_base **)pMVar11 = p_Var9;
    p_Var6 = p_Var9;
    if (**(long **)(this + 0x28) != 0) {
      *(long *)(this + 0x28) = **(long **)(this + 0x28);
      p_Var6 = *(__tree_node_base **)pMVar11;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var6);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  if (*(long *)(p_Var9 + 0x28) != 0) {
    pMVar11 = pMVar10;
    pMVar12 = pMVar10;
    if (*(Mesh **)pMVar10 == (Mesh *)0x0) {
LAB_00d2efd8:
      p_Var9 = *(__tree_node_base **)pMVar11;
    }
    else {
      pMVar11 = this + 0x30;
      pMVar3 = *(Mesh **)pMVar10;
      do {
        while (pMVar12 = pMVar3, *(int *)(pMVar12 + 0x20) <= param_3) {
          if (param_3 <= *(int *)(pMVar12 + 0x20)) goto LAB_00d2efd8;
          pMVar11 = pMVar12 + 8;
          pMVar3 = *(Mesh **)pMVar11;
          if (*(Mesh **)pMVar11 == (Mesh *)0x0) goto LAB_00d2efd8;
        }
        pMVar11 = pMVar12;
        pMVar3 = *(Mesh **)pMVar12;
      } while (*(Mesh **)pMVar12 != (Mesh *)0x0);
      p_Var9 = *(__tree_node_base **)pMVar12;
    }
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = operator_new(0x30);
      *(int *)(p_Var9 + 0x20) = param_3;
      *(undefined8 *)(p_Var9 + 0x28) = 0;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *(Mesh **)(p_Var9 + 0x10) = pMVar12;
      *(__tree_node_base **)pMVar11 = p_Var9;
      p_Var6 = p_Var9;
      if (**(long **)(this + 0x28) != 0) {
        *(long *)(this + 0x28) = **(long **)(this + 0x28);
        p_Var6 = *(__tree_node_base **)pMVar11;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x30),p_Var6);
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
    }
    Ref::release(*(Ref **)(p_Var9 + 0x28));
  }
  if (*(Mesh **)pMVar10 == (Mesh *)0x0) {
    p_Var9 = *(__tree_node_base **)pMVar10;
    pMVar11 = pMVar10;
  }
  else {
    pMVar12 = *(Mesh **)pMVar10;
    pMVar11 = this + 0x30;
LAB_00d2f05c:
    do {
      pMVar10 = pMVar12;
      if (*(int *)(pMVar10 + 0x20) <= param_3) {
        if (*(int *)(pMVar10 + 0x20) < param_3) {
          pMVar11 = pMVar10 + 8;
          pMVar12 = *(Mesh **)pMVar11;
          if (*(Mesh **)pMVar11 != (Mesh *)0x0) goto LAB_00d2f05c;
        }
        p_Var9 = *(__tree_node_base **)pMVar11;
        goto joined_r0x00d2f0b4;
      }
      pMVar12 = *(Mesh **)pMVar10;
      pMVar11 = pMVar10;
    } while (*(Mesh **)pMVar10 != (Mesh *)0x0);
    p_Var9 = *(__tree_node_base **)pMVar10;
  }
joined_r0x00d2f0b4:
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(int *)(p_Var9 + 0x20) = param_3;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(Mesh **)(p_Var9 + 0x10) = pMVar10;
    *(__tree_node_base **)pMVar11 = p_Var9;
    p_Var6 = p_Var9;
    if (**(long **)(this + 0x28) != 0) {
      *(long *)(this + 0x28) = **(long **)(this + 0x28);
      p_Var6 = *(__tree_node_base **)pMVar11;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var6);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  *(Ref **)(p_Var9 + 0x28) = param_1;
  if (param_3 == 7) {
    if (*(long *)(this + 0x148) != 0) {
      lVar7 = *(long *)(*(long *)(this + 0x148) + 0x90);
      puVar1 = *(undefined8 **)(lVar7 + 0x80);
      for (puVar8 = *(undefined8 **)(lVar7 + 0x78); puVar8 != puVar1; puVar8 = puVar8 + 1) {
        this_01 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar8);
        GLProgramState::setUniformTexture
                  (this_01,(basic_string *)&DAT_01787440,(Texture2D *)param_1);
      }
    }
  }
  else if (param_3 == 2) {
    if (*(long *)(this + 0x148) != 0) {
      lVar7 = *(long *)(*(long *)(this + 0x148) + 0x90);
      puVar1 = *(undefined8 **)(lVar7 + 0x80);
      for (puVar8 = *(undefined8 **)(lVar7 + 0x78); puVar8 != puVar1; puVar8 = puVar8 + 1) {
        RenderState::setTexture((RenderState *)*puVar8,(Texture2D *)param_1);
      }
    }
    bindMeshCommand(this);
    if ((param_4 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(&local_80,(basic_string *)(param_1 + 0x68));
      if (((byte)this[0x2a8] & 1) == 0) {
        *(undefined2 *)(this + 0x2a8) = 0;
      }
      else {
        **(undefined1 **)(this + 0x2b8) = 0;
        *(undefined8 *)(this + 0x2b0) = 0;
        if (((byte)this[0x2a8] & 1) != 0) {
          operator_delete(*(void **)(this + 0x2b8));
          *(undefined8 *)(this + 0x2a8) = 0;
        }
      }
      *(void **)(this + 0x2b8) = local_70;
      *(undefined8 *)(this + 0x2b0) = uStack_78;
      *(ulong *)(this + 0x2a8) = CONCAT71(uStack_7f,local_80);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

