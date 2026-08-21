package com.google.gson;

public abstract class TypeAdapter<T> {


    public TypeAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public final T fromJson(java.io.Reader r3) throws java.io.IOException {
            r2 = this;
            com.google.gson.stream.JsonReader r0 = new com.google.gson.stream.JsonReader
            r0.<init>(r3)
            java.lang.Object r1 = r2.read(r0)
            return r1
    }

    public final T fromJson(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r2)
            java.lang.Object r0 = r1.fromJson(r0)
            return r0
    }

    public final T fromJsonTree(com.google.gson.JsonElement r3) {
            r2 = this;
            com.google.gson.internal.bind.JsonTreeReader r0 = new com.google.gson.internal.bind.JsonTreeReader     // Catch: java.io.IOException -> La
            r0.<init>(r3)     // Catch: java.io.IOException -> La
            java.lang.Object r1 = r2.read(r0)     // Catch: java.io.IOException -> La
            return r1
        La:
            r0 = move-exception
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            r1.<init>(r0)
            throw r1
    }

    public final com.google.gson.TypeAdapter<T> nullSafe() {
            r1 = this;
            com.google.gson.TypeAdapter$1 r0 = new com.google.gson.TypeAdapter$1
            r0.<init>(r1)
            return r0
    }

    public abstract T read(com.google.gson.stream.JsonReader r1) throws java.io.IOException;

    public final java.lang.String toJson(T r4) {
            r3 = this;
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            r3.toJson(r0, r4)     // Catch: java.io.IOException -> Le
            java.lang.String r1 = r0.toString()
            return r1
        Le:
            r1 = move-exception
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
    }

    public final void toJson(java.io.Writer r2, T r3) throws java.io.IOException {
            r1 = this;
            com.google.gson.stream.JsonWriter r0 = new com.google.gson.stream.JsonWriter
            r0.<init>(r2)
            r1.write(r0, r3)
            return
    }

    public final com.google.gson.JsonElement toJsonTree(T r3) {
            r2 = this;
            com.google.gson.internal.bind.JsonTreeWriter r0 = new com.google.gson.internal.bind.JsonTreeWriter     // Catch: java.io.IOException -> Ld
            r0.<init>()     // Catch: java.io.IOException -> Ld
            r2.write(r0, r3)     // Catch: java.io.IOException -> Ld
            com.google.gson.JsonElement r1 = r0.get()     // Catch: java.io.IOException -> Ld
            return r1
        Ld:
            r0 = move-exception
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            r1.<init>(r0)
            throw r1
    }

    public abstract void write(com.google.gson.stream.JsonWriter r1, T r2) throws java.io.IOException;
}
