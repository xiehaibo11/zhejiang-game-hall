package org.json;

public class JSONObject {
    public static final java.lang.Object NULL = null;
    private final java.util.Map<java.lang.String, java.lang.Object> map;

    static class 1 {
    }

    private static final class Null {
        private Null() {
                r0 = this;
                r0.<init>()
                return
        }

        Null(org.json.JSONObject.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        protected final java.lang.Object clone() {
                r0 = this;
                return r0
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                if (r2 == 0) goto L7
                if (r2 != r1) goto L5
                goto L7
            L5:
                r0 = 0
                goto L8
            L7:
                r0 = 1
            L8:
                return r0
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = "null"
                return r0
        }
    }

    static {
            org.json.JSONObject$Null r0 = new org.json.JSONObject$Null
            r1 = 0
            r0.<init>(r1)
            org.json.JSONObject.NULL = r0
            return
    }

    public JSONObject() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.map = r0
            return
    }

    public JSONObject(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.populateMap(r1)
            return
    }

    public JSONObject(java.lang.Object r5, java.lang.String[] r6) {
            r4 = this;
            r4.<init>()
            java.lang.Class r0 = r5.getClass()
            r1 = 0
        L8:
            int r2 = r6.length
            if (r1 >= r2) goto L1d
            r2 = r6[r1]
            java.lang.reflect.Field r3 = r0.getField(r2)     // Catch: java.lang.Exception -> L19
            java.lang.Object r3 = r3.get(r5)     // Catch: java.lang.Exception -> L19
            r4.putOpt(r2, r3)     // Catch: java.lang.Exception -> L19
            goto L1a
        L19:
            r3 = move-exception
        L1a:
            int r1 = r1 + 1
            goto L8
        L1d:
            return
    }

