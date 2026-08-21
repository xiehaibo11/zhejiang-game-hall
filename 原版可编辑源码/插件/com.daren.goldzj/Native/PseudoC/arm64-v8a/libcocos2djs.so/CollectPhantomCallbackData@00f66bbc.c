
/* v8::internal::GlobalHandles::TracedNode::CollectPhantomCallbackData(std::__ndk1::vector<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,
   v8::internal::GlobalHandles::PendingPhantomCallback>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,
   v8::internal::GlobalHandles::PendingPhantomCallback> > >*) */

void __thiscall
v8::internal::GlobalHandles::TracedNode::CollectPhantomCallbackData
          (TracedNode *this,vector *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  TracedNode *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 local_68;
  ulong local_60 [2];
  
  local_60[0] = 0;
  local_60[1] = 0;
  uVar6 = *(ulong *)this;
  uVar7 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1);
  bVar2 = *(byte *)(uVar7 + 3);
  if (bVar2 != 0) {
    if (*(short *)(uVar7 + 7) == 0x421) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = JSObject::GetHeaderSize(*(short *)(uVar7 + 7),*(char *)(uVar7 + 9) < '\0');
    }
    iVar4 = (((int)((uint)bVar2 * 4 - iVar4) >> 2) - (uint)*(byte *)(uVar7 + 3)) +
            (uint)*(byte *)(uVar7 + 4);
    if (2 < iVar4 + 1U) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      lVar8 = 0;
      do {
        uVar7 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1);
        sVar3 = *(short *)(uVar7 + 7);
        if (sVar3 == 0x421) {
          iVar5 = 0xc;
        }
        else {
          iVar5 = JSObject::GetHeaderSize(sVar3,*(char *)(uVar7 + 9) < '\0');
        }
        uVar7 = *(ulong *)((long)(uVar6 - 1) + (long)((int)lVar8 + iVar5));
        if ((uVar7 & 1) == 0) {
          *(ulong *)((long)local_60 + lVar8) = uVar7;
        }
        local_68 = local_60[1];
        uStack_70 = local_60[0];
      } while ((lVar8 == 0) && (lVar8 = 8, iVar4 >> 1 != 1));
      goto LAB_00f66cd0;
    }
  }
  local_68 = 0;
  uStack_70 = 0;
LAB_00f66cd0:
  *(undefined8 *)this = 0xca11;
  auVar9 = NEON_ext(*(undefined1 (*) [16])(this + 0x10),*(undefined1 (*) [16])(this + 0x10),8,1);
  uStack_78 = auVar9._8_8_;
  uStack_80 = auVar9._0_8_;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    puVar1[4] = local_68;
    puVar1[1] = uStack_80;
    *puVar1 = this;
    puVar1[3] = uStack_70;
    puVar1[2] = uStack_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x28;
  }
  else {
    local_88 = this;
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,v8::internal::GlobalHandles::PendingPhantomCallback>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,v8::internal::GlobalHandles::PendingPhantomCallback>>>
    ::
    __push_back_slow_path<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,v8::internal::GlobalHandles::PendingPhantomCallback>>
              ((vector<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,v8::internal::GlobalHandles::PendingPhantomCallback>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::TracedNode*,v8::internal::GlobalHandles::PendingPhantomCallback>>>
                *)param_1,(pair *)&local_88);
  }
  this[0xb] = (TracedNode)((byte)this[0xb] & 0xfc | 2);
  return;
}

