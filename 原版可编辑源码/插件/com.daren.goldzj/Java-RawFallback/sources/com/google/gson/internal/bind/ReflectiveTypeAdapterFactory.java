package com.google.gson.internal.bind;

public final class ReflectiveTypeAdapterFactory implements com.google.gson.TypeAdapterFactory {
    private final com.google.gson.internal.ConstructorConstructor constructorConstructor;
    private final com.google.gson.internal.Excluder excluder;
    private final com.google.gson.FieldNamingStrategy fieldNamingPolicy;
    private final com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory jsonAdapterFactory;
    private final java.util.List<com.google.gson.ReflectionAccessFilter> reflectionFilters;


    public static abstract class Adapter<T, A> extends com.google.gson.TypeAdapter<T> {
        final java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> boundFields;

        Adapter(java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> r1) {
                r0 = this;
                r0.<init>()
                r0.boundFields = r1
                return
        }

        abstract A createAccumulator();

        abstract T finalize(A r1);

        @Override
        public T read(com.google.gson.stream.JsonReader r4) throws java.io.IOException {
                r3 = this;
                com.google.gson.stream.JsonToken r0 = r4.peek()
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
                if (r0 != r1) goto Ld
                r4.nextNull()
                r4 = 0
                return r4
            Ld:
                java.lang.Object r0 = r3.createAccumulator()
                r4.beginObject()     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
            L14:
                boolean r1 = r4.hasNext()     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                if (r1 == 0) goto L35
                java.lang.String r1 = r4.nextName()     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField> r2 = r3.boundFields     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r1 = (com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField) r1     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                if (r1 == 0) goto L31
                boolean r2 = r1.deserialized     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                if (r2 != 0) goto L2d
                goto L31
            L2d:
                r3.readField(r0, r4, r1)     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                goto L14
            L31:
                r4.skipValue()     // Catch: java.lang.IllegalAccessException -> L3d java.lang.IllegalStateException -> L43
                goto L14
            L35:
                r4.endObject()
                java.lang.Object r4 = r3.finalize(r0)
                return r4
            L3d:
                r4 = move-exception
                java.lang.RuntimeException r4 = com.google.gson.internal.reflect.ReflectionHelper.createExceptionForUnexpectedIllegalAccess(r4)
                throw r4
            L43:
                r4 = move-exception
                com.google.gson.JsonSyntaxException r0 = new com.google.gson.JsonSyntaxException
                r0.<init>(r4)
                throw r0
        }

        abstract void readField(A r1, com.google.gson.stream.JsonReader r2, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField r3) throws java.lang.IllegalAccessException, java.io.IOException;

        @Override
        public void write(com.google.gson.stream.JsonWriter r3, T r4) throws java.io.IOException {
                r2 = this;
                if (r4 != 0) goto L6
                r3.nullValue()
                return
            L6:
                r3.beginObject()
                java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField> r0 = r2.boundFields     // Catch: java.lang.IllegalAccessException -> L27
                java.util.Collection r0 = r0.values()     // Catch: java.lang.IllegalAccessException -> L27
                java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.IllegalAccessException -> L27
            L13:
                boolean r1 = r0.hasNext()     // Catch: java.lang.IllegalAccessException -> L27
                if (r1 == 0) goto L23
                java.lang.Object r1 = r0.next()     // Catch: java.lang.IllegalAccessException -> L27
                com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r1 = (com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField) r1     // Catch: java.lang.IllegalAccessException -> L27
                r1.write(r3, r4)     // Catch: java.lang.IllegalAccessException -> L27
                goto L13
            L23:
                r3.endObject()
                return
            L27:
                r3 = move-exception
                java.lang.RuntimeException r3 = com.google.gson.internal.reflect.ReflectionHelper.createExceptionForUnexpectedIllegalAccess(r3)
                throw r3
        }
    }

    static abstract class BoundField {
        final boolean deserialized;
        final java.lang.reflect.Field field;
        final java.lang.String fieldName;
        final java.lang.String name;
        final boolean serialized;