    public JSONObject(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public JSONObject(java.lang.String r11, java.util.Locale r12) throws org.json.JSONException {
            r10 = this;
            r10.<init>()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.ClassLoader r0 = r0.getContextClassLoader()
            java.util.ResourceBundle r0 = java.util.ResourceBundle.getBundle(r11, r12, r0)
            java.util.Enumeration r1 = r0.getKeys()
        L14:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L52
            java.lang.Object r2 = r1.nextElement()
            if (r2 == 0) goto L51
            r3 = r2
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "\\."
            java.lang.String[] r3 = r3.split(r4)
            int r4 = r3.length
            int r4 = r4 + (-1)
            r5 = r10
            r6 = 0
        L2e:
            if (r6 >= r4) goto L45
            r7 = r3[r6]
            org.json.JSONObject r8 = r5.optJSONObject(r7)
            if (r8 != 0) goto L41
            org.json.JSONObject r9 = new org.json.JSONObject
            r9.<init>()
            r8 = r9
            r5.put(r7, r8)
        L41:
            r5 = r8
            int r6 = r6 + 1
            goto L2e
        L45:
            r6 = r3[r4]
            r7 = r2
            java.lang.String r7 = (java.lang.String) r7
            java.lang.String r7 = r0.getString(r7)
            r5.put(r6, r7)
        L51:
            goto L14
        L52:
            return
    }

    public JSONObject(java.util.Map<java.lang.String, java.lang.Object> r7) {
            r6 = this;
            r6.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r6.map = r0
            if (r7 == 0) goto L34
            java.util.Set r0 = r7.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L14:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L34
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            if (r2 == 0) goto L33
            java.util.Map<java.lang.String, java.lang.Object> r3 = r6.map
            java.lang.Object r4 = r1.getKey()
            java.lang.Object r5 = wrap(r2)
            r3.put(r4, r5)
        L33:
            goto L14
        L34:
            return
    }

    public JSONObject(org.json.JSONObject r4, java.lang.String[] r5) {
            r3 = this;
            r3.<init>()
            r0 = 0
        L4:
            int r1 = r5.length
            if (r0 >= r1) goto L17
            r1 = r5[r0]     // Catch: java.lang.Exception -> L13
            r2 = r5[r0]     // Catch: java.lang.Exception -> L13
            java.lang.Object r2 = r4.opt(r2)     // Catch: java.lang.Exception -> L13
            r3.putOnce(r1, r2)     // Catch: java.lang.Exception -> L13
            goto L14
        L13:
            r1 = move-exception
        L14:
            int r0 = r0 + 1
            goto L4
        L17:
            return
    }

    public JSONObject(org.json.JSONTokener r6) throws org.json.JSONException {
            r5 = this;
            r5.<init>()
            char r0 = r6.nextClean()
            r1 = 123(0x7b, float:1.72E-43)
            if (r0 != r1) goto L5f
        Lb:
            char r0 = r6.nextClean()
            if (r0 == 0) goto L58
            r1 = 125(0x7d, float:1.75E-43)
            if (r0 == r1) goto L57
            r6.back()
            java.lang.Object r2 = r6.nextValue()
            java.lang.String r2 = r2.toString()
            char r0 = r6.nextClean()
            r3 = 58
            if (r0 != r3) goto L50
            java.lang.Object r3 = r6.nextValue()
            r5.putOnce(r2, r3)
            char r3 = r6.nextClean()
            r4 = 44
            if (r3 == r4) goto L45
            r4 = 59
            if (r3 == r4) goto L45
            if (r3 != r1) goto L3e
            return
        L3e:
            java.lang.String r1 = "Expected a ',' or '}'"
            org.json.JSONException r1 = r6.syntaxError(r1)
            throw r1
        L45:
            char r3 = r6.nextClean()
            if (r3 != r1) goto L4c
            return
        L4c:
            r6.back()
            goto Lb
        L50:
            java.lang.String r1 = "Expected a ':' after a key"
            org.json.JSONException r1 = r6.syntaxError(r1)
            throw r1
        L57:
            return
        L58:
            java.lang.String r1 = "A JSONObject text must end with '}'"
            org.json.JSONException r1 = r6.syntaxError(r1)
            throw r1
        L5f:
            java.lang.String r0 = "A JSONObject text must begin with '{'"
            org.json.JSONException r0 = r6.syntaxError(r0)
            throw r0
    }

    public static java.lang.String doubleToString(double r3) {
            boolean r0 = java.lang.Double.isInfinite(r3)
            if (r0 != 0) goto L50
            boolean r0 = java.lang.Double.isNaN(r3)
            if (r0 == 0) goto Ld
            goto L50
        Ld:
            java.lang.String r0 = java.lang.Double.toString(r3)
            r1 = 46
            int r1 = r0.indexOf(r1)
            if (r1 <= 0) goto L4f
            r1 = 101(0x65, float:1.42E-43)
            int r1 = r0.indexOf(r1)
            if (r1 >= 0) goto L4f
            r1 = 69
            int r1 = r0.indexOf(r1)
            if (r1 >= 0) goto L4f
        L29:
            java.lang.String r1 = "0"
            boolean r1 = r0.endsWith(r1)
            r2 = 0
            if (r1 == 0) goto L3d
            int r1 = r0.length()
            int r1 = r1 + (-1)
            java.lang.String r0 = r0.substring(r2, r1)
            goto L29
        L3d:
            java.lang.String r1 = "."
            boolean r1 = r0.endsWith(r1)
            if (r1 == 0) goto L4f
            int r1 = r0.length()
            int r1 = r1 + (-1)
            java.lang.String r0 = r0.substring(r2, r1)
        L4f:
            return r0
        L50:
            java.lang.String r0 = "null"
            return r0
    }

    public static java.lang.String[] getNames(java.lang.Object r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.Class r1 = r6.getClass()
            java.lang.reflect.Field[] r2 = r1.getFields()
            int r3 = r2.length
            if (r3 != 0) goto L10
            return r0
        L10:
            java.lang.String[] r0 = new java.lang.String[r3]
            r4 = 0
        L13:
            if (r4 >= r3) goto L20
            r5 = r2[r4]
            java.lang.String r5 = r5.getName()
            r0[r4] = r5
            int r4 = r4 + 1
            goto L13
        L20:
            return r0
    }

    public static java.lang.String[] getNames(org.json.JSONObject r5) {
            int r0 = r5.length()
            if (r0 != 0) goto L8
            r1 = 0
            return r1
        L8:
            java.util.Iterator r1 = r5.keys()
            java.lang.String[] r2 = new java.lang.String[r0]
            r3 = 0
        Lf:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L20
            java.lang.Object r4 = r1.next()
            java.lang.String r4 = (java.lang.String) r4
            r2[r3] = r4
            int r3 = r3 + 1
            goto Lf
        L20:
            return r2
    }

    static final void indent(java.io.Writer r2, int r3) throws java.io.IOException {
            r0 = 0
        L1:
            if (r0 >= r3) goto Lb
            r1 = 32
            r2.write(r1)
            int r0 = r0 + 1
            goto L1
        Lb:
            return
    }

    public static java.lang.String numberToString(java.lang.Number r3) throws org.json.JSONException {
            if (r3 == 0) goto L48
            testValidity(r3)
            java.lang.String r0 = r3.toString()
            r1 = 46
            int r1 = r0.indexOf(r1)
            if (r1 <= 0) goto L47
            r1 = 101(0x65, float:1.42E-43)
            int r1 = r0.indexOf(r1)
            if (r1 >= 0) goto L47
            r1 = 69
            int r1 = r0.indexOf(r1)
            if (r1 >= 0) goto L47
        L21:
            java.lang.String r1 = "0"
            boolean r1 = r0.endsWith(r1)
            r2 = 0
            if (r1 == 0) goto L35
            int r1 = r0.length()
            int r1 = r1 + (-1)
            java.lang.String r0 = r0.substring(r2, r1)
            goto L21
        L35:
            java.lang.String r1 = "."
            boolean r1 = r0.endsWith(r1)
            if (r1 == 0) goto L47
            int r1 = r0.length()
            int r1 = r1 + (-1)
            java.lang.String r0 = r0.substring(r2, r1)
        L47:
            return r0
        L48:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Null pointer"
            r0.<init>(r1)
            throw r0
    }

    private void populateMap(java.lang.Object r14) {
            r13 = this;
            java.lang.String r0 = ""
            java.lang.Class r1 = r14.getClass()
            java.lang.ClassLoader r2 = r1.getClassLoader()
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            if (r2 == 0) goto L18
            java.lang.reflect.Method[] r5 = r1.getMethods()
            goto L1c
        L18:
            java.lang.reflect.Method[] r5 = r1.getDeclaredMethods()
        L1c:
            r6 = 0
        L1e:
            int r7 = r5.length
            if (r6 >= r7) goto Lc1
            r7 = r5[r6]     // Catch: java.lang.Exception -> Lbc
            int r8 = r7.getModifiers()     // Catch: java.lang.Exception -> Lbc
            boolean r8 = java.lang.reflect.Modifier.isPublic(r8)     // Catch: java.lang.Exception -> Lbc
            if (r8 == 0) goto Lbb
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Exception -> Lbc
            r9 = r0
            java.lang.String r10 = "get"
            boolean r10 = r8.startsWith(r10)     // Catch: java.lang.Exception -> Lbc
            if (r10 == 0) goto L54
            java.lang.String r10 = "getClass"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Lbc
            if (r10 != 0) goto L52
            java.lang.String r10 = "getDeclaringClass"
            boolean r10 = r10.equals(r8)     // Catch: java.lang.Exception -> Lbc
            if (r10 == 0) goto L4b
            goto L52
        L4b:
            r10 = 3
            java.lang.String r10 = r8.substring(r10)     // Catch: java.lang.Exception -> Lbc
            r9 = r10
            goto L62
        L52:
            r9 = r0
            goto L62
        L54:
            java.lang.String r10 = "is"
            boolean r10 = r8.startsWith(r10)     // Catch: java.lang.Exception -> Lbc
            if (r10 == 0) goto L62
            r10 = 2
            java.lang.String r10 = r8.substring(r10)     // Catch: java.lang.Exception -> Lbc
            r9 = r10
        L62:
            int r10 = r9.length()     // Catch: java.lang.Exception -> Lbc
            if (r10 <= 0) goto Lbb
            char r10 = r9.charAt(r3)     // Catch: java.lang.Exception -> Lbc
            boolean r10 = java.lang.Character.isUpperCase(r10)     // Catch: java.lang.Exception -> Lbc
            if (r10 == 0) goto Lbb
            java.lang.Class[] r10 = r7.getParameterTypes()     // Catch: java.lang.Exception -> Lbc
            int r10 = r10.length     // Catch: java.lang.Exception -> Lbc
            if (r10 != 0) goto Lbb
            int r10 = r9.length()     // Catch: java.lang.Exception -> Lbc
            if (r10 != r4) goto L85
            java.lang.String r10 = r9.toLowerCase()     // Catch: java.lang.Exception -> Lbc
            r9 = r10
            goto Lab
        L85:
            char r10 = r9.charAt(r4)     // Catch: java.lang.Exception -> Lbc
            boolean r10 = java.lang.Character.isUpperCase(r10)     // Catch: java.lang.Exception -> Lbc
            if (r10 != 0) goto Lab
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbc
            r10.<init>()     // Catch: java.lang.Exception -> Lbc
            java.lang.String r11 = r9.substring(r3, r4)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r11 = r11.toLowerCase()     // Catch: java.lang.Exception -> Lbc
            r10.append(r11)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r11 = r9.substring(r4)     // Catch: java.lang.Exception -> Lbc
            r10.append(r11)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> Lbc
            r9 = r10
        Lab:
            r10 = 0
            java.lang.Object r10 = r7.invoke(r14, r10)     // Catch: java.lang.Exception -> Lbc
            if (r10 == 0) goto Lbb
            java.util.Map<java.lang.String, java.lang.Object> r11 = r13.map     // Catch: java.lang.Exception -> Lbc
            java.lang.Object r12 = wrap(r10)     // Catch: java.lang.Exception -> Lbc
            r11.put(r9, r12)     // Catch: java.lang.Exception -> Lbc
        Lbb:
            goto Lbd
        Lbc:
            r7 = move-exception
        Lbd:
            int r6 = r6 + 1
            goto L1e
        Lc1:
            return
    }

    public static java.io.Writer quote(java.lang.String r9, java.io.Writer r10) throws java.io.IOException {
            if (r9 == 0) goto L9b
            int r0 = r9.length()
            if (r0 != 0) goto La
            goto L9b
        La:
            r0 = 0
            int r1 = r9.length()
            r2 = 34
            r10.write(r2)
            r3 = 0
        L15:
            if (r3 >= r1) goto L97
            r4 = r0
            char r0 = r9.charAt(r3)
            r5 = 12
            if (r0 == r5) goto L8d
            r5 = 13
            if (r0 == r5) goto L87
            r5 = 92
            if (r0 == r2) goto L80
            r6 = 47
            if (r0 == r6) goto L75
            if (r0 == r5) goto L80
            switch(r0) {
                case 8: goto L6f;
                case 9: goto L69;
                case 10: goto L63;
                default: goto L31;
            }
        L31:
            r5 = 32
            if (r0 < r5) goto L4a
            r5 = 128(0x80, float:1.8E-43)
            if (r0 < r5) goto L3d
            r5 = 160(0xa0, float:2.24E-43)
            if (r0 < r5) goto L4a
        L3d:
            r5 = 8192(0x2000, float:1.148E-41)
            if (r0 < r5) goto L46
            r5 = 8448(0x2100, float:1.1838E-41)
            if (r0 >= r5) goto L46
            goto L4a
        L46:
            r10.write(r0)
            goto L93
        L4a:
            java.lang.String r5 = "\\u"
            r10.write(r5)
            java.lang.String r5 = java.lang.Integer.toHexString(r0)
            r6 = 0
            int r7 = r5.length()
            int r7 = 4 - r7
            java.lang.String r8 = "0000"
            r10.write(r8, r6, r7)
            r10.write(r5)
            goto L93
        L63:
            java.lang.String r5 = "\\n"
            r10.write(r5)
            goto L93
        L69:
            java.lang.String r5 = "\\t"
            r10.write(r5)
            goto L93
        L6f:
            java.lang.String r5 = "\\b"
            r10.write(r5)
            goto L93
        L75:
            r6 = 60
            if (r4 != r6) goto L7c
            r10.write(r5)
        L7c:
            r10.write(r0)
            goto L93
        L80:
            r10.write(r5)
            r10.write(r0)
            goto L93
        L87:
            java.lang.String r5 = "\\r"
            r10.write(r5)
            goto L93
        L8d:
            java.lang.String r5 = "\\f"
            r10.write(r5)
        L93:
            int r3 = r3 + 1
            goto L15
        L97:
            r10.write(r2)
            return r10
        L9b:
            java.lang.String r0 = "\"\""
            r10.write(r0)
            return r10
    }

    public static java.lang.String quote(java.lang.String r4) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.lang.StringBuffer r1 = r0.getBuffer()
            monitor-enter(r1)
            java.io.Writer r2 = quote(r4, r0)     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            return r2
        L14:
            r2 = move-exception
            goto L1b
        L16:
            r2 = move-exception
            java.lang.String r3 = ""
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            return r3
        L1b:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r2
    }

