
/* v8::internal::ProfileTree::~ProfileTree() */

void __thiscall v8::internal::ProfileTree::~ProfileTree(ProfileTree *this)

{
  void *pvVar1;
  
  TraverseDepthFirst<v8::internal::DeleteNodesCallback>((DeleteNodesCallback *)this);
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
  }
  return;
}

