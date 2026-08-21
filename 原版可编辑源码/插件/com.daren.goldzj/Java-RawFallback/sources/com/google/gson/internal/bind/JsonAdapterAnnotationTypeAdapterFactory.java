package com.google.gson.internal.bind;

public final class JsonAdapterAnnotationTypeAdapterFactory implements com.google.gson.TypeAdapterFactory {
    private final com.google.gson.internal.ConstructorConstructor constructorConstructor;

    public JsonAdapterAnnotationTypeAdapterFactory(com.google.gson.internal.ConstructorConstructor r1) {
            r0 = this;
            r0.<init>()
            r0.constructorConstructor = r1
            return
    }

    @Override
    public <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r3, com.google.gson.reflect.TypeToken<T> r4) {
            r2 = this;
            java.lang.Class r0 = r4.getRawType()
            java.lang.Class<com.google.gson.annotations.JsonAdapter> r1 = com.google.gson.annotations.JsonAdapter.class
            java.lang.annotation.Annotation r0 = r0.getAnnotation(r1)
            com.google.gson.annotations.JsonAdapter r0 = (com.google.gson.annotations.JsonAdapter) r0
            if (r0 != 0) goto L10
            r3 = 0
            return r3
        L10:
            com.google.gson.internal.ConstructorConstructor r1 = r2.constructorConstructor
            com.google.gson.TypeAdapter r3 = r2.getTypeAdapter(r1, r3, r4, r0)
            return r3
    }

    com.google.gson.TypeAdapter<?> getTypeAdapter(com.google.gson.internal.ConstructorConstructor r8, com.google.gson.Gson r9, com.google.gson.reflect.TypeToken<?> r10, com.google.gson.annotations.JsonAdapter r11) {
            r7 = this;
            java.lang.Class r0 = r11.value()
            com.google.gson.reflect.TypeToken r0 = com.google.gson.reflect.TypeToken.get(r0)
            com.google.gson.internal.ObjectConstructor r8 = r8.get(r0)
            java.lang.Object r8 = r8.construct()
            boolean r6 = r11.nullSafe()
            boolean r11 = r8 instanceof com.google.gson.TypeAdapter
            if (r11 == 0) goto L1b
            com.google.gson.TypeAdapter r8 = (com.google.gson.TypeAdapter) r8
            goto L7b
        L1b:
            boolean r11 = r8 instanceof com.google.gson.TypeAdapterFactory
            if (r11 == 0) goto L26
            com.google.gson.TypeAdapterFactory r8 = (com.google.gson.TypeAdapterFactory) r8
            com.google.gson.TypeAdapter r8 = r8.create(r9, r10)
            goto L7b
        L26:
            boolean r11 = r8 instanceof com.google.gson.JsonSerializer
            if (r11 != 0) goto L5f
            boolean r0 = r8 instanceof com.google.gson.JsonDeserializer
            if (r0 == 0) goto L2f
            goto L5f
        L2f:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "Invalid attempt to bind an instance of "
            r11.append(r0)
            java.lang.Class r8 = r8.getClass()
            java.lang.String r8 = r8.getName()
            r11.append(r8)
            java.lang.String r8 = " as a @JsonAdapter for "
            r11.append(r8)
            java.lang.String r8 = r10.toString()
            r11.append(r8)
            java.lang.String r8 = ". @JsonAdapter value must be a TypeAdapter, TypeAdapterFactory, JsonSerializer or JsonDeserializer."
            r11.append(r8)
            java.lang.String r8 = r11.toString()
            r9.<init>(r8)
            throw r9
        L5f:
            r0 = 0
            if (r11 == 0) goto L67
            r11 = r8
            com.google.gson.JsonSerializer r11 = (com.google.gson.JsonSerializer) r11
            r1 = r11
            goto L68
        L67:
            r1 = r0
        L68:
            boolean r11 = r8 instanceof com.google.gson.JsonDeserializer
            if (r11 == 0) goto L70
            com.google.gson.JsonDeserializer r8 = (com.google.gson.JsonDeserializer) r8
            r2 = r8
            goto L71
        L70:
            r2 = r0
        L71:
            com.google.gson.internal.bind.TreeTypeAdapter r8 = new com.google.gson.internal.bind.TreeTypeAdapter
            r5 = 0
            r0 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r6 = 0
        L7b:
            if (r8 == 0) goto L83
            if (r6 == 0) goto L83
            com.google.gson.TypeAdapter r8 = r8.nullSafe()
        L83:
            return r8
    }
}
