package com.google.gson.internal.bind;

public final class ReflectiveTypeAdapterFactory implements com.google.gson.TypeAdapterFactory {
    private final com.google.gson.internal.reflect.ReflectionAccessor accessor;
    private final com.google.gson.internal.ConstructorConstructor constructorConstructor;
    private final com.google.gson.internal.Excluder excluder;
    private final com.google.gson.FieldNamingStrategy fieldNamingPolicy;
    private final com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory jsonAdapterFactory;


    public static final class Adapter<T> extends com.google.gson.TypeAdapter<T> {
        private final java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> boundFields;
        private final com.google.gson.internal.ObjectConstructor<T> constructor;

        Adapter(com.google.gson.internal.ObjectConstructor<T> r1, java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> r2) {
                r0 = this;
                r0.<init>()
                r0.constructor = r1
                r0.boundFields = r2
                return
        }

        @Override
        public T read(com.google.gson.stream.JsonReader r5) throws java.io.IOException {
                r4 = this;
                com.google.gson.stream.JsonToken r0 = r5.peek()
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
                if (r0 != r1) goto Ld
                r5.nextNull()
                r0 = 0
                return r0
            Ld:
                com.google.gson.internal.ObjectConstructor<T> r0 = r4.constructor
                java.lang.Object r0 = r0.construct()
                r5.beginObject()     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
            L16:
                boolean r1 = r5.hasNext()     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                if (r1 == 0) goto L37
                java.lang.String r1 = r5.nextName()     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField> r2 = r4.boundFields     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r2 = (com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField) r2     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                if (r2 == 0) goto L33
                boolean r3 = r2.deserialized     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                if (r3 != 0) goto L2f
                goto L33
            L2f:
                r2.read(r5, r0)     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
                goto L36
            L33:
                r5.skipValue()     // Catch: java.lang.IllegalAccessException -> L3c java.lang.IllegalStateException -> L43
            L36:
                goto L16
            L37:
                r5.endObject()
                return r0
            L3c:
                r1 = move-exception
                java.lang.AssertionError r2 = new java.lang.AssertionError
                r2.<init>(r1)
                throw r2
            L43:
                r1 = move-exception
                com.google.gson.JsonSyntaxException r2 = new com.google.gson.JsonSyntaxException
                r2.<init>(r1)
                throw r2
        }

        @Override
        public void write(com.google.gson.stream.JsonWriter r4, T r5) throws java.io.IOException {
                r3 = this;
                if (r5 != 0) goto L6
                r4.nullValue()
                return
            L6:
                r4.beginObject()
                java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField> r0 = r3.boundFields     // Catch: java.lang.IllegalAccessException -> L33
                java.util.Collection r0 = r0.values()     // Catch: java.lang.IllegalAccessException -> L33
                java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.IllegalAccessException -> L33
            L13:
                boolean r1 = r0.hasNext()     // Catch: java.lang.IllegalAccessException -> L33
                if (r1 == 0) goto L2e
                java.lang.Object r1 = r0.next()     // Catch: java.lang.IllegalAccessException -> L33
                com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r1 = (com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField) r1     // Catch: java.lang.IllegalAccessException -> L33
                boolean r2 = r1.writeField(r5)     // Catch: java.lang.IllegalAccessException -> L33
                if (r2 == 0) goto L2d
                java.lang.String r2 = r1.name     // Catch: java.lang.IllegalAccessException -> L33
                r4.name(r2)     // Catch: java.lang.IllegalAccessException -> L33
                r1.write(r4, r5)     // Catch: java.lang.IllegalAccessException -> L33
            L2d:
                goto L13
            L2e:
                r4.endObject()
                return
            L33:
                r0 = move-exception
                java.lang.AssertionError r1 = new java.lang.AssertionError
                r1.<init>(r0)
                throw r1
        }
    }

    static abstract class BoundField {
        final boolean deserialized;
        final java.lang.String name;
        final boolean serialized;

        protected BoundField(java.lang.String r1, boolean r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.name = r1
                r0.serialized = r2
                r0.deserialized = r3
                return
        }

        abstract void read(com.google.gson.stream.JsonReader r1, java.lang.Object r2) throws java.io.IOException, java.lang.IllegalAccessException;

