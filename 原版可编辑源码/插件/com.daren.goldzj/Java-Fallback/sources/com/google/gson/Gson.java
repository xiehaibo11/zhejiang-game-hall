package com.google.gson;

import com.google.gson.internal.ConstructorConstructor;
import com.google.gson.internal.Excluder;
import com.google.gson.internal.LazilyParsedNumber;
import com.google.gson.internal.Primitives;
import com.google.gson.internal.Streams;
import com.google.gson.internal.bind.ArrayTypeAdapter;
import com.google.gson.internal.bind.CollectionTypeAdapterFactory;
import com.google.gson.internal.bind.DateTypeAdapter;
import com.google.gson.internal.bind.JsonAdapterAnnotationTypeAdapterFactory;
import com.google.gson.internal.bind.JsonTreeReader;
import com.google.gson.internal.bind.JsonTreeWriter;
import com.google.gson.internal.bind.MapTypeAdapterFactory;
import com.google.gson.internal.bind.NumberTypeAdapter;
import com.google.gson.internal.bind.ObjectTypeAdapter;
import com.google.gson.internal.bind.ReflectiveTypeAdapterFactory;
import com.google.gson.internal.bind.SerializationDelegatingTypeAdapter;
import com.google.gson.internal.bind.TypeAdapters;
import com.google.gson.internal.sql.SqlTypesSupport;
import com.google.gson.reflect.TypeToken;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import com.google.gson.stream.MalformedJsonException;
import java.io.EOFException;
import java.io.IOException;
import java.io.Reader;
import java.io.StringReader;
import java.io.StringWriter;
import java.io.Writer;
import java.lang.reflect.Type;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.atomic.AtomicLongArray;

public final class Gson {
    static final boolean DEFAULT_COMPLEX_MAP_KEYS = false;
    static final String DEFAULT_DATE_PATTERN = null;
    static final boolean DEFAULT_ESCAPE_HTML = true;
    static final FieldNamingStrategy DEFAULT_FIELD_NAMING_STRATEGY = null;
    static final boolean DEFAULT_JSON_NON_EXECUTABLE = false;
    static final boolean DEFAULT_LENIENT = false;
    static final ToNumberStrategy DEFAULT_NUMBER_TO_NUMBER_STRATEGY = null;
    static final ToNumberStrategy DEFAULT_OBJECT_TO_NUMBER_STRATEGY = null;
    static final boolean DEFAULT_PRETTY_PRINT = false;
    static final boolean DEFAULT_SERIALIZE_NULLS = false;
    static final boolean DEFAULT_SPECIALIZE_FLOAT_VALUES = false;
    static final boolean DEFAULT_USE_JDK_UNSAFE = true;
    private static final String JSON_NON_EXECUTABLE_PREFIX = ")]}'\n";
    final List<TypeAdapterFactory> builderFactories;
    final List<TypeAdapterFactory> builderHierarchyFactories;
    final boolean complexMapKeySerialization;
    private final ConstructorConstructor constructorConstructor;
    final String datePattern;
    final int dateStyle;
    final Excluder excluder;
    final List<TypeAdapterFactory> factories;
    final FieldNamingStrategy fieldNamingStrategy;
    final boolean generateNonExecutableJson;
    final boolean htmlSafe;
    final Map<Type, InstanceCreator<?>> instanceCreators;
    private final JsonAdapterAnnotationTypeAdapterFactory jsonAdapterFactory;
    final boolean lenient;
    final LongSerializationPolicy longSerializationPolicy;
    final ToNumberStrategy numberToNumberStrategy;
    final ToNumberStrategy objectToNumberStrategy;
    final boolean prettyPrinting;
    final List<ReflectionAccessFilter> reflectionFilters;
    final boolean serializeNulls;
    final boolean serializeSpecialFloatingPointValues;
    private final ThreadLocal<Map<TypeToken<?>, TypeAdapter<?>>> threadLocalAdapterResults;
    final int timeStyle;
    private final ConcurrentMap<TypeToken<?>, TypeAdapter<?>> typeTokenCache;
    final boolean useJdkUnsafe;

    static class FutureTypeAdapter<T> extends SerializationDelegatingTypeAdapter<T> {
        private TypeAdapter<T> delegate;

        FutureTypeAdapter() {
            this.delegate = null;
        }

