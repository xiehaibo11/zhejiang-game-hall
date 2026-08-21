
/* std::__ndk1::__tree<unsigned int, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<unsigned int> >::destroy(std::__ndk1::__tree_node<unsigned int, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
          (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
           *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
                    /* try { // try from 00f03ff4 to 0100400f has its CatchHandler @ 00f040e8 */
    destroy(this,*(__tree_node **)param_1);
                    /* try { // try from 00f04010 to 01004073 has its CatchHandler @ 00f03efc */
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

