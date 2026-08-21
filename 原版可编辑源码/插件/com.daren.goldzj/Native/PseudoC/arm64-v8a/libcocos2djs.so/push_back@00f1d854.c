
/* v8::internal::ZoneChunkList<unsigned char>::push_back(unsigned char const&) */

void __thiscall
v8::internal::ZoneChunkList<unsigned_char>::push_back
          (ZoneChunkList<unsigned_char> *this,uchar *param_1)

{
  uint *puVar1;
  ulong uVar2;
  Zone *pZVar3;
  uint uVar4;
  ZoneChunkList<unsigned_char> *pZVar5;
  
  pZVar5 = this + 0x18;
  puVar1 = *(uint **)pZVar5;
  if (puVar1 == (uint *)0x0) {
    pZVar3 = *(Zone **)this;
    puVar1 = *(uint **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar1) < 0x20) {
      puVar1 = (uint *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(uint **)(pZVar3 + 0x10) = puVar1 + 8;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0] = 8;
    puVar1[1] = 0;
    *(uint **)(this + 0x10) = puVar1;
    *(uint **)(this + 0x18) = puVar1;
  }
  uVar4 = puVar1[1];
  if (uVar4 == *puVar1) {
    if (*(long *)(puVar1 + 2) == 0) {
      pZVar3 = *(Zone **)this;
      uVar4 = uVar4 << 1;
      puVar1 = *(uint **)(pZVar3 + 0x10);
      if (0xff < uVar4) {
        uVar4 = 0x100;
      }
      uVar2 = (ulong)(uVar4 + 0x1f & 0x3f8);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar1) < uVar2) {
        puVar1 = (uint *)Zone::NewExpand(pZVar3,uVar2);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)puVar1 + uVar2;
      }
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = uVar4;
      *(uint **)(*(long *)pZVar5 + 8) = puVar1;
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)pZVar5;
      puVar1 = *(uint **)pZVar5;
    }
    puVar1 = *(uint **)(puVar1 + 2);
    *(uint **)pZVar5 = puVar1;
    uVar4 = puVar1[1];
  }
  *(uchar *)((long)puVar1 + (ulong)uVar4 + 0x18) = *param_1;
  *(int *)(*(long *)(this + 0x18) + 4) = *(int *)(*(long *)(this + 0x18) + 4) + 1;
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  return;
}