        public void setDelegate(TypeAdapter<T> r2) {
            if (this.delegate != null) goto L7;
            this.delegate = r2;
            return;
        L7:
            throw new AssertionError("Delegate is already set");
        }

        private TypeAdapter<T> delegate() {
            TypeAdapter<T> r0 = this.delegate;
            if (r0 == null) goto L6;
            return r0;
        L6:
            throw new IllegalStateException("Adapter for type with cyclic dependency has been used before dependency has been resolved");
        }

        @Override
        public TypeAdapter<T> getSerializationDelegate() {
            return delegate();
        }

        @Override
        public T read(JsonReader r2) throws IOException {
            return delegate().read(r2);
        }

        @Override
        public void write(JsonWriter r2, T r3) throws IOException {
            delegate().write(r2, r3);
        }
    }

    static {
        DEFAULT_FIELD_NAMING_STRATEGY = FieldNamingPolicy.IDENTITY;
        DEFAULT_OBJECT_TO_NUMBER_STRATEGY = ToNumberPolicy.DOUBLE;
        DEFAULT_NUMBER_TO_NUMBER_STRATEGY = ToNumberPolicy.LAZILY_PARSED_NUMBER;
    }

    public Gson() {
        this(Excluder.DEFAULT, DEFAULT_FIELD_NAMING_STRATEGY, Collections.emptyMap(), false, false, false, true, false, false, false, true, LongSerializationPolicy.DEFAULT, DEFAULT_DATE_PATTERN, 2, 2, Collections.emptyList(), Collections.emptyList(), Collections.emptyList(), DEFAULT_OBJECT_TO_NUMBER_STRATEGY, DEFAULT_NUMBER_TO_NUMBER_STRATEGY, Collections.emptyList());
    }

