
/* v8::internal::compiler::NodeCache<int, v8::base::hash<int>, std::__ndk1::equal_to<int>
   >::GetCachedNodes(v8::internal::ZoneVector<v8::internal::compiler::Node*>*) */

void __thiscall
v8::internal::compiler::NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>>::
GetCachedNodes(NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>> *this,
              ZoneVector *param_1)

{
  long lVar1;
  Node *pNVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)this;
  if ((lVar1 != 0) && (*(long *)(this + 8) != -5)) {
    uVar3 = 1;
    lVar4 = 8;
    while( true ) {
      pNVar2 = *(Node **)(lVar1 + lVar4);
      if (pNVar2 != (Node *)0x0) {
        if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
          ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                    ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                      *)param_1,(Node **)(lVar1 + lVar4));
        }
        else {
          **(undefined8 **)(param_1 + 8) = pNVar2;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        }
      }
      if (*(long *)(this + 8) + 5U <= uVar3) break;
      lVar1 = *(long *)this;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    }
  }
  return;
}

