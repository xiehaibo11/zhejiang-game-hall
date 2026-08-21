package com.czhj.sdk.common.json;

public class JSONDeserializer {
    public JSONDeserializer() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T Deserialize(java.lang.Class<T> r1, java.lang.Object r2) throws com.czhj.sdk.common.json.MatchTypeException {
            boolean r0 = r2 instanceof org.json.JSONObject
            if (r0 == 0) goto Lb
            org.json.JSONObject r2 = (org.json.JSONObject) r2
            java.lang.Object r1 = DeserializeObject(r1, r2)
            return r1
        Lb:
            boolean r0 = r2 instanceof org.json.JSONArray
            if (r0 == 0) goto L16
            org.json.JSONArray r2 = (org.json.JSONArray) r2
            java.lang.Object r1 = DeserializeArray(r1, r2)
            return r1
        L16:
            r1 = 0
            return r1
    }

    private static <T> T DeserializeArray(java.lang.Class<T> r2, org.json.JSONArray r3) throws com.czhj.sdk.common.json.MatchTypeException {
            boolean r0 = r2.isArray()
            if (r0 == 0) goto Lf
            java.lang.Class r2 = r2.getComponentType()
            java.lang.Object r2 = DeserializeArrayImpl(r2, r3)
            return r2
        Lf:
            com.czhj.sdk.common.json.MatchTypeException r3 = new com.czhj.sdk.common.json.MatchTypeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Assigning json array to non array type: "
            r0.append(r1)
            java.lang.String r2 = r2.getCanonicalName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }

    private static java.lang.Object DeserializeArrayImpl(java.lang.Class<?> r3, org.json.JSONArray r4) throws com.czhj.sdk.common.json.MatchTypeException {
            int r0 = r4.length()     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r3, r0)     // Catch: java.lang.Throwable -> L54
            r1 = 0
        L9:
            int r2 = r4.length()
            if (r1 >= r2) goto L53
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Throwable -> L37
            boolean r2 = isPrimitive(r2)     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L25
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Throwable -> L37
        L21:
            java.lang.reflect.Array.set(r0, r1, r2)     // Catch: java.lang.Throwable -> L37
            goto L34
        L25:
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L30
            java.lang.Object r2 = Deserialize(r3, r2)     // Catch: java.lang.Throwable -> L37
            goto L21
        L30:
            r2 = 0
            java.lang.reflect.Array.set(r0, r1, r2)     // Catch: java.lang.Throwable -> L37
        L34:
            int r1 = r1 + 1
            goto L9
        L37:
            r3 = move-exception
            com.czhj.sdk.common.json.MatchTypeException r4 = new com.czhj.sdk.common.json.MatchTypeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "JSON error while deserializing array: "
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L53:
            return r0
        L54:
            com.czhj.sdk.common.json.MatchTypeException r4 = new com.czhj.sdk.common.json.MatchTypeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Can't create array of type: "
            r0.append(r1)
            java.lang.String r3 = r3.getCanonicalName()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    private static <T> java.util.List<T> DeserializeList(java.lang.Class<?> r1, java.lang.Class<?> r2, org.json.JSONArray r3) throws com.czhj.sdk.common.json.MatchTypeException {
            java.lang.Object r2 = DeserializeArrayImpl(r2, r3)     // Catch: java.lang.Exception -> L24
            r3 = 0
            java.lang.Class[] r0 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L24
            java.lang.reflect.Constructor r1 = r1.getConstructor(r0)     // Catch: java.lang.Exception -> L24
            java.lang.Object[] r0 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L24
            java.lang.Object r1 = r1.newInstance(r0)     // Catch: java.lang.Exception -> L24
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Exception -> L24
        L13:
            int r0 = java.lang.reflect.Array.getLength(r2)     // Catch: java.lang.Exception -> L24
            if (r3 >= r0) goto L23
            java.lang.Object r0 = java.lang.reflect.Array.get(r2, r3)     // Catch: java.lang.Exception -> L24
            r1.add(r0)     // Catch: java.lang.Exception -> L24
            int r3 = r3 + 1
            goto L13
        L23:
            return r1
        L24:
            r1 = move-exception
            com.czhj.sdk.common.json.MatchTypeException r2 = new com.czhj.sdk.common.json.MatchTypeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Exception deserializing list: "
            r3.append(r0)
            java.lang.String r1 = r1.toString()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
    }