    Gson(Excluder r13, FieldNamingStrategy r14, Map<Type, InstanceCreator<?>> r15, boolean r16, boolean r17, boolean r18, boolean r19, boolean r20, boolean r21, boolean r22, boolean r23, LongSerializationPolicy r24, String r25, int r26, int r27, List<TypeAdapterFactory> r28, List<TypeAdapterFactory> r29, List<TypeAdapterFactory> r30, ToNumberStrategy r31, ToNumberStrategy r32, List<ReflectionAccessFilter> r33) {
        this.threadLocalAdapterResults = new ThreadLocal();
        this.typeTokenCache = new ConcurrentHashMap();
        this.excluder = r13;
        this.fieldNamingStrategy = r14;
        this.instanceCreators = r15;
        this.constructorConstructor = new ConstructorConstructor(r15, r23, r33);
        this.serializeNulls = r16;
        this.complexMapKeySerialization = r17;
        this.generateNonExecutableJson = r18;
        this.htmlSafe = r19;
        this.prettyPrinting = r20;
        this.lenient = r21;
        this.serializeSpecialFloatingPointValues = r22;
        this.useJdkUnsafe = r23;
        this.longSerializationPolicy = r24;
        this.datePattern = r25;
        this.dateStyle = r26;
        this.timeStyle = r27;
        this.builderFactories = r28;
        this.builderHierarchyFactories = r29;
        this.objectToNumberStrategy = r31;
        this.numberToNumberStrategy = r32;
        this.reflectionFilters = r33;
        ArrayList r9 = new ArrayList();
        r9.add(TypeAdapters.JSON_ELEMENT_FACTORY);
        r9.add(ObjectTypeAdapter.getFactory(r31));
        r9.add(r13);
        r9.addAll(r30);
        r9.add(TypeAdapters.STRING_FACTORY);
        r9.add(TypeAdapters.INTEGER_FACTORY);
        r9.add(TypeAdapters.BOOLEAN_FACTORY);
        r9.add(TypeAdapters.BYTE_FACTORY);
        r9.add(TypeAdapters.SHORT_FACTORY);
        TypeAdapter<Number> r2 = longAdapter(r24);
        r9.add(TypeAdapters.newFactory(Long.TYPE, Long.class, r2));
        r9.add(TypeAdapters.newFactory(Double.TYPE, Double.class, doubleAdapter(r22)));
        r9.add(TypeAdapters.newFactory(Float.TYPE, Float.class, floatAdapter(r22)));
        r9.add(NumberTypeAdapter.getFactory(r32));
        r9.add(TypeAdapters.ATOMIC_INTEGER_FACTORY);
        r9.add(TypeAdapters.ATOMIC_BOOLEAN_FACTORY);
        r9.add(TypeAdapters.newFactory(AtomicLong.class, atomicLongAdapter(r2)));
        r9.add(TypeAdapters.newFactory(AtomicLongArray.class, atomicLongArrayAdapter(r2)));
        r9.add(TypeAdapters.ATOMIC_INTEGER_ARRAY_FACTORY);
        r9.add(TypeAdapters.CHARACTER_FACTORY);
        r9.add(TypeAdapters.STRING_BUILDER_FACTORY);
        r9.add(TypeAdapters.STRING_BUFFER_FACTORY);
        r9.add(TypeAdapters.newFactory(BigDecimal.class, TypeAdapters.BIG_DECIMAL));
        r9.add(TypeAdapters.newFactory(BigInteger.class, TypeAdapters.BIG_INTEGER));
        r9.add(TypeAdapters.newFactory(LazilyParsedNumber.class, TypeAdapters.LAZILY_PARSED_NUMBER));
        r9.add(TypeAdapters.URL_FACTORY);
        r9.add(TypeAdapters.URI_FACTORY);
        r9.add(TypeAdapters.UUID_FACTORY);
        r9.add(TypeAdapters.CURRENCY_FACTORY);
        r9.add(TypeAdapters.LOCALE_FACTORY);
        r9.add(TypeAdapters.INET_ADDRESS_FACTORY);
        r9.add(TypeAdapters.BIT_SET_FACTORY);
        r9.add(DateTypeAdapter.FACTORY);
        r9.add(TypeAdapters.CALENDAR_FACTORY);
        if (SqlTypesSupport.SUPPORTS_SQL_TYPES == false) goto L5;
        r9.add(SqlTypesSupport.TIME_FACTORY);
        r9.add(SqlTypesSupport.DATE_FACTORY);
        r9.add(SqlTypesSupport.TIMESTAMP_FACTORY);
    L5:
        r9.add(ArrayTypeAdapter.FACTORY);
        r9.add(TypeAdapters.CLASS_FACTORY);
        r9.add(new CollectionTypeAdapterFactory(this.constructorConstructor));
        r9.add(new MapTypeAdapterFactory(this.constructorConstructor, r17));
        this.jsonAdapterFactory = new JsonAdapterAnnotationTypeAdapterFactory(this.constructorConstructor);
        r9.add(this.jsonAdapterFactory);
        r9.add(TypeAdapters.ENUM_FACTORY);
        r9.add(new ReflectiveTypeAdapterFactory(this.constructorConstructor, r14, r13, this.jsonAdapterFactory, r33));
        this.factories = Collections.unmodifiableList(r9);
    }

    public GsonBuilder newBuilder() {
        return new GsonBuilder(this);
    }

    @Deprecated
    public Excluder excluder() {
        return this.excluder;
    }

    public FieldNamingStrategy fieldNamingStrategy() {
        return this.fieldNamingStrategy;
    }

    public boolean serializeNulls() {
        return this.serializeNulls;
    }

    public boolean htmlSafe() {
        return this.htmlSafe;
    }

    private TypeAdapter<Number> doubleAdapter(boolean r1) {
        if (r1 == false) goto L6;
        return TypeAdapters.DOUBLE;
    L6:
        return new 1(this);
    }

    private TypeAdapter<Number> floatAdapter(boolean r1) {
        if (r1 == false) goto L6;
        return TypeAdapters.FLOAT;
    L6:
        return new 2(this);
    }

    static void checkValidFloatingPoint(double r2) {
        if (Double.isNaN(r2) == true) goto L8;
        if (Double.isInfinite(r2) == true) goto L8;
        return;
    L8:
        throw new IllegalArgumentException(r2 + " is not a valid double value as per JSON specification. To override this behavior, use GsonBuilder.serializeSpecialFloatingPointValues() method.");
    }

    private static TypeAdapter<Number> longAdapter(LongSerializationPolicy r1) {
        if (r1 != LongSerializationPolicy.DEFAULT) goto L7;
        return TypeAdapters.LONG;
    L7:
        return new 3();
    }

    private static TypeAdapter<AtomicLong> atomicLongAdapter(final TypeAdapter<Number> r1) {
        return new 4(r1).nullSafe();
    }