    public static java.lang.Object stringToValue(java.lang.String r7) {
            java.lang.String r0 = ""
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L9
            return r7
        L9:
            java.lang.String r0 = "true"
            boolean r0 = r7.equalsIgnoreCase(r0)
            if (r0 == 0) goto L14
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            return r0
        L14:
            java.lang.String r0 = "false"
            boolean r0 = r7.equalsIgnoreCase(r0)
            if (r0 == 0) goto L1f
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            return r0
        L1f:
            java.lang.String r0 = "null"
            boolean r0 = r7.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            java.lang.Object r0 = org.json.JSONObject.NULL
            return r0
        L2a:
            r0 = 0
            char r0 = r7.charAt(r0)
            r1 = 48
            if (r0 < r1) goto L37
            r1 = 57
            if (r0 <= r1) goto L3b
        L37:
            r1 = 45
            if (r0 != r1) goto L8e
        L3b:
            r1 = 46
            int r1 = r7.indexOf(r1)     // Catch: java.lang.Exception -> L8d
            r2 = -1
            if (r1 > r2) goto L7b
            r1 = 101(0x65, float:1.42E-43)
            int r1 = r7.indexOf(r1)     // Catch: java.lang.Exception -> L8d
            if (r1 > r2) goto L7b
            r1 = 69
            int r1 = r7.indexOf(r1)     // Catch: java.lang.Exception -> L8d
            if (r1 <= r2) goto L55
            goto L7b
        L55:
            java.lang.Long r1 = new java.lang.Long     // Catch: java.lang.Exception -> L8d
            r1.<init>(r7)     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Exception -> L8d
            boolean r2 = r7.equals(r2)     // Catch: java.lang.Exception -> L8d
            if (r2 == 0) goto L8c
            long r2 = r1.longValue()     // Catch: java.lang.Exception -> L8d
            int r4 = r1.intValue()     // Catch: java.lang.Exception -> L8d
            long r4 = (long) r4     // Catch: java.lang.Exception -> L8d
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L7a
            int r2 = r1.intValue()     // Catch: java.lang.Exception -> L8d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L8d
            return r2
        L7a:
            return r1
        L7b:
            java.lang.Double r1 = java.lang.Double.valueOf(r7)     // Catch: java.lang.Exception -> L8d
            boolean r2 = r1.isInfinite()     // Catch: java.lang.Exception -> L8d
            if (r2 != 0) goto L8c
            boolean r2 = r1.isNaN()     // Catch: java.lang.Exception -> L8d
            if (r2 != 0) goto L8c
            return r1
        L8c:
            goto L8e
        L8d:
            r1 = move-exception
        L8e:
            return r7
    }

