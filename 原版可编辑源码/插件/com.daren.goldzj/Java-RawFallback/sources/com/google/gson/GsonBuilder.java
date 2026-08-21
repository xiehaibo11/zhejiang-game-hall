package com.google.gson;

public final class GsonBuilder {
    private boolean complexMapKeySerialization;
    private java.lang.String datePattern;
    private int dateStyle;
    private boolean escapeHtmlChars;
    private com.google.gson.internal.Excluder excluder;
    private final java.util.List<com.google.gson.TypeAdapterFactory> factories;
    private com.google.gson.FieldNamingStrategy fieldNamingPolicy;
    private boolean generateNonExecutableJson;
    private final java.util.List<com.google.gson.TypeAdapterFactory> hierarchyFactories;
    private final java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> instanceCreators;
    private boolean lenient;
    private com.google.gson.LongSerializationPolicy longSerializationPolicy;
    private com.google.gson.ToNumberStrategy numberToNumberStrategy;
    private com.google.gson.ToNumberStrategy objectToNumberStrategy;
    private boolean prettyPrinting;
    private final java.util.LinkedList<com.google.gson.ReflectionAccessFilter> reflectionFilters;
    private boolean serializeNulls;
    private boolean serializeSpecialFloatingPointValues;
    private int timeStyle;
    private boolean useJdkUnsafe;

    public GsonBuilder() {
            r2 = this;
            r2.<init>()
            com.google.gson.internal.Excluder r0 = com.google.gson.internal.Excluder.DEFAULT
            r2.excluder = r0
            com.google.gson.LongSerializationPolicy r0 = com.google.gson.LongSerializationPolicy.DEFAULT
            r2.longSerializationPolicy = r0
            com.google.gson.FieldNamingPolicy r0 = com.google.gson.FieldNamingPolicy.IDENTITY
            r2.fieldNamingPolicy = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.instanceCreators = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.factories = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.hierarchyFactories = r0
            r0 = 0
            r2.serializeNulls = r0
            java.lang.String r1 = com.google.gson.Gson.DEFAULT_DATE_PATTERN
            r2.datePattern = r1
            r1 = 2
            r2.dateStyle = r1
            r2.timeStyle = r1
            r2.complexMapKeySerialization = r0
            r2.serializeSpecialFloatingPointValues = r0
            r1 = 1
            r2.escapeHtmlChars = r1
            r2.prettyPrinting = r0
            r2.generateNonExecutableJson = r0
            r2.lenient = r0
            r2.useJdkUnsafe = r1
            com.google.gson.ToNumberStrategy r0 = com.google.gson.Gson.DEFAULT_OBJECT_TO_NUMBER_STRATEGY
            r2.objectToNumberStrategy = r0
            com.google.gson.ToNumberStrategy r0 = com.google.gson.Gson.DEFAULT_NUMBER_TO_NUMBER_STRATEGY
            r2.numberToNumberStrategy = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r2.reflectionFilters = r0
            return
    }

