package com.google.gson;

public interface JsonDeserializer<T> {
    T deserialize(com.google.gson.JsonElement r1, java.lang.reflect.Type r2, com.google.gson.JsonDeserializationContext r3) throws com.google.gson.JsonParseException;
}