    public static void testValidity(java.lang.Object r2) throws org.json.JSONException {
            if (r2 == 0) goto L3e
            boolean r0 = r2 instanceof java.lang.Double
            java.lang.String r1 = "JSON does not allow non-finite numbers."
            if (r0 == 0) goto L21
            r0 = r2
            java.lang.Double r0 = (java.lang.Double) r0
            boolean r0 = r0.isInfinite()
            if (r0 != 0) goto L1b
            r0 = r2
            java.lang.Double r0 = (java.lang.Double) r0
            boolean r0 = r0.isNaN()
            if (r0 != 0) goto L1b
            goto L3e
        L1b:
            org.json.JSONException r0 = new org.json.JSONException
            r0.<init>(r1)
            throw r0
        L21:
            boolean r0 = r2 instanceof java.lang.Float
            if (r0 == 0) goto L3e
            r0 = r2
            java.lang.Float r0 = (java.lang.Float) r0
            boolean r0 = r0.isInfinite()
            if (r0 != 0) goto L38
            r0 = r2
            java.lang.Float r0 = (java.lang.Float) r0
            boolean r0 = r0.isNaN()
            if (r0 != 0) goto L38
            goto L3e
        L38:
            org.json.JSONException r0 = new org.json.JSONException
            r0.<init>(r1)
            throw r0
        L3e:
            return
    }

