
void FUN_010417b8(long param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined1 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  time_t local_50;
  int local_48;
  long local_38;
  
  if (param_1 == 0) {
    return;
  }
  FUN_01047a8c(param_1);
  lVar13 = *(long *)(param_1 + 0x220);
  bVar2 = *(byte *)(param_1 + 0x304);
  lVar9 = *(long *)(param_1 + 0x238);
  if (*(long *)(param_1 + 0x238) != 0) {
    do {
      lVar14 = *(long *)(lVar9 + 0x240);
      *(undefined8 *)(lVar9 + 0x230) = 0;
      *(uint *)(lVar9 + 0x2f4) = *(uint *)(lVar9 + 0x2f4) | 0x40;
      FUN_010417b8(lVar9,param_2);
      lVar9 = lVar14;
    } while (lVar14 != 0);
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  bVar7 = *(byte *)(param_1 + 0x2fe);
  if (bVar7 < 0x2e) {
    if ((1L << ((ulong)bVar7 & 0x3f) & 0x3bbd00000000U) != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        thunk_FUN_0104b1cc(*(long *)(param_1 + 0x18),0,"free");
        bVar7 = *(byte *)(param_1 + 0x2fe);
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      goto LAB_0104185c;
    }
    if ((ulong)bVar7 != 0xd) goto LAB_0104185c;
    lVar9 = *(long *)(param_1 + 0x230);
    if (lVar9 != 0) {
      lVar14 = *(long *)(lVar9 + 0x238);
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar9 + 0x238);
        do {
          if (lVar14 == param_1) {
            if (*(long *)(lVar9 + 0x248) != 0) {
              (**(code **)(*(long *)(lVar9 + 0x248) + 8))
                        (param_1,0x45,*(undefined8 *)(lVar9 + 0x270),param_1,0);
            }
            *plVar10 = *(long *)(param_1 + 0x240);
            goto LAB_01041bec;
          }
          plVar10 = (long *)(lVar14 + 0x240);
          lVar14 = *plVar10;
        } while (lVar14 != 0);
      }
                    /* catch() { ... } // from try @ 010419f4 with catch @ 01041998 */
      _lws_log(1,"%s: failed to detach from parent\n","lws_remove_child_from_any_parent");
LAB_01041bec:
      *(undefined8 *)(param_1 + 0x230) = 0;
    }
                    /* catch() { ... } // from try @ 01041af4 with catch @ 01041bf4 */
    FUN_01046140(param_1);
                    /* catch() { ... } // from try @ 01041b90 with catch @ 01041c10 */
    (**(code **)(*(long *)(param_1 + 0x248) + 8))(param_1,0x42,*(undefined8 *)(param_1 + 0x270),0,0)
    ;
  }
  else {
LAB_0104185c:
    if ((bVar7 == 1) || (bVar7 == 5)) {
      if (*(long *)(param_1 + 0x40) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 8))();
        (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                  (param_1,5,*(undefined8 *)(param_1 + 0x270),0,0);
        *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000;
      }
LAB_010418f4:
      cVar3 = *(char *)(param_1 + 0x2ff);
      if (cVar3 == '\x04') {
        *(undefined1 *)(param_1 + 0x300) = 4;
        return;
      }
      if ((((cVar3 != '\f') && (param_2 != 9999)) && ((*(uint *)(param_1 + 0x2f4) >> 6 & 1) == 0))
         && ((*(char *)(param_1 + 0x300) = cVar3, cVar3 != '\b' && (cVar3 != '\n')))) {
        if (cVar3 == '\v') {
          if (*(int *)(param_1 + 0x2e8) != 0) goto LAB_0104194c;
        }
        else {
          if (*(int *)(param_1 + 0x2e8) != 0) {
            lVar9 = *(long *)(param_1 + 0x220);
            bVar2 = *(byte *)(param_1 + 0x304);
            *(undefined1 *)(param_1 + 0x2ff) = 0xb;
            time(&local_50);
                    /* try { // try from 010419c8 to 011419cf has its CatchHandler @ 01041a5c */
            if (*(long *)(param_1 + 0x268) == 0) {
              plVar10 = (long *)(lVar9 + (ulong)bVar2 * 0x6f8 + 0xf8);
              lVar9 = *plVar10;
              *(long *)(param_1 + 0x260) = lVar9;
              if (lVar9 != 0) {
                *(long *)(lVar9 + 0x268) = param_1 + 0x260;
              }
              *(long **)(param_1 + 0x268) = plVar10;
              *plVar10 = param_1;
            }
                    /* try { // try from 010419f0 to 011419f3 has its CatchHandler @ 01041a4c */
                    /* try { // try from 010419f4 to 01141a77 has its CatchHandler @ 01041998 */
            uVar11 = 0xc;
            local_38 = local_50 + 5;
            goto LAB_010419fc;
          }
          cVar3 = *(char *)(param_1 + 0x2fe);
          if ((cVar3 != '\"') && (cVar3 != '$')) {
            if (((*(uint *)(param_1 + 0x2f4) >> 0x11 & 1) == 0) &&
               ((cVar3 == '\x05' || (cVar3 == '\0')))) {
              uVar6 = 0;
              if (*(long *)(param_1 + 0x270) != 0) {
                    /* catch() { ... } // from try @ 01041c90 with catch @ 01041c34 */
                (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                          (param_1,0x32,*(long *)(param_1 + 0x270),0,0);
                uVar6 = *(undefined8 *)(param_1 + 0x270);
              }
                    /* try { // try from 01041c64 to 01141c6b has its CatchHandler @ 01041d08 */
              (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))(param_1,5,uVar6,0,0);
              *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000;
            }
                    /* try { // try from 01041c8c to 01141c8f has its CatchHandler @ 01041cf8 */
                    /* try { // try from 01041c90 to 01141d23 has its CatchHandler @ 01041c34 */
            iVar4 = FUN_010566c8(param_1,6,0,0);
            if (0 < iVar4) {
              return;
            }
            do {
              local_50 = 0;
              local_48 = 0;
              iVar4 = FUN_010566c8(param_1,0xf,&local_50,0);
              if ((iVar4 < 0) ||
                 ((local_48 != 0 && (iVar5 = FUN_01046810(param_1,local_50), iVar5 != local_48))))
              goto LAB_01041a1c;
            } while (iVar4 != 0);
            if (*(char *)(param_1 + 0x300) == '\x05') {
                    /* catch() { ... } // from try @ 01041c8c with catch @ 01041cf8 */
              if (*(char *)(param_1 + 0x102) == '\0') {
                if ((param_2 == 0) || (param_2 == 9999)) goto LAB_01041a1c;
                *(undefined1 *)(param_1 + 0x102) = 2;
                *(char *)(param_1 + 0x80) = (char)((uint)param_2 >> 8);
                *(char *)(param_1 + 0x81) = (char)param_2;
              }
              lVar9 = *(long *)(param_1 + 0x220);
              bVar2 = *(byte *)(param_1 + 0x304);
                    /* catch() { ... } // from try @ 01041c64 with catch @ 01041d08 */
              *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40000;
              *(undefined1 *)(param_1 + 0x2ff) = 8;
              time(&local_38);
              if (*(long *)(param_1 + 0x268) == 0) {
                plVar10 = (long *)(lVar9 + (ulong)bVar2 * 0x6f8 + 0xf8);
                lVar9 = *plVar10;
                *(long *)(param_1 + 0x260) = lVar9;
                if (lVar9 != 0) {
                  *(long *)(lVar9 + 0x268) = param_1 + 0x260;
                }
                *(long **)(param_1 + 0x268) = plVar10;
                *plVar10 = param_1;
              }
              *(undefined1 *)(param_1 + 0x303) = 0x18;
              *(long *)(param_1 + 0x218) = local_38 + 2;
LAB_0104194c:
              lws_callback_on_writable(param_1);
              return;
            }
          }
        }
      }
LAB_01041a1c:
      lVar9 = *(long *)(param_1 + 0x230);
    }
    else {
      if (bVar7 != 0xc) goto LAB_010418f4;
      (**(code **)(*(long *)(param_1 + 0x248) + 8))
                (param_1,0x3c,*(undefined8 *)(param_1 + 0x270),0,0);
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
      lVar9 = *(long *)(param_1 + 0x230);
    }
    if (lVar9 != 0) {
      lVar14 = *(long *)(lVar9 + 0x238);
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar9 + 0x238);
        do {
          if (lVar14 == param_1) {
            if (*(long *)(lVar9 + 0x248) != 0) {
                    /* try { // try from 01041a78 to 01141af3 has its CatchHandler @ 01041a78
                       catch() { ... } // from try @ 01041a78 with catch @ 01041a78
                       catch() { ... } // from try @ 01041afc with catch @ 01041a78
                       catch() { ... } // from try @ 01041bb0 with catch @ 01041a78 */
              (**(code **)(*(long *)(lVar9 + 0x248) + 8))
                        (param_1,0x45,*(undefined8 *)(lVar9 + 0x270),param_1,0);
            }
            *plVar10 = *(long *)(param_1 + 0x240);
            goto LAB_01041a8c;
          }
          plVar10 = (long *)(lVar14 + 0x240);
          lVar14 = *plVar10;
        } while (lVar14 != 0);
      }
                    /* catch() { ... } // from try @ 010419f0 with catch @ 01041a4c */
      _lws_log(1,"%s: failed to detach from parent\n","lws_remove_child_from_any_parent");
                    /* catch() { ... } // from try @ 010419c8 with catch @ 01041a5c */