        protected BoundField(java.lang.String r1, java.lang.reflect.Field r2, boolean r3, boolean r4) {
                r0 = this;
                r0.<init>()
                r0.name = r1
                r0.field = r2
                java.lang.String r1 = r2.getName()
                r0.fieldName = r1
                r0.serialized = r3
                r0.deserialized = r4
                return
        }

        abstract void readIntoArray(com.google.gson.stream.JsonReader r1, int r2, java.lang.Object[] r3) throws java.io.IOException, com.google.gson.JsonParseException;

        abstract void readIntoField(com.google.gson.stream.JsonReader r1, java.lang.Object r2) throws java.io.IOException, java.lang.IllegalAccessException;

        abstract void write(com.google.gson.stream.JsonWriter r1, java.lang.Object r2) throws java.io.IOException, java.lang.IllegalAccessException;
    }

    private static final class FieldReflectionAdapter<T> extends com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.Adapter<T, T> {
        private final com.google.gson.internal.ObjectConstructor<T> constructor;

        FieldReflectionAdapter(com.google.gson.internal.ObjectConstructor<T> r1, java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> r2) {
                r0 = this;
                r0.<init>(r2)
                r0.constructor = r1
                return
        }

        @Override
        T createAccumulator() {
                r1 = this;
                com.google.gson.internal.ObjectConstructor<T> r0 = r1.constructor
                java.lang.Object r0 = r0.construct()
                return r0
        }

        @Override
        T finalize(T r1) {
                r0 = this;
                return r1
        }

        @Override
        void readField(T r1, com.google.gson.stream.JsonReader r2, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField r3) throws java.lang.IllegalAccessException, java.io.IOException {
                r0 = this;
                r3.readIntoField(r2, r1)
                return
        }
    }

    private static final class RecordAdapter<T> extends com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.Adapter<T, java.lang.Object[]> {
        static final java.util.Map<java.lang.Class<?>, java.lang.Object> PRIMITIVE_DEFAULTS = null;
        private final java.util.Map<java.lang.String, java.lang.Integer> componentIndices;
        private final java.lang.reflect.Constructor<T> constructor;
        private final java.lang.Object[] constructorArgsDefaults;

        static {
                java.util.Map r0 = primitiveDefaults()
                com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.RecordAdapter.PRIMITIVE_DEFAULTS = r0
                return
        }

        RecordAdapter(java.lang.Class<T> r4, java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> r5, boolean r6) {
                r3 = this;
                r3.<init>(r5)
                java.util.HashMap r5 = new java.util.HashMap
                r5.<init>()
                r3.componentIndices = r5
                java.lang.reflect.Constructor r5 = com.google.gson.internal.reflect.ReflectionHelper.getCanonicalRecordConstructor(r4)
                r3.constructor = r5
                if (r6 == 0) goto L19
                r5 = 0
                java.lang.reflect.Constructor<T> r6 = r3.constructor
                com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.access$000(r5, r6)
                goto L1e
            L19:
                java.lang.reflect.Constructor<T> r5 = r3.constructor
                com.google.gson.internal.reflect.ReflectionHelper.makeAccessible(r5)
            L1e:
                java.lang.String[] r4 = com.google.gson.internal.reflect.ReflectionHelper.getRecordComponentNames(r4)
                r5 = 0
                r6 = 0
            L24:
                int r0 = r4.length
                if (r6 >= r0) goto L35
                java.util.Map<java.lang.String, java.lang.Integer> r0 = r3.componentIndices
                r1 = r4[r6]
                java.lang.Integer r2 = java.lang.Integer.valueOf(r6)
                r0.put(r1, r2)
                int r6 = r6 + 1
                goto L24
            L35:
                java.lang.reflect.Constructor<T> r4 = r3.constructor
                java.lang.Class[] r4 = r4.getParameterTypes()
                int r6 = r4.length
                java.lang.Object[] r6 = new java.lang.Object[r6]
                r3.constructorArgsDefaults = r6
            L40:
                int r6 = r4.length
                if (r5 >= r6) goto L52
                java.lang.Object[] r6 = r3.constructorArgsDefaults
                java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.RecordAdapter.PRIMITIVE_DEFAULTS
                r1 = r4[r5]
                java.lang.Object r0 = r0.get(r1)
                r6[r5] = r0
                int r5 = r5 + 1
                goto L40
            L52:
                return
        }

