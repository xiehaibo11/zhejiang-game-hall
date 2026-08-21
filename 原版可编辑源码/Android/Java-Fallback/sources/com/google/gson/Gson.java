package com.google.gson;

public final class Gson {
    static final boolean DEFAULT_COMPLEX_MAP_KEYS = false;
    static final boolean DEFAULT_ESCAPE_HTML = true;
    static final boolean DEFAULT_JSON_NON_EXECUTABLE = false;
    static final boolean DEFAULT_LENIENT = false;
    static final boolean DEFAULT_PRETTY_PRINT = false;
    static final boolean DEFAULT_SERIALIZE_NULLS = false;
    static final boolean DEFAULT_SPECIALIZE_FLOAT_VALUES = false;
    private static final java.lang.String JSON_NON_EXECUTABLE_PREFIX = ")]}'\n";
    private static final com.google.gson.reflect.TypeToken<?> NULL_KEY_SURROGATE = null;
    final java.util.List<com.google.gson.TypeAdapterFactory> builderFactories;
    final java.util.List<com.google.gson.TypeAdapterFactory> builderHierarchyFactories;
    private final java.lang.ThreadLocal<java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.Gson.FutureTypeAdapter<?>>> calls;
    final boolean complexMapKeySerialization;
    private final com.google.gson.internal.ConstructorConstructor constructorConstructor;
    final java.lang.String datePattern;
    final int dateStyle;
    final com.google.gson.internal.Excluder excluder;
    final java.util.List<com.google.gson.TypeAdapterFactory> factories;
    final com.google.gson.FieldNamingStrategy fieldNamingStrategy;
    final boolean generateNonExecutableJson;
    final boolean htmlSafe;
    final java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> instanceCreators;
    private final com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory jsonAdapterFactory;
    final boolean lenient;
    final com.google.gson.LongSerializationPolicy longSerializationPolicy;
    final boolean prettyPrinting;
    final boolean serializeNulls;
    final boolean serializeSpecialFloatingPointValues;
    final int timeStyle;
    private final java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.TypeAdapter<?>> typeTokenCache;






    static class 6 extends com.google.gson.TypeAdapter<java.util.concurrent.atomic.AtomicLongArray> {
        final com.google.gson.TypeAdapter val$longAdapter;

        6(com.google.gson.TypeAdapter r1) {
                r0 = this;
                r0.val$longAdapter = r1
                r0.<init>()
                return
        }

        @Override
        public java.util.concurrent.atomic.AtomicLongArray read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
                r0 = this;
                java.util.concurrent.atomic.AtomicLongArray r1 = r0.read(r1)
                return r1
        }

        @Override
        public java.util.concurrent.atomic.AtomicLongArray read(com.google.gson.stream.JsonReader r6) throws java.io.IOException {
                r5 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r6.beginArray()
            L8:
                boolean r1 = r6.hasNext()
                if (r1 == 0) goto L22
                com.google.gson.TypeAdapter r1 = r5.val$longAdapter
                java.lang.Object r1 = r1.read(r6)
                java.lang.Number r1 = (java.lang.Number) r1
                long r1 = r1.longValue()
                java.lang.Long r1 = java.lang.Long.valueOf(r1)
                r0.add(r1)
                goto L8
            L22:
                r6.endArray()
                int r6 = r0.size()
                java.util.concurrent.atomic.AtomicLongArray r1 = new java.util.concurrent.atomic.AtomicLongArray
                r1.<init>(r6)
                r2 = 0
            L2f:
                if (r2 >= r6) goto L41
                java.lang.Object r3 = r0.get(r2)
                java.lang.Long r3 = (java.lang.Long) r3
                long r3 = r3.longValue()
                r1.set(r2, r3)
                int r2 = r2 + 1
                goto L2f
            L41:
                return r1
        }

        @Override
        public void write(com.google.gson.stream.JsonWriter r1, java.util.concurrent.atomic.AtomicLongArray r2) throws java.io.IOException {
                r0 = this;
                java.util.concurrent.atomic.AtomicLongArray r2 = (java.util.concurrent.atomic.AtomicLongArray) r2
                r0.write(r1, r2)
                return
        }

