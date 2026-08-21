
/* WARNING: Type propagation algorithm not settling */
/* fairygui::HtmlParser::startElement(void*, char const*, char const**) */

void fairygui::HtmlParser::startElement(void *param_1,char *param_2,char **param_3)

{
  TextFormat *pTVar1;
  char *pcVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  ulong *puVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  basic_string *pbVar9;
  int iVar10;
  undefined4 uVar11;
  HtmlElement *pHVar12;
  char **ppcVar13;
  char **extraout_x0;
  HtmlParser *this;
  long lVar14;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *pvVar15;
  vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>> *pvVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  TextFormat *pTVar21;
  basic_string *pbVar22;
  undefined8 *puVar23;
  HtmlElement *local_a0 [2];
  char *local_90;
  basic_string *local_88 [2];
  void *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long local_38;
  
  lVar8 = tpidr_el0;
  local_38 = *(long *)(lVar8 + 0x28);
  if (*(int *)((long)param_1 + 0xa8) == 0) {
    finishTextBlock(param_1);
  }
  else {
    bVar6 = *(byte *)((long)param_1 + 0xb0);
    if ((bVar6 & 1) == 0) {
      if (bVar6 >> 1 != 0) {
LAB_00abcce0:
        if ((bVar6 & 1) == 0) {
          *(undefined2 *)((long)param_1 + 0xb0) = 0;
        }
        else {
          **(undefined1 **)((long)param_1 + 0xc0) = 0;
          *(undefined8 *)((long)param_1 + 0xb8) = 0;
        }
      }
    }
    else if (*(long *)((long)param_1 + 0xb8) != 0) goto LAB_00abcce0;
  }
  iVar10 = strcasecmp((char *)param_3,"b");
  if (iVar10 == 0) {
    lVar14 = *(long *)((long)param_1 + 0x10);
    pTVar21 = *(TextFormat **)((long)param_1 + 0x18);
    uVar18 = *(ulong *)((long)param_1 + 0xa0);
    pTVar1 = (TextFormat *)((long)param_1 + 0x48);
    uVar19 = ((long)pTVar21 - lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
                    /* try { // try from 00abcf88 to 00bbcfbb has its CatchHandler @ 00abd088 */
      if (*(TextFormat **)((long)param_1 + 0x20) == pTVar21) {
        std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>::
        __push_back_slow_path<fairygui::TextFormat_const&>
                  ((vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>> *)
                   ((long)param_1 + 0x10),pTVar1);
      }
      else {
        TextFormat::TextFormat(pTVar21,pTVar1);
        *(TextFormat **)((long)param_1 + 0x18) = pTVar21 + 0x58;
      }
    }
    else {
      TextFormat::operator=((TextFormat *)(lVar14 + uVar18 * 0x58),pTVar1);
    }
    lVar14 = *(long *)((long)param_1 + 0xa0);
    *(undefined1 *)((long)param_1 + 0x67) = 1;
  }
  else {
    iVar10 = strcasecmp((char *)param_3,"i");
    if (iVar10 == 0) {
      lVar14 = *(long *)((long)param_1 + 0x10);
      pTVar21 = *(TextFormat **)((long)param_1 + 0x18);
      uVar18 = *(ulong *)((long)param_1 + 0xa0);
      pTVar1 = (TextFormat *)((long)param_1 + 0x48);
      uVar19 = ((long)pTVar21 - lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
        if (*(TextFormat **)((long)param_1 + 0x20) == pTVar21) {
          std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>::
          __push_back_slow_path<fairygui::TextFormat_const&>
                    ((vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>> *)
                     ((long)param_1 + 0x10),pTVar1);
        }
        else {
          TextFormat::TextFormat(pTVar21,pTVar1);
          *(TextFormat **)((long)param_1 + 0x18) = pTVar21 + 0x58;
        }
      }
      else {
        TextFormat::operator=((TextFormat *)(lVar14 + uVar18 * 0x58),pTVar1);
      }
      lVar14 = *(long *)((long)param_1 + 0xa0);
      *(undefined1 *)((long)param_1 + 0x68) = 1;
    }
    else {
      iVar10 = strcasecmp((char *)param_3,"u");
      if (iVar10 != 0) {
        iVar10 = strcasecmp((char *)param_3,"font");
        if (iVar10 == 0) {
                    /* try { // try from 00abd008 to 00bbd0a3 has its CatchHandler @ 00abce88 */
          lVar14 = *(long *)((long)param_1 + 0x10);
          pTVar21 = *(TextFormat **)((long)param_1 + 0x18);
          uVar18 = *(ulong *)((long)param_1 + 0xa0);
          pTVar1 = (TextFormat *)((long)param_1 + 0x48);
          uVar19 = ((long)pTVar21 - lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
            if (*(TextFormat **)((long)param_1 + 0x20) == pTVar21) {
              std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>
              ::__push_back_slow_path<fairygui::TextFormat_const&>
                        ((vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>
                          *)((long)param_1 + 0x10),pTVar1);
              ppcVar13 = extraout_x0;
            }
            else {
              ppcVar13 = (char **)TextFormat::TextFormat(pTVar21,pTVar1);
              *(TextFormat **)((long)param_1 + 0x18) = pTVar21 + 0x58;
            }
          }
          else {
            ppcVar13 = (char **)TextFormat::operator=((TextFormat *)(lVar14 + uVar18 * 0x58),pTVar1)
            ;
          }
          *(long *)((long)param_1 + 0xa0) = *(long *)((long)param_1 + 0xa0) + 1;
          parseAttrs(ppcVar13);
          this = (HtmlParser *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 basic_string<decltype(nullptr)>
                           ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             *)local_a0,"size");
          iVar10 = attributeInt(this,(unordered_map *)&local_60,(basic_string *)local_a0,
                                (int)*(float *)((long)param_1 + 0x60));
          *(float *)((long)param_1 + 0x60) = (float)iVar10;
          if (((ulong)local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_a0,"color");
          lVar14 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                               *)&local_60,(basic_string *)local_a0);
          if (((ulong)local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          puVar3 = local_50;
          if (lVar14 != 0) {
            cocos2d::Value::asString();
            pcVar2 = (char *)((ulong)local_a0 | 1);
            if (((ulong)local_a0[0] & 1) != 0) {
              pcVar2 = local_90;
            }
            uVar11 = ToolSet::hexToColor(pcVar2);
            local_88[0] = (basic_string *)CONCAT44(local_88[0]._4_4_,uVar11);
            cocos2d::Color3B::Color3B((Color3B *)&local_70,(Color4B *)local_88);
            *(undefined1 *)((long)param_1 + 0x66) = local_6e;
            *(undefined2 *)((long)param_1 + 100) = local_70;
            if (((ulong)local_a0[0] & 1) != 0) {
              operator_delete(local_90);
            }
            *(undefined1 *)((long)param_1 + 0x9b) = 1;
            puVar3 = local_50;
          }
          while (puVar3 != (void *)0x0) {
            pvVar20 = (void *)*puVar3;
            cocos2d::Value::~Value((Value *)(puVar3 + 5));
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              operator_delete((void *)puVar3[4]);
            }
            operator_delete(puVar3);
            puVar3 = pvVar20;
          }
LAB_00abd87c:
          pvVar20 = local_60;
          local_60 = (void *)0x0;
          if (pvVar20 != (void *)0x0) {
            operator_delete(pvVar20);
          }
          goto LAB_00abd188;
        }
        iVar10 = strcasecmp((char *)param_3,"br");
        if (iVar10 == 0) {
                    /* catch() { ... } // from try @ 00abcf88 with catch @ 00abd088 */
          bVar17 = false;
LAB_00abd168:
          addNewLine(param_1,bVar17);
          goto LAB_00abd188;
        }
        iVar10 = strcasecmp((char *)param_3,"img");
        if (iVar10 == 0) {
          pHVar12 = operator_new(0xc0);
          ppcVar13 = (char **)HtmlElement::HtmlElement(pHVar12,1);
          local_a0[0] = pHVar12;
          parseAttrs(ppcVar13);
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::__move_assign(pHVar12 + 0x98,&local_60);
          pvVar20 = local_60;
          puVar3 = local_50;
          while (puVar3 != (undefined8 *)0x0) {
            puVar23 = (undefined8 *)*puVar3;
            local_60 = pvVar20;
            cocos2d::Value::~Value((Value *)(puVar3 + 5));
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              operator_delete((void *)puVar3[4]);
            }
            operator_delete(puVar3);
            pvVar20 = local_60;
            puVar3 = puVar23;
          }
          local_60 = (void *)0x0;
          if (pvVar20 != (void *)0x0) {
            operator_delete(pvVar20);
          }
          pvVar16 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>
                      **)((long)param_1 + 8);
          puVar5 = *(ulong **)(pvVar16 + 8);
          if (puVar5 == *(ulong **)(pvVar16 + 0x10)) {
            std::__ndk1::
            vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
            __push_back_slow_path<fairygui::HtmlElement*const&>(pvVar16,local_a0);
          }
          else {
            *puVar5 = (ulong)local_a0[0];
            *(ulong **)(pvVar16 + 8) = puVar5 + 1;
          }
          if (*(long *)((long)param_1 + 0x28) != *(long *)((long)param_1 + 0x30)) {
            *(undefined8 *)(local_a0[0] + 0x80) =
                 *(undefined8 *)(*(long *)((long)param_1 + 0x30) + -8);
          }
          goto LAB_00abd188;
        }
        iVar10 = strcasecmp((char *)param_3,"a");
        if (iVar10 == 0) {
          lVar14 = *(long *)((long)param_1 + 0x10);
          pTVar21 = *(TextFormat **)((long)param_1 + 0x18);
          uVar18 = *(ulong *)((long)param_1 + 0xa0);
          pTVar1 = (TextFormat *)((long)param_1 + 0x48);
          uVar19 = ((long)pTVar21 - lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
            if (*(TextFormat **)((long)param_1 + 0x20) == pTVar21) {
              std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>
              ::__push_back_slow_path<fairygui::TextFormat_const&>
                        ((vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>
                          *)((long)param_1 + 0x10),pTVar1);
            }
            else {
              TextFormat::TextFormat(pTVar21,pTVar1);
              *(TextFormat **)((long)param_1 + 0x18) = pTVar21 + 0x58;
            }
          }
          else {
            TextFormat::operator=((TextFormat *)(lVar14 + uVar18 * 0x58),pTVar1);
          }
          *(long *)((long)param_1 + 0xa0) = *(long *)((long)param_1 + 0xa0) + 1;
          pHVar12 = operator_new(0xc0);
          ppcVar13 = (char **)HtmlElement::HtmlElement(pHVar12,2);
          local_88[0] = (basic_string *)pHVar12;
          parseAttrs(ppcVar13);
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::__move_assign(pHVar12 + 0x98,&local_60);
          pvVar20 = local_60;
          puVar3 = local_50;
          while (puVar3 != (undefined8 *)0x0) {
            puVar23 = (undefined8 *)*puVar3;
            local_60 = pvVar20;
            cocos2d::Value::~Value((Value *)(puVar3 + 5));
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              operator_delete((void *)puVar3[4]);
            }
            operator_delete(puVar3);
            pvVar20 = local_60;
            puVar3 = puVar23;
          }
          local_60 = (void *)0x0;
          if (pvVar20 != (void *)0x0) {
            operator_delete(pvVar20);
          }
          pbVar9 = local_88[0];
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_a0,"href");
          HtmlElement::getString(pbVar9,(basic_string *)local_a0);
          pbVar22 = pbVar9 + 0x10;
          if (((byte)*pbVar22 & 1) == 0) {
            *(undefined2 *)pbVar22 = 0;
          }
          else {
            **(undefined1 **)(pbVar9 + 0x20) = 0;
            *(undefined8 *)(pbVar9 + 0x18) = 0;
            if (((byte)pbVar9[0x10] & 1) != 0) {
              operator_delete(*(void **)(pbVar9 + 0x20));
              *(undefined8 *)(pbVar9 + 0x10) = 0;
            }
          }
          *(undefined8 **)(pbVar9 + 0x20) = local_50;
          *(undefined8 *)(pbVar9 + 0x18) = uStack_58;
          *(void **)pbVar22 = local_60;
          uStack_58 = 0;
          local_50 = (undefined8 *)0x0;
          local_60 = (void *)0x0;
          if (((ulong)local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          pvVar16 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>
                      **)((long)param_1 + 8);
          puVar3 = *(undefined8 **)(pvVar16 + 8);
          if (puVar3 == *(undefined8 **)(pvVar16 + 0x10)) {
            std::__ndk1::
            vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
            __push_back_slow_path<fairygui::HtmlElement*const&>(pvVar16,(HtmlElement **)local_88);
          }
          else {
            *puVar3 = local_88[0];
            *(undefined8 **)(pvVar16 + 8) = puVar3 + 1;
          }
          puVar3 = *(undefined8 **)((long)param_1 + 0x30);
          if (puVar3 == *(undefined8 **)((long)param_1 + 0x38)) {
            std::__ndk1::
            vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
            __push_back_slow_path<fairygui::HtmlElement*const&>
                      ((vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>
                        *)((long)param_1 + 0x28),(HtmlElement **)local_88);
            cVar7 = *(char *)((long)param_1 + 200);
          }
          else {
            *puVar3 = local_88[0];
            *(undefined8 **)((long)param_1 + 0x30) = puVar3 + 1;
            cVar7 = *(char *)((long)param_1 + 200);
          }
          if (cVar7 != '\0') {
            *(undefined1 *)((long)param_1 + 0x69) = 1;
          }
          if (*(char *)((long)param_1 + 0x9b) == '\0') {
            *(undefined2 *)((long)param_1 + 100) = *(undefined2 *)((long)param_1 + 0xc9);
            *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)((long)param_1 + 0xcb);
          }
          goto LAB_00abd188;
        }
        iVar10 = strcasecmp((char *)param_3,"p");
        if ((((iVar10 == 0) || (iVar10 = strcasecmp((char *)param_3,"ui"), iVar10 == 0)) ||
            (iVar10 = strcasecmp((char *)param_3,"div"), iVar10 == 0)) ||
           (iVar10 = strcasecmp((char *)param_3,"li"), iVar10 == 0)) {
          bVar17 = true;
          goto LAB_00abd168;
        }
                    /* try { // try from 00abcdf0 to 00bbce3b has its CatchHandler @ 00abcdf0
                       catch() { ... } // from try @ 00abcdf0 with catch @ 00abcdf0
                       catch() { ... } // from try @ 00abce40 with catch @ 00abcdf0 */
        iVar10 = strcasecmp((char *)param_3,"html");
        if ((iVar10 == 0) || (iVar10 = strcasecmp((char *)param_3,"body"), iVar10 == 0)) {
          *(undefined1 *)((long)param_1 + 0xac) = 1;
          goto LAB_00abd188;
        }
        iVar10 = strcasecmp((char *)param_3,"head");
                    /* try { // try from 00abce3c to 00bbce3f has its CatchHandler @ 00abce74 */
                    /* try { // try from 00abce40 to 00bbce87 has its CatchHandler @ 00abcdf0 */
        if (((iVar10 == 0) || (iVar10 = strcasecmp((char *)param_3,"style"), iVar10 == 0)) ||
           ((iVar10 = strcasecmp((char *)param_3,"script"), iVar10 == 0 ||
            (iVar10 = strcasecmp((char *)param_3,"form"), iVar10 == 0)))) {
LAB_00abd774:
          iVar10 = *(int *)((long)param_1 + 0xa8);
        }
        else {
          iVar10 = strcasecmp((char *)param_3,"input");
                    /* catch() { ... } // from try @ 00abce3c with catch @ 00abce74 */
          if (iVar10 == 0) {
            pHVar12 = operator_new(0xc0);
            ppcVar13 = (char **)HtmlElement::HtmlElement(pHVar12,3);
            local_a0[0] = pHVar12;
            parseAttrs(ppcVar13);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::__move_assign(pHVar12 + 0x98,&local_60);
            pvVar20 = local_60;
            puVar3 = local_50;
            while (puVar3 != (undefined8 *)0x0) {
              puVar23 = (undefined8 *)*puVar3;
              local_60 = pvVar20;
              cocos2d::Value::~Value((Value *)(puVar3 + 5));
              if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                operator_delete((void *)puVar3[4]);
              }
              operator_delete(puVar3);
              pvVar20 = local_60;
              puVar3 = puVar23;
            }
            local_60 = (void *)0x0;
            if (pvVar20 != (void *)0x0) {
              operator_delete(pvVar20);
            }
            pvVar16 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>
                        **)((long)param_1 + 8);
            puVar5 = *(ulong **)(pvVar16 + 8);
            if (puVar5 == *(ulong **)(pvVar16 + 0x10)) {
              std::__ndk1::
              vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
              __push_back_slow_path<fairygui::HtmlElement*const&>(pvVar16,local_a0);
            }
            else {
              *puVar5 = (ulong)local_a0[0];
              *(ulong **)(pvVar16 + 8) = puVar5 + 1;
            }
            goto LAB_00abd188;
          }
          iVar10 = strcasecmp((char *)param_3,"select");
                    /* try { // try from 00abce88 to 00bbcf87 has its CatchHandler @ 00abce88
                       catch() { ... } // from try @ 00abce88 with catch @ 00abce88
                       catch() { ... } // from try @ 00abd008 with catch @ 00abce88 */
          if (iVar10 != 0) {
            iVar10 = strcasecmp((char *)param_3,"option");
            if (iVar10 == 0) {
              if (*(long *)((long)param_1 + 0x40) == 0) goto LAB_00abd188;
              parseAttrs((char **)0x0);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)local_a0,"value");
              lVar14 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                                   *)&local_60,(basic_string *)local_a0);
              if (((ulong)local_a0[0] & 1) != 0) {
                operator_delete(local_90);
              }
              pHVar12 = *(HtmlElement **)((long)param_1 + 0x40);
              if (lVar14 == 0) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_a0,"values");
                pvVar15 = (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)
                          HtmlElement::getArray(pHVar12,(basic_string *)local_a0);
                cocos2d::Value::Value((Value *)local_88,(basic_string *)&cocos2d::STD_STRING_EMPTY);
                pVVar4 = *(Value **)(pvVar15 + 8);
                if (pVVar4 < *(Value **)(pvVar15 + 0x10)) {
                  cocos2d::Value::Value(pVVar4,(Value *)local_88);
                  *(Value **)(pvVar15 + 8) = pVVar4 + 0x10;
                }
                else {
                  std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                  __push_back_slow_path<cocos2d::Value>(pvVar15,(Value *)local_88);
                }
                cocos2d::Value::~Value((Value *)local_88);
              }
              else {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_a0,"values");
                pvVar15 = (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)
                          HtmlElement::getArray(pHVar12,(basic_string *)local_a0);
                cocos2d::Value::asString();
                cocos2d::Value::Value((Value *)&local_70,(basic_string *)local_88);
                pVVar4 = *(Value **)(pvVar15 + 8);
                if (pVVar4 < *(Value **)(pvVar15 + 0x10)) {
                  cocos2d::Value::Value(pVVar4,(Value *)&local_70);
                  *(Value **)(pvVar15 + 8) = pVVar4 + 0x10;
                }
                else {
                  std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                  __push_back_slow_path<cocos2d::Value>(pvVar15,(Value *)&local_70);
                }
                cocos2d::Value::~Value((Value *)&local_70);
                if (((ulong)local_88[0] & 1) != 0) {
                  operator_delete(local_78);
                }
              }
              puVar3 = local_50;
              if (((ulong)local_a0[0] & 1) != 0) {
                operator_delete(local_90);
                puVar3 = local_50;
              }
              while (puVar3 != (undefined8 *)0x0) {
                puVar23 = (undefined8 *)*puVar3;
                cocos2d::Value::~Value((Value *)(puVar3 + 5));
                if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                  operator_delete((void *)puVar3[4]);
                }
                operator_delete(puVar3);
                puVar3 = puVar23;
              }
              goto LAB_00abd87c;
            }
            iVar10 = strcasecmp((char *)param_3,"object");
            if (iVar10 != 0) goto LAB_00abd188;
            pHVar12 = operator_new(0xc0);
            ppcVar13 = (char **)HtmlElement::HtmlElement(pHVar12,5);
            local_a0[0] = pHVar12;
            parseAttrs(ppcVar13);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::__move_assign(pHVar12 + 0x98,&local_60);
            pvVar20 = local_60;
            puVar3 = local_50;
            while (puVar3 != (undefined8 *)0x0) {
              puVar23 = (undefined8 *)*puVar3;
              local_60 = pvVar20;
              cocos2d::Value::~Value((Value *)(puVar3 + 5));
              if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                operator_delete((void *)puVar3[4]);
              }
              operator_delete(puVar3);
              pvVar20 = local_60;
              puVar3 = puVar23;
            }
            local_60 = (void *)0x0;
            if (pvVar20 != (void *)0x0) {
              operator_delete(pvVar20);
            }
            pvVar16 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>
                        **)((long)param_1 + 8);
            puVar5 = *(ulong **)(pvVar16 + 8);
            if (puVar5 == *(ulong **)(pvVar16 + 0x10)) {
              std::__ndk1::
              vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
              __push_back_slow_path<fairygui::HtmlElement*const&>(pvVar16,local_a0);
            }
            else {
              *puVar5 = (ulong)local_a0[0];
              *(ulong **)(pvVar16 + 8) = puVar5 + 1;
            }
            goto LAB_00abd774;
          }
          pHVar12 = operator_new(0xc0);
          ppcVar13 = (char **)HtmlElement::HtmlElement(pHVar12,4);
          local_a0[0] = pHVar12;
          parseAttrs(ppcVar13);
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::__move_assign(pHVar12 + 0x98,&local_60);
          pvVar20 = local_60;
          puVar3 = local_50;
          while (puVar3 != (undefined8 *)0x0) {
            puVar23 = (undefined8 *)*puVar3;
            local_60 = pvVar20;
            cocos2d::Value::~Value((Value *)(puVar3 + 5));
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              operator_delete((void *)puVar3[4]);
            }
            operator_delete(puVar3);
            pvVar20 = local_60;
            puVar3 = puVar23;
          }
          local_60 = (void *)0x0;
          if (pvVar20 != (void *)0x0) {
            operator_delete(pvVar20);
          }
          pvVar16 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>
                      **)((long)param_1 + 8);
          puVar5 = *(ulong **)(pvVar16 + 8);
          if (puVar5 == *(ulong **)(pvVar16 + 0x10)) {
            std::__ndk1::
            vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
            __push_back_slow_path<fairygui::HtmlElement*const&>(pvVar16,local_a0);
          }
          else {
            *puVar5 = (ulong)local_a0[0];
            *(ulong **)(pvVar16 + 8) = puVar5 + 1;
          }
          iVar10 = *(int *)((long)param_1 + 0xa8);
          *(HtmlElement **)((long)param_1 + 0x40) = local_a0[0];
        }
        *(int *)((long)param_1 + 0xa8) = iVar10 + 1;
        goto LAB_00abd188;
      }
      lVar14 = *(long *)((long)param_1 + 0x10);
      pTVar21 = *(TextFormat **)((long)param_1 + 0x18);
      uVar18 = *(ulong *)((long)param_1 + 0xa0);
                    /* try { // try from 00abcfbc to 00bbcfcf has its CatchHandler @ 00abd054 */
      pTVar1 = (TextFormat *)((long)param_1 + 0x48);
      uVar19 = ((long)pTVar21 - lVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
                    /* try { // try from 00abcfd4 to 00bbd007 has its CatchHandler @ 00abd058 */
      if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
                    /* catch() { ... } // from try @ 00abcfbc with catch @ 00abd054 */
                    /* catch() { ... } // from try @ 00abcfd4 with catch @ 00abd058 */
        if (*(TextFormat **)((long)param_1 + 0x20) == pTVar21) {
          std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>::
          __push_back_slow_path<fairygui::TextFormat_const&>
                    ((vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>> *)
                     ((long)param_1 + 0x10),pTVar1);
        }
        else {
          TextFormat::TextFormat(pTVar21,pTVar1);
          *(TextFormat **)((long)param_1 + 0x18) = pTVar21 + 0x58;
        }
      }
      else {
        TextFormat::operator=((TextFormat *)(lVar14 + uVar18 * 0x58),pTVar1);
      }
      lVar14 = *(long *)((long)param_1 + 0xa0);
      *(undefined1 *)((long)param_1 + 0x69) = 1;
    }
  }
  *(long *)((long)param_1 + 0xa0) = lVar14 + 1;
LAB_00abd188:
  if (*(long *)(lVar8 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