    GsonBuilder(com.google.gson.Gson r3) {
            r2 = this;
            r2.<init>()
            com.google.gson.internal.Excluder r0 = com.google.gson.internal.Excluder.DEFAULT
            r2.excluder = r0
            com.google.gson.LongSerializationPolicy r0 = com.google.gson.LongSerializationPolicy.DEFAULT
            r2.longSerializationPolicy = r0
            com.google.gson.FieldNamingPolicy r0 = com.google.gson.FieldNamingPolicy.IDENTITY
            r2.fieldNamingPolicy = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.instanceCreators = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.factories = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.hierarchyFactories = r0
            r0 = 0
            r2.serializeNulls = r0
            java.lang.String r1 = com.google.gson.Gson.DEFAULT_DATE_PATTERN
            r2.datePattern = r1
            r1 = 2
            r2.dateStyle = r1
            r2.timeStyle = r1
            r2.complexMapKeySerialization = r0
            r2.serializeSpecialFloatingPointValues = r0
            r1 = 1
            r2.escapeHtmlChars = r1
            r2.prettyPrinting = r0
            r2.generateNonExecutableJson = r0
            r2.lenient = r0
            r2.useJdkUnsafe = r1
            com.google.gson.ToNumberStrategy r0 = com.google.gson.Gson.DEFAULT_OBJECT_TO_NUMBER_STRATEGY
            r2.objectToNumberStrategy = r0
            com.google.gson.ToNumberStrategy r0 = com.google.gson.Gson.DEFAULT_NUMBER_TO_NUMBER_STRATEGY
            r2.numberToNumberStrategy = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r2.reflectionFilters = r0
            com.google.gson.internal.Excluder r0 = r3.excluder
            r2.excluder = r0
            com.google.gson.FieldNamingStrategy r0 = r3.fieldNamingStrategy
            r2.fieldNamingPolicy = r0
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r0 = r2.instanceCreators
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r1 = r3.instanceCreators
            r0.putAll(r1)
            boolean r0 = r3.serializeNulls
            r2.serializeNulls = r0
            boolean r0 = r3.complexMapKeySerialization
            r2.complexMapKeySerialization = r0
            boolean r0 = r3.generateNonExecutableJson
            r2.generateNonExecutableJson = r0
            boolean r0 = r3.htmlSafe
            r2.escapeHtmlChars = r0
            boolean r0 = r3.prettyPrinting
            r2.prettyPrinting = r0
            boolean r0 = r3.lenient
            r2.lenient = r0
            boolean r0 = r3.serializeSpecialFloatingPointValues
            r2.serializeSpecialFloatingPointValues = r0
            com.google.gson.LongSerializationPolicy r0 = r3.longSerializationPolicy
            r2.longSerializationPolicy = r0
            java.lang.String r0 = r3.datePattern
            r2.datePattern = r0
            int r0 = r3.dateStyle
            r2.dateStyle = r0
            int r0 = r3.timeStyle
            r2.timeStyle = r0
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r2.factories
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r3.builderFactories
            r0.addAll(r1)
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r2.hierarchyFactories
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r3.builderHierarchyFactories
            r0.addAll(r1)
            boolean r0 = r3.useJdkUnsafe
            r2.useJdkUnsafe = r0
            com.google.gson.ToNumberStrategy r0 = r3.objectToNumberStrategy
            r2.objectToNumberStrategy = r0
            com.google.gson.ToNumberStrategy r0 = r3.numberToNumberStrategy
            r2.numberToNumberStrategy = r0
            java.util.LinkedList<com.google.gson.ReflectionAccessFilter> r0 = r2.reflectionFilters
            java.util.List<com.google.gson.ReflectionAccessFilter> r3 = r3.reflectionFilters
            r0.addAll(r3)
            return
    }

