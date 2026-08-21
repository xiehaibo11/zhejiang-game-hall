
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 00d77d70 with catch @ 00d780c4 */
  if (param_1 != (__tree_node *)0x0) {
                    /* catch() { ... } // from try @ 00d77d64 with catch @ 00d780c8 */
                    /* catch() { ... } // from try @ 00d77d40 with catch @ 00d780cc */
                    /* catch() { ... } // from try @ 00d77cc4 with catch @ 00d780d0 */
                    /* catch() { ... } // from try @ 00d77098 with catch @ 00d780d4 */
                    /* catch() { ... } // from try @ 00d77d30 with catch @ 00d780d8 */
                    /* catch() { ... } // from try @ 00d77080 with catch @ 00d780dc */
                    /* catch() { ... } // from try @ 00d77be0 with catch @ 00d780e0 */
    destroy(this,*(__tree_node **)param_1);
                    /* catch() { ... } // from try @ 00d77074 with catch @ 00d780e4 */
                    /* catch() { ... } // from try @ 00d774e0 with catch @ 00d780e8 */
                    /* catch() { ... } // from try @ 00d774d0 with catch @ 00d780ec */
    destroy(this,*(__tree_node **)(param_1 + 8));
                    /* catch() { ... } // from try @ 00d774f0 with catch @ 00d780f0 */
    pvVar1 = *(void **)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 00d774e8 with catch @ 00d780f4 */
    if (pvVar1 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00d779cc with catch @ 00d780f8
                       catch() { ... } // from try @ 00d77a54 with catch @ 00d780f8 */
      *(void **)(param_1 + 0x40) = pvVar1;
                    /* catch() { ... } // from try @ 00d7734c with catch @ 00d780fc
                       catch() { ... } // from try @ 00d773e8 with catch @ 00d780fc */
      operator_delete(pvVar1);
    }
                    /* catch() { ... } // from try @ 00d7741c with catch @ 00d78100 */
    if (((byte)param_1[0x20] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
                    /* catch() { ... } // from try @ 00d7750c with catch @ 00d78110 */
                    /* catch() { ... } // from try @ 00d7781c with catch @ 00d78114 */
    operator_delete(param_1);
    return;
  }
  return;
}

