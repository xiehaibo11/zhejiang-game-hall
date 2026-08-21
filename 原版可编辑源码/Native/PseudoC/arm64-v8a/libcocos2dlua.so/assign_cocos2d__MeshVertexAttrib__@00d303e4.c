
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::MeshVertexAttrib*>::value&&is_constructible<cocos2d::MeshVertexAttrib,
   std::__ndk1::iterator_traits<cocos2d::MeshVertexAttrib*>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::MeshVertexAttrib, std::__ndk1::allocator<cocos2d::MeshVertexAttrib>
   >::assign<cocos2d::MeshVertexAttrib*>(cocos2d::MeshVertexAttrib*, cocos2d::MeshVertexAttrib*) */

void __thiscall
std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
assign<cocos2d::MeshVertexAttrib*>
          (vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *this
          ,MeshVertexAttrib *param_1,MeshVertexAttrib *param_2)

{
  MeshVertexAttrib *__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 4;
  if ((ulong)(lVar1 - (long)pvVar4 >> 4) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      operator_delete(pvVar4);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar5 >> 0x3c != 0) {
LAB_00d30468:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 4) < 0x7ffffffffffffff) {
      uVar2 = lVar1 >> 3;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3c != 0)) goto LAB_00d30468;
    }
    else {
      uVar5 = 0xfffffffffffffff;
    }
    pvVar4 = operator_new(uVar5 * 0x10);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 0x10);
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_1,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    *(void **)(this + 8) = pvVar4;
  }
  else {
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 4;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar4);
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      *(void **)(this + 8) = pvVar4;
    }
    else {
      *(void **)(this + 8) = (void *)((long)pvVar4 + ((long)sVar3 >> 4) * 0x10);
    }
  }
  return;
}