    private void addTypeAdaptersForDate(java.lang.String r5, int r6, int r7, java.util.List<com.google.gson.TypeAdapterFactory> r8) {
            r4 = this;
            boolean r0 = com.google.gson.internal.sql.SqlTypesSupport.SUPPORTS_SQL_TYPES
            r1 = 0
            if (r5 == 0) goto L2a
            java.lang.String r2 = r5.trim()
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L2a
            com.google.gson.internal.bind.DefaultDateTypeAdapter$DateType<java.util.Date> r6 = com.google.gson.internal.bind.DefaultDateTypeAdapter.DateType.DATE
            com.google.gson.TypeAdapterFactory r6 = r6.createAdapterFactory(r5)
            if (r0 == 0) goto L27
            com.google.gson.internal.bind.DefaultDateTypeAdapter$DateType<? extends java.util.Date> r7 = com.google.gson.internal.sql.SqlTypesSupport.TIMESTAMP_DATE_TYPE
            com.google.gson.TypeAdapterFactory r1 = r7.createAdapterFactory(r5)
            com.google.gson.internal.bind.DefaultDateTypeAdapter$DateType<? extends java.util.Date> r7 = com.google.gson.internal.sql.SqlTypesSupport.DATE_DATE_TYPE
            com.google.gson.TypeAdapterFactory r5 = r7.createAdapterFactory(r5)
            r3 = r6
            r6 = r5
            r5 = r3
            goto L43
        L27:
            r5 = r6
        L28:
            r6 = r1
            goto L43
        L2a:
            r5 = 2
            if (r6 == r5) goto L4e
            if (r7 == r5) goto L4e
            com.google.gson.internal.bind.DefaultDateTypeAdapter$DateType<java.util.Date> r5 = com.google.gson.internal.bind.DefaultDateTypeAdapter.DateType.DATE
            com.google.gson.TypeAdapterFactory r5 = r5.createAdapterFactory(r6, r7)
            if (r0 == 0) goto L28
            com.google.gson.internal.bind.DefaultDateTypeAdapter$DateType<? extends java.util.Date> r1 = com.google.gson.internal.sql.SqlTypesSupport.TIMESTAMP_DATE_TYPE
            com.google.gson.TypeAdapterFactory r1 = r1.createAdapterFactory(r6, r7)
            com.google.gson.internal.bind.DefaultDateTypeAdapter$DateType<? extends java.util.Date> r2 = com.google.gson.internal.sql.SqlTypesSupport.DATE_DATE_TYPE
            com.google.gson.TypeAdapterFactory r6 = r2.createAdapterFactory(r6, r7)
        L43:
            r8.add(r5)
            if (r0 == 0) goto L4e
            r8.add(r1)
            r8.add(r6)
        L4e:
            return
    }

    public com.google.gson.GsonBuilder addDeserializationExclusionStrategy(com.google.gson.ExclusionStrategy r4) {
            r3 = this;
            java.util.Objects.requireNonNull(r4)
            com.google.gson.internal.Excluder r0 = r3.excluder
            r1 = 0
            r2 = 1
            com.google.gson.internal.Excluder r4 = r0.withExclusionStrategy(r4, r1, r2)
            r3.excluder = r4
            return r3
    }

    public com.google.gson.GsonBuilder addReflectionAccessFilter(com.google.gson.ReflectionAccessFilter r2) {
            r1 = this;
            java.util.Objects.requireNonNull(r2)
            java.util.LinkedList<com.google.gson.ReflectionAccessFilter> r0 = r1.reflectionFilters
            r0.addFirst(r2)
            return r1
    }

    public com.google.gson.GsonBuilder addSerializationExclusionStrategy(com.google.gson.ExclusionStrategy r4) {
            r3 = this;
            java.util.Objects.requireNonNull(r4)
            com.google.gson.internal.Excluder r0 = r3.excluder
            r1 = 1
            r2 = 0
            com.google.gson.internal.Excluder r4 = r0.withExclusionStrategy(r4, r1, r2)
            r3.excluder = r4
            return r3
    }

