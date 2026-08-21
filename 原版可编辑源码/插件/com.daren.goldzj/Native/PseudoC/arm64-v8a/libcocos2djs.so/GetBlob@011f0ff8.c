
/* v8::internal::SnapshotByteSource::GetBlob(unsigned char const**) */

uint __thiscall v8::internal::SnapshotByteSource::GetBlob(SnapshotByteSource *this,uchar **param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (uint *)(*(long *)this + (long)*(int *)(this + 0xc));
  lVar1 = ((ulong)(byte)*puVar2 & 3) + 1;
  lVar3 = lVar1 + *(int *)(this + 0xc);
  uVar4 = (*puVar2 & 0xffffffffU >> (ulong)((int)lVar1 * -8 & 0x1f)) >> 2;
  iVar5 = (int)lVar3;
  *(int *)(this + 0xc) = iVar5;
  if ((int)(uVar4 + iVar5) <= *(int *)(this + 8)) {
    *param_1 = (uchar *)(*(long *)this + lVar3);
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar4;
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","position_ + size <= length_");
}