        abstract void write(com.google.gson.stream.JsonWriter r1, java.lang.Object r2) throws java.io.IOException, java.lang.IllegalAccessException;

        abstract boolean writeField(java.lang.Object r1) throws java.io.IOException, java.lang.IllegalAccessException;
    }

    public ReflectiveTypeAdapterFactory(com.google.gson.internal.ConstructorConstructor r2, com.google.gson.FieldNamingStrategy r3, com.google.gson.internal.Excluder r4, com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r5) {
            r1 = this;
            r1.<init>()
            com.google.gson.internal.reflect.ReflectionAccessor r0 = com.google.gson.internal.reflect.ReflectionAccessor.getInstance()
            r1.accessor = r0
            r1.constructorConstructor = r2
            r1.fieldNamingPolicy = r3
            r1.excluder = r4
            r1.jsonAdapterFactory = r5
            return
    }

    private com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField createBoundField(com.google.gson.Gson r20, java.lang.reflect.Field r21, java.lang.String r22, com.google.gson.reflect.TypeToken<?> r23, boolean r24, boolean r25) {
            r19 = this;
            r11 = r19
            r12 = r20
            r13 = r23
            java.lang.Class r0 = r23.getRawType()
            boolean r14 = com.google.gson.internal.Primitives.isPrimitive(r0)
            java.lang.Class<com.google.gson.annotations.JsonAdapter> r0 = com.google.gson.annotations.JsonAdapter.class
            r15 = r21
            java.lang.annotation.Annotation r0 = r15.getAnnotation(r0)
            r10 = r0
            com.google.gson.annotations.JsonAdapter r10 = (com.google.gson.annotations.JsonAdapter) r10
            r0 = 0
            if (r10 == 0) goto L24
            com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r1 = r11.jsonAdapterFactory
            com.google.gson.internal.ConstructorConstructor r2 = r11.constructorConstructor
            com.google.gson.TypeAdapter r0 = r1.getTypeAdapter(r2, r12, r13, r10)
        L24:
            if (r0 == 0) goto L29
            r1 = 1
            r6 = 1
            goto L2b
        L29:
            r1 = 0
            r6 = 0
        L2b:
            if (r0 != 0) goto L31
            com.google.gson.TypeAdapter r0 = r12.getAdapter(r13)
        L31:
            r16 = r0
            r7 = r16
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$1 r17 = new com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$1
            r0 = r17
            r1 = r19
            r2 = r22
            r3 = r24
            r4 = r25
            r5 = r21
            r8 = r20
            r9 = r23
            r18 = r10
            r10 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r17
    }