    public com.google.gson.Gson create() {
            r26 = this;
            r0 = r26
            java.util.ArrayList r1 = new java.util.ArrayList
            r19 = r1
            java.util.List<com.google.gson.TypeAdapterFactory> r2 = r0.factories
            int r2 = r2.size()
            java.util.List<com.google.gson.TypeAdapterFactory> r3 = r0.hierarchyFactories
            int r3 = r3.size()
            int r2 = r2 + r3
            int r2 = r2 + 3
            r1.<init>(r2)
            java.util.List<com.google.gson.TypeAdapterFactory> r2 = r0.factories
            r1.addAll(r2)
            java.util.Collections.reverse(r1)
            java.util.ArrayList r2 = new java.util.ArrayList
            java.util.List<com.google.gson.TypeAdapterFactory> r3 = r0.hierarchyFactories
            r2.<init>(r3)
            java.util.Collections.reverse(r2)
            r1.addAll(r2)
            java.lang.String r2 = r0.datePattern
            int r3 = r0.dateStyle
            int r4 = r0.timeStyle
            r0.addTypeAdaptersForDate(r2, r3, r4, r1)
            com.google.gson.Gson r23 = new com.google.gson.Gson
            r1 = r23
            com.google.gson.internal.Excluder r2 = r0.excluder
            com.google.gson.FieldNamingStrategy r3 = r0.fieldNamingPolicy
            java.util.HashMap r5 = new java.util.HashMap
            r4 = r5
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r6 = r0.instanceCreators
            r5.<init>(r6)
            boolean r5 = r0.serializeNulls
            boolean r6 = r0.complexMapKeySerialization
            boolean r7 = r0.generateNonExecutableJson
            boolean r8 = r0.escapeHtmlChars
            boolean r9 = r0.prettyPrinting
            boolean r10 = r0.lenient
            boolean r11 = r0.serializeSpecialFloatingPointValues
            boolean r12 = r0.useJdkUnsafe
            com.google.gson.LongSerializationPolicy r13 = r0.longSerializationPolicy
            java.lang.String r14 = r0.datePattern
            int r15 = r0.dateStyle
            r24 = r1
            int r1 = r0.timeStyle
            r16 = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r17 = r1
            r25 = r2
            java.util.List<com.google.gson.TypeAdapterFactory> r2 = r0.factories
            r1.<init>(r2)
            java.util.ArrayList r1 = new java.util.ArrayList
            r18 = r1
            java.util.List<com.google.gson.TypeAdapterFactory> r2 = r0.hierarchyFactories
            r1.<init>(r2)
            com.google.gson.ToNumberStrategy r1 = r0.objectToNumberStrategy
            r20 = r1
            com.google.gson.ToNumberStrategy r1 = r0.numberToNumberStrategy
            r21 = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r22 = r1
            java.util.LinkedList<com.google.gson.ReflectionAccessFilter> r2 = r0.reflectionFilters
            r1.<init>(r2)
            r1 = r24
            r2 = r25
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22)
            return r23
    }

    public com.google.gson.GsonBuilder disableHtmlEscaping() {
            r1 = this;
            r0 = 0
            r1.escapeHtmlChars = r0
            return r1
    }

    public com.google.gson.GsonBuilder disableInnerClassSerialization() {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.excluder
            com.google.gson.internal.Excluder r0 = r0.disableInnerClassSerialization()
            r1.excluder = r0
            return r1
    }

    public com.google.gson.GsonBuilder disableJdkUnsafe() {
            r1 = this;
            r0 = 0
            r1.useJdkUnsafe = r0
            return r1
    }

    public com.google.gson.GsonBuilder enableComplexMapKeySerialization() {
            r1 = this;
            r0 = 1
            r1.complexMapKeySerialization = r0
            return r1
    }

    public com.google.gson.GsonBuilder excludeFieldsWithModifiers(int... r2) {
            r1 = this;
            java.util.Objects.requireNonNull(r2)
            com.google.gson.internal.Excluder r0 = r1.excluder
            com.google.gson.internal.Excluder r2 = r0.withModifiers(r2)
            r1.excluder = r2
            return r1
    }

    public com.google.gson.GsonBuilder excludeFieldsWithoutExposeAnnotation() {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.excluder
            com.google.gson.internal.Excluder r0 = r0.excludeFieldsWithoutExposeAnnotation()
            r1.excluder = r0
            return r1
    }

    public com.google.gson.GsonBuilder generateNonExecutableJson() {
            r1 = this;
            r0 = 1
            r1.generateNonExecutableJson = r0
            return r1
    }

    public com.google.gson.GsonBuilder registerTypeAdapter(java.lang.reflect.Type r4, java.lang.Object r5) {
            r3 = this;
            java.util.Objects.requireNonNull(r4)
            boolean r0 = r5 instanceof com.google.gson.JsonSerializer
            if (r0 != 0) goto L16
            boolean r1 = r5 instanceof com.google.gson.JsonDeserializer
            if (r1 != 0) goto L16
            boolean r1 = r5 instanceof com.google.gson.InstanceCreator
            if (r1 != 0) goto L16
            boolean r1 = r5 instanceof com.google.gson.TypeAdapter
            if (r1 == 0) goto L14
            goto L16
        L14:
            r1 = 0
            goto L17
        L16:
            r1 = 1
        L17:
            com.google.gson.internal.$Gson$Preconditions.checkArgument(r1)
            boolean r1 = r5 instanceof com.google.gson.InstanceCreator
            if (r1 == 0) goto L26
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r1 = r3.instanceCreators
            r2 = r5
            com.google.gson.InstanceCreator r2 = (com.google.gson.InstanceCreator) r2
            r1.put(r4, r2)
        L26:
            if (r0 != 0) goto L2c
            boolean r0 = r5 instanceof com.google.gson.JsonDeserializer
            if (r0 == 0) goto L39
        L2c:
            com.google.gson.reflect.TypeToken r0 = com.google.gson.reflect.TypeToken.get(r4)
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r3.factories
            com.google.gson.TypeAdapterFactory r0 = com.google.gson.internal.bind.TreeTypeAdapter.newFactoryWithMatchRawType(r0, r5)
            r1.add(r0)
        L39:
            boolean r0 = r5 instanceof com.google.gson.TypeAdapter
            if (r0 == 0) goto L4c
            com.google.gson.reflect.TypeToken r4 = com.google.gson.reflect.TypeToken.get(r4)
            com.google.gson.TypeAdapter r5 = (com.google.gson.TypeAdapter) r5
            com.google.gson.TypeAdapterFactory r4 = com.google.gson.internal.bind.TypeAdapters.newFactory(r4, r5)
            java.util.List<com.google.gson.TypeAdapterFactory> r5 = r3.factories
            r5.add(r4)
        L4c:
            return r3
    }

    public com.google.gson.GsonBuilder registerTypeAdapterFactory(com.google.gson.TypeAdapterFactory r2) {
            r1 = this;
            java.util.Objects.requireNonNull(r2)
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r1.factories
            r0.add(r2)
            return r1
    }

    public com.google.gson.GsonBuilder registerTypeHierarchyAdapter(java.lang.Class<?> r3, java.lang.Object r4) {
            r2 = this;
            java.util.Objects.requireNonNull(r3)
            boolean r0 = r4 instanceof com.google.gson.JsonSerializer
            if (r0 != 0) goto L12
            boolean r1 = r4 instanceof com.google.gson.JsonDeserializer
            if (r1 != 0) goto L12
            boolean r1 = r4 instanceof com.google.gson.TypeAdapter
            if (r1 == 0) goto L10
            goto L12
        L10:
            r1 = 0
            goto L13
        L12:
            r1 = 1
        L13:
            com.google.gson.internal.$Gson$Preconditions.checkArgument(r1)
            boolean r1 = r4 instanceof com.google.gson.JsonDeserializer
            if (r1 != 0) goto L1c
            if (r0 == 0) goto L25
        L1c:
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r2.hierarchyFactories
            com.google.gson.TypeAdapterFactory r1 = com.google.gson.internal.bind.TreeTypeAdapter.newTypeHierarchyFactory(r3, r4)
            r0.add(r1)
        L25:
            boolean r0 = r4 instanceof com.google.gson.TypeAdapter
            if (r0 == 0) goto L34
            com.google.gson.TypeAdapter r4 = (com.google.gson.TypeAdapter) r4
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.newTypeHierarchyFactory(r3, r4)
            java.util.List<com.google.gson.TypeAdapterFactory> r4 = r2.factories
            r4.add(r3)
        L34:
            return r2
    }

    public com.google.gson.GsonBuilder serializeNulls() {
            r1 = this;
            r0 = 1
            r1.serializeNulls = r0
            return r1
    }

    public com.google.gson.GsonBuilder serializeSpecialFloatingPointValues() {
            r1 = this;
            r0 = 1
            r1.serializeSpecialFloatingPointValues = r0
            return r1
    }

    public com.google.gson.GsonBuilder setDateFormat(int r1) {
            r0 = this;
            r0.dateStyle = r1
            r1 = 0
            r0.datePattern = r1
            return r0
    }

    public com.google.gson.GsonBuilder setDateFormat(int r1, int r2) {
            r0 = this;
            r0.dateStyle = r1
            r0.timeStyle = r2
            r1 = 0
            r0.datePattern = r1
            return r0
    }

    public com.google.gson.GsonBuilder setDateFormat(java.lang.String r1) {
            r0 = this;
            r0.datePattern = r1
            return r0
    }

    public com.google.gson.GsonBuilder setExclusionStrategies(com.google.gson.ExclusionStrategy... r6) {
            r5 = this;
            java.util.Objects.requireNonNull(r6)
            int r0 = r6.length
            r1 = 0
        L5:
            if (r1 >= r0) goto L15
            r2 = r6[r1]
            com.google.gson.internal.Excluder r3 = r5.excluder
            r4 = 1
            com.google.gson.internal.Excluder r2 = r3.withExclusionStrategy(r2, r4, r4)
            r5.excluder = r2
            int r1 = r1 + 1
            goto L5
        L15:
            return r5
    }

    public com.google.gson.GsonBuilder setFieldNamingPolicy(com.google.gson.FieldNamingPolicy r1) {
            r0 = this;
            com.google.gson.GsonBuilder r1 = r0.setFieldNamingStrategy(r1)
            return r1
    }

    public com.google.gson.GsonBuilder setFieldNamingStrategy(com.google.gson.FieldNamingStrategy r1) {
            r0 = this;
            java.lang.Object r1 = java.util.Objects.requireNonNull(r1)
            com.google.gson.FieldNamingStrategy r1 = (com.google.gson.FieldNamingStrategy) r1
            r0.fieldNamingPolicy = r1
            return r0
    }

    public com.google.gson.GsonBuilder setLenient() {
            r1 = this;
            r0 = 1
            r1.lenient = r0
            return r1
    }

    public com.google.gson.GsonBuilder setLongSerializationPolicy(com.google.gson.LongSerializationPolicy r1) {
            r0 = this;
            java.lang.Object r1 = java.util.Objects.requireNonNull(r1)
            com.google.gson.LongSerializationPolicy r1 = (com.google.gson.LongSerializationPolicy) r1
            r0.longSerializationPolicy = r1
            return r0
    }

    public com.google.gson.GsonBuilder setNumberToNumberStrategy(com.google.gson.ToNumberStrategy r1) {
            r0 = this;
            java.lang.Object r1 = java.util.Objects.requireNonNull(r1)
            com.google.gson.ToNumberStrategy r1 = (com.google.gson.ToNumberStrategy) r1
            r0.numberToNumberStrategy = r1
            return r0
    }

    public com.google.gson.GsonBuilder setObjectToNumberStrategy(com.google.gson.ToNumberStrategy r1) {
            r0 = this;
            java.lang.Object r1 = java.util.Objects.requireNonNull(r1)
            com.google.gson.ToNumberStrategy r1 = (com.google.gson.ToNumberStrategy) r1
            r0.objectToNumberStrategy = r1
            return r0
    }

    public com.google.gson.GsonBuilder setPrettyPrinting() {
            r1 = this;
            r0 = 1
            r1.prettyPrinting = r0
            return r1
    }

    public com.google.gson.GsonBuilder setVersion(double r4) {
            r3 = this;
            boolean r0 = java.lang.Double.isNaN(r4)
            if (r0 != 0) goto L15
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L15
            com.google.gson.internal.Excluder r0 = r3.excluder
            com.google.gson.internal.Excluder r4 = r0.withVersion(r4)
            r3.excluder = r4
            return r3
        L15:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid version: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
