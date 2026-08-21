package com.google.gson.internal.bind;

public final class ArrayTypeAdapter<E> extends com.google.gson.TypeAdapter<java.lang.Object> {
    public static final com.google.gson.TypeAdapterFactory FACTORY = null;
    private final java.lang.Class<E> componentType;
    private final com.google.gson.TypeAdapter<E> componentTypeAdapter;


    static {
            com.google.gson.internal.bind.ArrayTypeAdapter$1 r0 = new com.google.gson.internal.bind.ArrayTypeAdapter$1
            r0.<init>()
            com.google.gson.internal.bind.ArrayTypeAdapter.FACTORY = r0
            return
    }

    public ArrayTypeAdapter(com.google.gson.Gson r2, com.google.gson.TypeAdapter<E> r3, java.lang.Class<E> r4) {
            r1 = this;
            r1.<init>()
            com.google.gson.internal.bind.TypeAdapterRuntimeTypeWrapper r0 = new com.google.gson.internal.bind.TypeAdapterRuntimeTypeWrapper
            r0.<init>(r2, r3, r4)
            r1.componentTypeAdapter = r0
            r1.componentType = r4
            return
    }

    @Override
    public java.lang.Object read(com.google.gson.stream.JsonReader r6) throws java.io.IOException {
            r5 = this;
            com.google.gson.stream.JsonToken r0 = r6.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
            if (r0 != r1) goto Ld
            r6.nextNull()
            r0 = 0
            return r0
        Ld:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.beginArray()
        L15:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L25
            com.google.gson.TypeAdapter<E> r1 = r5.componentTypeAdapter
            java.lang.Object r1 = r1.read(r6)
            r0.add(r1)
            goto L15
        L25:
            r6.endArray()
            int r1 = r0.size()
            java.lang.Class<E> r2 = r5.componentType
            java.lang.Object r2 = java.lang.reflect.Array.newInstance(r2, r1)
            r3 = 0
        L33:
            if (r3 >= r1) goto L3f
            java.lang.Object r4 = r0.get(r3)
            java.lang.reflect.Array.set(r2, r3, r4)
            int r3 = r3 + 1
            goto L33
        L3f:
            return r2
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r5, java.lang.Object r6) throws java.io.IOException {
            r4 = this;
            if (r6 != 0) goto L6
            r5.nullValue()
            return
        L6:
            r5.beginArray()
            r0 = 0
            int r1 = java.lang.reflect.Array.getLength(r6)
        Le:
            if (r0 >= r1) goto L1c
            java.lang.Object r2 = java.lang.reflect.Array.get(r6, r0)
            com.google.gson.TypeAdapter<E> r3 = r4.componentTypeAdapter
            r3.write(r5, r2)
            int r0 = r0 + 1
            goto Le
        L1c:
            r5.endArray()
            return
    }
}
