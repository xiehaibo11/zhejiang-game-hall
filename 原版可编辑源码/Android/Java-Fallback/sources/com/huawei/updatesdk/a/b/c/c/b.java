package com.huawei.updatesdk.a.b.c.c;

public abstract class b {
    private static final char COMMA = ',';
    private static final java.lang.String END_FLAG = "_";
    private static final java.lang.String TAG = "b";

    private static class a implements java.security.PrivilegedAction {
        private java.lang.reflect.Field a;

        a(java.lang.reflect.Field r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public java.lang.Object run() {
                r2 = this;
                java.lang.reflect.Field r0 = r2.a
                r1 = 1
                r0.setAccessible(r1)
                r0 = 0
                return r0
        }
    }

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String arrayToJson(java.lang.Object r5) {
            r4 = this;
            int r0 = java.lang.reflect.Array.getLength(r5)
            if (r0 > 0) goto L9
            java.lang.String r5 = "[]"
            return r5
        L9:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "["
            r1.append(r2)
            r2 = 0
        L14:
            if (r2 >= r0) goto L2b
            java.lang.Object r3 = java.lang.reflect.Array.get(r5, r2)
            java.lang.String r3 = r4.valueToJson(r3)
            if (r3 == 0) goto L28
            r1.append(r3)
            r3 = 44
            r1.append(r3)
        L28:
            int r2 = r2 + 1
            goto L14
        L2b:
            r4.formatJsonStr(r1)
            java.lang.String r5 = "]"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            return r5
    }

    private void formatJsonStr(java.lang.StringBuilder r5) {
            r4 = this;
            int r0 = r5.length()
            if (r0 <= 0) goto L13
            int r1 = r0 + (-1)
            char r2 = r5.charAt(r1)
            r3 = 44
            if (r2 != r3) goto L13
            r5.delete(r1, r0)
        L13:
            return
    }

    private boolean isPrimitiveObj(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.Integer
            if (r0 != 0) goto L23
            boolean r0 = r2 instanceof java.lang.Long
            if (r0 != 0) goto L23
            boolean r0 = r2 instanceof java.lang.Boolean
            if (r0 != 0) goto L23
            boolean r0 = r2 instanceof java.lang.Float
            if (r0 != 0) goto L23
            boolean r0 = r2 instanceof java.lang.Byte
            if (r0 != 0) goto L23
            boolean r0 = r2 instanceof java.lang.Character
            if (r0 != 0) goto L23
            boolean r0 = r2 instanceof java.lang.Double
            if (r0 != 0) goto L23
            boolean r2 = r2 instanceof java.lang.Short
            if (r2 == 0) goto L21
            goto L23
        L21:
            r2 = 0
            goto L24
        L23:
            r2 = 1
        L24:
            return r2
    }

    private java.lang.Object jsonBeanFromJson(java.lang.Class r1, java.lang.Object r2) {
            r0 = this;
            java.lang.Object r1 = r1.newInstance()
            com.huawei.updatesdk.a.b.c.c.b r1 = (com.huawei.updatesdk.a.b.c.c.b) r1
            org.json.JSONObject r2 = (org.json.JSONObject) r2
            r1.fromJson(r2)
            return r1
    }

