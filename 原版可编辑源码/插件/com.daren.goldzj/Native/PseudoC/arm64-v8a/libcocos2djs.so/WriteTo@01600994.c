
/* v8::internal::wasm::WasmModuleBuilder::WriteTo(v8::internal::wasm::ZoneBuffer*) const */

void __thiscall
v8::internal::wasm::WasmModuleBuilder::WriteTo(WasmModuleBuilder *this,ZoneBuffer *param_1)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  byte *pbVar4;
  ulong *puVar5;
  uchar *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  Zone *pZVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  long lVar22;
  WasmModuleBuilder *pWVar23;
  byte *pbVar24;
  long lVar25;
  char *pcVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  WasmModuleBuilder *pWVar30;
  ZoneBuffer *pZVar31;
  long *plVar32;
  uchar *puVar33;
  long *plVar35;
  uchar *puVar36;
  uchar *puVar37;
  WasmModuleBuilder WVar38;
  ulong *puVar39;
  undefined1 *puVar40;
  undefined8 *puVar41;
  uint uVar42;
  uint *puVar43;
  uchar *puVar44;
  long lVar45;
  undefined1 uVar46;
  undefined8 *puVar47;
  ZoneBuffer *pZVar48;
  ulong uVar49;
  ZoneBuffer *pZVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  int local_9c;
  uchar *puVar34;
  
  ZoneBuffer::write_u32(param_1,0x6d736100);
  ZoneBuffer::write_u32(param_1,1);
  if (*(long *)(this + 0x10) != *(long *)(this + 8)) {
    lVar14 = FUN_01603284(1,param_1);
    ZoneBuffer::write_size(param_1,*(long *)(this + 0x10) - *(long *)(this + 8) >> 3);
    puVar41 = *(undefined8 **)(this + 0x10);
    for (puVar47 = *(undefined8 **)(this + 8); puVar47 != puVar41; puVar47 = puVar47 + 1) {
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      puVar39 = (ulong *)*puVar47;
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
        puVar40 = (undefined1 *)
                  ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(undefined1 **)(param_1 + 0x10) = puVar40;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 0x60;
      ZoneBuffer::write_size(param_1,puVar39[1]);
      uVar49 = *puVar39;
      uVar17 = puVar39[1];
      if (uVar17 != 0) {
        puVar40 = (undefined1 *)(puVar39[2] + uVar49);
        do {
          uVar46 = 0x7f;
          switch(*puVar40) {
          case 0:
            uVar46 = 0x40;
            break;
          case 1:
            break;
          case 2:
            uVar46 = 0x7e;
            break;
          case 3:
            uVar46 = 0x7d;
            break;
          case 4:
            uVar46 = 0x7c;
            break;
          case 5:
            uVar46 = 0x7b;
            break;
          case 6:
            uVar46 = 0x6f;
            break;
          case 7:
            uVar46 = 0x70;
            break;
          default:
            goto switchD_01600b40_caseD_8;
          case 9:
            uVar46 = 0x68;
          }
          puVar20 = *(undefined1 **)(param_1 + 0x10);
          if (*(undefined1 **)(param_1 + 0x18) < puVar20 + 1) {
            pZVar16 = *(Zone **)param_1;
            pvVar15 = *(void **)(pZVar16 + 0x10);
            uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
            uVar19 = uVar49 + 7 & 0xfffffffffffffff8;
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
              pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
            }
            else {
              *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
            }
            memcpy(pvVar15,*(void **)(param_1 + 8),
                   *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
            *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
            puVar20 = (undefined1 *)
                      ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
            *(void **)(param_1 + 8) = pvVar15;
            *(undefined1 **)(param_1 + 0x10) = puVar20;
          }
          uVar17 = uVar17 - 1;
          puVar40 = puVar40 + 1;
          *(undefined1 **)(param_1 + 0x10) = puVar20 + 1;
          *puVar20 = uVar46;
        } while (uVar17 != 0);
        uVar49 = *puVar39;
      }
      ZoneBuffer::write_size(param_1,uVar49);
      uVar49 = *puVar39;
      if (uVar49 != 0) {
        puVar40 = (undefined1 *)puVar39[2];
        do {
          uVar46 = 0x7f;
          switch(*puVar40) {
          case 0:
            uVar46 = 0x40;
            break;
          case 1:
            break;
          case 2:
            uVar46 = 0x7e;
            break;
          case 3:
            uVar46 = 0x7d;
            break;
          case 4:
            uVar46 = 0x7c;
            break;
          case 5:
            uVar46 = 0x7b;
            break;
          case 6:
            uVar46 = 0x6f;
            break;
          case 7:
            uVar46 = 0x70;
            break;
          default:
            goto switchD_01600b40_caseD_8;
          case 9:
            uVar46 = 0x68;
          }
          puVar20 = *(undefined1 **)(param_1 + 0x10);
          if (*(undefined1 **)(param_1 + 0x18) < puVar20 + 1) {
            pZVar16 = *(Zone **)param_1;
            pvVar15 = *(void **)(pZVar16 + 0x10);
            uVar17 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
            uVar19 = uVar17 + 7 & 0xfffffffffffffff8;
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
              pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
            }
            else {
              *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
            }
            memcpy(pvVar15,*(void **)(param_1 + 8),
                   *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
            *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar17;
            puVar20 = (undefined1 *)
                      ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
            *(void **)(param_1 + 8) = pvVar15;
            *(undefined1 **)(param_1 + 0x10) = puVar20;
          }
          uVar49 = uVar49 - 1;
          puVar40 = puVar40 + 1;
          *(undefined1 **)(param_1 + 0x10) = puVar20 + 1;
          *puVar20 = uVar46;
        } while (uVar49 != 0);
      }
    }
    uVar42 = ((*(int *)(param_1 + 0x10) - (int)lVar14) - (int)*(long *)(param_1 + 8)) - 5;
    pbVar21 = (byte *)(*(long *)(param_1 + 8) + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if ((*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3) * -0x5555555555555555 +
      (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) * -0x5555555555555555 != 0) {
    lVar14 = FUN_01603284(2,param_1);
    ZoneBuffer::write_size
              (param_1,(*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3) * -0x5555555555555555
                       + (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) *
                         -0x5555555555555555);
    puVar41 = *(undefined8 **)(this + 0x50);
    for (puVar47 = *(undefined8 **)(this + 0x48); puVar47 != puVar41; puVar47 = puVar47 + 3) {
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      puVar44 = (uchar *)*puVar47;
      uVar51 = puVar47[1];
      uVar46 = *(undefined1 *)(puVar47 + 2);
      bVar8 = *(byte *)((long)puVar47 + 0x11);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 5) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        lVar22 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2;
        uVar49 = lVar22 + 0xcU & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar49) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar49);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar49 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(long *)(param_1 + 0x18) = (long)pvVar15 + lVar22 + 5;
        puVar40 = (undefined1 *)
                  ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(undefined1 **)(param_1 + 0x10) = puVar40;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 0;
      ZoneBuffer::write_size(param_1,(long)(int)uVar51);
      ZoneBuffer::write(param_1,puVar44,(long)(int)uVar51);
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
        puVar40 = (undefined1 *)
                  ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(undefined1 **)(param_1 + 0x10) = puVar40;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 3;
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
        puVar40 = (undefined1 *)
                  ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(undefined1 **)(param_1 + 0x10) = puVar40;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = uVar46;
      pbVar21 = *(byte **)(param_1 + 0x10);
      if (*(byte **)(param_1 + 0x18) < pbVar21 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(byte **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
        pbVar21 = (byte *)((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(byte **)(param_1 + 0x10) = pbVar21;
      }
      *(byte **)(param_1 + 0x10) = pbVar21 + 1;
      *pbVar21 = bVar8 & 1;
    }
    puVar41 = *(undefined8 **)(this + 0x30);
    for (puVar47 = *(undefined8 **)(this + 0x28); puVar47 != puVar41; puVar47 = puVar47 + 3) {
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      puVar44 = (uchar *)*puVar47;
      uVar51 = puVar47[1];
      uVar42 = *(uint *)(puVar47 + 2);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 5) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        lVar22 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2;
        uVar49 = lVar22 + 0xcU & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar49) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar49);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar49 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(long *)(param_1 + 0x18) = (long)pvVar15 + lVar22 + 5;
        puVar40 = (undefined1 *)
                  ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(undefined1 **)(param_1 + 0x10) = puVar40;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 0;
      ZoneBuffer::write_size(param_1,(long)(int)uVar51);
      ZoneBuffer::write(param_1,puVar44,(long)(int)uVar51);
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)(param_1 + 8),
               *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
        *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
        puVar40 = (undefined1 *)
                  ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
        *(void **)(param_1 + 8) = pvVar15;
        *(undefined1 **)(param_1 + 0x10) = puVar40;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 0;
      ZoneBuffer::write_u32v(param_1,uVar42);
    }
    uVar42 = ((*(int *)(param_1 + 0x10) - (int)lVar14) - (int)*(long *)(param_1 + 8)) - 5;
    pbVar21 = (byte *)(*(long *)(param_1 + 8) + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if (*(long *)(this + 0x90) == *(long *)(this + 0x88)) {
    local_9c = 0;
  }
  else {
    lVar14 = FUN_01603284(3,param_1);
    ZoneBuffer::write_size(param_1,*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3);
    plVar27 = *(long **)(this + 0x90);
    if (*(long **)(this + 0x88) == plVar27) {
      local_9c = 0;
    }
    else {
      local_9c = 0;
      plVar32 = *(long **)(this + 0x88);
      do {
        plVar35 = plVar32 + 1;
        lVar22 = *plVar32;
        ZoneBuffer::write_u32v(param_1,*(uint *)(lVar22 + 0x38));
        if (*(long *)(lVar22 + 0x68) != 0) {
          local_9c = local_9c + 1;
        }
        plVar32 = plVar35;
      } while (plVar27 != plVar35);
    }
    uVar42 = ((*(int *)(param_1 + 0x10) - (int)lVar14) - (int)*(long *)(param_1 + 8)) - 5;
    pbVar21 = (byte *)(*(long *)(param_1 + 8) + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if (*(long *)(this + 0xb0) != *(long *)(this + 0xa8)) {
    lVar14 = FUN_01603284(4,param_1);
    ZoneBuffer::write_size(param_1,*(long *)(this + 0xb0) - *(long *)(this + 0xa8) >> 4);
    puVar3 = *(uint **)(this + 0xb0);
    if (*(uint **)(this + 0xa8) != puVar3) {
      puVar43 = *(uint **)(this + 0xa8) + 2;
      do {
        uVar46 = 0x7f;
        switch((char)puVar43[-2]) {
        case '\0':
          uVar46 = 0x40;
          break;
        case '\x01':
          break;
        case '\x02':
          uVar46 = 0x7e;
          break;
        case '\x03':
          uVar46 = 0x7d;
          break;
        case '\x04':
          uVar46 = 0x7c;
          break;
        case '\x05':
          uVar46 = 0x7b;
          break;
        case '\x06':
          uVar46 = 0x6f;
          break;
        case '\a':
          uVar46 = 0x70;
          break;
        default:
          goto switchD_01600b40_caseD_8;
        case '\t':
          uVar46 = 0x68;
        }
        puVar40 = *(undefined1 **)(param_1 + 0x10);
        if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)(param_1 + 8),
                 *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
          *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
          puVar40 = (undefined1 *)
                    ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
          *(void **)(param_1 + 8) = pvVar15;
          *(undefined1 **)(param_1 + 0x10) = puVar40;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = uVar46;
        puVar40 = *(undefined1 **)(param_1 + 0x10);
        uVar42 = puVar43[1];
        if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)(param_1 + 8),
                 *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
          *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
          puVar40 = (undefined1 *)
                    ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
          *(void **)(param_1 + 8) = pvVar15;
          *(undefined1 **)(param_1 + 0x10) = puVar40;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = (char)uVar42;
        ZoneBuffer::write_size(param_1,(ulong)puVar43[-1]);
        if ((char)puVar43[1] != '\0') {
          ZoneBuffer::write_size(param_1,(ulong)*puVar43);
        }
        puVar1 = puVar43 + 2;
        puVar43 = puVar43 + 4;
      } while (puVar1 != puVar3);
    }
    uVar42 = ((*(int *)(param_1 + 0x10) - (int)lVar14) - (int)*(long *)(param_1 + 8)) - 5;
    pbVar21 = (byte *)(*(long *)(param_1 + 8) + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  lVar14 = FUN_01603284(5,param_1);
  pZVar50 = param_1 + 0x18;
  pZVar48 = param_1 + 0x10;
  puVar40 = *(undefined1 **)pZVar48;
  if (*(undefined1 **)pZVar50 < puVar40 + 1) {
    pZVar16 = *(Zone **)param_1;
    pvVar15 = *(void **)(pZVar16 + 0x10);
    uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
    uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
      pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
    }
    else {
      *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
    }
    memcpy(pvVar15,*(void **)(param_1 + 8),*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8)
          );
    *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
    puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
    *(void **)(param_1 + 8) = pvVar15;
    *(undefined1 **)(param_1 + 0x10) = puVar40;
  }
  *(undefined1 **)pZVar48 = puVar40 + 1;
  *puVar40 = 1;
  WVar38 = this[0x170];
  if (this[0x171] == (WasmModuleBuilder)0x0) {
    pWVar23 = *(WasmModuleBuilder **)pZVar48;
    pWVar30 = *(WasmModuleBuilder **)pZVar50;
  }
  else {
    pWVar23 = *(WasmModuleBuilder **)pZVar48;
    pWVar30 = *(WasmModuleBuilder **)pZVar50;
    bVar11 = WVar38 != (WasmModuleBuilder)0x0;
    WVar38 = (WasmModuleBuilder)0x2;
    if (bVar11) {
      WVar38 = (WasmModuleBuilder)0x3;
    }
  }
  if (pWVar30 < pWVar23 + 1) {
    pZVar16 = *(Zone **)param_1;
    pvVar15 = *(void **)(pZVar16 + 0x10);
    uVar49 = ((long)pWVar30 - *(long *)(param_1 + 8)) * 2 | 1;
    uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
      pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
    }
    else {
      *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
    }
    memcpy(pvVar15,*(void **)(param_1 + 8),*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8)
          );
    *(ulong *)(param_1 + 0x18) = (long)pvVar15 + uVar49;
    pWVar23 = (WasmModuleBuilder *)
              ((long)pvVar15 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
    *(void **)(param_1 + 8) = pvVar15;
    *(WasmModuleBuilder **)(param_1 + 0x10) = pWVar23;
  }
  *(WasmModuleBuilder **)pZVar48 = pWVar23 + 1;
  *pWVar23 = WVar38;
  ZoneBuffer::write_u32v(param_1,*(uint *)(this + 0x168));
  if (this[0x170] != (WasmModuleBuilder)0x0) {
    ZoneBuffer::write_u32v(param_1,*(uint *)(this + 0x16c));
  }
  pZVar31 = param_1 + 8;
  pbVar21 = (byte *)(*(long *)pZVar31 + lVar14);
  uVar42 = ((*(int *)(param_1 + 0x10) - (int)lVar14) - (int)*(long *)pZVar31) - 5;
  *pbVar21 = (byte)uVar42 | 0x80;
  pbVar21[4] = (byte)(uVar42 >> 0x1c);
  pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
  pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
  pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
  if (*(long *)(this + 0x110) != *(long *)(this + 0x108)) {
    lVar14 = FUN_01603284(6,param_1);
    ZoneBuffer::write_size
              (param_1,(*(long *)(this + 0x110) - *(long *)(this + 0x108) >> 3) *
                       -0x5555555555555555);
    pbVar4 = *(byte **)(this + 0x110);
    for (pbVar21 = *(byte **)(this + 0x108); pbVar21 != pbVar4; pbVar21 = pbVar21 + 0x18) {
      bVar8 = *pbVar21;
      if (9 < bVar8) goto switchD_01600b40_caseD_8;
      puVar39 = (ulong *)(pbVar21 + 0x10);
      uVar42 = (uint)*puVar39;
      bVar9 = pbVar21[1];
      uVar7 = *(undefined4 *)(pbVar21 + 8);
      uVar17 = *puVar39;
      uVar49 = *puVar39;
      uVar46 = 0x7f;
      switch(bVar8) {
      case 0:
        uVar46 = 0x40;
        break;
      case 2:
        uVar46 = 0x7e;
        break;
      case 3:
        uVar46 = 0x7d;
        break;
      case 4:
        uVar46 = 0x7c;
        break;
      case 5:
        uVar46 = 0x7b;
        break;
      case 6:
        uVar46 = 0x6f;
        break;
      case 7:
        uVar46 = 0x70;
        break;
      case 8:
        goto switchD_01600b40_caseD_8;
      case 9:
        uVar46 = 0x68;
      }
      puVar40 = *(undefined1 **)pZVar48;
      if (*(undefined1 **)pZVar50 < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar19 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
        uVar18 = uVar19 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar18) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar18);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar18 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar19;
      }
      *(undefined1 **)pZVar48 = puVar40 + 1;
      *puVar40 = uVar46;
      pbVar24 = *(byte **)pZVar48;
      if (*(byte **)pZVar50 < pbVar24 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar19 = ((long)*(byte **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
        uVar18 = uVar19 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar18) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar18);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar18 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        pbVar24 = (byte *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(byte **)pZVar48 = pbVar24;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar19;
      }
      *(byte **)pZVar48 = pbVar24 + 1;
      *pbVar24 = bVar9 & 1;
      switch(uVar7) {
      case 0:
        switch(bVar8) {
        case 1:
          puVar40 = *(undefined1 **)pZVar48;
          if (*(undefined1 **)pZVar50 < puVar40 + 1) {
            pZVar16 = *(Zone **)param_1;
            pvVar15 = *(void **)(pZVar16 + 0x10);
            uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
            uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
              pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
            }
            else {
              *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
            }
            memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
            puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
            *(undefined1 **)pZVar48 = puVar40;
            *(void **)pZVar31 = pvVar15;
            *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
          }
          *(undefined1 **)pZVar48 = puVar40 + 1;
          uVar46 = 0x41;
          break;
        case 2:
          puVar40 = *(undefined1 **)pZVar48;
          if (*(undefined1 **)pZVar50 < puVar40 + 1) {
            pZVar16 = *(Zone **)param_1;
            pvVar15 = *(void **)(pZVar16 + 0x10);
            uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
            uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
              pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
            }
            else {
              *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
            }
            memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
            puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
            *(undefined1 **)pZVar48 = puVar40;
            *(void **)pZVar31 = pvVar15;
            *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
          }
          *(undefined1 **)pZVar48 = puVar40 + 1;
          uVar46 = 0x42;
          break;
        case 3:
          puVar40 = *(undefined1 **)pZVar48;
          if (*(undefined1 **)pZVar50 < puVar40 + 1) {
            pZVar16 = *(Zone **)param_1;
            pvVar15 = *(void **)(pZVar16 + 0x10);
            uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
            uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
              pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
            }
            else {
              *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
            }
            memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
            puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
            *(undefined1 **)pZVar48 = puVar40;
            *(void **)pZVar31 = pvVar15;
            *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
          }
          *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
          uVar42 = 0;
          *puVar40 = 0x43;
          goto LAB_016019f8;
        case 4:
          puVar40 = *(undefined1 **)pZVar48;
          if (*(undefined1 **)pZVar50 < puVar40 + 1) {
            pZVar16 = *(Zone **)param_1;
            pvVar15 = *(void **)(pZVar16 + 0x10);
            uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
            uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
            if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
              pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
            }
            else {
              *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
            }
            memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
            puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
            *(undefined1 **)pZVar48 = puVar40;
            *(void **)pZVar31 = pvVar15;
            *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
          }
          *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
          uVar17 = 0;
          *puVar40 = 0x44;
          goto LAB_01601c78;
        default:
          goto switchD_01600b40_caseD_8;
        }
        *puVar40 = uVar46;
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(undefined1 **)pZVar48 = puVar40 + 1;
        *puVar40 = 0;
        break;
      case 1:
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = 0x23;
        ZoneBuffer::write_u32v(param_1,uVar42);
        break;
      case 2:
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = 0x41;
        ZoneBuffer::write_i32v(param_1,uVar42);
        break;
      case 3:
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar17 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar19 = uVar17 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar17;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = 0x42;
        ZoneBuffer::write_i64v(param_1,uVar49);
        break;
      case 4:
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = 0x43;
LAB_016019f8:
        ZoneBuffer::write_u32(param_1,uVar42);
        break;
      case 5:
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar19 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
        *puVar40 = 0x44;