    private static TypeAdapter<AtomicLongArray> atomicLongArrayAdapter(final TypeAdapter<Number> r1) {
        return new 5(r1).nullSafe();
    }

    public <T> TypeAdapter<T> getAdapter(TypeToken<T> r7) {
        Objects.requireNonNull(r7, "type must not be null");
        TypeAdapter<T> r0 = (TypeAdapter) this.typeTokenCache.get(r7);
        if (r0 == null) goto L5;
        return r0;
    L5:
        Map<? extends TypeToken<?>, ? extends TypeAdapter<?>> r02 = this.threadLocalAdapterResults.get();
        boolean r1 = false;
        if (r02 != null) goto L8;
        r02 = new HashMap();
        this.threadLocalAdapterResults.set((Map<TypeToken<?>, TypeAdapter<?>>) r02);
        r1 = true;
    L11:
        TypeAdapter<T> r2 = null;
        FutureTypeAdapter r3 = new FutureTypeAdapter();     // Catch: Throwable -> L26
        r02.put(r7, r3);     // Catch: Throwable -> L26
        Iterator<TypeAdapterFactory> r4 = this.factories.iterator();     // Catch: Throwable -> L26
    L14:
        if (r4.hasNext() == false) goto L18;
        r2 = r4.next().create(this, r7);     // Catch: Throwable -> L26
        if (r2 == null) goto L14;
        r3.setDelegate(r2);     // Catch: Throwable -> L26
        r02.put(r7, r2);     // Catch: Throwable -> L26
    L18:
        if (r1 == false) goto L20;
        this.threadLocalAdapterResults.remove();
    L20:
        if (r2 == null) goto L25;
        if (r1 == false) goto L23;
        this.typeTokenCache.putAll(r02);
    L23:
        return r2;
    L25:
        throw new IllegalArgumentException("GSON (2.10.1) cannot handle " + r7);
    L26:
        th = move-exception;
        if (r1 == false) goto L29;
        this.threadLocalAdapterResults.remove();
    L29:
        throw th;
    L8:
        TypeAdapter<T> r22 = (TypeAdapter) r02.get(r7);
        if (r22 == null) goto L11;
        return r22;
    }

    public <T> TypeAdapter<T> getDelegateAdapter(TypeAdapterFactory r4, TypeToken<T> r5) {
        if (this.factories.contains(r4) == true) goto L5;
        r4 = this.jsonAdapterFactory;
    L5:
        boolean r0 = false;
        Iterator<TypeAdapterFactory> r1 = this.factories.iterator();
    L7:
        if (r1.hasNext() == false) goto L16;
        TypeAdapterFactory r2 = r1.next();
        if (r0 == false) goto L10;
        TypeAdapter<T> r22 = r2.create(this, r5);
        if (r22 == null) goto L7;
        return r22;
    L10:
        if (r2 != r4) goto L7;
        r0 = true;
        goto L7
    L16:
        throw new IllegalArgumentException("GSON cannot serialize " + r5);
    }

    public <T> TypeAdapter<T> getAdapter(Class<T> r1) {
        return getAdapter(TypeToken.get(r1));
    }

    public JsonElement toJsonTree(Object r2) {
        if (r2 != null) goto L6;
        return JsonNull.INSTANCE;
    L6:
        return toJsonTree(r2, r2.getClass());
    }

    public JsonElement toJsonTree(Object r2, Type r3) {
        JsonTreeWriter r0 = new JsonTreeWriter();
        toJson(r2, r3, r0);
        return r0.get();
    }

    public String toJson(Object r2) {
        if (r2 != null) goto L6;
        return toJson(JsonNull.INSTANCE);
    L6:
        return toJson(r2, r2.getClass());
    }

    public String toJson(Object r2, Type r3) {
        StringWriter r0 = new StringWriter();
        toJson(r2, r3, r0);
        return r0.toString();
    }

    public void toJson(Object r2, Appendable r3) throws JsonIOException {
        if (r2 == null) goto L4;
        toJson(r2, r2.getClass(), r3);
        return;
    L4:
        toJson(JsonNull.INSTANCE, r3);
    }

    public void toJson(Object r1, Type r2, Appendable r3) throws JsonIOException {
        toJson(r1, r2, newJsonWriter(Streams.writerForAppendable(r3)));     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new JsonIOException(e);
    }

