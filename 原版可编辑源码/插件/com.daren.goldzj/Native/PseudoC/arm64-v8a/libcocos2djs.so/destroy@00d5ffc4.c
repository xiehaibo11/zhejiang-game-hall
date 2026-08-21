
/* std::__ndk1::__tree<std::__ndk1::__value_type<se::Object::TypedArrayType,
   std::__ndk1::map<unsigned long, std::__ndk1::vector<se::Object*,
   std::__ndk1::allocator<se::Object*> >*, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long const, std::__ndk1::vector<se::Object*,
   std::__ndk1::allocator<se::Object*> >*> > >*>,
   std::__ndk1::__map_value_compare<se::Object::TypedArrayType,
   std::__ndk1::__value_type<se::Object::TypedArrayType, std::__ndk1::map<unsigned long,
   std::__ndk1::vector<se::Object*, std::__ndk1::allocator<se::Object*> >*,
   std::__ndk1::less<unsigned long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned long const,
   std::__ndk1::vector<se::Object*, std::__ndk1::allocator<se::Object*> >*> > >*>,
   std::__ndk1::less<se::Object::TypedArrayType>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<se::Object::TypedArrayType,
   std::__ndk1::map<unsigned long, std::__ndk1::vector<se::Object*,
   std::__ndk1::allocator<se::Object*> >*, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long const, std::__ndk1::vector<se::Object*,
   std::__ndk1::allocator<se::Object*> >*> > >*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<se::Object::TypedArrayType,
   std::__ndk1::map<unsigned long, std::__ndk1::vector<se::Object*,
   std::__ndk1::allocator<se::Object*> >*, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long const, std::__ndk1::vector<se::Object*,
   std::__ndk1::allocator<se::Object*> >*> > >*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::__map_value_compare<se::Object::TypedArrayType,std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::less<se::Object::TypedArrayType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>>>
::destroy(__tree<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::__map_value_compare<se::Object::TypedArrayType,std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::less<se::Object::TypedArrayType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

