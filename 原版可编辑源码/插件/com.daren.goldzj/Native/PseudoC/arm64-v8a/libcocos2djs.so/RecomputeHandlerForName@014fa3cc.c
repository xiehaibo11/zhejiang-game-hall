
/* v8::internal::IC::RecomputeHandlerForName(v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall v8::internal::IC::RecomputeHandlerForName(IC *this,ulong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (((*(uint *)(this + 0x1c) < 0xf) &&
      ((1 << (ulong)(*(uint *)(this + 0x1c) & 0x1f) & 0x6308U) != 0)) &&
     ((uVar3 = *param_2, (uVar3 & 1) == 0 ||
      ((0x40 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) ||
       (iVar1 = FeedbackNexus::GetName((FeedbackNexus *)(this + 0x50)), (int)*param_2 != iVar1))))))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