    public static java.lang.String valueToString(java.lang.Object r4) throws org.json.JSONException {
            if (r4 == 0) goto L97
            r0 = 0
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto Lb
            goto L97
        Lb:
            boolean r0 = r4 instanceof org.json.JSONString
            if (r0 == 0) goto L3a
            r0 = r4
            org.json.JSONString r0 = (org.json.JSONString) r0     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = r0.toJSONString()     // Catch: java.lang.Exception -> L33
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1c
            return r0
        L1c:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Bad value from toJSONString: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L33:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
        L3a:
            boolean r0 = r4 instanceof java.lang.Number
            if (r0 == 0) goto L46
            r0 = r4
            java.lang.Number r0 = (java.lang.Number) r0
            java.lang.String r0 = numberToString(r0)
            return r0
        L46:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 != 0) goto L92
            boolean r0 = r4 instanceof org.json.JSONObject
            if (r0 != 0) goto L92
            boolean r0 = r4 instanceof org.json.JSONArray
            if (r0 == 0) goto L53
            goto L92
        L53:
            boolean r0 = r4 instanceof java.util.Map
            if (r0 == 0) goto L64
            r0 = r4
            java.util.Map r0 = (java.util.Map) r0
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r0)
            java.lang.String r1 = r1.toString()
            return r1
        L64:
            boolean r0 = r4 instanceof java.util.Collection
            if (r0 == 0) goto L75
            r0 = r4
            java.util.Collection r0 = (java.util.Collection) r0
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>(r0)
            java.lang.String r1 = r1.toString()
            return r1
        L75:
            java.lang.Class r0 = r4.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L89
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r4)
            java.lang.String r0 = r0.toString()
            return r0
        L89:
            java.lang.String r0 = r4.toString()
            java.lang.String r0 = quote(r0)
            return r0
        L92:
            java.lang.String r0 = r4.toString()
            return r0
        L97:
            java.lang.String r0 = "null"
            return r0
    }

    public static java.lang.Object wrap(java.lang.Object r3) {
            if (r3 != 0) goto L5
            java.lang.Object r0 = org.json.JSONObject.NULL     // Catch: java.lang.Exception -> La0
            return r0
        L5:
            boolean r0 = r3 instanceof org.json.JSONObject     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof org.json.JSONArray     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            java.lang.Object r0 = org.json.JSONObject.NULL     // Catch: java.lang.Exception -> La0
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof org.json.JSONString     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Byte     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Character     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Short     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Integer     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Long     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Boolean     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Float     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.Double     // Catch: java.lang.Exception -> La0
            if (r0 != 0) goto L9f
            boolean r0 = r3 instanceof java.lang.String     // Catch: java.lang.Exception -> La0
            if (r0 == 0) goto L3e
            goto L9f
        L3e:
            boolean r0 = r3 instanceof java.util.Collection     // Catch: java.lang.Exception -> La0
            if (r0 == 0) goto L4b
            r0 = r3
            java.util.Collection r0 = (java.util.Collection) r0     // Catch: java.lang.Exception -> La0
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> La0
            r1.<init>(r0)     // Catch: java.lang.Exception -> La0
            return r1
        L4b:
            java.lang.Class r0 = r3.getClass()     // Catch: java.lang.Exception -> La0
            boolean r0 = r0.isArray()     // Catch: java.lang.Exception -> La0
            if (r0 == 0) goto L5b
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> La0
            r0.<init>(r3)     // Catch: java.lang.Exception -> La0
            return r0
        L5b:
            boolean r0 = r3 instanceof java.util.Map     // Catch: java.lang.Exception -> La0
            if (r0 == 0) goto L68
            r0 = r3
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> La0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> La0
            r1.<init>(r0)     // Catch: java.lang.Exception -> La0
            return r1
        L68:
            java.lang.Class r0 = r3.getClass()     // Catch: java.lang.Exception -> La0
            java.lang.Package r0 = r0.getPackage()     // Catch: java.lang.Exception -> La0
            if (r0 == 0) goto L77
            java.lang.String r1 = r0.getName()     // Catch: java.lang.Exception -> La0
            goto L79
        L77:
            java.lang.String r1 = ""
        L79:
            java.lang.String r2 = "java."
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> La0
            if (r2 != 0) goto L9a
            java.lang.String r2 = "javax."
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> La0
            if (r2 != 0) goto L9a
            java.lang.Class r2 = r3.getClass()     // Catch: java.lang.Exception -> La0
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Exception -> La0
            if (r2 != 0) goto L94
            goto L9a
        L94:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> La0
            r2.<init>(r3)     // Catch: java.lang.Exception -> La0
            return r2
        L9a:
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> La0
            return r2
        L9f:
            return r3
        La0:
            r0 = move-exception
            r1 = 0
            return r1
    }

    static final java.io.Writer writeValue(java.io.Writer r2, java.lang.Object r3, int r4, int r5) throws org.json.JSONException, java.io.IOException {
            if (r3 == 0) goto La0
            r0 = 0
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto Lb
            goto La0
        Lb:
            boolean r0 = r3 instanceof org.json.JSONObject
            if (r0 == 0) goto L17
            r0 = r3
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            r0.write(r2, r4, r5)
            goto La5
        L17:
            boolean r0 = r3 instanceof org.json.JSONArray
            if (r0 == 0) goto L23
            r0 = r3
            org.json.JSONArray r0 = (org.json.JSONArray) r0
            r0.write(r2, r4, r5)
            goto La5
        L23:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L34
            r0 = r3
            java.util.Map r0 = (java.util.Map) r0
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r0)
            r1.write(r2, r4, r5)
            goto La5
        L34:
            boolean r0 = r3 instanceof java.util.Collection
            if (r0 == 0) goto L44
            r0 = r3
            java.util.Collection r0 = (java.util.Collection) r0
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>(r0)
            r1.write(r2, r4, r5)
            goto La5
        L44:
            java.lang.Class r0 = r3.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L57
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r3)
            r0.write(r2, r4, r5)
            goto La5
        L57:
            boolean r0 = r3 instanceof java.lang.Number
            if (r0 == 0) goto L66
            r0 = r3
            java.lang.Number r0 = (java.lang.Number) r0
            java.lang.String r0 = numberToString(r0)
            r2.write(r0)
            goto La5
        L66:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L72
            java.lang.String r0 = r3.toString()
            r2.write(r0)
            goto La5
        L72:
            boolean r0 = r3 instanceof org.json.JSONString
            if (r0 == 0) goto L98
            r0 = r3
            org.json.JSONString r0 = (org.json.JSONString) r0     // Catch: java.lang.Exception -> L91
            java.lang.String r0 = r0.toJSONString()     // Catch: java.lang.Exception -> L91
            if (r0 == 0) goto L85
            java.lang.String r1 = r0.toString()
            goto L8d
        L85:
            java.lang.String r1 = r3.toString()
            java.lang.String r1 = quote(r1)
        L8d:
            r2.write(r1)
            goto La5
        L91:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
        L98:
            java.lang.String r0 = r3.toString()
            quote(r0, r2)
            goto La5
        La0:
            java.lang.String r0 = "null"
            r2.write(r0)
        La5:
            return r2
    }

    public org.json.JSONObject accumulate(java.lang.String r3, java.lang.Object r4) throws org.json.JSONException {
            r2 = this;
            testValidity(r4)
            java.lang.Object r0 = r2.opt(r3)
            if (r0 != 0) goto L1c
            boolean r1 = r4 instanceof org.json.JSONArray
            if (r1 == 0) goto L17
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONArray r1 = r1.put(r4)
            goto L18
        L17:
            r1 = r4
        L18:
            r2.put(r3, r1)
            goto L37
        L1c:
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto L27
            r1 = r0
            org.json.JSONArray r1 = (org.json.JSONArray) r1
            r1.put(r4)
            goto L37
        L27:
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONArray r1 = r1.put(r0)
            org.json.JSONArray r1 = r1.put(r4)
            r2.put(r3, r1)
        L37:
            return r2
    }

    public org.json.JSONObject append(java.lang.String r5, java.lang.Object r6) throws org.json.JSONException {
            r4 = this;
            testValidity(r6)
            java.lang.Object r0 = r4.opt(r5)
            if (r0 != 0) goto L16
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONArray r1 = r1.put(r6)
            r4.put(r5, r1)
            goto L24
        L16:
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto L25
            r1 = r0
            org.json.JSONArray r1 = (org.json.JSONArray) r1
            org.json.JSONArray r1 = r1.put(r6)
            r4.put(r5, r1)
        L24:
            return r4
        L25:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONObject["
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "] is not a JSONArray."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public java.lang.Object get(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            if (r5 == 0) goto L29
            java.lang.Object r0 = r4.opt(r5)
            if (r0 == 0) goto L9
            return r0
        L9:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONObject["
            r2.append(r3)
            java.lang.String r3 = quote(r5)
            r2.append(r3)
            java.lang.String r3 = "] not found."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L29:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "Null key."
            r0.<init>(r1)
            throw r0
    }

    public boolean getBoolean(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L56
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1c
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "false"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L1c
            goto L56
        L1c:
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L54
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L34
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "true"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L34
            goto L54
        L34:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONObject["
            r2.append(r3)
            java.lang.String r3 = quote(r5)
            r2.append(r3)
            java.lang.String r3 = "] is not a Boolean."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L54:
            r1 = 1
            return r1
        L56:
            r1 = 0
            return r1
    }

    public double getDouble(java.lang.String r6) throws org.json.JSONException {
            r5 = this;
            java.lang.Object r0 = r5.get(r6)
            boolean r1 = r0 instanceof java.lang.Number     // Catch: java.lang.Exception -> L18
            if (r1 == 0) goto L10
            r1 = r0
            java.lang.Number r1 = (java.lang.Number) r1     // Catch: java.lang.Exception -> L18
            double r1 = r1.doubleValue()     // Catch: java.lang.Exception -> L18
            goto L17
        L10:
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L18
            double r1 = java.lang.Double.parseDouble(r1)     // Catch: java.lang.Exception -> L18
        L17:
            return r1
        L18:
            r1 = move-exception
            org.json.JSONException r2 = new org.json.JSONException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "JSONObject["
            r3.append(r4)
            java.lang.String r4 = quote(r6)
            r3.append(r4)
            java.lang.String r4 = "] is not a number."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public int getInt(java.lang.String r6) throws org.json.JSONException {
            r5 = this;
            java.lang.Object r0 = r5.get(r6)
            boolean r1 = r0 instanceof java.lang.Number     // Catch: java.lang.Exception -> L18
            if (r1 == 0) goto L10
            r1 = r0
            java.lang.Number r1 = (java.lang.Number) r1     // Catch: java.lang.Exception -> L18
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L18
            goto L17
        L10:
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L18
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L18
        L17:
            return r1
        L18:
            r1 = move-exception
            org.json.JSONException r2 = new org.json.JSONException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "JSONObject["
            r3.append(r4)
            java.lang.String r4 = quote(r6)
            r3.append(r4)
            java.lang.String r4 = "] is not an int."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public org.json.JSONArray getJSONArray(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto Lc
            r1 = r0
            org.json.JSONArray r1 = (org.json.JSONArray) r1
            return r1
        Lc:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONObject["
            r2.append(r3)
            java.lang.String r3 = quote(r5)
            r2.append(r3)
            java.lang.String r3 = "] is not a JSONArray."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public org.json.JSONObject getJSONObject(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            boolean r1 = r0 instanceof org.json.JSONObject
            if (r1 == 0) goto Lc
            r1 = r0
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            return r1
        Lc:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONObject["
            r2.append(r3)
            java.lang.String r3 = quote(r5)
            r2.append(r3)
            java.lang.String r3 = "] is not a JSONObject."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public long getLong(java.lang.String r6) throws org.json.JSONException {
            r5 = this;
            java.lang.Object r0 = r5.get(r6)
            boolean r1 = r0 instanceof java.lang.Number     // Catch: java.lang.Exception -> L18
            if (r1 == 0) goto L10
            r1 = r0
            java.lang.Number r1 = (java.lang.Number) r1     // Catch: java.lang.Exception -> L18
            long r1 = r1.longValue()     // Catch: java.lang.Exception -> L18
            goto L17
        L10:
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L18
            long r1 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Exception -> L18
        L17:
            return r1
        L18:
            r1 = move-exception
            org.json.JSONException r2 = new org.json.JSONException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "JSONObject["
            r3.append(r4)
            java.lang.String r4 = quote(r6)
            r3.append(r4)
            java.lang.String r4 = "] is not a long."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public java.lang.String getString(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto Lc
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            return r1
        Lc:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONObject["
            r2.append(r3)
            java.lang.String r3 = quote(r5)
            r2.append(r3)
            java.lang.String r3 = "] not a string."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public boolean has(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            boolean r0 = r0.containsKey(r2)
            return r0
    }

    public org.json.JSONObject increment(java.lang.String r6) throws org.json.JSONException {
            r5 = this;
            java.lang.Object r0 = r5.opt(r6)
            r1 = 1
            if (r0 != 0) goto Lb
            r5.put(r6, r1)
            goto L51
        Lb:
            boolean r2 = r0 instanceof java.lang.Integer
            if (r2 == 0) goto L1b
            r2 = r0
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            int r2 = r2 + r1
            r5.put(r6, r2)
            goto L51
        L1b:
            boolean r1 = r0 instanceof java.lang.Long
            if (r1 == 0) goto L2d
            r1 = r0
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            r3 = 1
            long r1 = r1 + r3
            r5.put(r6, r1)
            goto L51
        L2d:
            boolean r1 = r0 instanceof java.lang.Double
            if (r1 == 0) goto L3f
            r1 = r0
            java.lang.Double r1 = (java.lang.Double) r1
            double r1 = r1.doubleValue()
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r1 = r1 + r3
            r5.put(r6, r1)
            goto L51
        L3f:
            boolean r1 = r0 instanceof java.lang.Float
            if (r1 == 0) goto L52
            r1 = r0
            java.lang.Float r1 = (java.lang.Float) r1
            float r1 = r1.floatValue()
            r2 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 + r2
            double r1 = (double) r1
            r5.put(r6, r1)
        L51:
            return r5
        L52:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unable to increment ["
            r2.append(r3)
            java.lang.String r3 = quote(r6)
            r2.append(r3)
            java.lang.String r3 = "]."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public boolean isNull(java.lang.String r3) {
            r2 = this;
            java.lang.Object r0 = org.json.JSONObject.NULL
            java.lang.Object r1 = r2.opt(r3)
            boolean r0 = r0.equals(r1)
            return r0
    }

    public java.util.Set<java.lang.String> keySet() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            java.util.Set r0 = r0.keySet()
            return r0
    }

    public java.util.Iterator<java.lang.String> keys() {
            r1 = this;
            java.util.Set r0 = r1.keySet()
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    public int length() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            int r0 = r0.size()
            return r0
    }

    public org.json.JSONArray names() {
            r3 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Iterator r1 = r3.keys()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L17
            java.lang.Object r2 = r1.next()
            r0.put(r2)
            goto L9
        L17:
            int r2 = r0.length()
            if (r2 != 0) goto L1f
            r2 = 0
            goto L20
        L1f:
            r2 = r0
        L20:
            return r2
    }

    public java.lang.Object opt(java.lang.String r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r0 = 0
            goto La
        L4:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            java.lang.Object r0 = r0.get(r2)
        La:
            return r0
    }

    public boolean optBoolean(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r0 = r1.optBoolean(r2, r0)
            return r0
    }

    public boolean optBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.getBoolean(r2)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    public double optDouble(java.lang.String r3) {
            r2 = this;
            r0 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            double r0 = r2.optDouble(r3, r0)
            return r0
    }

    public double optDouble(java.lang.String r3, double r4) {
            r2 = this;
            double r0 = r2.getDouble(r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r4
    }

    public int optInt(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r0 = r1.optInt(r2, r0)
            return r0
    }

    public int optInt(java.lang.String r2, int r3) {
            r1 = this;
            int r0 = r1.getInt(r2)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    public org.json.JSONArray optJSONArray(java.lang.String r3) {
            r2 = this;
            java.lang.Object r0 = r2.opt(r3)
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto Lc
            r1 = r0
            org.json.JSONArray r1 = (org.json.JSONArray) r1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public org.json.JSONObject optJSONObject(java.lang.String r3) {
            r2 = this;
            java.lang.Object r0 = r2.opt(r3)
            boolean r1 = r0 instanceof org.json.JSONObject
            if (r1 == 0) goto Lc
            r1 = r0
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public long optLong(java.lang.String r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.optLong(r3, r0)
            return r0
    }

    public long optLong(java.lang.String r3, long r4) {
            r2 = this;
            long r0 = r2.getLong(r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r4
    }

    public java.lang.String optString(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r0 = r1.optString(r2, r0)
            return r0
    }

    public java.lang.String optString(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.Object r0 = r2.opt(r3)
            java.lang.Object r1 = org.json.JSONObject.NULL
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto Le
            r1 = r4
            goto L12
        Le:
            java.lang.String r1 = r0.toString()
        L12:
            return r1
    }

    public org.json.JSONObject put(java.lang.String r2, double r3) throws org.json.JSONException {
            r1 = this;
            java.lang.Double r0 = new java.lang.Double
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONObject put(java.lang.String r2, int r3) throws org.json.JSONException {
            r1 = this;
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONObject put(java.lang.String r2, long r3) throws org.json.JSONException {
            r1 = this;
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONObject put(java.lang.String r3, java.lang.Object r4) throws org.json.JSONException {
            r2 = this;
            if (r3 == 0) goto L11
            if (r4 == 0) goto Ld
            testValidity(r4)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.map
            r0.put(r3, r4)
            goto L10
        Ld:
            r2.remove(r3)
        L10:
            return r2
        L11:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "Null key."
            r0.<init>(r1)
            throw r0
    }

    public org.json.JSONObject put(java.lang.String r2, java.util.Collection<java.lang.Object> r3) throws org.json.JSONException {
            r1 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONObject put(java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) throws org.json.JSONException {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONObject put(java.lang.String r2, boolean r3) throws org.json.JSONException {
            r1 = this;
            if (r3 == 0) goto L5
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            goto L7
        L5:
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
        L7:
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONObject putOnce(java.lang.String r4, java.lang.Object r5) throws org.json.JSONException {
            r3 = this;
            if (r4 == 0) goto L2a
            if (r5 == 0) goto L2a
            java.lang.Object r0 = r3.opt(r4)
            if (r0 != 0) goto Le
            r3.put(r4, r5)
            goto L2a
        Le:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Duplicate key \""
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = "\""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L2a:
            return r3
    }

    public org.json.JSONObject putOpt(java.lang.String r1, java.lang.Object r2) throws org.json.JSONException {
            r0 = this;
            if (r1 == 0) goto L7
            if (r2 == 0) goto L7
            r0.put(r1, r2)
        L7:
            return r0
    }

    public java.lang.Object remove(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            java.lang.Object r0 = r0.remove(r2)
            return r0
    }

    public boolean similar(java.lang.Object r8) {
            r7 = this;
            r0 = 0
            boolean r1 = r8 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> L59
            if (r1 != 0) goto L6
            return r0
        L6:
            java.util.Set r1 = r7.keySet()     // Catch: java.lang.Throwable -> L59
            r2 = r8
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Throwable -> L59
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L59
            boolean r2 = r1.equals(r2)     // Catch: java.lang.Throwable -> L59
            if (r2 != 0) goto L18
            return r0
        L18:
            java.util.Iterator r2 = r1.iterator()     // Catch: java.lang.Throwable -> L59
        L1c:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L59
            if (r3 == 0) goto L57
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L59
            java.lang.Object r4 = r7.get(r3)     // Catch: java.lang.Throwable -> L59
            r5 = r8
            org.json.JSONObject r5 = (org.json.JSONObject) r5     // Catch: java.lang.Throwable -> L59
            java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Throwable -> L59
            boolean r6 = r4 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> L59
            if (r6 == 0) goto L41
            r6 = r4
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.Throwable -> L59
            boolean r6 = r6.similar(r5)     // Catch: java.lang.Throwable -> L59
            if (r6 != 0) goto L56
            return r0
        L41:
            boolean r6 = r4 instanceof org.json.JSONArray     // Catch: java.lang.Throwable -> L59
            if (r6 == 0) goto L4f
            r6 = r4
            org.json.JSONArray r6 = (org.json.JSONArray) r6     // Catch: java.lang.Throwable -> L59
            boolean r6 = r6.similar(r5)     // Catch: java.lang.Throwable -> L59
            if (r6 != 0) goto L56
            return r0
        L4f:
            boolean r6 = r4.equals(r5)     // Catch: java.lang.Throwable -> L59
            if (r6 != 0) goto L56
            return r0
        L56:
            goto L1c
        L57:
            r0 = 1
            return r0
        L59:
            r1 = move-exception
            return r0
    }

    public org.json.JSONArray toJSONArray(org.json.JSONArray r4) throws org.json.JSONException {
            r3 = this;
            if (r4 == 0) goto L24
            int r0 = r4.length()
            if (r0 != 0) goto L9
            goto L24
        L9:
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
        Lf:
            int r2 = r4.length()
            if (r1 >= r2) goto L23
            java.lang.String r2 = r4.getString(r1)
            java.lang.Object r2 = r3.opt(r2)
            r0.put(r2)
            int r1 = r1 + 1
            goto Lf
        L23:
            return r0
        L24:
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            r0 = 0
            java.lang.String r0 = r2.toString(r0)     // Catch: java.lang.Exception -> L6
            return r0
        L6:
            r0 = move-exception
            r1 = 0
            return r1
    }

    public java.lang.String toString(int r4) throws org.json.JSONException {
            r3 = this;
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.lang.StringBuffer r1 = r0.getBuffer()
            monitor-enter(r1)
            r2 = 0
            java.io.Writer r2 = r3.write(r0, r4, r2)     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            return r2
        L15:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            throw r2
    }

    public java.io.Writer write(java.io.Writer r2) throws org.json.JSONException {
            r1 = this;
            r0 = 0
            java.io.Writer r0 = r1.write(r2, r0, r0)
            return r0
    }

    java.io.Writer write(java.io.Writer r10, int r11, int r12) throws org.json.JSONException {
            r9 = this;
            r0 = 0
            int r1 = r9.length()     // Catch: java.io.IOException -> L82
            java.util.Iterator r2 = r9.keys()     // Catch: java.io.IOException -> L82
            r3 = 123(0x7b, float:1.72E-43)
            r10.write(r3)     // Catch: java.io.IOException -> L82
            r3 = 1
            r4 = 32
            r5 = 58
            if (r1 != r3) goto L37
            java.lang.Object r3 = r2.next()     // Catch: java.io.IOException -> L82
            java.lang.String r6 = r3.toString()     // Catch: java.io.IOException -> L82
            java.lang.String r6 = quote(r6)     // Catch: java.io.IOException -> L82
            r10.write(r6)     // Catch: java.io.IOException -> L82
            r10.write(r5)     // Catch: java.io.IOException -> L82
            if (r11 <= 0) goto L2c
            r10.write(r4)     // Catch: java.io.IOException -> L82
        L2c:
            java.util.Map<java.lang.String, java.lang.Object> r4 = r9.map     // Catch: java.io.IOException -> L82
            java.lang.Object r4 = r4.get(r3)     // Catch: java.io.IOException -> L82
            writeValue(r10, r4, r11, r12)     // Catch: java.io.IOException -> L82
            goto L7c
        L37:
            if (r1 == 0) goto L7c
            int r3 = r12 + r11
        L3b:
            boolean r6 = r2.hasNext()     // Catch: java.io.IOException -> L82
            r7 = 10
            if (r6 == 0) goto L74
            java.lang.Object r6 = r2.next()     // Catch: java.io.IOException -> L82
            if (r0 == 0) goto L4e
            r8 = 44
            r10.write(r8)     // Catch: java.io.IOException -> L82
        L4e:
            if (r11 <= 0) goto L53
            r10.write(r7)     // Catch: java.io.IOException -> L82
        L53:
            indent(r10, r3)     // Catch: java.io.IOException -> L82
            java.lang.String r7 = r6.toString()     // Catch: java.io.IOException -> L82
            java.lang.String r7 = quote(r7)     // Catch: java.io.IOException -> L82
            r10.write(r7)     // Catch: java.io.IOException -> L82
            r10.write(r5)     // Catch: java.io.IOException -> L82
            if (r11 <= 0) goto L69
            r10.write(r4)     // Catch: java.io.IOException -> L82
        L69:
            java.util.Map<java.lang.String, java.lang.Object> r7 = r9.map     // Catch: java.io.IOException -> L82
            java.lang.Object r7 = r7.get(r6)     // Catch: java.io.IOException -> L82
            writeValue(r10, r7, r11, r3)     // Catch: java.io.IOException -> L82
            r0 = 1
            goto L3b
        L74:
            if (r11 <= 0) goto L79
            r10.write(r7)     // Catch: java.io.IOException -> L82
        L79:
            indent(r10, r12)     // Catch: java.io.IOException -> L82
        L7c:
            r3 = 125(0x7d, float:1.75E-43)
            r10.write(r3)     // Catch: java.io.IOException -> L82
            return r10
        L82:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
    }
}
