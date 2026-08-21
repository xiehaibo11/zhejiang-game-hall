
/* cocos2d::NavMesh::loadGeomFile() */

undefined4 __thiscall cocos2d::NavMesh::loadGeomFile(NavMesh *this)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined1 local_284 [4];
  Data aDStack_280 [16];
  char local_270 [512];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x28))(aDStack_280,plVar5,this + 0x178);
  uVar6 = Data::isNull(aDStack_280);
  if ((uVar6 & 1) == 0) {
    pcVar7 = (char *)Data::getBytes(aDStack_280);
    pvVar8 = operator_new(0x2404,(nothrow_t *)&std::nothrow);
    *(void **)(this + 0x60) = pvVar8;
    *(undefined4 *)((long)pvVar8 + 0x2400) = 0;
    lVar9 = Data::getSize(aDStack_280);
    if (0 < lVar9) {
      pcVar2 = pcVar7 + lVar9;
      do {
        iVar10 = 0;
        bVar4 = true;
        local_270[0] = '\0';
        pcVar12 = pcVar7;
        do {
          bVar1 = false;
          pcVar7 = pcVar12 + 1;
          switch(*pcVar12) {
          case '\t':
          case ' ':
            if (!bVar4) goto switchD_0101af40_caseD_b;
            bVar4 = true;
            goto joined_r0x0101af80;
          case '\n':
            bVar1 = (bool)(bVar4 ^ 1);
            break;
          default:
switchD_0101af40_caseD_b:
            bVar4 = false;
            local_270[iVar10] = *pcVar12;
            bVar1 = 0x1fd < iVar10;
            iVar10 = iVar10 + 1;
            break;
          case '\r':
            break;
          }
joined_r0x0101af80:
        } while ((pcVar7 < pcVar2) && (pcVar12 = pcVar7, !bVar1));
        local_270[iVar10] = '\0';
        if (local_270[0] == 'c') {
          iVar10 = *(int *)(*(long *)(this + 0x60) + 0x2400);
          if (iVar10 < 0x100) {
            lVar9 = *(long *)(this + 0x60) + (long)(iVar10 * 6) * 4;
            local_28c = 0;
            local_288 = 0;
            sscanf((char *)((ulong)local_270 | 1),"%f %f %f  %f %f %f %f %d %d %d",lVar9,lVar9 + 4,
                   lVar9 + 8,lVar9 + 0xc,lVar9 + 0x10,lVar9 + 0x14,&local_290,local_284,&local_288,
                   &local_28c);
            lVar9 = *(long *)(this + 0x60);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b108 with catch @ 0101affc
                       catch(type#1 @ 00000000) { ... } // from try @ 0101b134 with catch @ 0101affc
                       catch(type#1 @ 00000000) { ... } // from try @ 0101b1b8 with catch @ 0101affc
                        */
            iVar10 = *(int *)(lVar9 + 0x2400);
            *(undefined4 *)(lVar9 + (long)iVar10 * 4 + 0x1800) = local_290;
            *(char *)(lVar9 + iVar10 + 0x1c00) = local_284[0];
            *(char *)(*(long *)(this + 0x60) + (long)*(int *)(*(long *)(this + 0x60) + 0x2400) +
                     0x1d00) = (char)local_288;
            lVar9 = *(long *)(this + 0x60);
                    /* try { // try from 0101b030 to 0111b043 has its CatchHandler @ 0101b19c */
            iVar10 = *(int *)(lVar9 + 0x2400);
            *(short *)(lVar9 + (long)iVar10 * 2 + 0x1e00) = (short)local_28c;
            *(int *)(lVar9 + 0x2400) = iVar10 + 1;
          }
        }
      } while (pcVar7 < pcVar2);
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
                    /* try { // try from 0101b054 to 0111b09f has its CatchHandler @ 0101b1a0 */
  Data::~Data(aDStack_280);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

