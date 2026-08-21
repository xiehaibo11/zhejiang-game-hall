
/* tinyobj::material_t::material_t(tinyobj::material_t const&) */

void __thiscall tinyobj::material_t::material_t(material_t *this,material_t *param_1)

{
  bool bVar1;
  material_t *pmVar2;
  long lVar3;
  material_t *pmVar4;
  material_t *pmVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 00d3a7a8 to 00e3a7b3 has its CatchHandler @ 00d3a808 */
                    /* try { // try from 00d3a7b4 to 00e3a81b has its CatchHandler @ 00d3a770 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               this,(basic_string *)param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x54);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)(this + 0x54) = uVar6;
  *(undefined8 *)(this + 0x50) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar7;
  *(undefined8 *)(this + 0x40) = uVar10;
  *(undefined8 *)(this + 0x38) = uVar9;
  *(undefined8 *)(this + 0x30) = uVar12;
  *(undefined8 *)(this + 0x28) = uVar11;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x68),(basic_string *)(param_1 + 0x68));
                    /* catch() { ... } // from try @ 00d3a7a8 with catch @ 00d3a808 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x80),(basic_string *)(param_1 + 0x80));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x98),(basic_string *)(param_1 + 0x98));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a85c with catch @ 00d3a81c
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0xb0),(basic_string *)(param_1 + 0xb0));
  pmVar4 = this + 0xd0;
  *(undefined8 *)pmVar4 = 0;
  *(material_t **)(this + 200) = pmVar4;
  *(undefined8 *)(this + 0xd8) = 0;
  pmVar5 = *(material_t **)(param_1 + 200);
                    /* try { // try from 00d3a848 to 00e3a85b has its CatchHandler @ 00d3ab60 */
  while (pmVar5 != param_1 + 0xd0) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(this + 200),pmVar4,pmVar5 + 0x20,pmVar5 + 0x20);
    pmVar2 = *(material_t **)(pmVar5 + 8);
    if (*(material_t **)(pmVar5 + 8) == (material_t *)0x0) {
      pmVar2 = pmVar5 + 0x10;
      bVar1 = *(material_t **)*(material_t **)pmVar2 != pmVar5;
      pmVar5 = *(material_t **)pmVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pmVar2;
          pmVar2 = (material_t *)(lVar3 + 0x10);
          pmVar5 = *(material_t **)pmVar2;
        } while (*(long *)pmVar5 != lVar3);
      }
    }
    else {
      do {
        pmVar5 = pmVar2;
        pmVar2 = *(material_t **)pmVar5;
      } while (*(material_t **)pmVar5 != (material_t *)0x0);
    }
  }
  return;
}

