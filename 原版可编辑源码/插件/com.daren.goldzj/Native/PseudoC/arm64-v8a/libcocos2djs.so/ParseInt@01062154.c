
/* v8::internal::StringToIntHelper::ParseInt() */

void __thiscall v8::internal::StringToIntHelper::ParseInt(StringToIntHelper *this)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  uchar *puVar4;
  ulong uVar5;
  undefined1 auVar6 [12];
  ulong local_28;
  
  if (*(long *)(this + 0x18) == 0) {
    local_28 = **(ulong **)(this + 0x10);
    uVar5 = local_28;
    while( true ) {
      uVar2 = *(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7);
      if ((uVar2 & 9) == 0) break;
      if ((uVar2 & 9) == 8) {
        auVar6 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
        goto LAB_01062200;
      }
      uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
    }
    auVar6 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
    DetectRadixInternal<unsigned_short_const*>(this,auVar6._0_8_,auVar6._8_4_);
    iVar1 = *(int *)(this + 0x34);
  }
  else {
    auVar6._8_4_ = *(undefined4 *)(this + 0x28);
    auVar6._0_8_ = *(long *)(this + 0x18);
LAB_01062200:
    DetectRadixInternal<unsigned_char_const*>(this,auVar6._0_8_,auVar6._8_4_);
    iVar1 = *(int *)(this + 0x34);
  }
  if (iVar1 == 0) {
    (**(code **)(*(long *)this + 0x10))(this);
    (**(code **)(*(long *)this + 0x20))(this);
    if (*(int *)(this + 0x34) == 0) {
      puVar4 = *(uchar **)(this + 0x18);
      if (puVar4 == (uchar *)0x0) {
        local_28 = **(ulong **)(this + 0x10);
        uVar5 = local_28;
        while( true ) {
          uVar2 = *(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7);
          if ((uVar2 & 9) == 0) break;
          if ((uVar2 & 9) == 8) {
            puVar4 = (uchar *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
            goto LAB_010622b4;
          }
          uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
        }
        puVar3 = (ushort *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
        ParseInternal<unsigned_short_const*>(this,puVar3);
      }
      else {
LAB_010622b4:
        ParseInternal<unsigned_char_const*>(this,puVar4);
      }
    }
  }
  return;
}

