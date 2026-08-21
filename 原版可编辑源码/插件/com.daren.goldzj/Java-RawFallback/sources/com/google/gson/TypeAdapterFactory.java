package com.google.gson;

public interface TypeAdapterFactory {
    <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r1, com.google.gson.reflect.TypeToken<T> r2);
}