        private static java.util.Map<java.lang.Class<?>, java.lang.Object> primitiveDefaults() {
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                java.lang.Class r1 = java.lang.Byte.TYPE
                r2 = 0
                java.lang.Byte r3 = java.lang.Byte.valueOf(r2)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Short.TYPE
                java.lang.Short r3 = java.lang.Short.valueOf(r2)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Integer.TYPE
                java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Long.TYPE
                r3 = 0
                java.lang.Long r3 = java.lang.Long.valueOf(r3)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Float.TYPE
                r3 = 0
                java.lang.Float r3 = java.lang.Float.valueOf(r3)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Double.TYPE
                r3 = 0
                java.lang.Double r3 = java.lang.Double.valueOf(r3)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Character.TYPE
                java.lang.Character r3 = java.lang.Character.valueOf(r2)
                r0.put(r1, r3)
                java.lang.Class r1 = java.lang.Boolean.TYPE
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                r0.put(r1, r2)
                return r0
        }

        @Override
        java.lang.Object[] createAccumulator() {
                r1 = this;
                java.lang.Object[] r0 = r1.createAccumulator()
                return r0
        }

        @Override
        java.lang.Object[] createAccumulator() {
                r1 = this;
                java.lang.Object[] r0 = r1.constructorArgsDefaults
                java.lang.Object r0 = r0.clone()
                java.lang.Object[] r0 = (java.lang.Object[]) r0
                return r0
        }

        @Override
        java.lang.Object finalize(java.lang.Object[] r1) {
                r0 = this;
                java.lang.Object[] r1 = (java.lang.Object[]) r1
                java.lang.Object r1 = r0.finalize(r1)
                return r1
        }

