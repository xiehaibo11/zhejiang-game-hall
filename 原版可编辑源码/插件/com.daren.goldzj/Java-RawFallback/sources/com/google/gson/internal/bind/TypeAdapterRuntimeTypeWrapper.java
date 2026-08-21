package com.google.gson.internal.bind;

final class TypeAdapterRuntimeTypeWrapper<T> extends com.google.gson.TypeAdapter<T> {
    private final com.google.gson.Gson context;
    private final com.google.gson.TypeAdapter<T> delegate;
    private final java.lang.reflect.Type type;

    TypeAdapterRuntimeTypeWrapper(com.google.gson.Gson r1, com.google.gson.TypeAdapter<T> r2, java.lang.reflect.Type r3) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.delegate = r2
            r0.type = r3
            return
    }

    private static java.lang.reflect.Type getRuntimeTypeIfMoreSpecific(java.lang.reflect.Type r1, java.lang.Object r2) {
            if (r2 == 0) goto Le
            boolean r0 = r1 instanceof java.lang.Class
            if (r0 != 0) goto La
            boolean r0 = r1 instanceof java.lang.reflect.TypeVariable
            if (r0 == 0) goto Le
        La:
            java.lang.Class r1 = r2.getClass()
        Le:
            return r1
    }

    private static boolean isReflective(com.google.gson.TypeAdapter<?> r1) {
        L0:
            boolean r0 = r1 instanceof com.google.gson.internal.bind.SerializationDelegatingTypeAdapter
            if (r0 == 0) goto L10
            r0 = r1
            com.google.gson.internal.bind.SerializationDelegatingTypeAdapter r0 = (com.google.gson.internal.bind.SerializationDelegatingTypeAdapter) r0
            com.google.gson.TypeAdapter r0 = r0.getSerializationDelegate()
            if (r0 != r1) goto Le
            goto L10
        Le:
            r1 = r0
            goto L0
        L10:
            boolean r1 = r1 instanceof com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.Adapter
            return r1
    }

    @Override
    public T read(com.google.gson.stream.JsonReader r2) throws java.io.IOException {
            r1 = this;
            com.google.gson.TypeAdapter<T> r0 = r1.delegate
            java.lang.Object r2 = r0.read(r2)
            return r2
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r4, T r5) throws java.io.IOException {
            r3 = this;
            com.google.gson.TypeAdapter<T> r0 = r3.delegate
            java.lang.reflect.Type r1 = r3.type
            java.lang.reflect.Type r1 = getRuntimeTypeIfMoreSpecific(r1, r5)
            java.lang.reflect.Type r2 = r3.type
            if (r1 == r2) goto L25
            com.google.gson.Gson r0 = r3.context
            com.google.gson.reflect.TypeToken r1 = com.google.gson.reflect.TypeToken.get(r1)
            com.google.gson.TypeAdapter r0 = r0.getAdapter(r1)
            boolean r1 = r0 instanceof com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.Adapter
            if (r1 != 0) goto L1b
            goto L25
        L1b:
            com.google.gson.TypeAdapter<T> r1 = r3.delegate
            boolean r1 = isReflective(r1)
            if (r1 != 0) goto L25
            com.google.gson.TypeAdapter<T> r0 = r3.delegate
        L25:
            r0.write(r4, r5)
            return
    }
}
