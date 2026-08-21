
/* void std::__ndk1::vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,
   std::__ndk1::default_delete<v8::EmbedderGraph::Node> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,
   std::__ndk1::default_delete<v8::EmbedderGraph::Node> > >
   >::__push_back_slow_path<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,
   std::__ndk1::default_delete<v8::EmbedderGraph::Node> >
   >(std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,
   std::__ndk1::default_delete<v8::EmbedderGraph::Node> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>>
::
__push_back_slow_path<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>
          (vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>>
           *this,unique_ptr *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar9 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3d == 0) {
    lVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar6 = lVar4 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_011a84a8;
      pvVar2 = operator_new(uVar1 << 3);
    }
    lVar4 = *(long *)param_1;
    plVar3 = (long *)((long)pvVar2 + lVar9 * 8);
    *(undefined8 *)param_1 = 0;
    plVar5 = plVar3 + 1;
    *plVar3 = lVar4;
    plVar8 = *(long **)this;
    plVar7 = *(long **)(this + 8);
    plVar10 = plVar8;
    if (plVar7 != plVar8) {
      do {
        plVar7 = plVar7 + -1;
        lVar9 = *plVar7;
        *plVar7 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar9;
      } while (plVar8 != plVar7);
      plVar8 = *(long **)this;
      plVar10 = *(long **)(this + 8);
    }
    *(long **)this = plVar3;
    *(long **)(this + 8) = plVar5;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 8);
    while (plVar10 != plVar8) {
      plVar10 = plVar10 + -1;
      plVar3 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    if (plVar8 != (long *)0x0) {
      operator_delete(plVar8);
      return;
    }
    return;
  }
LAB_011a84a8:
                    /* WARNING: Subroutine does not return */
  abort();
}

