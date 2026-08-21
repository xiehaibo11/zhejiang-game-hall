
/* v8::internal::compiler::CommonNodeCache::GetCachedNodes(v8::internal::ZoneVector<v8::internal::compiler::Node*>*)
    */

void __thiscall
v8::internal::compiler::CommonNodeCache::GetCachedNodes(CommonNodeCache *this,ZoneVector *param_1)

{
  NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>>::GetCachedNodes
            ((NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>> *)this,param_1);
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::GetCachedNodes
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0x20),
             param_1);
  NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>>::GetCachedNodes
            ((NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>> *)(this + 0x40),param_1)
  ;
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::GetCachedNodes
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0x60),
             param_1);
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::GetCachedNodes
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0x80),
             param_1);
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::GetCachedNodes
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0xc0),
             param_1);
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::GetCachedNodes
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0xe0),
             param_1);
  NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
  ::GetCachedNodes((NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
                    *)(this + 0x100),param_1);
  NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
  ::GetCachedNodes((NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
                    *)(this + 0x120),param_1);
  return;
}

