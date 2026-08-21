
/* v8::internal::GlobalHandles::Node::CollectPhantomCallbackData(std::__ndk1::vector<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,
   v8::internal::GlobalHandles::PendingPhantomCallback>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,
   v8::internal::GlobalHandles::PendingPhantomCallback> > >*) */

void __thiscall
v8::internal::GlobalHandles::Node::CollectPhantomCallbackData(Node *this,vector *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  Node *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 local_68;
  ulong local_60 [2];
  
  local_60[0] = 0;
  local_60[1] = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (((byte)this[0xb] & 0x30) != 0x10) {
    uVar6 = *(ulong *)this;
    if (((uVar6 & 1) != 0) &&
       (uVar7 = uVar6 & 0xffffffff00000000,
       0xa9 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
      puVar8 = (uint *)(uVar6 - 1);
      uVar6 = uVar7 | *puVar8;
      bVar2 = *(byte *)(uVar6 + 3);
      if (bVar2 != 0) {
        if (*(short *)(uVar6 + 7) == 0x421) {
          iVar4 = 0xc;
        }
        else {
          iVar4 = JSObject::GetHeaderSize(*(short *)(uVar6 + 7),*(char *)(uVar6 + 9) < '\0');
        }
        iVar4 = (((int)((uint)bVar2 * 4 - iVar4) >> 2) - (uint)*(byte *)(uVar6 + 3)) +
                (uint)*(byte *)(uVar6 + 4);
        if (2 < iVar4 + 1U) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          lVar9 = 0;
          do {
            sVar3 = *(short *)((uVar7 | *puVar8) + 7);
            if (sVar3 == 0x421) {
              iVar5 = 0xc;
            }
            else {
              iVar5 = JSObject::GetHeaderSize(sVar3,*(char *)((uVar7 | *puVar8) + 9) < '\0');
            }
            uVar6 = *(ulong *)((long)puVar8 + (long)((int)lVar9 + iVar5));
            if ((uVar6 & 1) == 0) {
              *(ulong *)((long)local_60 + lVar9) = uVar6;
            }
            local_68 = local_60[1];
            uStack_70 = local_60[0];
          } while ((lVar9 == 0) && (lVar9 = 8, iVar4 >> 1 != 1));
          goto LAB_00f66ac4;
        }
      }
    }
    local_68 = 0;
    uStack_70 = 0;
  }
LAB_00f66ac4:
  *(undefined8 *)this = 0xca11;
  auVar10 = NEON_ext(*(undefined1 (*) [16])(this + 0x10),*(undefined1 (*) [16])(this + 0x10),8,1);
  uStack_78 = auVar10._8_8_;
  uStack_80 = auVar10._0_8_;
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
    vector<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,v8::internal::GlobalHandles::PendingPhantomCallback>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,v8::internal::GlobalHandles::PendingPhantomCallback>>>
    ::
    __push_back_slow_path<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,v8::internal::GlobalHandles::PendingPhantomCallback>>
              ((vector<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,v8::internal::GlobalHandles::PendingPhantomCallback>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::GlobalHandles::Node*,v8::internal::GlobalHandles::PendingPhantomCallback>>>
                *)param_1,(pair *)&local_88);
  }
  this[0xb] = (Node)((byte)this[0xb] & 0xf8 | 4);
  return;
}

