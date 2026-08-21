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

    private java.lang.reflect.Type getRuntimeTypeIfMoreSpecific(java.lang.reflect.Type r2, java.lang.Object r3) {
            r1 = this;
            if (r3 == 0) goto L12
            java.lang.Class<java.lang.Object> r0 = java.lang.Object.class
            if (r2 == r0) goto Le
            boolean r0 = r2 instanceof java.lang.reflect.TypeVariable
            if (r0 != 0) goto Le
            boolean r0 = r2 instanceof java.lang.Class
            if (r0 == 0) goto L12
        Le:
            java.lang.Class r2 = r3.getClass()
        L12:
            return r2
    }

    @Override
    public T read(com.google.gson.stream.JsonReader r2) throws java.io.IOException {
            r1 = this;
            com.google.gson.TypeAdapter<T> r0 = r1.delegate
            java.lang.Object r0 = r0.read(r2)
            return r0
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r5, T r6) throws java.io.IOException {
            r4 = this;
            com.google.gson.TypeAdapter<T> r0 = r4.delegate
            java.lang.reflect.Type r1 = r4.type
            java.lang.reflect.Type r1 = r4.getRuntimeTypeIfMoreSpecific(r1, r6)
            java.lang.reflect.Type r2 = r4.type
            if (r1 == r2) goto L26
            com.google.gson.Gson r2 = r4.context
            com.google.gson.reflect.TypeToken r3 = com.google.gson.reflect.TypeToken.get(r1)
            com.google.gson.TypeAdapter r2 = r2.getAdapter(r3)
            boolean r3 = r2 instanceof com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.Adapter
            if (r3 != 0) goto L1c
            r0 = r2
            goto L26
        L1c:
            com.google.gson.TypeAdapter<T> r3 = r4.delegate
            boolean r3 = r3 instanceof com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.Adapter
            if (r3 != 0) goto L25
            com.google.gson.TypeAdapter<T> r0 = r4.delegate
            goto L26
        L25:
            r0 = r2
        L26:
            r0.write(r5, r6)
            return
    }
}
