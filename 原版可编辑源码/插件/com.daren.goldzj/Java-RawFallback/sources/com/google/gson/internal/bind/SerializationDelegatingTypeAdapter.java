package com.google.gson.internal.bind;

public abstract class SerializationDelegatingTypeAdapter<T> extends com.google.gson.TypeAdapter<T> {
    public SerializationDelegatingTypeAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract com.google.gson.TypeAdapter<T> getSerializationDelegate();
}
