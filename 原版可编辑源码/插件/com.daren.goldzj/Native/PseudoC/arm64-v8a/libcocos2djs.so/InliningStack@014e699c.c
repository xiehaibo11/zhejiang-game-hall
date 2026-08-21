
/* v8::internal::SourcePosition::InliningStack(v8::internal::OptimizedCompilationInfo*) const */

void v8::internal::SourcePosition::InliningStack(OptimizedCompilationInfo *param_1)

{
  undefined8 *puVar1;
  long in_x1;
  ulong uVar2;
  vector<v8::internal::SourcePositionInfo,std::__ndk1::allocator<v8::internal::SourcePositionInfo>>
  *in_x8;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(ulong *)param_1;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  while (((uVar2 & 1) == 0 && ((uVar2 & 0x7fff80000000) != 0))) {
    lVar3 = *(long *)(in_x1 + 0x58);
    lVar4 = (uVar2 >> 0x1f & 0xffff) - 1;
    SourcePositionInfo::SourcePositionInfo
              ((SourcePositionInfo *)&local_50,uVar2,*(undefined8 *)(lVar3 + lVar4 * 0x20));
    puVar1 = *(undefined8 **)(in_x8 + 8);
    if (puVar1 < *(undefined8 **)(in_x8 + 0x10)) {
      puVar1[1] = uStack_48;
      *puVar1 = local_50;
      puVar1[3] = uStack_38;
      puVar1[2] = uStack_40;
      *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x20;
    }
    else {
      std::__ndk1::
      vector<v8::internal::SourcePositionInfo,std::__ndk1::allocator<v8::internal::SourcePositionInfo>>
      ::__push_back_slow_path<v8::internal::SourcePositionInfo>
                (in_x8,(SourcePositionInfo *)&local_50);
    }
    uVar2 = *(ulong *)(lVar3 + lVar4 * 0x20 + 0x10);
  }
  SourcePositionInfo::SourcePositionInfo
            ((SourcePositionInfo *)&local_50,uVar2,*(undefined8 *)(in_x1 + 0x18));
  puVar1 = *(undefined8 **)(in_x8 + 8);
  if (puVar1 < *(undefined8 **)(in_x8 + 0x10)) {
    puVar1[1] = uStack_48;
    *puVar1 = local_50;
    puVar1[3] = uStack_38;
    puVar1[2] = uStack_40;
    *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::SourcePositionInfo,std::__ndk1::allocator<v8::internal::SourcePositionInfo>>
    ::__push_back_slow_path<v8::internal::SourcePositionInfo>(in_x8,(SourcePositionInfo *)&local_50)
    ;
  }
  return;
}