        T finalize(java.lang.Object[] r6) {
                r5 = this;
                java.lang.String r0 = "' with args "
                java.lang.String r1 = "Failed to invoke constructor '"
                java.lang.reflect.Constructor<T> r2 = r5.constructor     // Catch: java.lang.reflect.InvocationTargetException -> Lb java.lang.IllegalArgumentException -> L35 java.lang.InstantiationException -> L37 java.lang.IllegalAccessException -> L5d
                java.lang.Object r6 = r2.newInstance(r6)     // Catch: java.lang.reflect.InvocationTargetException -> Lb java.lang.IllegalArgumentException -> L35 java.lang.InstantiationException -> L37 java.lang.IllegalAccessException -> L5d
                return r6
            Lb:
                r2 = move-exception
                java.lang.RuntimeException r3 = new java.lang.RuntimeException
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r1)
                java.lang.reflect.Constructor<T> r1 = r5.constructor
                java.lang.String r1 = com.google.gson.internal.reflect.ReflectionHelper.constructorToString(r1)
                r4.append(r1)
                r4.append(r0)
                java.lang.String r6 = java.util.Arrays.toString(r6)
                r4.append(r6)
                java.lang.String r6 = r4.toString()
                java.lang.Throwable r0 = r2.getCause()
                r3.<init>(r6, r0)
                throw r3
            L35:
                r2 = move-exception
                goto L38
            L37:
                r2 = move-exception
            L38:
                java.lang.RuntimeException r3 = new java.lang.RuntimeException
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r1)
                java.lang.reflect.Constructor<T> r1 = r5.constructor
                java.lang.String r1 = com.google.gson.internal.reflect.ReflectionHelper.constructorToString(r1)
                r4.append(r1)
                r4.append(r0)
                java.lang.String r6 = java.util.Arrays.toString(r6)
                r4.append(r6)
                java.lang.String r6 = r4.toString()
                r3.<init>(r6, r2)
                throw r3
            L5d:
                r6 = move-exception
                java.lang.RuntimeException r6 = com.google.gson.internal.reflect.ReflectionHelper.createExceptionForUnexpectedIllegalAccess(r6)
                throw r6
        }

        @Override
        void readField(java.lang.Object[] r1, com.google.gson.stream.JsonReader r2, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField r3) throws java.lang.IllegalAccessException, java.io.IOException {
                r0 = this;
                java.lang.Object[] r1 = (java.lang.Object[]) r1
                r0.readField(r1, r2, r3)
                return
        }

        void readField(java.lang.Object[] r3, com.google.gson.stream.JsonReader r4, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField r5) throws java.io.IOException {
                r2 = this;
                java.util.Map<java.lang.String, java.lang.Integer> r0 = r2.componentIndices
                java.lang.String r1 = r5.fieldName
                java.lang.Object r0 = r0.get(r1)
                java.lang.Integer r0 = (java.lang.Integer) r0
                if (r0 == 0) goto L14
                int r0 = r0.intValue()
                r5.readIntoArray(r4, r0, r3)
                return
            L14:
                java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = "Could not find the index in the constructor '"
                r4.append(r0)
                java.lang.reflect.Constructor<T> r0 = r2.constructor
                java.lang.String r0 = com.google.gson.internal.reflect.ReflectionHelper.constructorToString(r0)
                r4.append(r0)
                java.lang.String r0 = "' for field with name '"
                r4.append(r0)
                java.lang.String r5 = r5.fieldName
                r4.append(r5)
                java.lang.String r5 = "', unable to determine which argument in the constructor the field corresponds to. This is unexpected behavior, as we expect the RecordComponents to have the same names as the fields in the Java class, and that the order of the RecordComponents is the same as the order of the canonical constructor parameters."
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                r3.<init>(r4)
                throw r3
        }
    }

    public ReflectiveTypeAdapterFactory(com.google.gson.internal.ConstructorConstructor r1, com.google.gson.FieldNamingStrategy r2, com.google.gson.internal.Excluder r3, com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r4, java.util.List<com.google.gson.ReflectionAccessFilter> r5) {
            r0 = this;
            r0.<init>()
            r0.constructorConstructor = r1
            r0.fieldNamingPolicy = r2
            r0.excluder = r3
            r0.jsonAdapterFactory = r4
            r0.reflectionFilters = r5
            return
    }

    static void access$000(java.lang.Object r0, java.lang.reflect.AccessibleObject r1) {
            checkAccessible(r0, r1)
            return
    }

    private static <M extends java.lang.reflect.AccessibleObject & java.lang.reflect.Member> void checkAccessible(java.lang.Object r1, M r2) {
            r0 = r2
            java.lang.reflect.Member r0 = (java.lang.reflect.Member) r0
            int r0 = r0.getModifiers()
            boolean r0 = java.lang.reflect.Modifier.isStatic(r0)
            if (r0 == 0) goto Le
            r1 = 0
        Le:
            boolean r1 = com.google.gson.internal.ReflectionAccessFilterHelper.canAccess(r2, r1)
            if (r1 == 0) goto L15
            return
        L15:
            r1 = 1
            java.lang.String r1 = com.google.gson.internal.reflect.ReflectionHelper.getAccessibleObjectDescription(r2, r1)
            com.google.gson.JsonIOException r2 = new com.google.gson.JsonIOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " is not accessible and ReflectionAccessFilter does not permit making it accessible. Register a TypeAdapter for the declaring type, adjust the access filter or increase the visibility of the element and its declaring type."
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
    }

    private com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField createBoundField(com.google.gson.Gson r17, java.lang.reflect.Field r18, java.lang.reflect.Method r19, java.lang.String r20, com.google.gson.reflect.TypeToken<?> r21, boolean r22, boolean r23, boolean r24) {
            r16 = this;
            r14 = r16
            r10 = r17
            r11 = r21
            java.lang.Class r0 = r21.getRawType()
            boolean r12 = com.google.gson.internal.Primitives.isPrimitive(r0)
            int r0 = r18.getModifiers()
            boolean r1 = java.lang.reflect.Modifier.isStatic(r0)
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L22
            boolean r0 = java.lang.reflect.Modifier.isFinal(r0)
            if (r0 == 0) goto L22
            r13 = 1
            goto L23
        L22:
            r13 = 0
        L23:
            java.lang.Class<com.google.gson.annotations.JsonAdapter> r0 = com.google.gson.annotations.JsonAdapter.class
            r4 = r18
            java.lang.annotation.Annotation r0 = r4.getAnnotation(r0)
            com.google.gson.annotations.JsonAdapter r0 = (com.google.gson.annotations.JsonAdapter) r0
            r1 = 0
            if (r0 == 0) goto L38
            com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r1 = r14.jsonAdapterFactory
            com.google.gson.internal.ConstructorConstructor r5 = r14.constructorConstructor
            com.google.gson.TypeAdapter r1 = r1.getTypeAdapter(r5, r10, r11, r0)
        L38:
            if (r1 == 0) goto L3c
            r8 = 1
            goto L3d
        L3c:
            r8 = 0
        L3d:
            if (r1 != 0) goto L45
            com.google.gson.TypeAdapter r0 = r10.getAdapter(r11)
            r9 = r0
            goto L46
        L45:
            r9 = r1
        L46:
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$1 r15 = new com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$1
            r0 = r15
            r1 = r16
            r2 = r20
            r3 = r18
            r4 = r22
            r5 = r23
            r6 = r24
            r7 = r19
            r10 = r17
            r11 = r21
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return r15
    }

    private java.util.Map<java.lang.String, com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField> getBoundFields(com.google.gson.Gson r29, com.google.gson.reflect.TypeToken<?> r30, java.lang.Class<?> r31, boolean r32, boolean r33) {
            r28 = this;
            r9 = r28
            r10 = r31
            java.util.LinkedHashMap r11 = new java.util.LinkedHashMap
            r11.<init>()
            boolean r0 = r31.isInterface()
            if (r0 == 0) goto L10
            return r11
        L10:
            r13 = r30
            r0 = r32
            r12 = r10
        L15:
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            if (r12 == r1) goto L1ac
            java.lang.reflect.Field[] r14 = r12.getDeclaredFields()
            r15 = 1
            r8 = 0
            if (r12 == r10) goto L5a
            int r1 = r14.length
            if (r1 <= 0) goto L5a
            java.util.List<com.google.gson.ReflectionAccessFilter> r0 = r9.reflectionFilters
            com.google.gson.ReflectionAccessFilter$FilterResult r0 = com.google.gson.internal.ReflectionAccessFilterHelper.getFilterResult(r0, r12)
            com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_ALL
            if (r0 == r1) goto L36
            com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_INACCESSIBLE
            if (r0 != r1) goto L34
            r0 = 1
            goto L5a
        L34:
            r0 = 0
            goto L5a
        L36:
            com.google.gson.JsonIOException r0 = new com.google.gson.JsonIOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ReflectionAccessFilter does not permit using reflection for "
            r1.append(r2)
            r1.append(r12)
            java.lang.String r2 = " (supertype of "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r2 = "). Register a TypeAdapter for this type or adjust the access filter."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L5a:
            r16 = r0
            int r7 = r14.length
            r6 = 0
        L5e:
            if (r6 >= r7) goto L192
            r5 = r14[r6]
            boolean r0 = r9.includeField(r5, r15)
            boolean r1 = r9.includeField(r5, r8)
            if (r0 != 0) goto L76
            if (r1 != 0) goto L76
            r21 = r6
            r26 = r7
            r27 = 0
            goto L149
        L76:
            r2 = 0
            if (r33 == 0) goto Lc7
            int r3 = r5.getModifiers()
            boolean r3 = java.lang.reflect.Modifier.isStatic(r3)
            if (r3 == 0) goto L88
            r17 = r2
            r18 = 0
            goto Lcb
        L88:
            java.lang.reflect.Method r3 = com.google.gson.internal.reflect.ReflectionHelper.getAccessor(r12, r5)
            if (r16 != 0) goto L91
            com.google.gson.internal.reflect.ReflectionHelper.makeAccessible(r3)
        L91:
            java.lang.Class<com.google.gson.annotations.SerializedName> r4 = com.google.gson.annotations.SerializedName.class
            java.lang.annotation.Annotation r4 = r3.getAnnotation(r4)
            if (r4 == 0) goto Lc2
            java.lang.Class<com.google.gson.annotations.SerializedName> r4 = com.google.gson.annotations.SerializedName.class
            java.lang.annotation.Annotation r4 = r5.getAnnotation(r4)
            if (r4 == 0) goto La2
            goto Lc2
        La2:
            java.lang.String r0 = com.google.gson.internal.reflect.ReflectionHelper.getAccessibleObjectDescription(r3, r8)
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "@SerializedName on "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = " is not supported"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        Lc2:
            r18 = r1
            r17 = r3
            goto Lcb
        Lc7:
            r18 = r1
            r17 = r2
        Lcb:
            if (r16 != 0) goto Ld2
            if (r17 != 0) goto Ld2
            com.google.gson.internal.reflect.ReflectionHelper.makeAccessible(r5)
        Ld2:
            java.lang.reflect.Type r1 = r13.getType()
            java.lang.reflect.Type r3 = r5.getGenericType()
            java.lang.reflect.Type r19 = com.google.gson.internal.$Gson$Types.resolve(r1, r12, r3)
            java.util.List r4 = r9.getFieldNames(r5)
            int r3 = r4.size()
            r1 = r2
            r2 = 0
        Le8:
            if (r2 >= r3) goto L13e
            java.lang.Object r20 = r4.get(r2)
            r15 = r20
            java.lang.String r15 = (java.lang.String) r15
            if (r2 == 0) goto Lf7
            r20 = 0
            goto Lf9
        Lf7:
            r20 = r0
        Lf9:
            com.google.gson.reflect.TypeToken r21 = com.google.gson.reflect.TypeToken.get(r19)
            r0 = r28
            r9 = r1
            r1 = r29
            r22 = r2
            r2 = r5
            r23 = r3
            r3 = r17
            r24 = r4
            r4 = r15
            r25 = r5
            r5 = r21
            r21 = r6
            r6 = r20
            r26 = r7
            r7 = r18
            r27 = 0
            r8 = r16
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r0 = r0.createBoundField(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.Object r0 = r11.put(r15, r0)
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$BoundField r0 = (com.google.gson.internal.bind.ReflectiveTypeAdapterFactory.BoundField) r0
            if (r9 != 0) goto L12a
            r1 = r0
            goto L12b
        L12a:
            r1 = r9
        L12b:
            int r2 = r22 + 1
            r9 = r28
            r0 = r20
            r6 = r21
            r3 = r23
            r4 = r24
            r5 = r25
            r7 = r26
            r8 = 0
            r15 = 1
            goto Le8
        L13e:
            r9 = r1
            r25 = r5
            r21 = r6
            r26 = r7
            r27 = 0
            if (r9 != 0) goto L153
        L149:
            int r6 = r21 + 1
            r8 = 0
            r15 = 1
            r9 = r28
            r7 = r26
            goto L5e
        L153:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Class "
            r1.append(r2)
            java.lang.String r2 = r31.getName()
            r1.append(r2)
            java.lang.String r2 = " declares multiple JSON fields named '"
            r1.append(r2)
            java.lang.String r2 = r9.name
            r1.append(r2)
            java.lang.String r2 = "'; conflict is caused by fields "
            r1.append(r2)
            java.lang.reflect.Field r2 = r9.field
            java.lang.String r2 = com.google.gson.internal.reflect.ReflectionHelper.fieldToString(r2)
            r1.append(r2)
            java.lang.String r2 = " and "
            r1.append(r2)
            java.lang.String r2 = com.google.gson.internal.reflect.ReflectionHelper.fieldToString(r25)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L192:
            java.lang.reflect.Type r0 = r13.getType()
            java.lang.reflect.Type r1 = r12.getGenericSuperclass()
            java.lang.reflect.Type r0 = com.google.gson.internal.$Gson$Types.resolve(r0, r12, r1)
            com.google.gson.reflect.TypeToken r13 = com.google.gson.reflect.TypeToken.get(r0)
            java.lang.Class r12 = r13.getRawType()
            r9 = r28
            r0 = r16
            goto L15
        L1ac:
            return r11
    }

    private java.util.List<java.lang.String> getFieldNames(java.lang.reflect.Field r4) {
            r3 = this;
            java.lang.Class<com.google.gson.annotations.SerializedName> r0 = com.google.gson.annotations.SerializedName.class
            java.lang.annotation.Annotation r0 = r4.getAnnotation(r0)
            com.google.gson.annotations.SerializedName r0 = (com.google.gson.annotations.SerializedName) r0
            if (r0 != 0) goto L15
            com.google.gson.FieldNamingStrategy r0 = r3.fieldNamingPolicy
            java.lang.String r4 = r0.translateName(r4)
            java.util.List r4 = java.util.Collections.singletonList(r4)
            return r4
        L15:
            java.lang.String r4 = r0.value()
            java.lang.String[] r0 = r0.alternate()
            int r1 = r0.length
            if (r1 != 0) goto L25
            java.util.List r4 = java.util.Collections.singletonList(r4)
            return r4
        L25:
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.length
            int r2 = r2 + 1
            r1.<init>(r2)
            r1.add(r4)
            java.util.Collections.addAll(r1, r0)
            return r1
    }

    private boolean includeField(java.lang.reflect.Field r3, boolean r4) {
            r2 = this;
            com.google.gson.internal.Excluder r0 = r2.excluder
            java.lang.Class r1 = r3.getType()
            boolean r0 = r0.excludeClass(r1, r4)
            if (r0 != 0) goto L16
            com.google.gson.internal.Excluder r0 = r2.excluder
            boolean r3 = r0.excludeField(r3, r4)
            if (r3 != 0) goto L16
            r3 = 1
            goto L17
        L16:
            r3 = 0
        L17:
            return r3
    }

    @Override
    public <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r11, com.google.gson.reflect.TypeToken<T> r12) {
            r10 = this;
            java.lang.Class r6 = r12.getRawType()
            java.lang.Class<java.lang.Object> r0 = java.lang.Object.class
            boolean r0 = r0.isAssignableFrom(r6)
            if (r0 != 0) goto Le
            r11 = 0
            return r11
        Le:
            java.util.List<com.google.gson.ReflectionAccessFilter> r0 = r10.reflectionFilters
            com.google.gson.ReflectionAccessFilter$FilterResult r0 = com.google.gson.internal.ReflectionAccessFilterHelper.getFilterResult(r0, r6)
            com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_ALL
            if (r0 == r1) goto L4d
            com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_INACCESSIBLE
            if (r0 != r1) goto L1f
            r0 = 1
            r7 = 1
            goto L21
        L1f:
            r0 = 0
            r7 = 0
        L21:
            boolean r0 = com.google.gson.internal.reflect.ReflectionHelper.isRecord(r6)
            if (r0 == 0) goto L37
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$RecordAdapter r8 = new com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$RecordAdapter
            r5 = 1
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r6
            r4 = r7
            java.util.Map r11 = r0.getBoundFields(r1, r2, r3, r4, r5)
            r8.<init>(r6, r11, r7)
            return r8
        L37:
            com.google.gson.internal.ConstructorConstructor r0 = r10.constructorConstructor
            com.google.gson.internal.ObjectConstructor r8 = r0.get(r12)
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$FieldReflectionAdapter r9 = new com.google.gson.internal.bind.ReflectiveTypeAdapterFactory$FieldReflectionAdapter
            r5 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r6
            r4 = r7
            java.util.Map r11 = r0.getBoundFields(r1, r2, r3, r4, r5)
            r9.<init>(r8, r11)
            return r9
        L4d:
            com.google.gson.JsonIOException r11 = new com.google.gson.JsonIOException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "ReflectionAccessFilter does not permit using reflection for "
            r12.append(r0)
            r12.append(r6)
            java.lang.String r0 = ". Register a TypeAdapter for this type or adjust the access filter."
            r12.append(r0)
            java.lang.String r12 = r12.toString()
            r11.<init>(r12)
            throw r11
    }
}