    static boolean excludeField(java.lang.reflect.Field r1, boolean r2, com.google.gson.internal.Excluder r3) {
            java.lang.Class r0 = r1.getType()
            boolean r0 = r3.excludeClass(r0, r2)
            if (r0 != 0) goto L12
            boolean r0 = r3.excludeField(r1, r2)
            if (r0 != 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    private java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> getBoundFields(com.google.gson.Gson r24, com.google.gson.reflect.TypeToken<?> r25, java.lang.Class<?> r26) {
            r23 = this;
            r7 = r23
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r8 = r0
            boolean r0 = r26.isInterface()
            if (r0 == 0) goto Lf
            return r8
        Lf:
            java.lang.reflect.Type r9 = r25.getType()
            r11 = r25
            r10 = r26
        L17:
            java.lang.Class<java.lang.Object> r0 = java.lang.Object.class
            if (r10 == r0) goto Ldb
            java.lang.reflect.Field[] r12 = r10.getDeclaredFields()
            int r13 = r12.length
            r14 = 0
            r15 = 0
        L22:
            if (r15 >= r13) goto Lc5
            r6 = r12[r15]
            r0 = 1
            boolean r0 = r7.excludeField(r6, r0)
            boolean r16 = r7.excludeField(r6, r14)
            if (r0 != 0) goto L35
            if (r16 != 0) goto L35
            goto La4
        L35:
            com.google.gson.internal.reflect.ReflectionAccessor r1 = r7.accessor
            r1.makeAccessible(r6)
            java.lang.reflect.Type r1 = r11.getType()
            java.lang.reflect.Type r2 = r6.getGenericType()
            java.lang.reflect.Type r17 = com.google.gson.internal.$Gson$Types.resolve(r1, r10, r2)
            java.util.List r5 = r7.getFieldNames(r6)
            r1 = 0
            r2 = 0
            int r4 = r5.size()
            r3 = r2
            r2 = r1
        L52:
            if (r3 >= r4) goto L99
            java.lang.Object r1 = r5.get(r3)
            java.lang.String r1 = (java.lang.String) r1
            if (r3 == 0) goto L5d
            r0 = 0
        L5d:
            r18 = r0
            com.google.gson.reflect.TypeToken r19 = com.google.gson.reflect.TypeToken.get(r17)
            r0 = r23
            r25 = r1
            r1 = r24
            r14 = r2
            r2 = r6
            r20 = r3
            r3 = r25
            r21 = r4
            r4 = r19
            r19 = r5
            r5 = r18
            r22 = r6
            r6 = r16
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r0 = r0.createBoundField(r1, r2, r3, r4, r5, r6)
            r1 = r25
            java.lang.Object r2 = r8.put(r1, r0)
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r2 = (com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField) r2
            if (r14 != 0) goto L8c
            r3 = r2
            goto L8d
        L8c:
            r2 = r14
        L8d:
            int r3 = r20 + 1
            r0 = r18
            r5 = r19
            r4 = r21
            r6 = r22
            r14 = 0
            goto L52
        L99:
            r14 = r2
            r20 = r3
            r21 = r4
            r19 = r5
            r22 = r6
            if (r14 != 0) goto La9
        La4:
            int r15 = r15 + 1
            r14 = 0
            goto L22
        La9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r3 = " declares multiple JSON fields named "
            r2.append(r3)
            java.lang.String r3 = r14.name
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        Lc5:
            java.lang.reflect.Type r0 = r11.getType()
            java.lang.reflect.Type r1 = r10.getGenericSuperclass()
            java.lang.reflect.Type r0 = com.google.gson.internal.$Gson$Types.resolve(r0, r10, r1)
            com.google.gson.reflect.TypeToken r11 = com.google.gson.reflect.TypeToken.get(r0)
            java.lang.Class r10 = r11.getRawType()
            goto L17
        Ldb:
            return r8
    }

    private java.util.List<java.lang.String> getFieldNames(java.lang.reflect.Field r8) {
            r7 = this;
            java.lang.Class<com.google.gson.annotations.SerializedName> r0 = com.google.gson.annotations.SerializedName.class
            java.lang.annotation.Annotation r0 = r8.getAnnotation(r0)
            com.google.gson.annotations.SerializedName r0 = (com.google.gson.annotations.SerializedName) r0
            if (r0 != 0) goto L15
            com.google.gson.FieldNamingStrategy r1 = r7.fieldNamingPolicy
            java.lang.String r1 = r1.translateName(r8)
            java.util.List r2 = java.util.Collections.singletonList(r1)
            return r2
        L15:
            java.lang.String r1 = r0.value()
            java.lang.String[] r2 = r0.alternate()
            int r3 = r2.length
            if (r3 != 0) goto L25
            java.util.List r3 = java.util.Collections.singletonList(r1)
            return r3
        L25:
            java.util.ArrayList r3 = new java.util.ArrayList
            int r4 = r2.length
            int r4 = r4 + 1
            r3.<init>(r4)
            r3.add(r1)
            int r4 = r2.length
            r5 = 0
        L32:
            if (r5 >= r4) goto L3c
            r6 = r2[r5]
            r3.add(r6)
            int r5 = r5 + 1
            goto L32
        L3c:
            return r3
    }

    @Override
    public <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r5, com.google.gson.reflect.TypeToken<T> r6) {
            r4 = this;
            java.lang.Class r0 = r6.getRawType()
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            boolean r1 = r1.isAssignableFrom(r0)
            if (r1 != 0) goto Le
            r1 = 0
            return r1
        Le:
            com.google.gson.internal.ConstructorConstructor r1 = r4.constructorConstructor
            com.google.gson.internal.ObjectConstructor r1 = r1.get(r6)
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$Adapter r2 = new com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$Adapter
            java.util.Map r3 = r4.getBoundFields(r5, r6, r0)
            r2.<init>(r1, r3)
            return r2
    }

    public boolean excludeField(java.lang.reflect.Field r2, boolean r3) {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.excluder
            boolean r0 = excludeField(r2, r3, r0)
            return r0
    }
}
