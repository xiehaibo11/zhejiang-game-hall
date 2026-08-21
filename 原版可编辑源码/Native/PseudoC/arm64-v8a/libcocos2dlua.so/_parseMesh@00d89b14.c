
/* dragonBones::BinaryDataParser::_parseMesh(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::MeshDisplayData&)
    */

void __thiscall
dragonBones::BinaryDataParser::_parseMesh
          (BinaryDataParser *this,GenericValue *param_1,MeshDisplayData *param_2)

{
  _parseVertices(this,param_1,(VerticesData *)(param_2 + 0x68));
  return;
}