LAB_01041a8c:
      *(undefined8 *)(param_1 + 0x230) = 0;
    }
    if (((*(byte *)(param_1 + 0x2f6) >> 1 & 1) == 0) && (*(long *)(param_1 + 0x270) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x248) + 8))(param_1,0x32,*(long *)(param_1 + 0x270),0,0);
    }
    bVar7 = *(byte *)(param_1 + 0x2fe);
    uVar8 = (uint)bVar7;
    if (((bVar7 == 0x28) || (bVar7 == 0x22)) && ((*(byte *)(param_1 + 0x2f6) & 1) == 0)) {
                    /* try { // try from 01041af4 to 01141afb has its CatchHandler @ 01041bf4 */
      (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                (param_1,1,*(undefined8 *)(param_1 + 0x270),0,0);
                    /* try { // try from 01041afc to 01141b8f has its CatchHandler @ 01041a78 */
      uVar8 = (uint)*(byte *)(param_1 + 0x2fe);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                (param_1,0x2d,*(undefined8 *)(param_1 + 0x270),0,0);
      uVar8 = (uint)*(byte *)(param_1 + 0x2fe);
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000;
    }
    if ((((uVar8 != 0xc) && ((uVar8 >> 5 & 1) == 0)) &&
        ((*(char *)(param_1 + 0x2ff) != '\f' &&
         ((param_2 != 9999 && (*(char *)(param_1 + 0x2ff) != '\a')))))) &&
       ((*(uint *)(param_1 + 0x2f4) >> 6 & 1) == 0)) {
      if (((*(byte *)(param_1 + 0x2f8) & 0xf) == 0) || (*(SSL **)(param_1 + 0x2b0) == (SSL *)0x0)) {
        iVar4 = *(int *)(param_1 + 0x2d0);
                    /* try { // try from 01041bb0 to 01141c33 has its CatchHandler @ 01041a78 */
        if (-1 < iVar4) {
          *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
          goto LAB_01041dac;
        }
LAB_01041db4:
        bVar7 = *(byte *)(param_1 + 0x2f4);
      }
      else {
        iVar4 = SSL_shutdown(*(SSL **)(param_1 + 0x2b0));
        if (iVar4 == 1) {
LAB_01041da8:
          iVar4 = *(int *)(param_1 + 0x2d0);
LAB_01041dac:
          shutdown(iVar4,1);
          goto LAB_01041db4;
        }
        if (iVar4 == 0) {
                    /* try { // try from 01041b90 to 01141baf has its CatchHandler @ 01041c10 */
          FUN_01046364(param_1,4,1);
          bVar7 = *(byte *)(param_1 + 0x2f4);
        }
        else {
          iVar4 = SSL_want(*(SSL **)(param_1 + 0x2b0));
          if (iVar4 == 3) {
            uVar6 = 1;
          }
          else {
            iVar4 = SSL_want(*(SSL **)(param_1 + 0x2b0));
            if (iVar4 != 2) goto LAB_01041da8;
            uVar6 = 4;
          }
          FUN_01046364(param_1,0,uVar6);
          bVar7 = *(byte *)(param_1 + 0x2f4);
        }
      }
      if (((((bVar7 >> 6 & 1) == 0) && (-1 < *(int *)(param_1 + 0x2d0))) &&
          (*(char *)(param_1 + 0x2ff) != '\f')) && ((*(byte *)(lVar13 + 0xc79) >> 2 & 1) == 0)) {
        FUN_01046364(param_1,4,1);
        *(undefined1 *)(param_1 + 0x2ff) = 0xc;
        iVar4 = *(int *)(lVar13 + 0xc80);
        if (iVar4 == -2) {
          plVar10 = *(long **)(param_1 + 0x268);
          if (plVar10 != (long *)0x0) {
            lVar9 = *(long *)(param_1 + 0x260);
            if (lVar9 != 0) {
              *(long **)(lVar9 + 0x268) = plVar10;
              plVar10 = *(long **)(param_1 + 0x268);
            }
            *plVar10 = lVar9;
            *(undefined8 *)(param_1 + 0x260) = 0;
            *(undefined8 *)(param_1 + 0x268) = 0;
          }
          FUN_010417b8(param_1,0);
          return;
        }
        lVar9 = *(long *)(param_1 + 0x220);
        bVar2 = *(byte *)(param_1 + 0x304);
        time(&local_38);
        if (*(long *)(param_1 + 0x268) == 0) {
          plVar10 = (long *)(lVar9 + (ulong)bVar2 * 0x6f8 + 0xf8);
          lVar9 = *plVar10;
          *(long *)(param_1 + 0x260) = lVar9;
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x268) = param_1 + 0x260;
          }
          *(long **)(param_1 + 0x268) = plVar10;
          *plVar10 = param_1;
        }
        uVar11 = 0xd;
        local_38 = local_38 + iVar4;
LAB_010419fc:
        *(long *)(param_1 + 0x218) = local_38;
        *(undefined1 *)(param_1 + 0x303) = uVar11;
        return;
      }
    }
    lws_ssl_remove_wsi_from_buffered_list(param_1);
    plVar10 = *(long **)(param_1 + 0x268);
    if (plVar10 != (long *)0x0) {
      lVar9 = *(long *)(param_1 + 0x260);
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x268) = plVar10;
        plVar10 = *(long **)(param_1 + 0x268);
      }
      *plVar10 = lVar9;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    if (*(int *)(param_1 + 0x2d0) == -1) {
      FUN_01046338(param_1);
    }
    else {
      FUN_01046140();
    }
                    /* catch() { ... } // from try @ 01041eb0 with catch @ 01041e80 */
    *(undefined1 *)(param_1 + 0x2ff) = 4;
    thunk_FUN_0104b1cc(*(undefined8 *)(param_1 + 0x280),0,"free");
    *(undefined8 *)(param_1 + 0x280) = 0;
                    /* try { // try from 01041ea8 to 01141eaf has its CatchHandler @ 01041ed0 */
                    /* try { // try from 01041eb0 to 01141eeb has its CatchHandler @ 01041e80 */
    if ((*(char *)(param_1 + 0x300) == '\x05') || (*(byte *)(param_1 + 0x2fe) - 3 < 2)) {
      puVar1 = (uint *)(param_1 + 0x106);
      uVar8 = *puVar1;
      if ((uVar8 >> 0xe & 1) != 0) {
        uVar8 = uVar8 & 0xffffbfff;
        *puVar1 = uVar8;
                    /* catch() { ... } // from try @ 01041ea8 with catch @ 01041ed0 */
        plVar10 = (long *)(lVar13 + (ulong)bVar2 * 0x6f8 + 0xe8);
        lVar9 = *plVar10;
        while (lVar9 != 0) {
          if (lVar9 == param_1) {
            *plVar10 = *(long *)(param_1 + 0x48);
            uVar8 = *puVar1;
            break;
          }
          plVar10 = (long *)(lVar9 + 0x48);
          lVar9 = *plVar10;
                    /* try { // try from 01041eec to 01141f1f has its CatchHandler @ 01041eec
                       catch() { ... } // from try @ 01041eec with catch @ 01041eec
                       catch() { ... } // from try @ 01041f24 with catch @ 01041eec */
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      if ((uVar8 >> 0xf & 1) != 0) {
        *puVar1 = uVar8 & 0xffff7fff;
        plVar10 = (long *)(lVar13 + (ulong)bVar2 * 0x6f8 + 0xf0);
        lVar9 = *plVar10;
        while (lVar9 != 0) {
                    /* try { // try from 01041f20 to 01141f23 has its CatchHandler @ 01041f40 */
                    /* try { // try from 01041f24 to 01141f53 has its CatchHandler @ 01041eec */
          if (lVar9 == param_1) {
                    /* catch() { ... } // from try @ 01041f20 with catch @ 01041f40 */
            *plVar10 = *(long *)(param_1 + 0x50);
            break;
          }
          plVar10 = (long *)(lVar9 + 0x50);
          lVar9 = *plVar10;
        }
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      thunk_FUN_0104b1cc(*(undefined8 *)(param_1 + 0x38),0,"free");
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (*(long *)(param_1 + 0x288) != 0) {
        thunk_FUN_0104b1cc(*(long *)(param_1 + 0x288),0,"free");
        *(undefined8 *)(param_1 + 0x288) = 0;
      }
      *(undefined1 *)(param_1 + 0xfd) = 0;
                    /* try { // try from 01041f84 to 01141f87 has its CatchHandler @ 01041fb0 */
      *puVar1 = *puVar1 & 0xffffff7f;
    }
    cVar3 = *(char *)(param_1 + 0x2fe);
    if ((*(byte *)(param_1 + 0x2f6) >> 1 & 1) == 0) {
      if (cVar3 != '\f') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01041f84 with catch @ 01041fb0
                        */
        if (((*(long *)(param_1 + 0x248) == 0) ||
            (pcVar12 = *(code **)(*(long *)(param_1 + 0x248) + 8), pcVar12 == (code *)0x0)) ||
           (((bVar2 = *(byte *)(param_1 + 0x300), 0xf < bVar2 ||
             ((1 << (ulong)(bVar2 & 0x1f) & 0x8f29U) == 0)) && ((cVar3 != '\x03' || (bVar2 != 0)))))
           ) goto LAB_01041ff8;
        (*pcVar12)(param_1,4,*(undefined8 *)(param_1 + 0x270),0,0);
      }
    }
    else {
LAB_01041ff8:
      if (cVar3 == '\x01') {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                  (param_1,5,*(undefined8 *)(param_1 + 0x270),0,0);
      }
    }
    iVar4 = FUN_010566c8(param_1,8,0,0);
    if (iVar4 < 0) {
      _lws_log(2,"extension destruction failed\n");
    }
    iVar4 = FUN_010567dc(lVar13,param_1,9,0,0);
    if (iVar4 < 0) {
      _lws_log(2,"ext destroy wsi failed\n");
    }
  }
  uVar8 = *(uint *)(param_1 + 0x2f4);
  *(uint *)(param_1 + 0x2f4) = uVar8 | 0x40;
  if ((uVar8 >> 0x14 & 1) == 0) {
    if (*(int *)(param_1 + 0x2d0) < 0) goto LAB_010420d0;
    if ((*(byte *)(lVar13 + 0xc79) >> 2 & 1) != 0) {
      if ((uVar8 >> 4 & 1) != 0) {
        uv_poll_stop(param_1 + 0x168);
      }
      FUN_01057d30(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2d0) < 0) goto LAB_010420d0;
  iVar4 = lws_ssl_close(param_1);
  if (iVar4 == 0) {
    close(*(int *)(param_1 + 0x2d0));
    *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
  }
LAB_010420d0:
  (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
            (param_1,0x1e,*(undefined8 *)(param_1 + 0x270),0,0);
  FUN_01041408(param_1);
  return;
}

