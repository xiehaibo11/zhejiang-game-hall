
/* ClipperLib::Clipper::PopScanbeam() */

undefined8 __thiscall ClipperLib::Clipper::PopScanbeam(Clipper *this)

{
  long *plVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  
  p_Var5 = *(__tree_node_base **)(this + 0x70);
  uVar6 = *(undefined8 *)(p_Var5 + 0x20);
  plVar1 = *(long **)(p_Var5 + 8);
  if (*(long **)(p_Var5 + 8) == (long *)0x0) {
    p_Var3 = p_Var5 + 0x10;
    plVar2 = *(long **)p_Var3;
    if ((__tree_node_base *)*plVar2 != p_Var5) {
      do {
        lVar4 = *(long *)p_Var3;
        p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
        plVar2 = *(long **)p_Var3;
      } while (*plVar2 != lVar4);
    }
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  *(long **)(this + 0x70) = plVar2;
  *(long *)(this + 0x80) = *(long *)(this + 0x80) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x78),p_Var5);
  operator_delete(p_Var5);
  return uVar6;
}

