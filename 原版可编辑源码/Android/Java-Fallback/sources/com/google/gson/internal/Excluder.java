package com.google.gson.internal;

public final class Excluder implements com.google.gson.TypeAdapterFactory, java.lang.Cloneable {
    public static final com.google.gson.internal.Excluder DEFAULT = null;
    private static final double IGNORE_VERSIONS = -1.0d;
    private java.util.List<com.google.gson.ExclusionStrategy> deserializationStrategies;
    private int modifiers;
    private boolean requireExpose;
    private java.util.List<com.google.gson.ExclusionStrategy> serializationStrategies;
    private boolean serializeInnerClasses;
    private double version;


    static {
            com.google.gson.internal.Excluder r0 = new com.google.gson.internal.Excluder
            r0.<init>()
            com.google.gson.internal.Excluder.DEFAULT = r0
            return
    }

    public Excluder() {
            r2 = this;
            r2.<init>()
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            r2.version = r0
            r0 = 136(0x88, float:1.9E-43)
            r2.modifiers = r0
            r0 = 1
            r2.serializeInnerClasses = r0
            java.util.List r0 = java.util.Collections.emptyList()
            r2.serializationStrategies = r0
            java.util.List r0 = java.util.Collections.emptyList()
            r2.deserializationStrategies = r0
            return
    }

