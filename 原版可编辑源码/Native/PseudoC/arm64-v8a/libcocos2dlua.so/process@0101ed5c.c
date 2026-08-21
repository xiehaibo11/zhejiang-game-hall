
/* cocos2d::MeshProcess::process(dtNavMeshCreateParams*, unsigned char*, unsigned short*) */

void __thiscall
cocos2d::MeshProcess::process
          (MeshProcess *this,dtNavMeshCreateParams *param_1,uchar *param_2,ushort *param_3)

{
  uchar uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = 0;
    uVar1 = *param_2;
    if (uVar1 != '\0') goto LAB_0101ed90;
LAB_0101ed78:
    do {
      param_3[lVar3] = 1;
      do {
        lVar3 = lVar3 + 1;
        if (iVar2 <= lVar3) goto LAB_0101eda4;
        uVar1 = param_2[lVar3];
        if (uVar1 == '\0') goto LAB_0101ed78;
LAB_0101ed90:
      } while (uVar1 != '?');
      param_2[lVar3] = '\0';
      iVar2 = *(int *)(param_1 + 0x28);
    } while( true );
  }
LAB_0101eda4:
  lVar3 = *(long *)(this + 8);
  *(long *)(param_1 + 0x58) = lVar3;
  *(long *)(param_1 + 0x60) = lVar3 + 0x1800;
  *(long *)(param_1 + 0x68) = lVar3 + 0x1e00;
  *(long *)(param_1 + 0x70) = lVar3 + 0x1d00;
  *(long *)(param_1 + 0x78) = lVar3 + 0x1c00;
  *(long *)(param_1 + 0x80) = lVar3 + 0x2000;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar3 + 0x2400);
  return;
}

