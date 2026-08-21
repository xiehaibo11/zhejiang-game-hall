
/* seval_to_ccvaluemapintkey(se::Value const&, std::__ndk1::unordered_map<int, cocos2d::Value,
   std::__ndk1::hash<int>, std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int
   const, cocos2d::Value> > >*) */

undefined4 seval_to_ccvaluemapintkey(Value *param_1,unordered_map *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  Object *this;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  void *pvVar10;
  byte *pbVar11;
  int local_94;
  byte *local_90;
  byte *local_88;
  undefined8 local_80;
  Value aVStack_78 [16];
  Value aVStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((byte)param_1[8] < 2) {
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar9 = 1;
    }
    else {
      puVar3 = *(void **)(param_2 + 0x10);
      while (puVar3 != (void *)0x0) {
        pvVar10 = (void *)*puVar3;
        cocos2d::Value::~Value((Value *)(puVar3 + 3));
        operator_delete(puVar3);
        puVar3 = pvVar10;
      }
      lVar6 = *(long *)(param_2 + 8);
      *(undefined8 *)(param_2 + 0x10) = 0;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar9 = 1;
    }
  }
  else if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    local_90 = (byte *)0x0;
    local_88 = (byte *)0x0;
    local_80 = 0;
    uVar4 = se::Object::getAllKeys(this,(vector *)&local_90);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar9 = 0;
        pbVar1 = local_90;
      }
      else {
        puVar3 = *(void **)(param_2 + 0x10);
        while (puVar3 != (void *)0x0) {
          pvVar10 = (void *)*puVar3;
          cocos2d::Value::~Value((Value *)(puVar3 + 3));
          operator_delete(puVar3);
          puVar3 = pvVar10;
        }
        lVar6 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 0x10) = 0;
        if (lVar6 != 0) {
          lVar7 = 0;
          do {
            *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar6 != lVar7);
        }
        uVar9 = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        pbVar1 = local_90;
      }
    }
    else {
      se::Value::Value(aVStack_68);
      cocos2d::Value::Value(aVStack_78);
      pbVar11 = local_88;
      pbVar1 = local_90;
joined_r0x008d6c18:
      if (pbVar1 == pbVar11) {
        uVar9 = 1;
      }
      else {
        if ((*pbVar1 & 1) == 0) {
          pbVar5 = pbVar1 + 1;
        }
        else {
          pbVar5 = *(byte **)(pbVar1 + 0x10);
        }
        uVar4 = se::Object::getProperty(this,(char *)pbVar5,aVStack_68);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_2 + 0x18) != 0) {
            puVar3 = *(void **)(param_2 + 0x10);
            while (puVar3 != (void *)0x0) {
              pvVar10 = (void *)*puVar3;
              cocos2d::Value::~Value((Value *)(puVar3 + 3));
              operator_delete(puVar3);
              puVar3 = pvVar10;
            }
            lVar6 = *(long *)(param_2 + 8);
            *(undefined8 *)(param_2 + 0x10) = 0;
            if (lVar6 != 0) {
              lVar7 = 0;
              do {
                *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
                lVar7 = lVar7 + 1;
              } while (lVar6 != lVar7);
            }
            uVar9 = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            goto LAB_008d6e78;
          }
        }
        else {
          uVar4 = *(ulong *)(pbVar1 + 8);
          pbVar5 = *(byte **)(pbVar1 + 0x10);
          if ((*pbVar1 & 1) == 0) {
            pbVar5 = pbVar1 + 1;
            uVar4 = (ulong)(*pbVar1 >> 1);
          }
          if (uVar4 != 0) {
            uVar8 = 0;
            do {
              if (9 < (int)(char)pbVar5[uVar8] - 0x30U) {
                __android_log_print(3,"jswrapper",
                                    "seval_to_ccvaluemapintkey, found not numeric key: %s");
                goto LAB_008d6cd0;
              }
              uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
          }
          local_94 = atoi((char *)pbVar5);
          uVar4 = seval_to_ccvalue(aVStack_68,aVStack_78);
          if ((uVar4 & 1) != 0) goto code_r0x008d6ca8;
          if (*(long *)(param_2 + 0x18) != 0) {
            puVar3 = *(void **)(param_2 + 0x10);
            while (puVar3 != (void *)0x0) {
              pvVar10 = (void *)*puVar3;
              cocos2d::Value::~Value((Value *)(puVar3 + 3));
              operator_delete(puVar3);
              puVar3 = pvVar10;
            }
            lVar6 = *(long *)(param_2 + 8);
            *(undefined8 *)(param_2 + 0x10) = 0;
            if (lVar6 != 0) {
              lVar7 = 0;
              do {
                *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
                lVar7 = lVar7 + 1;
              } while (lVar6 != lVar7);
            }
            *(undefined8 *)(param_2 + 0x18) = 0;
          }
        }
        uVar9 = 0;
      }
LAB_008d6e78:
      cocos2d::Value::~Value(aVStack_78);
      se::Value::~Value(aVStack_68);
      pbVar1 = local_90;
    }
    local_90 = pbVar1;
    pbVar11 = local_88;
    if (pbVar1 != (byte *)0x0) {
      while (pbVar5 = pbVar11, pbVar5 != pbVar1) {
        pbVar11 = pbVar5 + -0x18;
        if ((*pbVar11 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
      }
      local_88 = pbVar1;
      operator_delete(local_90);
    }
  }
  else if (*(long *)(param_2 + 0x18) == 0) {
    uVar9 = 0;
  }
  else {
    puVar3 = *(void **)(param_2 + 0x10);
    while (puVar3 != (void *)0x0) {
      pvVar10 = (void *)*puVar3;
      cocos2d::Value::~Value((Value *)(puVar3 + 3));
      operator_delete(puVar3);
      puVar3 = pvVar10;
    }
    lVar6 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    uVar9 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x008d6ca8:
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
  ::__emplace_unique_key_args<int,int&,cocos2d::Value&>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
              *)param_2,&local_94,&local_94,aVStack_78);
LAB_008d6cd0:
  pbVar1 = pbVar1 + 0x18;
  goto joined_r0x008d6c18;
}