        public void write(com.google.gson.stream.JsonWriter r6, java.util.concurrent.atomic.AtomicLongArray r7) throws java.io.IOException {
                r5 = this;
                r6.beginArray()
                int r0 = r7.length()
                r1 = 0
            L8:
                if (r1 >= r0) goto L1a
                com.google.gson.TypeAdapter r2 = r5.val$longAdapter
                long r3 = r7.get(r1)
                java.lang.Long r3 = java.lang.Long.valueOf(r3)
                r2.write(r6, r3)
                int r1 = r1 + 1
                goto L8
            L1a:
                r6.endArray()
                return
        }
    }

    static class FutureTypeAdapter<T> extends com.google.gson.TypeAdapter<T> {
        private com.google.gson.TypeAdapter<T> delegate;

        FutureTypeAdapter() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public T read(com.google.gson.stream.JsonReader r2) throws java.io.IOException {
                r1 = this;
                com.google.gson.TypeAdapter<T> r0 = r1.delegate
                if (r0 == 0) goto L9
                java.lang.Object r0 = r0.read(r2)
                return r0
            L9:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }

        public void setDelegate(com.google.gson.TypeAdapter<T> r2) {
                r1 = this;
                com.google.gson.TypeAdapter<T> r0 = r1.delegate
                if (r0 != 0) goto L7
                r1.delegate = r2
                return
            L7:
                java.lang.AssertionError r0 = new java.lang.AssertionError
                r0.<init>()
                throw r0
        }

        @Override
        public void write(com.google.gson.stream.JsonWriter r2, T r3) throws java.io.IOException {
                r1 = this;
                com.google.gson.TypeAdapter<T> r0 = r1.delegate
                if (r0 == 0) goto L8
                r0.write(r2, r3)
                return
            L8:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }
    }

    static {
            java.lang.Class<java.lang.Object> r0 = java.lang.Object.class
            com.google.gson.reflect.TypeToken r0 = com.google.gson.reflect.TypeToken.get(r0)
            com.google.gson.Gson.NULL_KEY_SURROGATE = r0
            return
    }

    public Gson() {
            r18 = this;
            r0 = r18
            com.google.gson.internal.Excluder r1 = com.google.gson.internal.Excluder.DEFAULT
            com.google.gson.FieldNamingPolicy r2 = com.google.gson.FieldNamingPolicy.IDENTITY
            java.util.Map r3 = java.util.Collections.emptyMap()
            com.google.gson.LongSerializationPolicy r11 = com.google.gson.LongSerializationPolicy.DEFAULT
            java.util.List r15 = java.util.Collections.emptyList()
            java.util.List r16 = java.util.Collections.emptyList()
            java.util.List r17 = java.util.Collections.emptyList()
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 1
            r8 = 0
            r9 = 0
            r10 = 0
            r12 = 0
            r13 = 2
            r14 = 2
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
            return
    }

    Gson(com.google.gson.internal.Excluder r19, com.google.gson.FieldNamingStrategy r20, java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r21, boolean r22, boolean r23, boolean r24, boolean r25, boolean r26, boolean r27, boolean r28, com.google.gson.LongSerializationPolicy r29, java.lang.String r30, int r31, int r32, java.util.List<com.google.gson.TypeAdapterFactory> r33, java.util.List<com.google.gson.TypeAdapterFactory> r34, java.util.List<com.google.gson.TypeAdapterFactory> r35) {
            r18 = this;
            r0 = r18
            r1 = r19
            r2 = r20
            r3 = r21
            r4 = r23
            r5 = r28
            r18.<init>()
            java.lang.ThreadLocal r6 = new java.lang.ThreadLocal
            r6.<init>()
            r0.calls = r6
            java.util.concurrent.ConcurrentHashMap r6 = new java.util.concurrent.ConcurrentHashMap
            r6.<init>()
            r0.typeTokenCache = r6
            r0.excluder = r1
            r0.fieldNamingStrategy = r2
            r0.instanceCreators = r3
            com.google.gson.internal.ConstructorConstructor r6 = new com.google.gson.internal.ConstructorConstructor
            r6.<init>(r3)
            r0.constructorConstructor = r6
            r6 = r22
            r0.serializeNulls = r6
            r0.complexMapKeySerialization = r4
            r7 = r24
            r0.generateNonExecutableJson = r7
            r8 = r25
            r0.htmlSafe = r8
            r9 = r26
            r0.prettyPrinting = r9
            r10 = r27
            r0.lenient = r10
            r0.serializeSpecialFloatingPointValues = r5
            r11 = r29
            r0.longSerializationPolicy = r11
            r12 = r30
            r0.datePattern = r12
            r13 = r31
            r0.dateStyle = r13
            r14 = r32
            r0.timeStyle = r14
            r15 = r33
            r0.builderFactories = r15
            r3 = r34
            r0.builderHierarchyFactories = r3
            java.util.ArrayList r16 = new java.util.ArrayList
            r16.<init>()
            r17 = r16
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.JSON_ELEMENT_FACTORY
            r6 = r17
            r6.add(r3)
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.ObjectTypeAdapter.FACTORY
            r6.add(r3)
            r6.add(r1)
            r3 = r35
            r6.addAll(r3)
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.STRING_FACTORY
            r6.add(r3)
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.INTEGER_FACTORY
            r6.add(r3)
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.BOOLEAN_FACTORY
            r6.add(r3)
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.BYTE_FACTORY
            r6.add(r3)
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.SHORT_FACTORY
            r6.add(r3)
            com.google.gson.TypeAdapter r3 = longAdapter(r29)
            java.lang.Class r7 = java.lang.Long.TYPE
            java.lang.Class<java.lang.Long> r8 = java.lang.Long.class
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8, r3)
            r6.add(r7)
            java.lang.Class r7 = java.lang.Double.TYPE
            java.lang.Class<java.lang.Double> r8 = java.lang.Double.class
            com.google.gson.TypeAdapter r9 = r0.doubleAdapter(r5)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8, r9)
            r6.add(r7)
            java.lang.Class r7 = java.lang.Float.TYPE
            java.lang.Class<java.lang.Float> r8 = java.lang.Float.class
            com.google.gson.TypeAdapter r9 = r0.floatAdapter(r5)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8, r9)
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.NUMBER_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.ATOMIC_INTEGER_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.ATOMIC_BOOLEAN_FACTORY
            r6.add(r7)
            java.lang.Class<java.util.concurrent.atomic.AtomicLong> r7 = java.util.concurrent.atomic.AtomicLong.class
            com.google.gson.TypeAdapter r8 = atomicLongAdapter(r3)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8)
            r6.add(r7)
            java.lang.Class<java.util.concurrent.atomic.AtomicLongArray> r7 = java.util.concurrent.atomic.AtomicLongArray.class
            com.google.gson.TypeAdapter r8 = atomicLongArrayAdapter(r3)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8)
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.ATOMIC_INTEGER_ARRAY_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.CHARACTER_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.STRING_BUILDER_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.STRING_BUFFER_FACTORY
            r6.add(r7)
            java.lang.Class<java.math.BigDecimal> r7 = java.math.BigDecimal.class
            com.google.gson.TypeAdapter<java.math.BigDecimal> r8 = com.google.gson.internal.bind.TypeAdapters.BIG_DECIMAL
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8)
            r6.add(r7)
            java.lang.Class<java.math.BigInteger> r7 = java.math.BigInteger.class
            com.google.gson.TypeAdapter<java.math.BigInteger> r8 = com.google.gson.internal.bind.TypeAdapters.BIG_INTEGER
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.newFactory(r7, r8)
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.URL_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.URI_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.UUID_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.CURRENCY_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.LOCALE_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.INET_ADDRESS_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.BIT_SET_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.DateTypeAdapter.FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.CALENDAR_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TimeTypeAdapter.FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.SqlDateTypeAdapter.FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.TIMESTAMP_FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.ArrayTypeAdapter.FACTORY
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.CLASS_FACTORY
            r6.add(r7)
            com.google.gson.internal.bind.CollectionTypeAdapterFactory r7 = new com.google.gson.internal.bind.CollectionTypeAdapterFactory
            com.google.gson.internal.ConstructorConstructor r8 = r0.constructorConstructor
            r7.<init>(r8)
            r6.add(r7)
            com.google.gson.internal.bind.MapTypeAdapterFactory r7 = new com.google.gson.internal.bind.MapTypeAdapterFactory
            com.google.gson.internal.ConstructorConstructor r8 = r0.constructorConstructor
            r7.<init>(r8, r4)
            r6.add(r7)
            com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r7 = new com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory
            com.google.gson.internal.ConstructorConstructor r8 = r0.constructorConstructor
            r7.<init>(r8)
            r0.jsonAdapterFactory = r7
            com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r7 = r0.jsonAdapterFactory
            r6.add(r7)
            com.google.gson.TypeAdapterFactory r7 = com.google.gson.internal.bind.TypeAdapters.ENUM_FACTORY
            r6.add(r7)
            com.google.gson.internal.bind.ReflectiveTypeAdapterFactory r7 = new com.google.gson.internal.bind.ReflectiveTypeAdapterFactory
            com.google.gson.internal.ConstructorConstructor r8 = r0.constructorConstructor
            com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r9 = r0.jsonAdapterFactory
            r7.<init>(r8, r2, r1, r9)
            r6.add(r7)
            java.util.List r7 = java.util.Collections.unmodifiableList(r6)
            r0.factories = r7
            return
    }

    private static void assertFullConsumption(java.lang.Object r2, com.google.gson.stream.JsonReader r3) {
            if (r2 == 0) goto L21
            com.google.gson.stream.JsonToken r0 = r3.peek()     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_DOCUMENT     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
            if (r0 != r1) goto Lb
            goto L21
        Lb:
            com.google.gson.JsonIOException r0 = new com.google.gson.JsonIOException     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
            java.lang.String r1 = "JSON document was not fully consumed."
            r0.<init>(r1)     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
            throw r0     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
        L13:
            r0 = move-exception
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            r1.<init>(r0)
            throw r1
        L1a:
            r0 = move-exception
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException
            r1.<init>(r0)
            throw r1
        L21:
            return
    }

    private static com.google.gson.TypeAdapter<java.util.concurrent.atomic.AtomicLong> atomicLongAdapter(com.google.gson.TypeAdapter<java.lang.Number> r1) {
            com.google.gson.Gson$4 r0 = new com.google.gson.Gson$4
            r0.<init>(r1)
            com.google.gson.TypeAdapter r0 = r0.nullSafe()
            return r0
    }

    private static com.google.gson.TypeAdapter<java.util.concurrent.atomic.AtomicLongArray> atomicLongArrayAdapter(com.google.gson.TypeAdapter<java.lang.Number> r1) {
            com.google.gson.Gson$5 r0 = new com.google.gson.Gson$5
            r0.<init>(r1)
            com.google.gson.TypeAdapter r0 = r0.nullSafe()
            return r0
    }

    static void checkValidFloatingPoint(double r3) {
            boolean r0 = java.lang.Double.isNaN(r3)
            if (r0 != 0) goto Ld
            boolean r0 = java.lang.Double.isInfinite(r3)
            if (r0 != 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = " is not a valid double value as per JSON specification. To override this behavior, use GsonBuilder.serializeSpecialFloatingPointValues() method."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private com.google.gson.TypeAdapter<java.lang.Number> doubleAdapter(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L5
            com.google.gson.TypeAdapter<java.lang.Number> r0 = com.google.gson.internal.bind.TypeAdapters.DOUBLE
            return r0
        L5:
            com.google.gson.Gson$1 r0 = new com.google.gson.Gson$1
            r0.<init>(r1)
            return r0
    }

    private com.google.gson.TypeAdapter<java.lang.Number> floatAdapter(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L5
            com.google.gson.TypeAdapter<java.lang.Number> r0 = com.google.gson.internal.bind.TypeAdapters.FLOAT
            return r0
        L5:
            com.google.gson.Gson$2 r0 = new com.google.gson.Gson$2
            r0.<init>(r1)
            return r0
    }

    private static com.google.gson.TypeAdapter<java.lang.Number> longAdapter(com.google.gson.LongSerializationPolicy r1) {
            com.google.gson.LongSerializationPolicy r0 = com.google.gson.LongSerializationPolicy.DEFAULT
            if (r1 != r0) goto L7
            com.google.gson.TypeAdapter<java.lang.Number> r0 = com.google.gson.internal.bind.TypeAdapters.LONG
            return r0
        L7:
            com.google.gson.Gson$3 r0 = new com.google.gson.Gson$3
            r0.<init>()
            return r0
    }

    public com.google.gson.internal.Excluder excluder() {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.excluder
            return r0
    }

    public com.google.gson.FieldNamingStrategy fieldNamingStrategy() {
            r1 = this;
            com.google.gson.FieldNamingStrategy r0 = r1.fieldNamingStrategy
            return r0
    }

    public <T> T fromJson(com.google.gson.JsonElement r3, java.lang.Class<T> r4) throws com.google.gson.JsonSyntaxException {
            r2 = this;
            java.lang.Object r0 = r2.fromJson(r3, r4)
            java.lang.Class r1 = com.google.gson.internal.Primitives.wrap(r4)
            java.lang.Object r1 = r1.cast(r0)
            return r1
    }

    public <T> T fromJson(com.google.gson.JsonElement r2, java.lang.reflect.Type r3) throws com.google.gson.JsonSyntaxException {
            r1 = this;
            if (r2 != 0) goto L4
            r0 = 0
            return r0
        L4:
            com.google.gson.internal.bind.JsonTreeReader r0 = new com.google.gson.internal.bind.JsonTreeReader
            r0.<init>(r2)
            java.lang.Object r0 = r1.fromJson(r0, r3)
            return r0
    }

    public <T> T fromJson(com.google.gson.stream.JsonReader r7, java.lang.reflect.Type r8) throws com.google.gson.JsonIOException, com.google.gson.JsonSyntaxException {
            r6 = this;
            r0 = 1
            boolean r1 = r7.isLenient()
            r2 = 1
            r7.setLenient(r2)
            r7.peek()     // Catch: java.lang.Throwable -> L1e java.lang.AssertionError -> L20 java.io.IOException -> L3c java.lang.IllegalStateException -> L43 java.io.EOFException -> L4a
            r0 = 0
            com.google.gson.reflect.TypeToken r2 = com.google.gson.reflect.TypeToken.get(r8)     // Catch: java.lang.Throwable -> L1e java.lang.AssertionError -> L20 java.io.IOException -> L3c java.lang.IllegalStateException -> L43 java.io.EOFException -> L4a
            com.google.gson.TypeAdapter r3 = r6.getAdapter(r2)     // Catch: java.lang.Throwable -> L1e java.lang.AssertionError -> L20 java.io.IOException -> L3c java.lang.IllegalStateException -> L43 java.io.EOFException -> L4a
            java.lang.Object r4 = r3.read(r7)     // Catch: java.lang.Throwable -> L1e java.lang.AssertionError -> L20 java.io.IOException -> L3c java.lang.IllegalStateException -> L43 java.io.EOFException -> L4a
            r7.setLenient(r1)
            return r4
        L1e:
            r2 = move-exception
            goto L58
        L20:
            r2 = move-exception
            java.lang.AssertionError r3 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L1e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e
            r4.<init>()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r5 = "AssertionError (GSON 2.8.5): "
            r4.append(r5)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r5 = r2.getMessage()     // Catch: java.lang.Throwable -> L1e
            r4.append(r5)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L1e
            r3.<init>(r4, r2)     // Catch: java.lang.Throwable -> L1e
            throw r3     // Catch: java.lang.Throwable -> L1e
        L3c:
            r2 = move-exception
            com.google.gson.JsonSyntaxException r3 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L1e
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            throw r3     // Catch: java.lang.Throwable -> L1e
        L43:
            r2 = move-exception
            com.google.gson.JsonSyntaxException r3 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L1e
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            throw r3     // Catch: java.lang.Throwable -> L1e
        L4a:
            r2 = move-exception
            if (r0 == 0) goto L52
            r3 = 0
            r7.setLenient(r1)
            return r3
        L52:
            com.google.gson.JsonSyntaxException r3 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L1e
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            throw r3     // Catch: java.lang.Throwable -> L1e
        L58:
            r7.setLenient(r1)
            throw r2
    }

    public <T> T fromJson(java.io.Reader r4, java.lang.Class<T> r5) throws com.google.gson.JsonSyntaxException, com.google.gson.JsonIOException {
            r3 = this;
            com.google.gson.stream.JsonReader r0 = r3.newJsonReader(r4)
            java.lang.Object r1 = r3.fromJson(r0, r5)
            assertFullConsumption(r1, r0)
            java.lang.Class r2 = com.google.gson.internal.Primitives.wrap(r5)
            java.lang.Object r2 = r2.cast(r1)
            return r2
    }

    public <T> T fromJson(java.io.Reader r3, java.lang.reflect.Type r4) throws com.google.gson.JsonIOException, com.google.gson.JsonSyntaxException {
            r2 = this;
            com.google.gson.stream.JsonReader r0 = r2.newJsonReader(r3)
            java.lang.Object r1 = r2.fromJson(r0, r4)
            assertFullConsumption(r1, r0)
            return r1
    }

    public <T> T fromJson(java.lang.String r3, java.lang.Class<T> r4) throws com.google.gson.JsonSyntaxException {
            r2 = this;
            java.lang.Object r0 = r2.fromJson(r3, r4)
            java.lang.Class r1 = com.google.gson.internal.Primitives.wrap(r4)
            java.lang.Object r1 = r1.cast(r0)
            return r1
    }

    public <T> T fromJson(java.lang.String r3, java.lang.reflect.Type r4) throws com.google.gson.JsonSyntaxException {
            r2 = this;
            if (r3 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r3)
            java.lang.Object r1 = r2.fromJson(r0, r4)
            return r1
    }

    public <T> com.google.gson.TypeAdapter<T> getAdapter(com.google.gson.reflect.TypeToken<T> r9) {
            r8 = this;
            java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.TypeAdapter<?>> r0 = r8.typeTokenCache
            if (r9 != 0) goto L7
            com.google.gson.reflect.TypeToken<?> r1 = com.google.gson.Gson.NULL_KEY_SURROGATE
            goto L8
        L7:
            r1 = r9
        L8:
            java.lang.Object r0 = r0.get(r1)
            com.google.gson.TypeAdapter r0 = (com.google.gson.TypeAdapter) r0
            if (r0 == 0) goto L11
            return r0
        L11:
            java.lang.ThreadLocal<java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.Gson$FutureTypeAdapter<?>>> r1 = r8.calls
            java.lang.Object r1 = r1.get()
            java.util.Map r1 = (java.util.Map) r1
            r2 = 0
            if (r1 != 0) goto L28
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r1 = r3
            java.lang.ThreadLocal<java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.Gson$FutureTypeAdapter<?>>> r3 = r8.calls
            r3.set(r1)
            r2 = 1
        L28:
            java.lang.Object r3 = r1.get(r9)
            com.google.gson.Gson$FutureTypeAdapter r3 = (com.google.gson.Gson.FutureTypeAdapter) r3
            if (r3 == 0) goto L31
            return r3
        L31:
            com.google.gson.Gson$FutureTypeAdapter r4 = new com.google.gson.Gson$FutureTypeAdapter     // Catch: java.lang.Throwable -> L7d
            r4.<init>()     // Catch: java.lang.Throwable -> L7d
            r1.put(r9, r4)     // Catch: java.lang.Throwable -> L7d
            java.util.List<com.google.gson.TypeAdapterFactory> r5 = r8.factories     // Catch: java.lang.Throwable -> L7d
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L7d
        L3f:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L7d
            if (r6 == 0) goto L66
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L7d
            com.google.gson.TypeAdapterFactory r6 = (com.google.gson.TypeAdapterFactory) r6     // Catch: java.lang.Throwable -> L7d
            com.google.gson.TypeAdapter r7 = r6.create(r8, r9)     // Catch: java.lang.Throwable -> L7d
            if (r7 == 0) goto L65
            r4.setDelegate(r7)     // Catch: java.lang.Throwable -> L7d
            java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.TypeAdapter<?>> r5 = r8.typeTokenCache     // Catch: java.lang.Throwable -> L7d
            r5.put(r9, r7)     // Catch: java.lang.Throwable -> L7d
            r1.remove(r9)
            if (r2 == 0) goto L64
            java.lang.ThreadLocal<java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.Gson$FutureTypeAdapter<?>>> r5 = r8.calls
            r5.remove()
        L64:
            return r7
        L65:
            goto L3f
        L66:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r6.<init>()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r7 = "GSON (2.8.5) cannot handle "
            r6.append(r7)     // Catch: java.lang.Throwable -> L7d
            r6.append(r9)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L7d
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L7d
            throw r5     // Catch: java.lang.Throwable -> L7d
        L7d:
            r4 = move-exception
            r1.remove(r9)
            if (r2 == 0) goto L88
            java.lang.ThreadLocal<java.util.Map<com.google.gson.reflect.TypeToken<?>, com.google.gson.Gson$FutureTypeAdapter<?>>> r5 = r8.calls
            r5.remove()
        L88:
            throw r4
    }

    public <T> com.google.gson.TypeAdapter<T> getAdapter(java.lang.Class<T> r2) {
            r1 = this;
            com.google.gson.reflect.TypeToken r0 = com.google.gson.reflect.TypeToken.get(r2)
            com.google.gson.TypeAdapter r0 = r1.getAdapter(r0)
            return r0
    }

    public <T> com.google.gson.TypeAdapter<T> getDelegateAdapter(com.google.gson.TypeAdapterFactory r5, com.google.gson.reflect.TypeToken<T> r6) {
            r4 = this;
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r4.factories
            boolean r0 = r0.contains(r5)
            if (r0 != 0) goto La
            com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory r5 = r4.jsonAdapterFactory
        La:
            r0 = 0
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r4.factories
            java.util.Iterator r1 = r1.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r1.next()
            com.google.gson.TypeAdapterFactory r2 = (com.google.gson.TypeAdapterFactory) r2
            if (r0 != 0) goto L23
            if (r2 != r5) goto L11
            r0 = 1
            goto L11
        L23:
            com.google.gson.TypeAdapter r3 = r2.create(r4, r6)
            if (r3 == 0) goto L2a
            return r3
        L2a:
            goto L11
        L2b:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "GSON cannot serialize "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public boolean htmlSafe() {
            r1 = this;
            boolean r0 = r1.htmlSafe
            return r0
    }

    public com.google.gson.GsonBuilder newBuilder() {
            r1 = this;
            com.google.gson.GsonBuilder r0 = new com.google.gson.GsonBuilder
            r0.<init>(r1)
            return r0
    }

    public com.google.gson.stream.JsonReader newJsonReader(java.io.Reader r3) {
            r2 = this;
            com.google.gson.stream.JsonReader r0 = new com.google.gson.stream.JsonReader
            r0.<init>(r3)
            boolean r1 = r2.lenient
            r0.setLenient(r1)
            return r0
    }

    public com.google.gson.stream.JsonWriter newJsonWriter(java.io.Writer r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.generateNonExecutableJson
            if (r0 == 0) goto L9
            java.lang.String r0 = ")]}'\n"
            r3.write(r0)
        L9:
            com.google.gson.stream.JsonWriter r0 = new com.google.gson.stream.JsonWriter
            r0.<init>(r3)
            boolean r1 = r2.prettyPrinting
            if (r1 == 0) goto L17
            java.lang.String r1 = "  "
            r0.setIndent(r1)
        L17:
            boolean r1 = r2.serializeNulls
            r0.setSerializeNulls(r1)
            return r0
    }

    public boolean serializeNulls() {
            r1 = this;
            boolean r0 = r1.serializeNulls
            return r0
    }

    public java.lang.String toJson(com.google.gson.JsonElement r3) {
            r2 = this;
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            r2.toJson(r3, r0)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public java.lang.String toJson(java.lang.Object r2) {
            r1 = this;
            if (r2 != 0) goto L9
            com.google.gson.JsonNull r0 = com.google.gson.JsonNull.INSTANCE
            java.lang.String r0 = r1.toJson(r0)
            return r0
        L9:
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r1.toJson(r2, r0)
            return r0
    }

    public java.lang.String toJson(java.lang.Object r3, java.lang.reflect.Type r4) {
            r2 = this;
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            r2.toJson(r3, r4, r0)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public void toJson(com.google.gson.JsonElement r8, com.google.gson.stream.JsonWriter r9) throws com.google.gson.JsonIOException {
            r7 = this;
            boolean r0 = r9.isLenient()
            r1 = 1
            r9.setLenient(r1)
            boolean r1 = r9.isHtmlSafe()
            boolean r2 = r7.htmlSafe
            r9.setHtmlSafe(r2)
            boolean r2 = r9.getSerializeNulls()
            boolean r3 = r7.serializeNulls
            r9.setSerializeNulls(r3)
            com.google.gson.internal.Streams.write(r8, r9)     // Catch: java.lang.Throwable -> L28 java.lang.AssertionError -> L2a java.io.IOException -> L46
            r9.setLenient(r0)
            r9.setHtmlSafe(r1)
            r9.setSerializeNulls(r2)
            return
        L28:
            r3 = move-exception
            goto L4d
        L2a:
            r3 = move-exception
            java.lang.AssertionError r4 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L28
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r5.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.String r6 = "AssertionError (GSON 2.8.5): "
            r5.append(r6)     // Catch: java.lang.Throwable -> L28
            java.lang.String r6 = r3.getMessage()     // Catch: java.lang.Throwable -> L28
            r5.append(r6)     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L28
            r4.<init>(r5, r3)     // Catch: java.lang.Throwable -> L28
            throw r4     // Catch: java.lang.Throwable -> L28
        L46:
            r3 = move-exception
            com.google.gson.JsonIOException r4 = new com.google.gson.JsonIOException     // Catch: java.lang.Throwable -> L28
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L28
            throw r4     // Catch: java.lang.Throwable -> L28
        L4d:
            r9.setLenient(r0)
            r9.setHtmlSafe(r1)
            r9.setSerializeNulls(r2)
            throw r3
    }

    public void toJson(com.google.gson.JsonElement r3, java.lang.Appendable r4) throws com.google.gson.JsonIOException {
            r2 = this;
            java.io.Writer r0 = com.google.gson.internal.Streams.writerForAppendable(r4)     // Catch: java.io.IOException -> Ld
            com.google.gson.stream.JsonWriter r0 = r2.newJsonWriter(r0)     // Catch: java.io.IOException -> Ld
            r2.toJson(r3, r0)     // Catch: java.io.IOException -> Ld
            return
        Ld:
            r0 = move-exception
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            r1.<init>(r0)
            throw r1
    }

    public void toJson(java.lang.Object r2, java.lang.Appendable r3) throws com.google.gson.JsonIOException {
            r1 = this;
            if (r2 == 0) goto La
            java.lang.Class r0 = r2.getClass()
            r1.toJson(r2, r0, r3)
            goto Lf
        La:
            com.google.gson.JsonNull r0 = com.google.gson.JsonNull.INSTANCE
            r1.toJson(r0, r3)
        Lf:
            return
    }

    public void toJson(java.lang.Object r9, java.lang.reflect.Type r10, com.google.gson.stream.JsonWriter r11) throws com.google.gson.JsonIOException {
            r8 = this;
            com.google.gson.reflect.TypeToken r0 = com.google.gson.reflect.TypeToken.get(r10)
            com.google.gson.TypeAdapter r0 = r8.getAdapter(r0)
            boolean r1 = r11.isLenient()
            r2 = 1
            r11.setLenient(r2)
            boolean r2 = r11.isHtmlSafe()
            boolean r3 = r8.htmlSafe
            r11.setHtmlSafe(r3)
            boolean r3 = r11.getSerializeNulls()
            boolean r4 = r8.serializeNulls
            r11.setSerializeNulls(r4)
            r0.write(r11, r9)     // Catch: java.lang.Throwable -> L30 java.lang.AssertionError -> L32 java.io.IOException -> L4e
            r11.setLenient(r1)
            r11.setHtmlSafe(r2)
            r11.setSerializeNulls(r3)
            return
        L30:
            r4 = move-exception
            goto L55
        L32:
            r4 = move-exception
            java.lang.AssertionError r5 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L30
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            r6.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r7 = "AssertionError (GSON 2.8.5): "
            r6.append(r7)     // Catch: java.lang.Throwable -> L30
            java.lang.String r7 = r4.getMessage()     // Catch: java.lang.Throwable -> L30
            r6.append(r7)     // Catch: java.lang.Throwable -> L30
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L30
            r5.<init>(r6, r4)     // Catch: java.lang.Throwable -> L30
            throw r5     // Catch: java.lang.Throwable -> L30
        L4e:
            r4 = move-exception
            com.google.gson.JsonIOException r5 = new com.google.gson.JsonIOException     // Catch: java.lang.Throwable -> L30
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L30
            throw r5     // Catch: java.lang.Throwable -> L30
        L55:
            r11.setLenient(r1)
            r11.setHtmlSafe(r2)
            r11.setSerializeNulls(r3)
            throw r4
    }

    public void toJson(java.lang.Object r3, java.lang.reflect.Type r4, java.lang.Appendable r5) throws com.google.gson.JsonIOException {
            r2 = this;
            java.io.Writer r0 = com.google.gson.internal.Streams.writerForAppendable(r5)     // Catch: java.io.IOException -> Ld
            com.google.gson.stream.JsonWriter r0 = r2.newJsonWriter(r0)     // Catch: java.io.IOException -> Ld
            r2.toJson(r3, r4, r0)     // Catch: java.io.IOException -> Ld
            return
        Ld:
            r0 = move-exception
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            r1.<init>(r0)
            throw r1
    }

    public com.google.gson.JsonElement toJsonTree(java.lang.Object r2) {
            r1 = this;
            if (r2 != 0) goto L5
            com.google.gson.JsonNull r0 = com.google.gson.JsonNull.INSTANCE
            return r0
        L5:
            java.lang.Class r0 = r2.getClass()
            com.google.gson.JsonElement r0 = r1.toJsonTree(r2, r0)
            return r0
    }

    public com.google.gson.JsonElement toJsonTree(java.lang.Object r3, java.lang.reflect.Type r4) {
            r2 = this;
            com.google.gson.internal.bind.JsonTreeWriter r0 = new com.google.gson.internal.bind.JsonTreeWriter
            r0.<init>()
            r2.toJson(r3, r4, r0)
            com.google.gson.JsonElement r1 = r0.get()
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "{serializeNulls:"
            r0.<init>(r1)
            boolean r1 = r2.serializeNulls
            r0.append(r1)
            java.lang.String r1 = ",factories:"
            r0.append(r1)
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r2.factories
            r0.append(r1)
            java.lang.String r1 = ",instanceCreators:"
            r0.append(r1)
            com.google.gson.internal.ConstructorConstructor r1 = r2.constructorConstructor
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
