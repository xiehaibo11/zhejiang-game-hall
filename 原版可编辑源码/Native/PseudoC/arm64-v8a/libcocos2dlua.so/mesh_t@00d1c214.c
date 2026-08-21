
/* tinyobj::mesh_t::mesh_t(tinyobj::mesh_t const&) */

void __thiscall tinyobj::mesh_t::mesh_t(mesh_t *this,mesh_t *param_1)

{
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::vector
            ((vector<float,std::__ndk1::allocator<float>> *)this,(vector *)param_1);
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::vector
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x18),(vector *)(param_1 + 0x18)
            );
  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::vector
            ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x30),(vector *)(param_1 + 0x30)
            );
  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
            ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::__ndk1::vector<int,std::__ndk1::allocator<int>>::vector
            ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  return;
}