    public void toJson(Object r6, Type r7, JsonWriter r8) throws JsonIOException {
        TypeAdapter r72 = getAdapter(TypeToken.get(r7));
        boolean r0 = r8.isLenient();
        r8.setLenient(true);
        boolean r1 = r8.isHtmlSafe();
        r8.setHtmlSafe(this.htmlSafe);
        boolean r2 = r8.getSerializeNulls();
        r8.setSerializeNulls(this.serializeNulls);
        r72.write(r8, r6);     // Catch: Throwable -> L6 AssertionError -> L8 IOException -> L11
        r8.setLenient(r0);
        r8.setHtmlSafe(r1);
        r8.setSerializeNulls(r2);
        return;
    L6:
        th = move-exception;
        r8.setLenient(r0);
        r8.setHtmlSafe(r1);
        r8.setSerializeNulls(r2);
        throw th;
    L11:
        e = move-exception;
        throw new JsonIOException(e);     // Catch: Throwable -> L6
    L8:
        e = move-exception;
        throw new AssertionError("AssertionError (GSON 2.10.1): " + e.getMessage(), e);     // Catch: Throwable -> L6
    }

    public String toJson(JsonElement r2) {
        StringWriter r0 = new StringWriter();
        toJson(r2, r0);
        return r0.toString();
    }

    public void toJson(JsonElement r1, Appendable r2) throws JsonIOException {
        toJson(r1, newJsonWriter(Streams.writerForAppendable(r2)));     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new JsonIOException(e);
    }

    public JsonWriter newJsonWriter(Writer r2) throws IOException {
        if (this.generateNonExecutableJson == false) goto L5;
        r2.write(JSON_NON_EXECUTABLE_PREFIX);
    L5:
        JsonWriter r0 = new JsonWriter(r2);
        if (this.prettyPrinting == false) goto L8;
        r0.setIndent("  ");
    L8:
        r0.setHtmlSafe(this.htmlSafe);
        r0.setLenient(this.lenient);
        r0.setSerializeNulls(this.serializeNulls);
        return r0;
    }

    public JsonReader newJsonReader(Reader r2) {
        JsonReader r0 = new JsonReader(r2);
        r0.setLenient(this.lenient);
        return r0;
    }

    public void toJson(JsonElement r7, JsonWriter r8) throws JsonIOException {
        boolean r0 = r8.isLenient();
        r8.setLenient(true);
        boolean r1 = r8.isHtmlSafe();
        r8.setHtmlSafe(this.htmlSafe);
        boolean r2 = r8.getSerializeNulls();
        r8.setSerializeNulls(this.serializeNulls);
        Streams.write(r7, r8);     // Catch: Throwable -> L6 AssertionError -> L8 IOException -> L11
        r8.setLenient(r0);
        r8.setHtmlSafe(r1);
        r8.setSerializeNulls(r2);
        return;
    L6:
        th = move-exception;
        r8.setLenient(r0);
        r8.setHtmlSafe(r1);
        r8.setSerializeNulls(r2);
        throw th;
    L11:
        e = move-exception;
        throw new JsonIOException(e);     // Catch: Throwable -> L6
    L8:
        e = move-exception;
        throw new AssertionError("AssertionError (GSON 2.10.1): " + e.getMessage(), e);     // Catch: Throwable -> L6
    }

    public <T> T fromJson(String r2, Class<T> r3) throws JsonSyntaxException {
        Object r22 = fromJson(r2, TypeToken.get(r3));
        return (T) Primitives.wrap(r3).cast(r22);
    }

    public <T> T fromJson(String r1, Type r2) throws JsonSyntaxException {
        return (T) fromJson(r1, TypeToken.get(r2));
    }

    public <T> T fromJson(String r2, TypeToken<T> r3) throws JsonSyntaxException {
        if (r2 != null) goto L6;
        return null;
    L6:
        return (T) fromJson(new StringReader(r2), r3);
    }

    public <T> T fromJson(Reader r2, Class<T> r3) throws JsonSyntaxException, JsonIOException {
        Object r22 = fromJson(r2, TypeToken.get(r3));
        return (T) Primitives.wrap(r3).cast(r22);
    }

