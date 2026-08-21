package com.czhj.sdk.common.json;

public class JSONSerializer {
    private static java.util.regex.Pattern linePattern;

    static {
            java.lang.String r0 = "_(\\w)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.czhj.sdk.common.json.JSONSerializer.linePattern = r0
            return
    }

    public JSONSerializer() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String Serialize(java.lang.Object r3) throws com.czhj.sdk.common.json.CyclicObjectException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1 = 0
            r2 = 0
            java.lang.String r3 = Serialize(r3, r0, r2, r1, r1)
            return r3
    }

    public static java.lang.String Serialize(java.lang.Object r2, java.lang.String r3) throws com.czhj.sdk.common.json.CyclicObjectException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1 = 0
            java.lang.String r2 = Serialize(r2, r0, r3, r1, r1)
            return r2
    }

    public static java.lang.String Serialize(java.lang.Object r2, java.lang.String r3, boolean r4) throws com.czhj.sdk.common.json.CyclicObjectException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1 = 0
            java.lang.String r2 = Serialize(r2, r0, r3, r4, r1)
            return r2
    }

    public static java.lang.String Serialize(java.lang.Object r1, java.lang.String r2, boolean r3, boolean r4) throws com.czhj.sdk.common.json.CyclicObjectException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = Serialize(r1, r0, r2, r3, r4)
            return r1
    }

    private static java.lang.String Serialize(java.lang.Object r4, java.util.HashMap<java.lang.Integer, java.lang.Object> r5, java.lang.String r6, boolean r7, boolean r8) throws com.czhj.sdk.common.json.CyclicObjectException {
            java.lang.String r0 = "null"
            if (r4 != 0) goto L5
            return r0
        L5:
            r1 = 0
            java.lang.Class r2 = r4.getClass()
            boolean r3 = r4 instanceof java.lang.String
            if (r3 == 0) goto L1e
            r0 = r4
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "\""
            java.lang.String r3 = "'"
            java.lang.String r0 = r0.replace(r1, r3)
            java.lang.String r1 = SerializeString(r0)
            goto L5a
        L1e:
            boolean r3 = r2.isPrimitive()
            if (r3 != 0) goto L56
            java.lang.Class<java.lang.Boolean> r3 = java.lang.Boolean.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Short> r3 = java.lang.Short.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Integer> r3 = java.lang.Integer.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Long> r3 = java.lang.Long.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Float> r3 = java.lang.Float.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Double> r3 = java.lang.Double.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Byte> r3 = java.lang.Byte.class
            if (r2 == r3) goto L56
            java.lang.Class<java.lang.Character> r3 = java.lang.Character.class
            if (r2 != r3) goto L45
            goto L56
        L45:
            if (r8 != 0) goto L5a
            int r3 = r4.hashCode()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r3 = r5.get(r3)
            if (r3 == 0) goto L5a
            return r0
        L56:
            java.lang.String r1 = SerializePrimitive(r4)
        L5a:
            int r0 = r4.hashCode()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r5.put(r0, r4)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L9a
            boolean r0 = r4 instanceof java.util.List
            if (r0 == 0) goto L80
            java.util.List r4 = (java.util.List) r4
            int r0 = r4.size()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Object[] r4 = r4.toArray(r0)
            java.lang.String r1 = SerializeArray(r4, r5, r7, r8)
            goto L9a
        L80:
            boolean r0 = r4 instanceof java.util.Map
            if (r0 == 0) goto L8b
            java.util.Map r4 = (java.util.Map) r4
            java.lang.String r1 = SerializeMap(r4, r5, r7, r8)
            goto L9a
        L8b:
            boolean r0 = r2.isArray()
            if (r0 == 0) goto L96
            java.lang.String r1 = SerializeArray(r4, r5, r7, r8)
            goto L9a
        L96:
            java.lang.String r1 = SerializeObject(r4, r5, r7, r8)
        L9a:
            boolean r4 = android.text.TextUtils.isEmpty(r6)
            if (r4 == 0) goto La1
            return r1
        La1:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "{"
            r4.<init>(r5)
            if (r7 == 0) goto Lae
            java.lang.String r6 = lineToHump(r6)
        Lae:
            java.lang.String r5 = SerializeString(r6)
            r4.append(r5)
            r5 = 58
            r4.append(r5)
            r4.append(r1)
            r5 = 125(0x7d, float:1.75E-43)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            return r4
    }

    private static java.lang.String SerializeArray(java.lang.Object r5, java.util.HashMap<java.lang.Integer, java.lang.Object> r6, boolean r7, boolean r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            int r1 = java.lang.reflect.Array.getLength(r5)
            r2 = 0
        Lf:
            if (r2 >= r1) goto L29
            java.lang.Object r3 = java.lang.reflect.Array.get(r5, r2)
            r4 = 0
            java.lang.String r3 = Serialize(r3, r6, r4, r7, r8)
            r0.append(r3)
            int r3 = r1 + (-1)
            if (r2 >= r3) goto L26
            java.lang.String r3 = ","
            r0.append(r3)
        L26:
            int r2 = r2 + 1
            goto Lf
        L29:
            java.lang.String r5 = "]"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            return r5
    }

    private static java.lang.String SerializeMap(java.util.Map r4, java.util.HashMap<java.lang.Integer, java.lang.Object> r5, boolean r6, boolean r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{"
            r0.append(r1)
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
            r1 = 0
        L13:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L4e
            java.lang.Object r2 = r4.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = r3.toString()
            java.lang.Object r2 = r2.getValue()
            if (r1 == 0) goto L32
            java.lang.String r1 = ","
            r0.append(r1)
        L32:
            java.lang.String r1 = SerializeString(r3)
            if (r6 == 0) goto L3c
            java.lang.String r1 = lineToHump(r1)
        L3c:
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            r1 = 0
            java.lang.String r1 = Serialize(r2, r5, r1, r6, r7)
            r0.append(r1)
            r1 = 1
            goto L13
        L4e:
            java.lang.String r4 = "}"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    private static java.lang.String SerializeObject(java.lang.Object r11, java.util.HashMap<java.lang.Integer, java.lang.Object> r12, boolean r13, boolean r14) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{"
            r0.append(r1)
            java.lang.Class r1 = r11.getClass()
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()
            int r2 = r1.length
            r3 = 0
            r4 = r3
        L15:
            if (r3 >= r2) goto L6d
            r5 = r1[r3]
            r6 = 1
            r5.setAccessible(r6)
            java.lang.Object r7 = r5.get(r11)     // Catch: java.lang.Throwable -> L64
            java.lang.String r8 = r5.getName()     // Catch: java.lang.Throwable -> L64
            int r9 = r5.getModifiers()     // Catch: java.lang.Throwable -> L64
            boolean r9 = java.lang.reflect.Modifier.isStatic(r9)     // Catch: java.lang.Throwable -> L64
            java.lang.Class<com.czhj.sdk.common.json.Transient> r10 = com.czhj.sdk.common.json.Transient.class
            boolean r5 = r5.isAnnotationPresent(r10)     // Catch: java.lang.Throwable -> L64
            java.lang.String r10 = "this$"
            boolean r10 = r8.startsWith(r10)     // Catch: java.lang.Throwable -> L64
            if (r10 != 0) goto L6a
            if (r9 != 0) goto L6a
            if (r7 == 0) goto L41
            if (r5 != 0) goto L6a
        L41:
            if (r4 == 0) goto L48
            java.lang.String r5 = ","
            r0.append(r5)     // Catch: java.lang.Throwable -> L64
        L48:
            java.lang.String r5 = SerializeString(r8)     // Catch: java.lang.Throwable -> L64
            if (r13 == 0) goto L52
            java.lang.String r5 = lineToHump(r5)     // Catch: java.lang.Throwable -> L64
        L52:
            r0.append(r5)     // Catch: java.lang.Throwable -> L64
            java.lang.String r5 = ":"
            r0.append(r5)     // Catch: java.lang.Throwable -> L64
            r5 = 0
            java.lang.String r5 = Serialize(r7, r12, r5, r13, r14)     // Catch: java.lang.Throwable -> L64
            r0.append(r5)     // Catch: java.lang.Throwable -> L64
            r4 = r6
            goto L6a
        L64:
            r5 = move-exception
            java.lang.String r6 = "json seriallize error"
            com.czhj.sdk.logger.SigmobLog.e(r6, r5)
        L6a:
            int r3 = r3 + 1
            goto L15
        L6d:
            java.lang.String r11 = "}"
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            return r11
    }

    private static java.lang.String SerializePrimitive(java.lang.Object r0) {
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static java.lang.String SerializeString(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\""
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.String lineToHump(java.lang.String r2) {
            java.util.regex.Pattern r0 = com.czhj.sdk.common.json.JSONSerializer.linePattern
            java.util.regex.Matcher r0 = r0.matcher(r2)
            boolean r0 = r0.find()
            if (r0 == 0) goto L35
            java.lang.String r2 = r2.toLowerCase()
            java.util.regex.Pattern r0 = com.czhj.sdk.common.json.JSONSerializer.linePattern
            java.util.regex.Matcher r2 = r0.matcher(r2)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
        L1b:
            boolean r1 = r2.find()
            if (r1 == 0) goto L2e
            r1 = 1
            java.lang.String r1 = r2.group(r1)
            java.lang.String r1 = r1.toUpperCase()
            r2.appendReplacement(r0, r1)
            goto L1b
        L2e:
            r2.appendTail(r0)
            java.lang.String r2 = r0.toString()
        L35:
            return r2
    }
}
