package com.google.gson;

import java.lang.reflect.Type;

public interface JsonDeserializationContext {
    <T> T deserialize(JsonElement r1, Type r2) throws JsonParseException;
}
