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
    private boolean prettyPrinting;
    private boolean serializeNulls;
    private boolean serializeSpecialFloatingPointValues;
    private int timeStyle;

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
            return
    }

    private void addTypeAdaptersForDate(java.lang.String r5, int r6, int r7, java.util.List<com.google.gson.TypeAdapterFactory> r8) {
            r4 = this;
            if (r5 == 0) goto L24
            java.lang.String r0 = r5.trim()
            java.lang.String r1 = ""
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L24
            com.google.gson.DefaultDateTypeAdapter r0 = new com.google.gson.DefaultDateTypeAdapter
            java.lang.Class<java.util.Date> r1 = java.util.Date.class
            r0.<init>(r1, r5)
            com.google.gson.DefaultDateTypeAdapter r1 = new com.google.gson.DefaultDateTypeAdapter
            java.lang.Class<java.sql.Timestamp> r2 = java.sql.Timestamp.class
            r1.<init>(r2, r5)
            com.google.gson.DefaultDateTypeAdapter r2 = new com.google.gson.DefaultDateTypeAdapter
            java.lang.Class<java.sql.Date> r3 = java.sql.Date.class
            r2.<init>(r3, r5)
            goto L3e
        L24:
            r0 = 2
            if (r6 == r0) goto L5a
            if (r7 == r0) goto L5a
            com.google.gson.DefaultDateTypeAdapter r0 = new com.google.gson.DefaultDateTypeAdapter
            java.lang.Class<java.util.Date> r1 = java.util.Date.class
            r0.<init>(r1, r6, r7)
            com.google.gson.DefaultDateTypeAdapter r1 = new com.google.gson.DefaultDateTypeAdapter
            java.lang.Class<java.sql.Timestamp> r2 = java.sql.Timestamp.class
            r1.<init>(r2, r6, r7)
            com.google.gson.DefaultDateTypeAdapter r2 = new com.google.gson.DefaultDateTypeAdapter
            java.lang.Class<java.sql.Date> r3 = java.sql.Date.class
            r2.<init>(r3, r6, r7)
        L3e:
            java.lang.Class<java.util.Date> r3 = java.util.Date.class
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.newFactory(r3, r0)
            r8.add(r3)
            java.lang.Class<java.sql.Timestamp> r3 = java.sql.Timestamp.class
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.newFactory(r3, r1)
            r8.add(r3)
            java.lang.Class<java.sql.Date> r3 = java.sql.Date.class
            com.google.gson.TypeAdapterFactory r3 = com.google.gson.internal.bind.TypeAdapters.newFactory(r3, r2)
            r8.add(r3)
            return
        L5a:
            return
    }

    public com.google.gson.GsonBuilder addDeserializationExclusionStrategy(com.google.gson.ExclusionStrategy r4) {
            r3 = this;
            com.google.gson.internal.Excluder r0 = r3.excluder
            r1 = 0
            r2 = 1
            com.google.gson.internal.Excluder r0 = r0.withExclusionStrategy(r4, r1, r2)
            r3.excluder = r0
            return r3
    }

    public com.google.gson.GsonBuilder addSerializationExclusionStrategy(com.google.gson.ExclusionStrategy r4) {
            r3 = this;
            com.google.gson.internal.Excluder r0 = r3.excluder
            r1 = 1
            r2 = 0
            com.google.gson.internal.Excluder r0 = r0.withExclusionStrategy(r4, r1, r2)
            r3.excluder = r0
            return r3
    }

    public com.google.gson.Gson create() {
            r23 = this;
            r0 = r23
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.List<com.google.gson.TypeAdapterFactory> r2 = r0.factories
            int r2 = r2.size()
            java.util.List<com.google.gson.TypeAdapterFactory> r3 = r0.hierarchyFactories
            int r3 = r3.size()
            int r2 = r2 + r3
            int r2 = r2 + 3
            r1.<init>(r2)
            r20 = r1
            java.util.List<com.google.gson.TypeAdapterFactory> r2 = r0.factories
            r1.addAll(r2)
            java.util.Collections.reverse(r1)
            java.util.ArrayList r2 = new java.util.ArrayList
            java.util.List<com.google.gson.TypeAdapterFactory> r3 = r0.hierarchyFactories
            r2.<init>(r3)
            java.util.Collections.reverse(r2)
            r1.addAll(r2)
            java.lang.String r3 = r0.datePattern
            int r4 = r0.dateStyle
            int r5 = r0.timeStyle
            r0.addTypeAdaptersForDate(r3, r4, r5, r1)
            com.google.gson.Gson r21 = new com.google.gson.Gson
            r3 = r21
            com.google.gson.internal.Excluder r4 = r0.excluder
            com.google.gson.FieldNamingStrategy r5 = r0.fieldNamingPolicy
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r6 = r0.instanceCreators
            boolean r7 = r0.serializeNulls
            boolean r8 = r0.complexMapKeySerialization
            boolean r9 = r0.generateNonExecutableJson
            boolean r10 = r0.escapeHtmlChars
            boolean r11 = r0.prettyPrinting
            boolean r12 = r0.lenient
            boolean r13 = r0.serializeSpecialFloatingPointValues
            com.google.gson.LongSerializationPolicy r14 = r0.longSerializationPolicy
            java.lang.String r15 = r0.datePattern
            r22 = r1
            int r1 = r0.dateStyle
            r16 = r1
            int r1 = r0.timeStyle
            r17 = r1
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r0.factories
            r18 = r1
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r0.hierarchyFactories
            r19 = r1
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)
            return r21
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

    public com.google.gson.GsonBuilder enableComplexMapKeySerialization() {
            r1 = this;
            r0 = 1
            r1.complexMapKeySerialization = r0
            return r1
    }

    public com.google.gson.GsonBuilder excludeFieldsWithModifiers(int... r2) {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.excluder
            com.google.gson.internal.Excluder r0 = r0.withModifiers(r2)
            r1.excluder = r0
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
            boolean r0 = r5 instanceof com.google.gson.JsonSerializer
            if (r0 != 0) goto L13
            boolean r0 = r5 instanceof com.google.gson.JsonDeserializer
            if (r0 != 0) goto L13
            boolean r0 = r5 instanceof com.google.gson.InstanceCreator
            if (r0 != 0) goto L13
            boolean r0 = r5 instanceof com.google.gson.TypeAdapter
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            com.google.gson.internal.$Gson$Preconditions.checkArgument(r0)
            boolean r0 = r5 instanceof com.google.gson.InstanceCreator
            if (r0 == 0) goto L23
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r0 = r3.instanceCreators
            r1 = r5
            com.google.gson.InstanceCreator r1 = (com.google.gson.InstanceCreator) r1
            r0.put(r4, r1)
        L23:
            boolean r0 = r5 instanceof com.google.gson.JsonSerializer
            if (r0 != 0) goto L2b
            boolean r0 = r5 instanceof com.google.gson.JsonDeserializer
            if (r0 == 0) goto L38
        L2b:
            com.google.gson.reflect.TypeToken r0 = com.google.gson.reflect.TypeToken.get(r4)
            java.util.List<com.google.gson.TypeAdapterFactory> r1 = r3.factories
            com.google.gson.TypeAdapterFactory r2 = com.google.gson.internal.bind.TreeTypeAdapter.newFactoryWithMatchRawType(r0, r5)
            r1.add(r2)
        L38:
            boolean r0 = r5 instanceof com.google.gson.TypeAdapter
            if (r0 == 0) goto L4c
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r3.factories
            com.google.gson.reflect.TypeToken r1 = com.google.gson.reflect.TypeToken.get(r4)
            r2 = r5
            com.google.gson.TypeAdapter r2 = (com.google.gson.TypeAdapter) r2
            com.google.gson.TypeAdapterFactory r1 = com.google.gson.internal.bind.TypeAdapters.newFactory(r1, r2)
            r0.add(r1)
        L4c:
            return r3
    }

    public com.google.gson.GsonBuilder registerTypeAdapterFactory(com.google.gson.TypeAdapterFactory r2) {
            r1 = this;
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r1.factories
            r0.add(r2)
            return r1
    }

    public com.google.gson.GsonBuilder registerTypeHierarchyAdapter(java.lang.Class<?> r3, java.lang.Object r4) {
            r2 = this;
            boolean r0 = r4 instanceof com.google.gson.JsonSerializer
            if (r0 != 0) goto Lf
            boolean r0 = r4 instanceof com.google.gson.JsonDeserializer
            if (r0 != 0) goto Lf
            boolean r0 = r4 instanceof com.google.gson.TypeAdapter
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            com.google.gson.internal.$Gson$Preconditions.checkArgument(r0)
            boolean r0 = r4 instanceof com.google.gson.JsonDeserializer
            if (r0 != 0) goto L1b
            boolean r0 = r4 instanceof com.google.gson.JsonSerializer
            if (r0 == 0) goto L24
        L1b:
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r2.hierarchyFactories
            com.google.gson.TypeAdapterFactory r1 = com.google.gson.internal.bind.TreeTypeAdapter.newTypeHierarchyFactory(r3, r4)
            r0.add(r1)
        L24:
            boolean r0 = r4 instanceof com.google.gson.TypeAdapter
            if (r0 == 0) goto L34
            java.util.List<com.google.gson.TypeAdapterFactory> r0 = r2.factories
            r1 = r4
            com.google.gson.TypeAdapter r1 = (com.google.gson.TypeAdapter) r1
            com.google.gson.TypeAdapterFactory r1 = com.google.gson.internal.bind.TypeAdapters.newTypeHierarchyFactory(r3, r1)
            r0.add(r1)
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

    public com.google.gson.GsonBuilder setDateFormat(int r2) {
            r1 = this;
            r1.dateStyle = r2
            r0 = 0
            r1.datePattern = r0
            return r1
    }

    public com.google.gson.GsonBuilder setDateFormat(int r2, int r3) {
            r1 = this;
            r1.dateStyle = r2
            r1.timeStyle = r3
            r0 = 0
            r1.datePattern = r0
            return r1
    }

    public com.google.gson.GsonBuilder setDateFormat(java.lang.String r1) {
            r0 = this;
            r0.datePattern = r1
            return r0
    }

    public com.google.gson.GsonBuilder setExclusionStrategies(com.google.gson.ExclusionStrategy... r6) {
            r5 = this;
            int r0 = r6.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L12
            r2 = r6[r1]
            com.google.gson.internal.Excluder r3 = r5.excluder
            r4 = 1
            com.google.gson.internal.Excluder r3 = r3.withExclusionStrategy(r2, r4, r4)
            r5.excluder = r3
            int r1 = r1 + 1
            goto L2
        L12:
            return r5
    }

    public com.google.gson.GsonBuilder setFieldNamingPolicy(com.google.gson.FieldNamingPolicy r1) {
            r0 = this;
            r0.fieldNamingPolicy = r1
            return r0
    }

    public com.google.gson.GsonBuilder setFieldNamingStrategy(com.google.gson.FieldNamingStrategy r1) {
            r0 = this;
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
            r0.longSerializationPolicy = r1
            return r0
    }

    public com.google.gson.GsonBuilder setPrettyPrinting() {
            r1 = this;
            r0 = 1
            r1.prettyPrinting = r0
            return r1
    }

    public com.google.gson.GsonBuilder setVersion(double r2) {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.excluder
            com.google.gson.internal.Excluder r0 = r0.withVersion(r2)
            r1.excluder = r0
            return r1
    }
}