    private java.lang.String mapToJson(java.util.Map r5) {
            r4 = this;
            int r0 = r5.size()
            if (r0 > 0) goto L9
            java.lang.String r5 = "{}"
            return r5
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{"
            r0.append(r1)
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L1b:
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = r4.valueToJson(r1)
            if (r1 == 0) goto L41
            java.lang.String r3 = "\""
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = "\":"
            r0.append(r2)
            r0.append(r1)
        L41:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L4f
            if (r1 == 0) goto L1b
            r1 = 44
            r0.append(r1)
            goto L1b
        L4f:
            java.lang.String r5 = "}"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            return r5
    }

    private void processValueError(java.lang.reflect.Field r3, java.lang.Object r4) {
            r2 = this;
            if (r4 == 0) goto Ld0
            boolean r0 = r4 instanceof java.lang.String
            if (r0 != 0) goto L8
            goto Ld0
        L8:
            java.lang.Class r0 = r3.getType()     // Catch: java.lang.IllegalAccessException -> Lb5
            boolean r1 = r0.isPrimitive()     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 != 0) goto L13
            return
        L13:
            java.lang.String r0 = r0.getName()     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.String r1 = "int"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto L2e
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
        L29:
            r3.set(r2, r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto Ld0
        L2e:
            java.lang.String r1 = "float"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto L41
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            float r4 = java.lang.Float.parseFloat(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Float r4 = java.lang.Float.valueOf(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        L41:
            java.lang.String r1 = "long"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto L54
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            long r0 = java.lang.Long.parseLong(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Long r4 = java.lang.Long.valueOf(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        L54:
            java.lang.String r1 = "boolean"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto L67
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            boolean r4 = java.lang.Boolean.parseBoolean(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        L67:
            java.lang.String r1 = "double"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto L7a
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            double r0 = java.lang.Double.parseDouble(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Double r4 = java.lang.Double.valueOf(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        L7a:
            java.lang.String r1 = "short"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto L8d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            short r4 = java.lang.Short.parseShort(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Short r4 = java.lang.Short.valueOf(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        L8d:
            java.lang.String r1 = "byte"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r1 == 0) goto La0
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            byte r4 = java.lang.Byte.parseByte(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        La0:
            java.lang.String r1 = "char"
            boolean r0 = r1.equals(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            if (r0 == 0) goto Ld0
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.IllegalAccessException -> Lb5
            r0 = 0
            char r4 = r4.charAt(r0)     // Catch: java.lang.IllegalAccessException -> Lb5
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.IllegalAccessException -> Lb5
            goto L29
        Lb5:
            r3 = move-exception
            java.lang.String r4 = com.huawei.updatesdk.a.b.c.c.b.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "processValueError Throwable:"
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r4, r3)
        Ld0:
            return
    }

    private java.lang.Object valueFromJson(java.lang.Class r3, java.lang.Class r4, java.lang.Object r5) {
            r2 = this;
            java.lang.Class<com.huawei.updatesdk.a.b.c.c.b> r0 = com.huawei.updatesdk.a.b.c.c.b.class
            boolean r1 = r3.isPrimitive()
            if (r1 != 0) goto L6a
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L11
            goto L6a
        L11:
            java.lang.Class<java.util.List> r1 = java.util.List.class
            boolean r1 = r1.isAssignableFrom(r3)
            if (r1 == 0) goto L1e
            java.lang.Object r5 = r2.listFromJson(r4, r5)
            goto L84
        L1e:
            boolean r1 = r0.isAssignableFrom(r3)
            if (r1 == 0) goto L46
            boolean r4 = r3.equals(r0)
            if (r4 != 0) goto L2f
            java.lang.Object r5 = r2.jsonBeanFromJson(r3, r5)
            goto L84
        L2f:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "error type, type:"
            r5.append(r0)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L46:
            java.lang.Class<java.util.Map> r0 = java.util.Map.class
            boolean r0 = r0.isAssignableFrom(r3)
            if (r0 == 0) goto L53
            java.lang.Object r5 = r2.mapFromJson(r4, r5)
            goto L84
        L53:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "unsupport type, Type:"
            r5.append(r0)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L6a:
            java.lang.String r3 = r3.getName()
            java.lang.String r4 = "float"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L84
            boolean r3 = r5 instanceof java.lang.Double
            if (r3 == 0) goto L84
            java.lang.Double r5 = (java.lang.Double) r5
            float r3 = r5.floatValue()
            java.lang.Float r5 = java.lang.Float.valueOf(r3)
        L84:
            return r5
    }

    private java.lang.String valueToJson(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            goto L4b
        L4:
            boolean r1 = r3 instanceof java.lang.String
            if (r1 == 0) goto L11
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = org.json.JSONObject.quote(r3)
            goto L4b
        L11:
            boolean r1 = r2.isPrimitiveObj(r3)
            if (r1 == 0) goto L1c
            java.lang.String r0 = java.lang.String.valueOf(r3)
            goto L4b
        L1c:
            boolean r1 = r3 instanceof com.huawei.updatesdk.a.b.c.c.b
            if (r1 == 0) goto L27
            com.huawei.updatesdk.a.b.c.c.b r3 = (com.huawei.updatesdk.a.b.c.c.b) r3
            java.lang.String r0 = r3.toJson()
            goto L4b
        L27:
            boolean r1 = r3 instanceof java.util.List
            if (r1 == 0) goto L32
            java.util.List r3 = (java.util.List) r3
            java.lang.String r0 = r2.listToJson(r3)
            goto L4b
        L32:
            boolean r1 = r3 instanceof java.util.Map
            if (r1 == 0) goto L3d
            java.util.Map r3 = (java.util.Map) r3
            java.lang.String r0 = r2.mapToJson(r3)
            goto L4b
        L3d:
            java.lang.Class r1 = r3.getClass()
            boolean r1 = r1.isArray()
            if (r1 == 0) goto L4b
            java.lang.String r0 = r2.arrayToJson(r3)
        L4b:
            return r0
    }

    public void fromJson(org.json.JSONObject r10) {
            r9 = this;
            java.lang.Class r0 = r9.getClass()
            java.lang.reflect.Field[] r0 = com.huawei.updatesdk.a.a.d.f.a(r0)
            r1 = 0
            r2 = 0
            r3 = r1
        Lb:
            int r4 = r0.length
            if (r3 >= r4) goto L9d
            com.huawei.updatesdk.a.b.c.c.b$a r4 = new com.huawei.updatesdk.a.b.c.c.b$a
            r5 = r0[r3]
            r4.<init>(r5)
            java.security.AccessController.doPrivileged(r4)
            r4 = r0[r3]
            java.lang.String r4 = r4.getName()
            r5 = r0[r3]
            java.lang.Class<com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission> r6 = com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission.class
            boolean r5 = r5.isAnnotationPresent(r6)
            java.lang.String r6 = "_"
            if (r5 != 0) goto L31
            boolean r5 = r4.endsWith(r6)
            if (r5 != 0) goto L31
            goto L99
        L31:
            boolean r5 = r4.endsWith(r6)
            if (r5 == 0) goto L41
            int r5 = r4.length()
            int r5 = r5 + (-1)
            java.lang.String r4 = r4.substring(r1, r5)
        L41:
            boolean r5 = r10.has(r4)
            if (r5 != 0) goto L48
            goto L99
        L48:
            java.lang.Object r5 = r10.get(r4)
            java.lang.Object r6 = org.json.JSONObject.NULL
            boolean r6 = r6.equals(r5)
            if (r6 == 0) goto L55
            goto L99
        L55:
            r6 = r0[r3]     // Catch: java.lang.Exception -> L6b
            java.lang.Class r6 = r6.getType()     // Catch: java.lang.Exception -> L6b
            r7 = r0[r3]     // Catch: java.lang.Exception -> L6b
            java.lang.Class r7 = com.huawei.updatesdk.a.a.d.f.a(r7)     // Catch: java.lang.Exception -> L6b
            java.lang.Object r2 = r9.valueFromJson(r6, r7, r5)     // Catch: java.lang.Exception -> L6b
            r5 = r0[r3]     // Catch: java.lang.Exception -> L6b
            r5.set(r9, r2)     // Catch: java.lang.Exception -> L6b
            goto L99
        L6b:
            r5 = move-exception
            java.lang.String r6 = com.huawei.updatesdk.a.b.c.c.b.TAG
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.Class r8 = r9.getClass()
            java.lang.String r8 = r8.getName()
            r7.append(r8)
            java.lang.String r8 = ".fromJson error, fieldName:"
            r7.append(r8)
            r7.append(r4)
            java.lang.String r4 = r5.toString()
            r7.append(r4)
            java.lang.String r4 = r7.toString()
            com.huawei.updatesdk.a.a.a.a(r6, r4)
            r4 = r0[r3]
            r9.processValueError(r4, r2)
        L99:
            int r3 = r3 + 1
            goto Lb
        L9d:
            return
    }

    protected java.lang.Object listFromJson(java.lang.Class r7, java.lang.Object r8) {
            r6 = this;
            if (r7 == 0) goto L6a
            boolean r0 = r8 instanceof org.json.JSONArray
            if (r0 == 0) goto L53
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.json.JSONArray r8 = (org.json.JSONArray) r8
            r1 = 0
        Le:
            int r2 = r8.length()
            if (r1 >= r2) goto L52
            java.lang.Object r2 = r8.get(r1)
            r3 = 0
            java.lang.Object r2 = r6.valueFromJson(r7, r3, r2)
            if (r2 == 0) goto L4f
            java.lang.Class r3 = r2.getClass()
            boolean r3 = r7.equals(r3)
            if (r3 == 0) goto L2d
            r0.add(r2)
            goto L4f
        L2d:
            java.lang.String r3 = com.huawei.updatesdk.a.b.c.c.b.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "listFromJson error, memberClass:"
            r4.append(r5)
            r4.append(r7)
            java.lang.String r5 = ", valueClass:"
            r4.append(r5)
            java.lang.Class r2 = r2.getClass()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r3, r2)
        L4f:
            int r1 = r1 + 1
            goto Le
        L52:
            return r0
        L53:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "jsonobject is not JSONArray, jsonValue:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r7.<init>(r8)
            throw r7
        L6a:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "generic type is null"
            r7.<init>(r8)
            throw r7
    }

    protected java.lang.String listToJson(java.util.List r4) {
            r3 = this;
            int r0 = r4.size()
            if (r0 > 0) goto L9
            java.lang.String r4 = "[]"
            return r4
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            r1 = 0
        L14:
            int r2 = r4.size()
            if (r1 >= r2) goto L2f
            java.lang.Object r2 = r4.get(r1)
            java.lang.String r2 = r3.valueToJson(r2)
            if (r2 == 0) goto L2c
            r0.append(r2)
            r2 = 44
            r0.append(r2)
        L2c:
            int r1 = r1 + 1
            goto L14
        L2f:
            r3.formatJsonStr(r0)
            java.lang.String r4 = "]"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    protected java.lang.Object mapFromJson(java.lang.Class r7, java.lang.Object r8) {
            r6 = this;
            if (r7 == 0) goto L71
            boolean r0 = r8 instanceof org.json.JSONObject
            if (r0 == 0) goto L5a
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            org.json.JSONObject r8 = (org.json.JSONObject) r8
            java.util.Iterator r1 = r8.keys()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L59
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r8.get(r2)
            r4 = 0
            java.lang.Object r3 = r6.valueFromJson(r7, r4, r3)
            if (r3 == 0) goto L11
            java.lang.Class r4 = r3.getClass()
            boolean r4 = r7.equals(r4)
            if (r4 == 0) goto L36
            r0.put(r2, r3)
            goto L11
        L36:
            java.lang.String r2 = com.huawei.updatesdk.a.b.c.c.b.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mapFromJson error, memberClass:"
            r4.append(r5)
            r4.append(r7)
            java.lang.String r5 = ", valueClass:"
            r4.append(r5)
            java.lang.Class r3 = r3.getClass()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r2, r3)
            goto L11
        L59:
            return r0
        L5a:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "jsonobject is not JSONObject, jsonValue:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r7.<init>(r8)
            throw r7
        L71:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "generic type is null"
            r7.<init>(r8)
            throw r7
    }

    public java.lang.String toJson() {
            r7 = this;
            java.lang.Class r0 = r7.getClass()
            java.lang.reflect.Field[] r0 = com.huawei.updatesdk.a.a.d.f.a(r0)
            int r1 = r0.length
            if (r1 > 0) goto Le
            java.lang.String r0 = ""
            return r0
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "{"
            r1.append(r2)
            r2 = 0
            r3 = r2
        L1a:
            int r4 = r0.length
            if (r3 >= r4) goto L76
            com.huawei.updatesdk.a.b.c.c.b$a r4 = new com.huawei.updatesdk.a.b.c.c.b$a
            r5 = r0[r3]
            r4.<init>(r5)
            java.security.AccessController.doPrivileged(r4)
            r4 = r0[r3]
            java.lang.String r4 = r4.getName()
            r5 = r0[r3]
            java.lang.Class<com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission> r6 = com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission.class
            boolean r5 = r5.isAnnotationPresent(r6)
            java.lang.String r6 = "_"
            if (r5 != 0) goto L42
            if (r4 == 0) goto L73
            boolean r5 = r4.endsWith(r6)
            if (r5 != 0) goto L42
            goto L73
        L42:
            boolean r5 = r4.endsWith(r6)
            if (r5 == 0) goto L52
            int r5 = r4.length()
            int r5 = r5 + (-1)
            java.lang.String r4 = r4.substring(r2, r5)
        L52:
            r5 = r0[r3]
            java.lang.Object r5 = r5.get(r7)
            java.lang.String r5 = r7.valueToJson(r5)
            if (r5 == 0) goto L73
            java.lang.String r6 = "\""
            r1.append(r6)
            r1.append(r4)
            java.lang.String r4 = "\":"
            r1.append(r4)
            r1.append(r5)
            r4 = 44
            r1.append(r4)
        L73:
            int r3 = r3 + 1
            goto L1a
        L76:
            r7.formatJsonStr(r1)
            java.lang.String r0 = "}"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
