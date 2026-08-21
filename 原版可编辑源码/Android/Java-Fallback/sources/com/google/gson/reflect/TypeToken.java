package com.google.gson.reflect;

public class TypeToken<T> {
    final int hashCode;
    final java.lang.Class<? super T> rawType;
    final java.lang.reflect.Type type;

    protected TypeToken() {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.reflect.Type r0 = getSuperclassTypeParameter(r0)
            r1.type = r0
            java.lang.reflect.Type r0 = r1.type
            java.lang.Class r0 = com.google.gson.internal.$Gson$Types.getRawType(r0)
            r1.rawType = r0
            java.lang.reflect.Type r0 = r1.type
            int r0 = r0.hashCode()
            r1.hashCode = r0
            return
    }

    TypeToken(java.lang.reflect.Type r2) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = com.google.gson.internal.$Gson$Preconditions.checkNotNull(r2)
            java.lang.reflect.Type r0 = (java.lang.reflect.Type) r0
            java.lang.reflect.Type r0 = com.google.gson.internal.$Gson$Types.canonicalize(r0)
            r1.type = r0
            java.lang.reflect.Type r0 = r1.type
            java.lang.Class r0 = com.google.gson.internal.$Gson$Types.getRawType(r0)
            r1.rawType = r0
            java.lang.reflect.Type r0 = r1.type
            int r0 = r0.hashCode()
            r1.hashCode = r0
            return
    }

    private static java.lang.AssertionError buildUnexpectedTypeError(java.lang.reflect.Type r5, java.lang.Class<?>... r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Unexpected type. Expected one of: "
            r0.<init>(r1)
            int r1 = r6.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L1c
            r3 = r6[r2]
            java.lang.String r4 = r3.getName()
            r0.append(r4)
            java.lang.String r4 = ", "
            r0.append(r4)
            int r2 = r2 + 1
            goto L9
        L1c:
            java.lang.String r1 = "but got: "
            r0.append(r1)
            java.lang.Class r1 = r5.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = ", for type token: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            r1 = 46
            r0.append(r1)
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            return r1
    }

    public static <T> com.google.gson.reflect.TypeToken<T> get(java.lang.Class<T> r1) {
            com.google.gson.reflect.TypeToken r0 = new com.google.gson.reflect.TypeToken
            r0.<init>(r1)
            return r0
    }

    public static com.google.gson.reflect.TypeToken<?> get(java.lang.reflect.Type r1) {
            com.google.gson.reflect.TypeToken r0 = new com.google.gson.reflect.TypeToken
            r0.<init>(r1)
            return r0
    }

    public static com.google.gson.reflect.TypeToken<?> getArray(java.lang.reflect.Type r2) {
            com.google.gson.reflect.TypeToken r0 = new com.google.gson.reflect.TypeToken
            java.lang.reflect.GenericArrayType r1 = com.google.gson.internal.$Gson$Types.arrayOf(r2)
            r0.<init>(r1)
            return r0
    }

    public static com.google.gson.reflect.TypeToken<?> getParameterized(java.lang.reflect.Type r2, java.lang.reflect.Type... r3) {
            com.google.gson.reflect.TypeToken r0 = new com.google.gson.reflect.TypeToken
            r1 = 0
            java.lang.reflect.ParameterizedType r1 = com.google.gson.internal.$Gson$Types.newParameterizedTypeWithOwner(r1, r2, r3)
            r0.<init>(r1)
            return r0
    }

    static java.lang.reflect.Type getSuperclassTypeParameter(java.lang.Class<?> r4) {
            java.lang.reflect.Type r0 = r4.getGenericSuperclass()
            boolean r1 = r0 instanceof java.lang.Class
            if (r1 != 0) goto L17
            r1 = r0
            java.lang.reflect.ParameterizedType r1 = (java.lang.reflect.ParameterizedType) r1
            java.lang.reflect.Type[] r2 = r1.getActualTypeArguments()
            r3 = 0
            r2 = r2[r3]
            java.lang.reflect.Type r2 = com.google.gson.internal.$Gson$Types.canonicalize(r2)
            return r2
        L17:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Missing type parameter."
            r1.<init>(r2)
            throw r1
    }

    private static boolean isAssignableFrom(java.lang.reflect.Type r4, java.lang.reflect.GenericArrayType r5) {
            java.lang.reflect.Type r0 = r5.getGenericComponentType()
            boolean r1 = r0 instanceof java.lang.reflect.ParameterizedType
            if (r1 == 0) goto L35
            r1 = r4
            boolean r2 = r4 instanceof java.lang.reflect.GenericArrayType
            if (r2 == 0) goto L15
            r2 = r4
            java.lang.reflect.GenericArrayType r2 = (java.lang.reflect.GenericArrayType) r2
            java.lang.reflect.Type r1 = r2.getGenericComponentType()
            goto L28
        L15:
            boolean r2 = r4 instanceof java.lang.Class
            if (r2 == 0) goto L28
            r2 = r4
            java.lang.Class r2 = (java.lang.Class) r2
        L1c:
            boolean r3 = r2.isArray()
            if (r3 == 0) goto L27
            java.lang.Class r2 = r2.getComponentType()
            goto L1c
        L27:
            r1 = r2
        L28:
            r2 = r0
            java.lang.reflect.ParameterizedType r2 = (java.lang.reflect.ParameterizedType) r2
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            boolean r2 = isAssignableFrom(r1, r2, r3)
            return r2
        L35:
            r1 = 1
            return r1
    }

    private static boolean isAssignableFrom(java.lang.reflect.Type r11, java.lang.reflect.ParameterizedType r12, java.util.Map<java.lang.String, java.lang.reflect.Type> r13) {
            r0 = 0
            if (r11 != 0) goto L4
            return r0
        L4:
            boolean r1 = r12.equals(r11)
            r2 = 1
            if (r1 == 0) goto Lc
            return r2
        Lc:
            java.lang.Class r1 = com.google.gson.internal.$Gson$Types.getRawType(r11)
            r3 = 0
            boolean r4 = r11 instanceof java.lang.reflect.ParameterizedType
            if (r4 == 0) goto L18
            r3 = r11
            java.lang.reflect.ParameterizedType r3 = (java.lang.reflect.ParameterizedType) r3
        L18:
            if (r3 == 0) goto L4e
            java.lang.reflect.Type[] r4 = r3.getActualTypeArguments()
            java.lang.reflect.TypeVariable[] r5 = r1.getTypeParameters()
            r6 = 0
        L23:
            int r7 = r4.length
            if (r6 >= r7) goto L47
            r7 = r4[r6]
            r8 = r5[r6]
        L2a:
            boolean r9 = r7 instanceof java.lang.reflect.TypeVariable
            if (r9 == 0) goto L3d
            r9 = r7
            java.lang.reflect.TypeVariable r9 = (java.lang.reflect.TypeVariable) r9
            java.lang.String r10 = r9.getName()
            java.lang.Object r10 = r13.get(r10)
            r7 = r10
            java.lang.reflect.Type r7 = (java.lang.reflect.Type) r7
            goto L2a
        L3d:
            java.lang.String r9 = r8.getName()
            r13.put(r9, r7)
            int r6 = r6 + 1
            goto L23
        L47:
            boolean r6 = typeEquals(r3, r12, r13)
            if (r6 == 0) goto L4e
            return r2
        L4e:
            java.lang.reflect.Type[] r4 = r1.getGenericInterfaces()
            int r5 = r4.length
        L53:
            if (r0 >= r5) goto L66
            r6 = r4[r0]
            java.util.HashMap r7 = new java.util.HashMap
            r7.<init>(r13)
            boolean r7 = isAssignableFrom(r6, r12, r7)
            if (r7 == 0) goto L63
            return r2
        L63:
            int r0 = r0 + 1
            goto L53
        L66:
            java.lang.reflect.Type r0 = r1.getGenericSuperclass()
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>(r13)
            boolean r2 = isAssignableFrom(r0, r12, r2)
            return r2
    }

    private static boolean matches(java.lang.reflect.Type r1, java.lang.reflect.Type r2, java.util.Map<java.lang.String, java.lang.reflect.Type> r3) {
            boolean r0 = r2.equals(r1)
            if (r0 != 0) goto L1e
            boolean r0 = r1 instanceof java.lang.reflect.TypeVariable
            if (r0 == 0) goto L1c
            r0 = r1
            java.lang.reflect.TypeVariable r0 = (java.lang.reflect.TypeVariable) r0
            java.lang.String r0 = r0.getName()
            java.lang.Object r0 = r3.get(r0)
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L1c
            goto L1e
        L1c:
            r0 = 0
            goto L1f
        L1e:
            r0 = 1
        L1f:
            return r0
    }

    private static boolean typeEquals(java.lang.reflect.ParameterizedType r6, java.lang.reflect.ParameterizedType r7, java.util.Map<java.lang.String, java.lang.reflect.Type> r8) {
            java.lang.reflect.Type r0 = r6.getRawType()
            java.lang.reflect.Type r1 = r7.getRawType()
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L2b
            java.lang.reflect.Type[] r0 = r6.getActualTypeArguments()
            java.lang.reflect.Type[] r2 = r7.getActualTypeArguments()
            r3 = 0
        L18:
            int r4 = r0.length
            if (r3 >= r4) goto L29
            r4 = r0[r3]
            r5 = r2[r3]
            boolean r4 = matches(r4, r5, r8)
            if (r4 != 0) goto L26
            return r1
        L26:
            int r3 = r3 + 1
            goto L18
        L29:
            r1 = 1
            return r1
        L2b:
            return r1
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof com.google.gson.reflect.TypeToken
            if (r0 == 0) goto L13
            java.lang.reflect.Type r0 = r2.type
            r1 = r3
            com.google.gson.reflect.TypeToken r1 = (com.google.gson.reflect.TypeToken) r1
            java.lang.reflect.Type r1 = r1.type
            boolean r0 = com.google.gson.internal.$Gson$Types.equals(r0, r1)
            if (r0 == 0) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 0
        L14:
            return r0
    }

    public final java.lang.Class<? super T> getRawType() {
            r1 = this;
            java.lang.Class<? super T> r0 = r1.rawType
            return r0
    }

    public final java.lang.reflect.Type getType() {
            r1 = this;
            java.lang.reflect.Type r0 = r1.type
            return r0
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.hashCode
            return r0
    }

    @java.lang.Deprecated
    public boolean isAssignableFrom(com.google.gson.reflect.TypeToken<?> r2) {
            r1 = this;
            java.lang.reflect.Type r0 = r2.getType()
            boolean r0 = r1.isAssignableFrom(r0)
            return r0
    }

    @java.lang.Deprecated
    public boolean isAssignableFrom(java.lang.Class<?> r2) {
            r1 = this;
            boolean r0 = r1.isAssignableFrom(r2)
            return r0
    }

    @java.lang.Deprecated
    public boolean isAssignableFrom(java.lang.reflect.Type r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.reflect.Type r1 = r5.type
            boolean r1 = r1.equals(r6)
            r2 = 1
            if (r1 == 0) goto Le
            return r2
        Le:
            java.lang.reflect.Type r1 = r5.type
            boolean r3 = r1 instanceof java.lang.Class
            if (r3 == 0) goto L1f
            java.lang.Class<? super T> r0 = r5.rawType
            java.lang.Class r1 = com.google.gson.internal.$Gson$Types.getRawType(r6)
            boolean r0 = r0.isAssignableFrom(r1)
            return r0
        L1f:
            boolean r3 = r1 instanceof java.lang.reflect.ParameterizedType
            if (r3 == 0) goto L2f
            java.lang.reflect.ParameterizedType r1 = (java.lang.reflect.ParameterizedType) r1
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r0 = isAssignableFrom(r6, r1, r0)
            return r0
        L2f:
            boolean r3 = r1 instanceof java.lang.reflect.GenericArrayType
            if (r3 == 0) goto L4d
            java.lang.Class<? super T> r1 = r5.rawType
            java.lang.Class r3 = com.google.gson.internal.$Gson$Types.getRawType(r6)
            boolean r1 = r1.isAssignableFrom(r3)
            if (r1 == 0) goto L4b
            java.lang.reflect.Type r1 = r5.type
            java.lang.reflect.GenericArrayType r1 = (java.lang.reflect.GenericArrayType) r1
            boolean r1 = isAssignableFrom(r6, r1)
            if (r1 == 0) goto L4b
            r0 = 1
            goto L4c
        L4b:
        L4c:
            return r0
        L4d:
            r3 = 3
            java.lang.Class[] r3 = new java.lang.Class[r3]
            java.lang.Class<java.lang.Class> r4 = java.lang.Class.class
            r3[r0] = r4
            java.lang.Class<java.lang.reflect.ParameterizedType> r0 = java.lang.reflect.ParameterizedType.class
            r3[r2] = r0
            r0 = 2
            java.lang.Class<java.lang.reflect.GenericArrayType> r2 = java.lang.reflect.GenericArrayType.class
            r3[r0] = r2
            java.lang.AssertionError r0 = buildUnexpectedTypeError(r1, r3)
            throw r0
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.reflect.Type r0 = r1.type
            java.lang.String r0 = com.google.gson.internal.$Gson$Types.typeToString(r0)
            return r0
    }
}