    private boolean excludeClassChecks(java.lang.Class<?> r7) {
            r6 = this;
            double r0 = r6.version
            r2 = 1
            r3 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 == 0) goto L20
            java.lang.Class<com.google.gson.annotations.Since> r0 = com.google.gson.annotations.Since.class
            java.lang.annotation.Annotation r0 = r7.getAnnotation(r0)
            com.google.gson.annotations.Since r0 = (com.google.gson.annotations.Since) r0
            java.lang.Class<com.google.gson.annotations.Until> r1 = com.google.gson.annotations.Until.class
            java.lang.annotation.Annotation r1 = r7.getAnnotation(r1)
            com.google.gson.annotations.Until r1 = (com.google.gson.annotations.Until) r1
            boolean r0 = r6.isValidVersion(r0, r1)
            if (r0 != 0) goto L20
            return r2
        L20:
            boolean r0 = r6.serializeInnerClasses
            if (r0 != 0) goto L2b
            boolean r0 = r6.isInnerClass(r7)
            if (r0 == 0) goto L2b
            return r2
        L2b:
            boolean r0 = r6.isAnonymousOrLocal(r7)
            if (r0 == 0) goto L32
            return r2
        L32:
            r0 = 0
            return r0
    }

    private boolean excludeClassInStrategy(java.lang.Class<?> r5, boolean r6) {
            r4 = this;
            if (r6 == 0) goto L5
            java.util.List<com.google.gson.ExclusionStrategy> r0 = r4.serializationStrategies
            goto L7
        L5:
            java.util.List<com.google.gson.ExclusionStrategy> r0 = r4.deserializationStrategies
        L7:
            java.util.Iterator r1 = r0.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()
            com.google.gson.ExclusionStrategy r2 = (com.google.gson.ExclusionStrategy) r2
            boolean r3 = r2.shouldSkipClass(r5)
            if (r3 == 0) goto L1f
            r1 = 1
            return r1
        L1f:
            goto Lb
        L20:
            r1 = 0
            return r1
    }

    private boolean isAnonymousOrLocal(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.Class<java.lang.Enum> r0 = java.lang.Enum.class
            boolean r0 = r0.isAssignableFrom(r2)
            if (r0 != 0) goto L16
            boolean r0 = r2.isAnonymousClass()
            if (r0 != 0) goto L14
            boolean r0 = r2.isLocalClass()
            if (r0 == 0) goto L16
        L14:
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    private boolean isInnerClass(java.lang.Class<?> r2) {
            r1 = this;
            boolean r0 = r2.isMemberClass()
            if (r0 == 0) goto Le
            boolean r0 = r1.isStatic(r2)
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private boolean isStatic(java.lang.Class<?> r2) {
            r1 = this;
            int r0 = r2.getModifiers()
            r0 = r0 & 8
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    private boolean isValidSince(com.google.gson.annotations.Since r6) {
            r5 = this;
            if (r6 == 0) goto Le
            double r0 = r6.value()
            double r2 = r5.version
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Le
            r2 = 0
            return r2
        Le:
            r0 = 1
            return r0
    }

    private boolean isValidUntil(com.google.gson.annotations.Until r6) {
            r5 = this;
            if (r6 == 0) goto Le
            double r0 = r6.value()
            double r2 = r5.version
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto Le
            r2 = 0
            return r2
        Le:
            r0 = 1
            return r0
    }

    private boolean isValidVersion(com.google.gson.annotations.Since r2, com.google.gson.annotations.Until r3) {
            r1 = this;
            boolean r0 = r1.isValidSince(r2)
            if (r0 == 0) goto Le
            boolean r0 = r1.isValidUntil(r3)
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    protected com.google.gson.internal.Excluder clone() {
            r2 = this;
            java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L7
            com.google.gson.internal.Excluder r0 = (com.google.gson.internal.Excluder) r0     // Catch: java.lang.CloneNotSupportedException -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.clone()
            return r0
    }

    @Override
    public <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r12, com.google.gson.reflect.TypeToken<T> r13) {
            r11 = this;
            java.lang.Class r0 = r13.getRawType()
            boolean r1 = r11.excludeClassChecks(r0)
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L15
            boolean r4 = r11.excludeClassInStrategy(r0, r3)
            if (r4 == 0) goto L13
            goto L15
        L13:
            r4 = 0
            goto L16
        L15:
            r4 = 1
        L16:
            if (r1 != 0) goto L1e
            boolean r5 = r11.excludeClassInStrategy(r0, r2)
            if (r5 == 0) goto L1f
        L1e:
            r2 = 1
        L1f:
            if (r4 != 0) goto L25
            if (r2 != 0) goto L25
            r3 = 0
            return r3
        L25:
            com.google.gson.internal.Excluder$1 r3 = new com.google.gson.internal.Excluder$1
            r5 = r3
            r6 = r11
            r7 = r2
            r8 = r4
            r9 = r12
            r10 = r13
            r5.<init>(r6, r7, r8, r9, r10)
            return r3
    }

    public com.google.gson.internal.Excluder disableInnerClassSerialization() {
            r2 = this;
            com.google.gson.internal.Excluder r0 = r2.clone()
            r1 = 0
            r0.serializeInnerClasses = r1
            return r0
    }

    public boolean excludeClass(java.lang.Class<?> r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.excludeClassChecks(r2)
            if (r0 != 0) goto Lf
            boolean r0 = r1.excludeClassInStrategy(r2, r3)
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public boolean excludeField(java.lang.reflect.Field r7, boolean r8) {
            r6 = this;
            int r0 = r6.modifiers
            int r1 = r7.getModifiers()
            r0 = r0 & r1
            r1 = 1
            if (r0 == 0) goto Lb
            return r1
        Lb:
            double r2 = r6.version
            r4 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L2a
            java.lang.Class<com.google.gson.annotations.Since> r0 = com.google.gson.annotations.Since.class
            java.lang.annotation.Annotation r0 = r7.getAnnotation(r0)
            com.google.gson.annotations.Since r0 = (com.google.gson.annotations.Since) r0
            java.lang.Class<com.google.gson.annotations.Until> r2 = com.google.gson.annotations.Until.class
            java.lang.annotation.Annotation r2 = r7.getAnnotation(r2)
            com.google.gson.annotations.Until r2 = (com.google.gson.annotations.Until) r2
            boolean r0 = r6.isValidVersion(r0, r2)
            if (r0 != 0) goto L2a
            return r1
        L2a:
            boolean r0 = r7.isSynthetic()
            if (r0 == 0) goto L31
            return r1
        L31:
            boolean r0 = r6.requireExpose
            if (r0 == 0) goto L4f
            java.lang.Class<com.google.gson.annotations.Expose> r0 = com.google.gson.annotations.Expose.class
            java.lang.annotation.Annotation r0 = r7.getAnnotation(r0)
            com.google.gson.annotations.Expose r0 = (com.google.gson.annotations.Expose) r0
            if (r0 == 0) goto L4e
            if (r8 == 0) goto L48
            boolean r2 = r0.serialize()
            if (r2 != 0) goto L4f
            goto L4e
        L48:
            boolean r2 = r0.deserialize()
            if (r2 != 0) goto L4f
        L4e:
            return r1
        L4f:
            boolean r0 = r6.serializeInnerClasses
            if (r0 != 0) goto L5e
            java.lang.Class r0 = r7.getType()
            boolean r0 = r6.isInnerClass(r0)
            if (r0 == 0) goto L5e
            return r1
        L5e:
            java.lang.Class r0 = r7.getType()
            boolean r0 = r6.isAnonymousOrLocal(r0)
            if (r0 == 0) goto L69
            return r1
        L69:
            if (r8 == 0) goto L6e
            java.util.List<com.google.gson.ExclusionStrategy> r0 = r6.serializationStrategies
            goto L70
        L6e:
            java.util.List<com.google.gson.ExclusionStrategy> r0 = r6.deserializationStrategies
        L70:
            boolean r2 = r0.isEmpty()
            if (r2 != 0) goto L93
            com.google.gson.FieldAttributes r2 = new com.google.gson.FieldAttributes
            r2.<init>(r7)
            java.util.Iterator r3 = r0.iterator()
        L7f:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L93
            java.lang.Object r4 = r3.next()
            com.google.gson.ExclusionStrategy r4 = (com.google.gson.ExclusionStrategy) r4
            boolean r5 = r4.shouldSkipField(r2)
            if (r5 == 0) goto L92
            return r1
        L92:
            goto L7f
        L93:
            r1 = 0
            return r1
    }

    public com.google.gson.internal.Excluder excludeFieldsWithoutExposeAnnotation() {
            r2 = this;
            com.google.gson.internal.Excluder r0 = r2.clone()
            r1 = 1
            r0.requireExpose = r1
            return r0
    }

    public com.google.gson.internal.Excluder withExclusionStrategy(com.google.gson.ExclusionStrategy r4, boolean r5, boolean r6) {
            r3 = this;
            com.google.gson.internal.Excluder r0 = r3.clone()
            if (r5 == 0) goto L14
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.List<com.google.gson.ExclusionStrategy> r2 = r3.serializationStrategies
            r1.<init>(r2)
            r0.serializationStrategies = r1
            java.util.List<com.google.gson.ExclusionStrategy> r1 = r0.serializationStrategies
            r1.add(r4)
        L14:
            if (r6 == 0) goto L24
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.List<com.google.gson.ExclusionStrategy> r2 = r3.deserializationStrategies
            r1.<init>(r2)
            r0.deserializationStrategies = r1
            java.util.List<com.google.gson.ExclusionStrategy> r1 = r0.deserializationStrategies
            r1.add(r4)
        L24:
            return r0
    }

    public com.google.gson.internal.Excluder withModifiers(int... r6) {
            r5 = this;
            com.google.gson.internal.Excluder r0 = r5.clone()
            r1 = 0
            r0.modifiers = r1
            int r2 = r6.length
        L8:
            if (r1 >= r2) goto L14
            r3 = r6[r1]
            int r4 = r0.modifiers
            r4 = r4 | r3
            r0.modifiers = r4
            int r1 = r1 + 1
            goto L8
        L14:
            return r0
    }

    public com.google.gson.internal.Excluder withVersion(double r2) {
            r1 = this;
            com.google.gson.internal.Excluder r0 = r1.clone()
            r0.version = r2
            return r0
    }
}