    private static <T> T DeserializeObject(java.lang.Class<T> r11, org.json.JSONObject r12) throws com.czhj.sdk.common.json.MatchTypeException {
            java.lang.Object r11 = createTarget(r11)
            r0 = 0
            if (r11 != 0) goto L8
            return r0
        L8:
            java.lang.Class r1 = r11.getClass()
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()
            int r2 = r1.length
            r3 = 0
            r4 = r3
        L13:
            if (r4 >= r2) goto Lb4
            r5 = r1[r4]
            boolean r6 = isValidDeserializableField(r5)
            if (r6 == 0) goto Lb0
            r6 = 1
            r5.setAccessible(r6)
            java.lang.Class r6 = r5.getType()
            boolean r7 = isPrimitive(r6)     // Catch: java.lang.Throwable -> L7c
            if (r7 == 0) goto L38
            java.lang.String r7 = r5.getName()     // Catch: java.lang.Throwable -> L7c
            java.lang.Object r7 = r12.opt(r7)     // Catch: java.lang.Throwable -> L7c
        L33:
            r5.set(r11, r7)     // Catch: java.lang.Throwable -> L7c
            goto Lb0
        L38:
            java.lang.String r7 = r5.getName()     // Catch: java.lang.Throwable -> L7c
            java.lang.Object r7 = r12.opt(r7)     // Catch: java.lang.Throwable -> L7c
            if (r7 == 0) goto L78
            java.lang.Class<java.util.List> r8 = java.util.List.class
            boolean r8 = r8.isAssignableFrom(r6)     // Catch: java.lang.Throwable -> L7c
            if (r8 == 0) goto L73
            java.lang.reflect.Type r8 = r5.getGenericType()     // Catch: java.lang.Throwable -> L7c
            java.lang.reflect.ParameterizedType r8 = (java.lang.reflect.ParameterizedType) r8     // Catch: java.lang.Throwable -> L7c
            java.lang.reflect.Type[] r8 = r8.getActualTypeArguments()     // Catch: java.lang.Throwable -> L7c
            r8 = r8[r3]     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L7c
            java.util.StringTokenizer r9 = new java.util.StringTokenizer     // Catch: java.lang.Throwable -> L7c
            java.lang.String r10 = " "
            r9.<init>(r8, r10)     // Catch: java.lang.Throwable -> L7c
            r9.nextToken()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r8 = r9.nextToken()     // Catch: java.lang.Throwable -> L7c
            java.lang.Class r8 = java.lang.Class.forName(r8)     // Catch: java.lang.Throwable -> L7c
            org.json.JSONArray r7 = (org.json.JSONArray) r7     // Catch: java.lang.Throwable -> L7c
            java.util.List r7 = DeserializeList(r6, r8, r7)     // Catch: java.lang.Throwable -> L7c
            goto L33
        L73:
            java.lang.Object r7 = Deserialize(r6, r7)     // Catch: java.lang.Throwable -> L7c
            goto L33
        L78:
            r5.set(r11, r0)     // Catch: java.lang.Throwable -> L7c
            goto Lb0
        L7c:
            r11 = move-exception
            com.czhj.sdk.common.json.MatchTypeException r12 = new com.czhj.sdk.common.json.MatchTypeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Setting "
            r0.append(r1)
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            java.lang.String r1 = " in "
            r0.append(r1)
            java.lang.String r1 = r6.getCanonicalName()
            r0.append(r1)
            java.lang.String r1 = " got error: "
            r0.append(r1)
            java.lang.String r11 = r11.toString()
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            r12.<init>(r11)
            throw r12
        Lb0:
            int r4 = r4 + 1
            goto L13
        Lb4:
            return r11
    }

    private static <T> T createTarget(java.lang.Class<T> r5) {
            boolean r0 = r5.isMemberClass()     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L24
            java.lang.Class r0 = r5.getEnclosingClass()     // Catch: java.lang.Throwable -> L29
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Throwable -> L29
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L29
            r4 = 0
            r3[r4] = r0     // Catch: java.lang.Throwable -> L29
            java.lang.reflect.Constructor r5 = r5.getDeclaredConstructor(r3)     // Catch: java.lang.Throwable -> L29
            r5.setAccessible(r2)     // Catch: java.lang.Throwable -> L29
            java.lang.Object[] r0 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L29
            r0[r4] = r1     // Catch: java.lang.Throwable -> L29
            java.lang.Object r5 = r5.newInstance(r0)     // Catch: java.lang.Throwable -> L29
            return r5
        L24:
            java.lang.Object r5 = r5.newInstance()     // Catch: java.lang.Throwable -> L29
            return r5
        L29:
            r5 = 0
            return r5
    }

    private static boolean isPrimitive(java.lang.Class<?> r1) {
            java.lang.Class<java.lang.Character> r0 = java.lang.Character.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Character.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Byte> r0 = java.lang.Byte.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Byte.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Short> r0 = java.lang.Short.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Short.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Integer.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Long> r0 = java.lang.Long.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Long.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Float> r0 = java.lang.Float.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Float.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Double> r0 = java.lang.Double.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Double.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.Boolean> r0 = java.lang.Boolean.class
            if (r1 == r0) goto L47
            java.lang.Class r0 = java.lang.Boolean.TYPE
            if (r1 == r0) goto L47
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            if (r1 != r0) goto L45
            goto L47
        L45:
            r1 = 0
            goto L48
        L47:
            r1 = 1
        L48:
            return r1
    }

    private static boolean isValidDeserializableField(java.lang.reflect.Field r2) {
            java.lang.Class<com.czhj.sdk.common.json.Transient> r0 = com.czhj.sdk.common.json.Transient.class
            boolean r0 = r2.isAnnotationPresent(r0)
            java.lang.String r2 = r2.getName()
            java.lang.String r1 = "this$"
            boolean r2 = r2.startsWith(r1)
            r1 = 1
            r2 = r2 ^ r1
            if (r0 != 0) goto L17
            if (r2 == 0) goto L17
            goto L18
        L17:
            r1 = 0
        L18:
            return r1
    }
}