LAB_01601c78:
        ZoneBuffer::write_u64(param_1,uVar17);
        break;
      case 6:
        puVar40 = *(undefined1 **)pZVar48;
        if (*(undefined1 **)pZVar50 < puVar40 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(undefined1 **)pZVar48 = puVar40;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(undefined1 **)pZVar48 = puVar40 + 1;
        *puVar40 = 0xd0;
        break;
      case 7:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unimplemented code");
      }
      puVar40 = *(undefined1 **)pZVar48;
      if (*(undefined1 **)pZVar50 < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
      }
      *(undefined1 **)pZVar48 = puVar40 + 1;
      *puVar40 = 0xb;
    }
    uVar42 = ((*(int *)pZVar48 - (int)lVar14) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if (*(long *)(this + 0x70) != *(long *)(this + 0x68)) {
    lVar14 = FUN_01603284(7,param_1);
    ZoneBuffer::write_size
              (param_1,(*(long *)(this + 0x70) - *(long *)(this + 0x68) >> 3) * -0x5555555555555555)
    ;
    puVar47 = *(undefined8 **)(this + 0x68);
    puVar41 = *(undefined8 **)(this + 0x70);
joined_r0x016020dc:
    if (puVar47 != puVar41) {
      iVar13 = *(int *)(puVar47 + 1);
      puVar44 = (uchar *)*puVar47;
      uVar46 = *(undefined1 *)(puVar47 + 2);
      uVar49 = (ulong)*(int *)((long)puVar47 + 0x14);
      ZoneBuffer::write_size(param_1,(long)iVar13);
      ZoneBuffer::write(param_1,puVar44,(long)iVar13);
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar17 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar19 = uVar17 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar17;
      }
      *(undefined1 **)pZVar48 = puVar40 + 1;
      *puVar40 = uVar46;
      switch(uVar46) {
      case 0:
        lVar22 = *(long *)(this + 0x28);
        lVar25 = *(long *)(this + 0x30);
        break;
      case 1:
      case 2:
        goto switchD_016021e4_caseD_1;
      case 3:
        lVar22 = *(long *)(this + 0x48);
        lVar25 = *(long *)(this + 0x50);
        break;
      case 4:
switchD_01600b40_caseD_8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      default:
        goto switchD_016021e4_default;
      }
      uVar49 = uVar49 + (lVar25 - lVar22 >> 3) * -0x5555555555555555;
switchD_016021e4_caseD_1:
      ZoneBuffer::write_size(param_1,uVar49);
      goto switchD_016021e4_default;
    }
    uVar42 = ((*(int *)pZVar48 - (int)lVar14) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if (-1 < *(int *)(this + 0x160)) {
    lVar14 = FUN_01603284(8,param_1);
    ZoneBuffer::write_size
              (param_1,(long)*(int *)(this + 0x160) +
                       (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) * -0x5555555555555555)
    ;
    uVar42 = ((*(int *)(param_1 + 0x10) - (int)lVar14) - (int)*(long *)(param_1 + 8)) - 5;
    pbVar21 = (byte *)(*(long *)(param_1 + 8) + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if (*(long *)(this + 0xf0) != *(long *)(this + 0xe8)) {
    lVar14 = FUN_01603284(9,param_1);
    puVar40 = *(undefined1 **)(param_1 + 0x10);
    if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
      pZVar16 = *(Zone **)param_1;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
      uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
      *(undefined1 **)pZVar48 = puVar40;
      *(void **)pZVar31 = pvVar15;
      *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
    }
    *(undefined1 **)pZVar48 = puVar40 + 1;
    *puVar40 = 1;
    puVar40 = *(undefined1 **)pZVar48;
    if (*(undefined1 **)pZVar50 < puVar40 + 1) {
      pZVar16 = *(Zone **)param_1;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
      uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
      *(undefined1 **)pZVar48 = puVar40;
      *(void **)pZVar31 = pvVar15;
      *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
    }
    *(undefined1 **)pZVar48 = puVar40 + 1;
    *puVar40 = 0;
    lVar22 = *(long *)(this + 0xe8);
    uVar49 = *(long *)(this + 0xf0) - lVar22;
    if (uVar49 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      do {
        if (*(int *)(lVar22 + uVar17 * 4) != -1) break;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (uVar17 < (ulong)((long)uVar49 >> 2));
    }
    uVar49 = uVar49 >> 2;
    do {
      iVar13 = (int)uVar49;
      uVar10 = iVar13 - 1;
      uVar49 = (ulong)uVar10;
      uVar42 = (uint)uVar17;
      if (uVar10 < uVar42) break;
    } while (*(int *)(lVar22 + (ulong)uVar10 * 4) == -1);
    puVar40 = *(undefined1 **)pZVar48;
    if (*(undefined1 **)pZVar50 < puVar40 + 1) {
      pZVar16 = *(Zone **)param_1;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
      uVar19 = uVar49 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
      *(undefined1 **)pZVar48 = puVar40;
      *(void **)pZVar31 = pvVar15;
      *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
    }
    *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
    *puVar40 = 0x41;
    ZoneBuffer::write_u32v(param_1,uVar42);
    puVar40 = *(undefined1 **)(param_1 + 0x10);
    if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
      pZVar16 = *(Zone **)param_1;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
      uVar19 = uVar49 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
      *(undefined1 **)pZVar48 = puVar40;
      *(void **)pZVar31 = pvVar15;
      *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
    }
    *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
    *puVar40 = 0xb;
    ZoneBuffer::write_size(param_1,(ulong)(iVar13 - uVar42));
    while (uVar42 <= uVar10) {
      ZoneBuffer::write_size
                (param_1,(ulong)*(uint *)(*(long *)(this + 0xe8) + uVar17 * 4) +
                         (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) *
                         -0x5555555555555555);
      uVar42 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar42;
    }
    uVar42 = ((*(int *)pZVar48 - (int)lVar14) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  plVar27 = *(long **)(this + 0x88);
  plVar32 = *(long **)(this + 0x90);
  if (plVar27 != plVar32) {
    bVar11 = false;
    plVar35 = plVar27;
    do {
      bVar12 = *(char *)(*plVar35 + 0x13c) != -1;
      bVar11 = (bool)(bVar11 | bVar12);
      if (bVar12) break;
      bVar12 = plVar32 + -1 != plVar35;
      plVar35 = plVar35 + 1;
    } while (bVar12);
    if (bVar11) {
      puVar40 = *(undefined1 **)pZVar48;
      if (*(undefined1 **)pZVar50 < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
      }
      *(undefined1 **)pZVar48 = puVar40 + 1;
      *puVar40 = 0;
      lVar14 = *(long *)pZVar48;
      lVar22 = lVar14 - *(long *)pZVar31;
      if (*(ulong *)pZVar50 < lVar14 + 5U) {
        pZVar16 = *(Zone **)param_1;
        lVar25 = (*(ulong *)pZVar50 - *(long *)pZVar31) * 2;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = lVar25 + 0xcU & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar49) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar49);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = (long)pvVar15 + uVar49;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        lVar14 = (long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31);
        *(long *)pZVar48 = lVar14;
        *(void **)pZVar31 = pvVar15;
        *(long *)pZVar50 = (long)pvVar15 + lVar25 + 5;
      }
      *(long *)(param_1 + 0x10) = lVar14 + 5;
      iVar13 = __strlen_chk("compilationHints",0x11);
      ZoneBuffer::write_size(param_1,(long)iVar13);
      ZoneBuffer::write(param_1,(uchar *)"compilationHints",(long)iVar13);
      ZoneBuffer::write_size(param_1,*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3);
      plVar32 = *(long **)(this + 0x90);
      for (plVar27 = *(long **)(this + 0x88); plVar27 != plVar32; plVar27 = plVar27 + 1) {
        pcVar26 = *(char **)pZVar48;
        cVar2 = '\0';
        if (*(char *)(*plVar27 + 0x13c) != -1) {
          cVar2 = *(char *)(*plVar27 + 0x13c);
        }
        if (*(char **)pZVar50 < pcVar26 + 1) {
          pZVar16 = *(Zone **)param_1;
          pvVar15 = *(void **)(pZVar16 + 0x10);
          uVar49 = ((long)*(char **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
          uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
            pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
          }
          else {
            *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
          }
          memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
          pcVar26 = (char *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
          *(char **)pZVar48 = pcVar26;
          *(void **)pZVar31 = pvVar15;
          *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
        }
        *(char **)pZVar48 = pcVar26 + 1;
        *pcVar26 = cVar2;
      }
      uVar42 = ((*(int *)pZVar48 - (int)lVar22) - (int)*(long *)pZVar31) - 5;
      pbVar21 = (byte *)(*(long *)pZVar31 + lVar22);
      *pbVar21 = (byte)uVar42 | 0x80;
      pbVar21[4] = (byte)(uVar42 >> 0x1c);
      pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
      pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
      pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
      plVar27 = *(long **)(this + 0x88);
      plVar32 = *(long **)(this + 0x90);
    }
  }
  if (plVar32 != plVar27) {
    lVar14 = FUN_01603284(10,param_1);
    ZoneBuffer::write_size(param_1,*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3);
    puVar41 = *(undefined8 **)(this + 0x90);
    for (puVar47 = *(undefined8 **)(this + 0x88); puVar47 != puVar41; puVar47 = puVar47 + 1) {
      WasmFunctionBuilder::WriteBody((WasmFunctionBuilder *)*puVar47,param_1);
    }
    uVar42 = ((*(int *)pZVar48 - (int)lVar14) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if (*(long *)(this + 0xd0) != *(long *)(this + 200)) {
    lVar14 = FUN_01603284(0xb,param_1);
    ZoneBuffer::write_size
              (param_1,(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3) * -0x3333333333333333);
    puVar5 = *(ulong **)(this + 0xd0);
    for (puVar39 = *(ulong **)(this + 200); puVar39 != puVar5; puVar39 = puVar39 + 5) {
      uVar49 = puVar39[1] - *puVar39;
      if (uVar49 == 0) {
        puVar44 = (uchar *)0x0;
        puVar36 = (uchar *)0x0;
      }
      else {
        if (uVar49 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pZVar16 = (Zone *)puVar39[3];
        uVar49 = uVar49 + 7 & 0xfffffffffffffff8;
        puVar44 = *(uchar **)(pZVar16 + 0x10);
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)puVar44) < uVar49) {
          puVar44 = (uchar *)Zone::NewExpand(pZVar16,uVar49);
        }
        else {
          *(uchar **)(pZVar16 + 0x10) = puVar44 + uVar49;
        }
        puVar34 = (uchar *)*puVar39;
        puVar6 = (uchar *)puVar39[1];
        puVar36 = puVar44;
        if (puVar34 != puVar6) {
          uVar49 = (long)puVar6 - (long)puVar34;
          puVar37 = puVar44;
          if ((0x1f < uVar49) && ((puVar6 <= puVar44 || (puVar44 + uVar49 <= puVar34)))) {
            uVar19 = uVar49 & 0xffffffffffffffe0;
            puVar36 = puVar34 + 0x10;
            puVar34 = puVar34 + uVar19;
            puVar37 = puVar44 + 0x10;
            uVar17 = uVar19;
            do {
              puVar33 = puVar36 + -8;
              uVar51 = *(undefined8 *)(puVar36 + -0x10);
              uVar53 = *(undefined8 *)(puVar36 + 8);
              uVar52 = *(undefined8 *)puVar36;
              puVar36 = puVar36 + 0x20;
              uVar17 = uVar17 - 0x20;
              *(undefined8 *)(puVar37 + -8) = *(undefined8 *)puVar33;
              *(undefined8 *)(puVar37 + -0x10) = uVar51;
              *(undefined8 *)(puVar37 + 8) = uVar53;
              *(undefined8 *)puVar37 = uVar52;
              puVar37 = puVar37 + 0x20;
            } while (uVar17 != 0);
            puVar36 = puVar44 + uVar19;
            puVar37 = puVar44 + uVar19;
            if (uVar49 == uVar19) goto LAB_01602b10;
          }
          do {
            puVar33 = puVar34 + 1;
            *puVar37 = *puVar34;
            puVar34 = puVar33;
            puVar36 = puVar37 + 1;
            puVar37 = puVar37 + 1;
          } while (puVar6 != puVar33);
        }
      }
LAB_01602b10:
      puVar40 = *(undefined1 **)pZVar48;
      uVar49 = puVar39[4];
      if (*(undefined1 **)pZVar50 < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar17 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
        uVar19 = uVar17 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar17;
      }
      *(undefined1 **)pZVar48 = puVar40 + 1;
      *puVar40 = 0;
      puVar40 = *(undefined1 **)pZVar48;
      if (*(undefined1 **)pZVar50 < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar17 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
        uVar19 = uVar17 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar19) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar19);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar19 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar17;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 0x41;
      ZoneBuffer::write_u32v(param_1,(uint)uVar49);
      puVar40 = *(undefined1 **)(param_1 + 0x10);
      if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
        pZVar16 = *(Zone **)param_1;
        pvVar15 = *(void **)(pZVar16 + 0x10);
        uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
        uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
          pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
        }
        else {
          *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
        }
        memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
        puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
        *(undefined1 **)pZVar48 = puVar40;
        *(void **)pZVar31 = pvVar15;
        *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
      }
      *(undefined1 **)(param_1 + 0x10) = puVar40 + 1;
      *puVar40 = 0xb;
      ZoneBuffer::write_u32v(param_1,(uint)((long)puVar36 - (long)puVar44));
      ZoneBuffer::write(param_1,puVar44,(long)puVar36 - (long)puVar44);
    }
    uVar42 = ((*(int *)pZVar48 - (int)lVar14) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar14);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  if ((local_9c != 0) || (*(long *)(this + 0x28) != *(long *)(this + 0x30))) {
    puVar40 = *(undefined1 **)pZVar48;
    if (*(undefined1 **)pZVar50 < puVar40 + 1) {
      pZVar16 = *(Zone **)param_1;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = ((long)*(undefined1 **)pZVar50 - *(long *)(param_1 + 8)) * 2 | 1;
      uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
      *(undefined1 **)pZVar48 = puVar40;
      *(void **)pZVar31 = pvVar15;
      *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
    }
    *(undefined1 **)pZVar48 = puVar40 + 1;
    *puVar40 = 0;
    lVar22 = *(long *)pZVar48;
    lVar25 = *(long *)pZVar31;
    lVar14 = lVar22;
    if (*(ulong *)pZVar50 < lVar22 + 5U) {
      pZVar16 = *(Zone **)param_1;
      lVar28 = (*(ulong *)pZVar50 - lVar25) * 2;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = lVar28 + 0xcU & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar49) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar49);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = (long)pvVar15 + uVar49;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      lVar14 = (long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31);
      *(long *)pZVar48 = lVar14;
      *(void **)pZVar31 = pvVar15;
      *(long *)pZVar50 = (long)pvVar15 + lVar28 + 5;
    }
    *(long *)(param_1 + 0x10) = lVar14 + 5;
    iVar13 = __strlen_chk("name",5);
    ZoneBuffer::write_size(param_1,(long)iVar13);
    ZoneBuffer::write(param_1,"name",(long)iVar13);
    puVar40 = *(undefined1 **)(param_1 + 0x10);
    if (*(undefined1 **)(param_1 + 0x18) < puVar40 + 1) {
      pZVar16 = *(Zone **)param_1;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
      uVar17 = uVar49 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar17) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar17);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = uVar17 + (long)pvVar15;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      puVar40 = (undefined1 *)((long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31));
      *(undefined1 **)pZVar48 = puVar40;
      *(void **)pZVar31 = pvVar15;
      *(ulong *)pZVar50 = (long)pvVar15 + uVar49;
    }
    *(undefined1 **)pZVar48 = puVar40 + 1;
    *puVar40 = 1;
    lVar28 = *(long *)pZVar48;
    lVar45 = *(long *)pZVar31;
    lVar14 = lVar28;
    if (*(ulong *)pZVar50 < lVar28 + 5U) {
      pZVar16 = *(Zone **)param_1;
      lVar29 = (*(ulong *)pZVar50 - lVar45) * 2;
      pvVar15 = *(void **)(pZVar16 + 0x10);
      uVar49 = lVar29 + 0xcU & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pvVar15) < uVar49) {
        pvVar15 = (void *)Zone::NewExpand(pZVar16,uVar49);
      }
      else {
        *(ulong *)(pZVar16 + 0x10) = (long)pvVar15 + uVar49;
      }
      memcpy(pvVar15,*(void **)pZVar31,*(long *)pZVar48 - (long)*(void **)pZVar31);
      lVar14 = (long)pvVar15 + (*(long *)pZVar48 - *(long *)pZVar31);
      *(long *)pZVar48 = lVar14;
      *(void **)pZVar31 = pvVar15;
      *(long *)pZVar50 = (long)pvVar15 + lVar29 + 5;
    }
    *(long *)(param_1 + 0x10) = lVar14 + 5;
    lVar22 = lVar22 - lVar25;
    uVar49 = (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) * -0x5555555555555555;
    lVar28 = lVar28 - lVar45;
    ZoneBuffer::write_size(param_1,(ulong)(uint)(local_9c + (int)uVar49));
    if ((int)uVar49 != 0) {
      lVar14 = 0;
      uVar42 = 0;
      do {
        lVar25 = *(long *)(this + 0x28);
        ZoneBuffer::write_u32v(param_1,uVar42);
        uVar17 = (ulong)*(int *)((undefined8 *)(lVar25 + lVar14) + 1);
        puVar44 = *(uchar **)(lVar25 + lVar14);
        ZoneBuffer::write_size(param_1,uVar17);
        ZoneBuffer::write(param_1,puVar44,uVar17);
        lVar14 = lVar14 + 0x18;
        uVar42 = uVar42 + 1;
      } while (((uVar49 & 0xffffffff) + (uVar49 & 0xffffffff) * 2) * 8 - lVar14 != 0);
    }
    if (local_9c != 0) {
      plVar32 = *(long **)(this + 0x90);
      for (plVar27 = *(long **)(this + 0x88); plVar27 != plVar32; plVar27 = plVar27 + 1) {
        lVar14 = *plVar27;
        if (*(long *)(lVar14 + 0x68) != 0) {
          ZoneBuffer::write_u32v(param_1,(uint)uVar49);
          puVar44 = *(uchar **)(lVar14 + 0x60);
          iVar13 = *(int *)(lVar14 + 0x68);
          ZoneBuffer::write_size(param_1,(long)iVar13);
          ZoneBuffer::write(param_1,puVar44,(long)iVar13);
        }
        uVar49 = (ulong)((uint)uVar49 + 1);
      }
    }
    uVar42 = ((*(int *)pZVar48 - (int)lVar28) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar28);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    uVar42 = ((*(int *)pZVar48 - (int)lVar22) - (int)*(long *)pZVar31) - 5;
    pbVar21 = (byte *)(*(long *)pZVar31 + lVar22);
    *pbVar21 = (byte)uVar42 | 0x80;
    pbVar21[1] = (byte)(uVar42 >> 7) | 0x80;
    pbVar21[2] = (byte)(uVar42 >> 0xe) | 0x80;
    pbVar21[3] = (byte)(uVar42 >> 0x15) | 0x80;
    pbVar21[4] = (byte)(uVar42 >> 0x1c);
  }
  return;
switchD_016021e4_default:
  puVar47 = puVar47 + 3;
  goto joined_r0x016020dc;
}