    public <T> T fromJson(Reader r1, Type r2) throws JsonIOException, JsonSyntaxException {
        return (T) fromJson(r1, TypeToken.get(r2));
    }

    public <T> T fromJson(Reader r1, TypeToken<T> r2) throws JsonIOException, JsonSyntaxException {
        JsonReader r12 = newJsonReader(r1);
        T r22 = (T) fromJson(r12, r2);
        assertFullConsumption(r22, r12);
        return r22;
    }

    private static void assertFullConsumption(Object r0, JsonReader r1) {
        /*  JADX ERROR: Simple mode code generation failed
            java.lang.IndexOutOfBoundsException: Index 0 out of bounds for length 0
            	at java.base/jdk.internal.util.Preconditions.outOfBounds(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.outOfBoundsCheckIndex(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.checkIndex(Unknown Source)
            	at java.base/java.util.Objects.checkIndex(Unknown Source)
            	at java.base/java.util.ArrayList.get(Unknown Source)
            	at jadx.core.codegen.MethodGen.generateSimpleCode(MethodGen.java:368)
            	at jadx.core.codegen.MethodGen.addSimpleMethodCode(MethodGen.java:330)
            	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:293)
            	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:412)
            	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:337)
            	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$2(ClassGen.java:303)
            	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(Unknown Source)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.stream.SortedOps$RefSortingSink.end(Unknown Source)
            	at java.base/java.util.stream.Sink$ChainedReference.end(Unknown Source)
            */
        /*
            if (r0 == 0) goto L21
            com.google.gson.stream.JsonToken r0 = r1.peek()     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_DOCUMENT     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
            if (r0 != r1) goto Lb
            goto L21
        Lb:
            com.google.gson.JsonSyntaxException r0 = new com.google.gson.JsonSyntaxException     // Catch: java.io.IOException -> L13 com.google.gson.stream.MalformedJsonException -> L1a
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.gson.Gson.assertFullConsumption(java.lang.Object, com.google.gson.stream.JsonReader):void");
    }

    public <T> T fromJson(JsonReader r1, Type r2) throws JsonIOException, JsonSyntaxException {
        return (T) fromJson(r1, TypeToken.get(r2));
    }

    public <T> T fromJson(JsonReader r5, TypeToken<T> r6) throws JsonIOException, JsonSyntaxException {
        boolean r0 = r5.isLenient();
        boolean r1 = true;
        r5.setLenient(true);
        r5.peek();     // Catch: Throwable -> L6 AssertionError -> L8 IOException -> L11 IllegalStateException -> L14 EOFException -> L17
        r1 = false;
        T r62 = getAdapter(r6).read(r5);     // Catch: Throwable -> L6 AssertionError -> L8 IOException -> L11 IllegalStateException -> L14 EOFException -> L17
        r5.setLenient(r0);
        return r62;
    L6:
        th = move-exception;
        r5.setLenient(r0);
        throw th;
    L17:
        e = move-exception;
        if (r1 == false) goto L22;
        r5.setLenient(r0);
        return null;
    L22:
        throw new JsonSyntaxException(e);     // Catch: Throwable -> L6
    L8:
        e = move-exception;
        throw new AssertionError("AssertionError (GSON 2.10.1): " + e.getMessage(), e);     // Catch: Throwable -> L6
    L11:
        e = move-exception;
        throw new JsonSyntaxException(e);     // Catch: Throwable -> L6
    L14:
        e = move-exception;
        throw new JsonSyntaxException(e);     // Catch: Throwable -> L6
    }

    public <T> T fromJson(JsonElement r2, Class<T> r3) throws JsonSyntaxException {
        Object r22 = fromJson(r2, TypeToken.get(r3));
        return (T) Primitives.wrap(r3).cast(r22);
    }

    public <T> T fromJson(JsonElement r1, Type r2) throws JsonSyntaxException {
        return (T) fromJson(r1, TypeToken.get(r2));
    }

    public <T> T fromJson(JsonElement r2, TypeToken<T> r3) throws JsonSyntaxException {
        if (r2 != null) goto L6;
        return null;
    L6:
        return (T) fromJson(new JsonTreeReader(r2), r3);
    }

    public String toString() {
        return "{serializeNulls:" + this.serializeNulls + ",factories:" + this.factories + ",instanceCreators:" + this.constructorConstructor + "}";
    }
}
