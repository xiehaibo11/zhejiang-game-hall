
/* v8::internal::DebugEvaluate::FunctionGetSideEffectState(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void v8::internal::DebugEvaluate::FunctionGetSideEffectState(Isolate *param_1,ulong *param_2)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong local_80;
  undefined8 local_78;
  long *local_70 [3];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
    local_80 = *param_2;
    local_78 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_80);
    String::ToCString(local_70,&local_78,1,1,0);
    PrintF("[debug-evaluate] Checking function %s for side effect.\n",local_70[0]);
    plVar3 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      operator_delete__(plVar3);
    }
  }
  puVar1 = (uint *)(*param_2 + 3);
  uVar5 = *puVar1;
  uVar11 = *param_2 & 0xffffffff00000000;
  if ((((uVar5 & 1) != 0) &&
      (*(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar5) - 1)) == 0x86)) ||
     ((uVar5 = *puVar1, (uVar5 & 1) != 0 &&
      (*(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar5) - 1)) == 0x61)))) {
    uVar12 = *param_2;
    uVar11 = uVar12 & 0xffffffff00000000;
    uVar14 = uVar11 | *(uint *)(uVar12 + 0xf);
    uVar13 = uVar11 | 7;
    if ((*(short *)(uVar13 + *(uint *)(uVar14 - 1)) == 0x5b) &&
       (*(short *)(uVar13 + *(uint *)((uVar11 | *(uint *)(uVar14 + 0x13)) - 1)) == 0x86)) {
      uVar5 = *(uint *)(uVar14 + 0xf);
    }
    else {
      uVar5 = *(uint *)(uVar12 + 3);
      if (((uVar5 & 1) == 0) || (*(short *)(uVar13 + *(uint *)((uVar11 | uVar5) - 1)) != 0x86)) {
        uVar5 = *(uint *)((uVar11 | *(uint *)(uVar12 + 3)) + 3);
      }
      else {
        uVar5 = *(uint *)(uVar12 + 3);
      }
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_1 + 0x95a0);
      if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar11 | uVar5;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11 | uVar5);
    }
    if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
      local_70[0] = (long *)*puVar8;
      Object::Print((Object *)local_70);
    }
    interpreter::BytecodeArrayIterator::BytecodeArrayIterator
              ((BytecodeArrayIterator *)local_70,puVar8);
    uVar11 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)local_70);
    bVar4 = false;
    while ((uVar11 & 1) == 0) {
      uVar5 = interpreter::BytecodeArrayAccessor::current_bytecode
                        ((BytecodeArrayAccessor *)local_70);
      switch(uVar5 & 0xff) {
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x25:
      case 0x26:
      case 0x27:
        goto switchD_00f00580_caseD_b;
      default:
        if (((uVar5 & 0xfc) == 0x70) ||
           (((uVar5 + 0x76 & 0xff) < 0x17 && (3 < (uVar5 + 0x6b & 0xff)))))
        goto switchD_00f00580_caseD_b;
        switch(uVar5 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 99:
        case 0x65:
        case 0x66:
        case 0x95:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0xa1:
        case 0xaf:
          goto switchD_00f00580_caseD_b;
        }
        switch(uVar5 & 0xff) {
        case 0x13:
        case 0x14:
        case 0x1e:
        case 0x21:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 99:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x88:
        case 0x89:
        case 0xa2:
        case 0xa3:
        case 0xa4:
        case 0xa5:
        case 0xa6:
        case 0xa7:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xb2:
        case 0xb6:
          goto switchD_00f00580_caseD_b;
        }
        if (((uVar5 - 0x1d & 0xff) < 0x16) && ((0x3f0001U >> (ulong)(uVar5 - 0x1d & 0x1f) & 1) != 0)
           ) {
          bVar4 = true;
          goto switchD_00f00580_caseD_b;
        }
        if (FLAG_trace_side_effect_free_debug_evaluate == '\0') goto LAB_00f006dc;
        uVar10 = interpreter::Bytecodes::ToString();
        pcVar9 = "[debug-evaluate] bytecode %s may cause side effect.\n";
        goto LAB_00f00658;
      case 0x61:
      case 0x62:
        uVar6 = interpreter::BytecodeArrayAccessor::GetRuntimeIdOperand
                          ((BytecodeArrayAccessor *)local_70,0);
        break;
      case 100:
        uVar6 = interpreter::BytecodeArrayAccessor::GetIntrinsicIdOperand
                          ((BytecodeArrayAccessor *)local_70,0);
      }
      switch(uVar6) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x1b:
      case 0x1e:
      case 0x1f:
      case 0x21:
      case 0x5d:
      case 99:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x96:
      case 0x9a:
      case 0x9f:
      case 0xa2:
      case 0xa6:
      case 0xa9:
      case 0xab:
      case 0xac:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb4:
      case 0xb6:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xc5:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xd1:
      case 0xd3:
      case 0xdf:
      case 0xe0:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe7:
      case 0xef:
      case 0xf0:
      case 0xf1:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf8:
      case 0xf9:
      case 0x101:
      case 0x102:
      case 0x103:
      case 0x105:
      case 0x106:
      case 0x124:
      case 0x127:
      case 0x147:
      case 0x149:
      case 0x14a:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x154:
      case 0x155:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15d:
      case 0x177:
      case 0x17c:
      case 0x1a3:
      case 0x1a4:
      case 0x1b8:
      case 0x1c1:
      case 0x1dd:
      case 0x1f2:
switchD_00f00580_caseD_b:
        interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)local_70);
        uVar11 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)local_70);
        break;
      default:
        if (FLAG_trace_side_effect_free_debug_evaluate == '\0') {
LAB_00f006dc:
          iVar15 = 1;
        }
        else {
          lVar7 = Runtime::FunctionForId();
          uVar10 = *(undefined8 *)(lVar7 + 8);
          pcVar9 = "[debug-evaluate] intrinsic %s may cause side effect.\n";
LAB_00f00658:
          PrintF(pcVar9,uVar10);
          iVar15 = 1;
        }
        goto LAB_00f00668;
      }
    }
    iVar15 = 2;
LAB_00f00668:
    plVar3 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))();
    }
    uVar6 = 2;
    if (!bVar4) {
      uVar6 = 3;
    }
    bVar4 = iVar15 == 2;
LAB_00f00690:
    if (!bVar4) {
      uVar6 = 1;
    }
    goto switchD_00f0042c_caseD_36;
  }
  uVar5 = *(uint *)(*param_2 + 3);
  if (((uVar5 & 1) == 0) ||
     (uVar11 = *param_2 & 0xffffffff00000000,
     *(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar5) - 1)) != 0x4e)) {
    if (((*(uint *)(*param_2 + 3) & 1) == 0) && (uVar5 = *(int *)(*param_2 + 3) >> 1, uVar5 < 0x5bc)
       ) {
      uVar6 = 3;
      switch(uVar5) {
      case 0x36:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x61:
      case 0x98:
      case 0x9a:
      case 0x9b:
      case 0xae:
      case 0xaf:
      case 0xb4:
      case 0xb8:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xdb:
      case 0xdc:
      case 0x107:
      case 0x108:
      case 0x109:
      case 0x10a:
      case 0x10b:
      case 0x10c:
      case 0x10d:
      case 0x10e:
      case 0x10f:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x117:
      case 0x118:
      case 0x119:
      case 0x11a:
      case 0x11b:
      case 0x11c:
      case 0x11d:
      case 0x11f:
      case 0x120:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x137:
      case 0x13a:
      case 0x13b:
      case 0x13c:
      case 0x13d:
      case 0x13e:
      case 0x140:
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x145:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x153:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x177:
      case 0x17a:
      case 0x17b:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
      case 0x181:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18a:
      case 0x18b:
      case 0x18d:
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x1aa:
      case 0x1ac:
      case 0x1b1:
      case 0x1b3:
      case 0x1b4:
      case 0x1b5:
      case 0x1b6:
      case 0x1b7:
      case 0x1b8:
      case 0x1b9:
      case 0x1bd:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
      case 0x1c1:
      case 0x1c4:
      case 0x1c7:
      case 0x1f2:
      case 0x1fe:
      case 0x1ff:
      case 0x203:
      case 0x204:
      case 0x205:
      case 0x206:
      case 0x218:
      case 0x219:
      case 0x21a:
      case 0x21b:
      case 0x21c:
      case 0x21e:
      case 0x223:
      case 0x224:
      case 0x225:
      case 0x227:
      case 0x229:
      case 0x22c:
      case 0x22d:
      case 0x22e:
      case 0x22f:
      case 0x230:
      case 0x231:
      case 0x232:
      case 0x233:
      case 0x236:
      case 0x237:
      case 0x238:
      case 0x23b:
      case 0x254:
      case 0x256:
      case 599:
      case 0x25a:
      case 0x25b:
      case 0x28a:
      case 0x28b:
      case 0x29a:
      case 0x29e:
      case 0x2a3:
      case 0x2a8:
      case 0x2ac:
      case 0x2ad:
      case 0x2b4:
      case 0x2b5:
      case 0x2b6:
      case 0x2b7:
      case 0x2b8:
      case 0x2b9:
      case 0x2bd:
      case 0x2c3:
      case 0x2c8:
      case 0x2cb:
      case 0x2cf:
      case 0x2da:
      case 0x2db:
      case 0x2dc:
      case 0x2dd:
      case 0x2de:
      case 0x2e0:
      case 0x2e1:
      case 0x2e2:
      case 0x2e3:
      case 0x2e4:
      case 0x2e9:
      case 0x2ea:
      case 0x2eb:
      case 0x2ec:
      case 0x2ed:
      case 0x2ee:
      case 0x2ef:
      case 0x2f0:
      case 0x2f1:
      case 0x2f2:
      case 0x2f3:
      case 0x2f4:
      case 0x2f5:
      case 0x303:
      case 0x304:
      case 0x305:
      case 0x306:
      case 0x307:
      case 0x308:
      case 0x309:
      case 0x30a:
      case 0x30b:
      case 0x30c:
      case 0x30d:
      case 0x30e:
      case 0x30f:
      case 0x310:
      case 0x311:
      case 0x312:
      case 0x313:
      case 0x314:
      case 0x315:
      case 0x316:
      case 0x317:
      case 0x318:
      case 0x319:
      case 0x31a:
      case 0x31b:
      case 0x31c:
      case 0x31d:
      case 0x31e:
      case 799:
      case 800:
      case 0x321:
      case 0x322:
      case 0x323:
      case 0x324:
      case 0x325:
      case 0x326:
      case 0x329:
      case 0x32b:
      case 0x35c:
      case 0x35e:
      case 0x35f:
      case 0x360:
      case 0x361:
      case 0x362:
      case 0x363:
      case 0x364:
      case 0x365:
      case 0x366:
      case 0x367:
      case 0x368:
      case 0x369:
      case 0x36a:
      case 0x36d:
      case 0x36e:
      case 0x370:
      case 0x372:
      case 0x373:
      case 0x374:
      case 0x375:
      case 0x377:
      case 0x378:
      case 0x379:
      case 0x37b:
      case 0x37c:
      case 0x37d:
      case 0x37e:
      case 0x37f:
      case 0x382:
      case 899:
      case 0x385:
      case 0x386:
      case 0x389:
      case 0x3d7:
      case 0x3d8:
        break;
      default:
        if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
          uVar10 = Builtins::name(uVar5);
          PrintF("[debug-evaluate] built-in %s may cause side effect.\n",uVar10);
        }
        goto LAB_00f0053c;
      case 0xba:
      case 0xbc:
      case 0xbe:
      case 0xc5:
      case 0x178:
      case 0x179:
      case 0x17c:
      case 0x182:
      case 0x200:
      case 0x201:
      case 0x202:
      case 0x207:
      case 0x2c9:
      case 0x2ca:
      case 0x2d0:
      case 0x2d1:
      case 0x347:
      case 0x348:
      case 0x352:
      case 0x353:
      case 0x355:
      case 0x356:
      case 0x357:
      case 0x358:
      case 0x359:
      case 0x35a:
      case 0x35b:
      case 0x39f:
        uVar6 = 2;
      }
      goto switchD_00f0042c_caseD_36;
    }
  }
  else {
    local_70[0] = (long *)*param_2;
    lVar7 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)local_70);
    if (*(int *)(lVar7 + 0x27) != -1) {
      local_70[0] = (long *)*param_2;
      lVar7 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)local_70);
      bVar4 = *(int *)(lVar7 + 0x27) == 0x4c;
      uVar6 = 3;
      goto LAB_00f00690;
    }
  }
LAB_00f0053c:
  uVar6 = 1;
switchD_00f0042c_caseD_36:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

