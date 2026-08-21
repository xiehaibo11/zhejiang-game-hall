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

        public boolean equals(java.lang.Object r1) {
                r0 = this;
                if (r1 == 0) goto L7
                if (r1 != r0) goto L5
                goto L7
            L5:
                r1 = 0
                goto L8
            L7:
                r1 = 1
            L8:
                return r1
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
            if (r1 >= r2) goto L1b
            r2 = r6[r1]
            java.lang.reflect.Field r3 = r0.getField(r2)     // Catch: java.lang.Exception -> L18
            java.lang.Object r3 = r3.get(r5)     // Catch: java.lang.Exception -> L18
            r4.putOpt(r2, r3)     // Catch: java.lang.Exception -> L18
        L18:
            int r1 = r1 + 1
            goto L8
        L1b:
            return
    }

    public JSONObject(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public JSONObject(java.lang.String r8, java.util.Locale r9) throws org.json.JSONException {
            r7 = this;
            r7.<init>()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.ClassLoader r0 = r0.getContextClassLoader()
            java.util.ResourceBundle r8 = java.util.ResourceBundle.getBundle(r8, r9, r0)
            java.util.Enumeration r9 = r8.getKeys()
        L13:
            boolean r0 = r9.hasMoreElements()
            if (r0 == 0) goto L4c
            java.lang.Object r0 = r9.nextElement()
            if (r0 == 0) goto L13
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "\\."
            java.lang.String[] r1 = r0.split(r1)
            int r2 = r1.length
            int r2 = r2 + (-1)
            r3 = 0
            r4 = r7
        L2c:
            if (r3 >= r2) goto L42
            r5 = r1[r3]
            org.json.JSONObject r6 = r4.optJSONObject(r5)
            if (r6 != 0) goto L3e
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            r4.put(r5, r6)
        L3e:
            r4 = r6
            int r3 = r3 + 1
            goto L2c
        L42:
            r1 = r1[r2]
            java.lang.String r0 = r8.getString(r0)
            r4.put(r1, r0)
            goto L13
        L4c:
            return
    }

    public JSONObject(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            r3.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.map = r0
            if (r4 == 0) goto L34
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L14:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L34
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getValue()
            if (r1 == 0) goto L14
            java.util.Map<java.lang.String, java.lang.Object> r2 = r3.map
            java.lang.Object r0 = r0.getKey()
            java.lang.Object r1 = wrap(r1)
            r2.put(r0, r1)
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
            if (r0 >= r1) goto L15
            r1 = r5[r0]     // Catch: java.lang.Exception -> L12
            r2 = r5[r0]     // Catch: java.lang.Exception -> L12
            java.lang.Object r2 = r4.opt(r2)     // Catch: java.lang.Exception -> L12
            r3.putOnce(r1, r2)     // Catch: java.lang.Exception -> L12
        L12:
            int r0 = r0 + 1
            goto L4
        L15:
            return
    }

    public JSONObject(org.json.JSONTokener r5) throws org.json.JSONException {
            r4 = this;
            r4.<init>()
            char r0 = r5.nextClean()
            r1 = 123(0x7b, float:1.72E-43)
            if (r0 != r1) goto L5f
        Lb:
            char r0 = r5.nextClean()
            if (r0 == 0) goto L58
            r1 = 125(0x7d, float:1.75E-43)
            if (r0 == r1) goto L57
            r5.back()
            java.lang.Object r0 = r5.nextValue()
            java.lang.String r0 = r0.toString()
            char r2 = r5.nextClean()
            r3 = 58
            if (r2 != r3) goto L50
            java.lang.Object r2 = r5.nextValue()
            r4.putOnce(r0, r2)
            char r0 = r5.nextClean()
            r2 = 44
            if (r0 == r2) goto L45
            r2 = 59
            if (r0 == r2) goto L45
            if (r0 != r1) goto L3e
            return
        L3e:
            java.lang.String r0 = "Expected a ',' or '}'"
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
        L45:
            char r0 = r5.nextClean()
            if (r0 != r1) goto L4c
            return
        L4c:
            r5.back()
            goto Lb
        L50:
            java.lang.String r0 = "Expected a ':' after a key"
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
        L57:
            return
        L58:
            java.lang.String r0 = "A JSONObject text must end with '}'"
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
        L5f:
            java.lang.String r0 = "A JSONObject text must begin with '{'"
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
    }

    public static java.lang.String doubleToString(double r1) {
            boolean r0 = java.lang.Double.isInfinite(r1)
            if (r0 != 0) goto L50
            boolean r0 = java.lang.Double.isNaN(r1)
            if (r0 == 0) goto Ld
            goto L50
        Ld:
            java.lang.String r1 = java.lang.Double.toString(r1)
            r2 = 46
            int r2 = r1.indexOf(r2)
            if (r2 <= 0) goto L4f
            r2 = 101(0x65, float:1.42E-43)
            int r2 = r1.indexOf(r2)
            if (r2 >= 0) goto L4f
            r2 = 69
            int r2 = r1.indexOf(r2)
            if (r2 >= 0) goto L4f
        L29:
            java.lang.String r2 = "0"
            boolean r2 = r1.endsWith(r2)
            r0 = 0
            if (r2 == 0) goto L3d
            int r2 = r1.length()
            int r2 = r2 + (-1)
            java.lang.String r1 = r1.substring(r0, r2)
            goto L29
        L3d:
            java.lang.String r2 = "."
            boolean r2 = r1.endsWith(r2)
            if (r2 == 0) goto L4f
            int r2 = r1.length()
            int r2 = r2 + (-1)
            java.lang.String r1 = r1.substring(r0, r2)
        L4f:
            return r1
        L50:
            java.lang.String r1 = "null"
            return r1
    }

    public static java.lang.String[] getNames(java.lang.Object r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.Class r4 = r4.getClass()
            java.lang.reflect.Field[] r4 = r4.getFields()
            int r1 = r4.length
            if (r1 != 0) goto L10
            return r0
        L10:
            java.lang.String[] r0 = new java.lang.String[r1]
            r2 = 0
        L13:
            if (r2 >= r1) goto L20
            r3 = r4[r2]
            java.lang.String r3 = r3.getName()
            r0[r2] = r3
            int r2 = r2 + 1
            goto L13
        L20:
            return r0
    }

    public static java.lang.String[] getNames(org.json.JSONObject r3) {
            int r0 = r3.length()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            java.util.Iterator r3 = r3.keys()
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
        Lf:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L20
            java.lang.Object r2 = r3.next()
            java.lang.String r2 = (java.lang.String) r2
            r0[r1] = r2
            int r1 = r1 + 1
            goto Lf
        L20:
            return r0
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

    public static java.lang.String numberToString(java.lang.Number r2) throws org.json.JSONException {
            if (r2 == 0) goto L48
            testValidity(r2)
            java.lang.String r2 = r2.toString()
            r0 = 46
            int r0 = r2.indexOf(r0)
            if (r0 <= 0) goto L47
            r0 = 101(0x65, float:1.42E-43)
            int r0 = r2.indexOf(r0)
            if (r0 >= 0) goto L47
            r0 = 69
            int r0 = r2.indexOf(r0)
            if (r0 >= 0) goto L47
        L21:
            java.lang.String r0 = "0"
            boolean r0 = r2.endsWith(r0)
            r1 = 0
            if (r0 == 0) goto L35
            int r0 = r2.length()
            int r0 = r0 + (-1)
            java.lang.String r2 = r2.substring(r1, r0)
            goto L21
        L35:
            java.lang.String r0 = "."
            boolean r0 = r2.endsWith(r0)
            if (r0 == 0) goto L47
            int r0 = r2.length()
            int r0 = r0 + (-1)
            java.lang.String r2 = r2.substring(r1, r0)
        L47:
            return r2
        L48:
            org.json.JSONException r2 = new org.json.JSONException
            java.lang.String r0 = "Null pointer"
            r2.<init>(r0)
            throw r2
    }

    private void populateMap(java.lang.Object r9) {
            r8 = this;
            java.lang.Class r0 = r9.getClass()
            java.lang.ClassLoader r1 = r0.getClassLoader()
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            if (r1 == 0) goto L16
            java.lang.reflect.Method[] r0 = r0.getMethods()
            goto L1a
        L16:
            java.lang.reflect.Method[] r0 = r0.getDeclaredMethods()
        L1a:
            r1 = 0
        L1b:
            int r4 = r0.length
            if (r1 >= r4) goto Lba
            r4 = r0[r1]     // Catch: java.lang.Exception -> Lb6
            int r5 = r4.getModifiers()     // Catch: java.lang.Exception -> Lb6
            boolean r5 = java.lang.reflect.Modifier.isPublic(r5)     // Catch: java.lang.Exception -> Lb6
            if (r5 == 0) goto Lb6
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Exception -> Lb6
            java.lang.String r6 = "get"
            boolean r6 = r5.startsWith(r6)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r7 = ""
            if (r6 == 0) goto L4f
            java.lang.String r6 = "getClass"
            boolean r6 = r6.equals(r5)     // Catch: java.lang.Exception -> Lb6
            if (r6 != 0) goto L5d
            java.lang.String r6 = "getDeclaringClass"
            boolean r6 = r6.equals(r5)     // Catch: java.lang.Exception -> Lb6
            if (r6 == 0) goto L49
            goto L5d
        L49:
            r6 = 3
            java.lang.String r5 = r5.substring(r6)     // Catch: java.lang.Exception -> Lb6
            goto L5c
        L4f:
            java.lang.String r6 = "is"
            boolean r6 = r5.startsWith(r6)     // Catch: java.lang.Exception -> Lb6
            if (r6 == 0) goto L5d
            r6 = 2
            java.lang.String r5 = r5.substring(r6)     // Catch: java.lang.Exception -> Lb6
        L5c:
            r7 = r5
        L5d:
            int r5 = r7.length()     // Catch: java.lang.Exception -> Lb6
            if (r5 <= 0) goto Lb6
            char r5 = r7.charAt(r2)     // Catch: java.lang.Exception -> Lb6
            boolean r5 = java.lang.Character.isUpperCase(r5)     // Catch: java.lang.Exception -> Lb6
            if (r5 == 0) goto Lb6
            java.lang.Class[] r5 = r4.getParameterTypes()     // Catch: java.lang.Exception -> Lb6
            int r5 = r5.length     // Catch: java.lang.Exception -> Lb6
            if (r5 != 0) goto Lb6
            int r5 = r7.length()     // Catch: java.lang.Exception -> Lb6
            if (r5 != r3) goto L80
            java.lang.String r5 = r7.toLowerCase()     // Catch: java.lang.Exception -> Lb6
        L7e:
            r7 = r5
            goto La6
        L80:
            char r5 = r7.charAt(r3)     // Catch: java.lang.Exception -> Lb6
            boolean r5 = java.lang.Character.isUpperCase(r5)     // Catch: java.lang.Exception -> Lb6
            if (r5 != 0) goto La6
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb6
            r5.<init>()     // Catch: java.lang.Exception -> Lb6
            java.lang.String r6 = r7.substring(r2, r3)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r6 = r6.toLowerCase()     // Catch: java.lang.Exception -> Lb6
            r5.append(r6)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r6 = r7.substring(r3)     // Catch: java.lang.Exception -> Lb6
            r5.append(r6)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Lb6
            goto L7e
        La6:
            r5 = 0
            java.lang.Object r4 = r4.invoke(r9, r5)     // Catch: java.lang.Exception -> Lb6
            if (r4 == 0) goto Lb6
            java.util.Map<java.lang.String, java.lang.Object> r5 = r8.map     // Catch: java.lang.Exception -> Lb6
            java.lang.Object r4 = wrap(r4)     // Catch: java.lang.Exception -> Lb6
            r5.put(r7, r4)     // Catch: java.lang.Exception -> Lb6
        Lb6:
            int r1 = r1 + 1
            goto L1b
        Lba:
            return
    }

    public static java.io.Writer quote(java.lang.String r8, java.io.Writer r9) throws java.io.IOException {
            if (r8 == 0) goto L99
            int r0 = r8.length()
            if (r0 != 0) goto La
            goto L99
        La:
            int r0 = r8.length()
            r1 = 34
            r9.write(r1)
            r2 = 0
            r3 = 0
            r4 = 0
        L16:
            if (r3 >= r0) goto L95
            char r5 = r8.charAt(r3)
            r6 = 12
            if (r5 == r6) goto L8c
            r6 = 13
            if (r5 == r6) goto L86
            r6 = 92
            if (r5 == r1) goto L7f
            r7 = 47
            if (r5 == r7) goto L74
            if (r5 == r6) goto L7f
            switch(r5) {
                case 8: goto L6e;
                case 9: goto L68;
                case 10: goto L62;
                default: goto L31;
            }
        L31:
            r4 = 32
            if (r5 < r4) goto L4a
            r4 = 128(0x80, float:1.8E-43)
            if (r5 < r4) goto L3d
            r4 = 160(0xa0, float:2.24E-43)
            if (r5 < r4) goto L4a
        L3d:
            r4 = 8192(0x2000, float:1.148E-41)
            if (r5 < r4) goto L46
            r4 = 8448(0x2100, float:1.1838E-41)
            if (r5 >= r4) goto L46
            goto L4a
        L46:
            r9.write(r5)
            goto L91
        L4a:
            java.lang.String r4 = "\\u"
            r9.write(r4)
            java.lang.String r4 = java.lang.Integer.toHexString(r5)
            int r6 = r4.length()
            int r6 = 4 - r6
            java.lang.String r7 = "0000"
            r9.write(r7, r2, r6)
            r9.write(r4)
            goto L91
        L62:
            java.lang.String r4 = "\\n"
            r9.write(r4)
            goto L91
        L68:
            java.lang.String r4 = "\\t"
            r9.write(r4)
            goto L91
        L6e:
            java.lang.String r4 = "\\b"
            r9.write(r4)
            goto L91
        L74:
            r7 = 60
            if (r4 != r7) goto L7b
            r9.write(r6)
        L7b:
            r9.write(r5)
            goto L91
        L7f:
            r9.write(r6)
            r9.write(r5)
            goto L91
        L86:
            java.lang.String r4 = "\\r"
            r9.write(r4)
            goto L91
        L8c:
            java.lang.String r4 = "\\f"
            r9.write(r4)
        L91:
            int r3 = r3 + 1
            r4 = r5
            goto L16
        L95:
            r9.write(r1)
            return r9
        L99:
            java.lang.String r8 = "\"\""
            r9.write(r8)
            return r9
    }

    public static java.lang.String quote(java.lang.String r2) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.lang.StringBuffer r1 = r0.getBuffer()
            monitor-enter(r1)
            java.io.Writer r2 = quote(r2, r0)     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L16
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            return r2
        L14:
            r2 = move-exception
            goto L1a
        L16:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            java.lang.String r2 = ""
            return r2
        L1a:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r2
    }

    public static java.lang.Object stringToValue(java.lang.String r6) {
            java.lang.String r0 = ""
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L9
            return r6
        L9:
            java.lang.String r0 = "true"
            boolean r0 = r6.equalsIgnoreCase(r0)
            if (r0 == 0) goto L14
            java.lang.Boolean r6 = java.lang.Boolean.TRUE
            return r6
        L14:
            java.lang.String r0 = "false"
            boolean r0 = r6.equalsIgnoreCase(r0)
            if (r0 == 0) goto L1f
            java.lang.Boolean r6 = java.lang.Boolean.FALSE
            return r6
        L1f:
            java.lang.String r0 = "null"
            boolean r0 = r6.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            java.lang.Object r6 = org.json.JSONObject.NULL
            return r6
        L2a:
            r0 = 0
            char r0 = r6.charAt(r0)
            r1 = 48
            if (r0 < r1) goto L37
            r1 = 57
            if (r0 <= r1) goto L3b
        L37:
            r1 = 45
            if (r0 != r1) goto L8c
        L3b:
            r0 = 46
            int r0 = r6.indexOf(r0)     // Catch: java.lang.Exception -> L8c
            r1 = -1
            if (r0 > r1) goto L7b
            r0 = 101(0x65, float:1.42E-43)
            int r0 = r6.indexOf(r0)     // Catch: java.lang.Exception -> L8c
            if (r0 > r1) goto L7b
            r0 = 69
            int r0 = r6.indexOf(r0)     // Catch: java.lang.Exception -> L8c
            if (r0 <= r1) goto L55
            goto L7b
        L55:
            java.lang.Long r0 = new java.lang.Long     // Catch: java.lang.Exception -> L8c
            r0.<init>(r6)     // Catch: java.lang.Exception -> L8c
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Exception -> L8c
            boolean r1 = r6.equals(r1)     // Catch: java.lang.Exception -> L8c
            if (r1 == 0) goto L8c
            long r1 = r0.longValue()     // Catch: java.lang.Exception -> L8c
            int r3 = r0.intValue()     // Catch: java.lang.Exception -> L8c
            long r3 = (long) r3     // Catch: java.lang.Exception -> L8c
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto L7a
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L8c
            java.lang.Integer r6 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L8c
            return r6
        L7a:
            return r0
        L7b:
            java.lang.Double r0 = java.lang.Double.valueOf(r6)     // Catch: java.lang.Exception -> L8c
            boolean r1 = r0.isInfinite()     // Catch: java.lang.Exception -> L8c
            if (r1 != 0) goto L8c
            boolean r1 = r0.isNaN()     // Catch: java.lang.Exception -> L8c
            if (r1 != 0) goto L8c
            return r0
        L8c:
            return r6
    }

    public static void testValidity(java.lang.Object r2) throws org.json.JSONException {
            if (r2 == 0) goto L36
            boolean r0 = r2 instanceof java.lang.Double
            java.lang.String r1 = "JSON does not allow non-finite numbers."
            if (r0 == 0) goto L1d
            java.lang.Double r2 = (java.lang.Double) r2
            boolean r0 = r2.isInfinite()
            if (r0 != 0) goto L17
            boolean r2 = r2.isNaN()
            if (r2 != 0) goto L17
            goto L36
        L17:
            org.json.JSONException r2 = new org.json.JSONException
            r2.<init>(r1)
            throw r2
        L1d:
            boolean r0 = r2 instanceof java.lang.Float
            if (r0 == 0) goto L36
            java.lang.Float r2 = (java.lang.Float) r2
            boolean r0 = r2.isInfinite()
            if (r0 != 0) goto L30
            boolean r2 = r2.isNaN()
            if (r2 != 0) goto L30
            goto L36
        L30:
            org.json.JSONException r2 = new org.json.JSONException
            r2.<init>(r1)
            throw r2
        L36:
            return
    }

    public static java.lang.String valueToString(java.lang.Object r3) throws org.json.JSONException {
            if (r3 == 0) goto L92
            r0 = 0
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto Lb
            goto L92
        Lb:
            boolean r0 = r3 instanceof org.json.JSONString
            if (r0 == 0) goto L38
            org.json.JSONString r3 = (org.json.JSONString) r3     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = r3.toJSONString()     // Catch: java.lang.Exception -> L31
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L1a
            return r3
        L1a:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad value from toJSONString: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L31:
            r3 = move-exception
            org.json.JSONException r0 = new org.json.JSONException
            r0.<init>(r3)
            throw r0
        L38:
            boolean r0 = r3 instanceof java.lang.Number
            if (r0 == 0) goto L43
            java.lang.Number r3 = (java.lang.Number) r3
            java.lang.String r3 = numberToString(r3)
            return r3
        L43:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 != 0) goto L8d
            boolean r0 = r3 instanceof org.json.JSONObject
            if (r0 != 0) goto L8d
            boolean r0 = r3 instanceof org.json.JSONArray
            if (r0 == 0) goto L50
            goto L8d
        L50:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L60
            java.util.Map r3 = (java.util.Map) r3
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L60:
            boolean r0 = r3 instanceof java.util.Collection
            if (r0 == 0) goto L70
            java.util.Collection r3 = (java.util.Collection) r3
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L70:
            java.lang.Class r0 = r3.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L84
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L84:
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = quote(r3)
            return r3
        L8d:
            java.lang.String r3 = r3.toString()
            return r3
        L92:
            java.lang.String r3 = "null"
            return r3
    }

    public static java.lang.Object wrap(java.lang.Object r2) {
            if (r2 != 0) goto L5
            java.lang.Object r2 = org.json.JSONObject.NULL     // Catch: java.lang.Exception -> L9d
            return r2
        L5:
            boolean r0 = r2 instanceof org.json.JSONObject     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof org.json.JSONArray     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            java.lang.Object r0 = org.json.JSONObject.NULL     // Catch: java.lang.Exception -> L9d
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof org.json.JSONString     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Byte     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Character     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Short     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Integer     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Long     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Boolean     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Float     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.Double     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L9c
            boolean r0 = r2 instanceof java.lang.String     // Catch: java.lang.Exception -> L9d
            if (r0 == 0) goto L3e
            goto L9c
        L3e:
            boolean r0 = r2 instanceof java.util.Collection     // Catch: java.lang.Exception -> L9d
            if (r0 == 0) goto L4a
            java.util.Collection r2 = (java.util.Collection) r2     // Catch: java.lang.Exception -> L9d
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L9d
            r0.<init>(r2)     // Catch: java.lang.Exception -> L9d
            return r0
        L4a:
            java.lang.Class r0 = r2.getClass()     // Catch: java.lang.Exception -> L9d
            boolean r0 = r0.isArray()     // Catch: java.lang.Exception -> L9d
            if (r0 == 0) goto L5a
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L9d
            r0.<init>(r2)     // Catch: java.lang.Exception -> L9d
            return r0
        L5a:
            boolean r0 = r2 instanceof java.util.Map     // Catch: java.lang.Exception -> L9d
            if (r0 == 0) goto L66
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Exception -> L9d
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9d
            r0.<init>(r2)     // Catch: java.lang.Exception -> L9d
            return r0
        L66:
            java.lang.Class r0 = r2.getClass()     // Catch: java.lang.Exception -> L9d
            java.lang.Package r0 = r0.getPackage()     // Catch: java.lang.Exception -> L9d
            if (r0 == 0) goto L75
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Exception -> L9d
            goto L77
        L75:
            java.lang.String r0 = ""
        L77:
            java.lang.String r1 = "java."
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L9d
            if (r1 != 0) goto L98
            java.lang.String r1 = "javax."
            boolean r0 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L98
            java.lang.Class r0 = r2.getClass()     // Catch: java.lang.Exception -> L9d
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Exception -> L9d
            if (r0 != 0) goto L92
            goto L98
        L92:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9d
            r0.<init>(r2)     // Catch: java.lang.Exception -> L9d
            return r0
        L98:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L9d
        L9c:
            return r2
        L9d:
            r2 = 0
            return r2
    }

    static final java.io.Writer writeValue(java.io.Writer r1, java.lang.Object r2, int r3, int r4) throws org.json.JSONException, java.io.IOException {
            if (r2 == 0) goto L9a
            r0 = 0
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto Lb
            goto L9a
        Lb:
            boolean r0 = r2 instanceof org.json.JSONObject
            if (r0 == 0) goto L16
            org.json.JSONObject r2 = (org.json.JSONObject) r2
            r2.write(r1, r3, r4)
            goto L9f
        L16:
            boolean r0 = r2 instanceof org.json.JSONArray
            if (r0 == 0) goto L21
            org.json.JSONArray r2 = (org.json.JSONArray) r2
            r2.write(r1, r3, r4)
            goto L9f
        L21:
            boolean r0 = r2 instanceof java.util.Map
            if (r0 == 0) goto L31
            java.util.Map r2 = (java.util.Map) r2
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            r0.write(r1, r3, r4)
            goto L9f
        L31:
            boolean r0 = r2 instanceof java.util.Collection
            if (r0 == 0) goto L40
            java.util.Collection r2 = (java.util.Collection) r2
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r2)
            r0.write(r1, r3, r4)
            goto L9f
        L40:
            java.lang.Class r0 = r2.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L53
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r2)
            r0.write(r1, r3, r4)
            goto L9f
        L53:
            boolean r3 = r2 instanceof java.lang.Number
            if (r3 == 0) goto L61
            java.lang.Number r2 = (java.lang.Number) r2
            java.lang.String r2 = numberToString(r2)
            r1.write(r2)
            goto L9f
        L61:
            boolean r3 = r2 instanceof java.lang.Boolean
            if (r3 == 0) goto L6d
            java.lang.String r2 = r2.toString()
            r1.write(r2)
            goto L9f
        L6d:
            boolean r3 = r2 instanceof org.json.JSONString
            if (r3 == 0) goto L92
            r3 = r2
            org.json.JSONString r3 = (org.json.JSONString) r3     // Catch: java.lang.Exception -> L8b
            java.lang.String r3 = r3.toJSONString()     // Catch: java.lang.Exception -> L8b
            if (r3 == 0) goto L7f
            java.lang.String r2 = r3.toString()
            goto L87
        L7f:
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = quote(r2)
        L87:
            r1.write(r2)
            goto L9f
        L8b:
            r1 = move-exception
            org.json.JSONException r2 = new org.json.JSONException
            r2.<init>(r1)
            throw r2
        L92:
            java.lang.String r2 = r2.toString()
            quote(r2, r1)
            goto L9f
        L9a:
            java.lang.String r2 = "null"
            r1.write(r2)
        L9f:
            return r1
    }

    public org.json.JSONObject accumulate(java.lang.String r3, java.lang.Object r4) throws org.json.JSONException {
            r2 = this;
            testValidity(r4)
            java.lang.Object r0 = r2.opt(r3)
            if (r0 != 0) goto L1a
            boolean r0 = r4 instanceof org.json.JSONArray
            if (r0 == 0) goto L16
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            org.json.JSONArray r4 = r0.put(r4)
        L16:
            r2.put(r3, r4)
            goto L34
        L1a:
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto L24
            org.json.JSONArray r0 = (org.json.JSONArray) r0
            r0.put(r4)
            goto L34
        L24:
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONArray r0 = r1.put(r0)
            org.json.JSONArray r4 = r0.put(r4)
            r2.put(r3, r4)
        L34:
            return r2
    }

    public org.json.JSONObject append(java.lang.String r3, java.lang.Object r4) throws org.json.JSONException {
            r2 = this;
            testValidity(r4)
            java.lang.Object r0 = r2.opt(r3)
            if (r0 != 0) goto L16
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            org.json.JSONArray r4 = r0.put(r4)
            r2.put(r3, r4)
            goto L23
        L16:
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto L24
            org.json.JSONArray r0 = (org.json.JSONArray) r0
            org.json.JSONArray r4 = r0.put(r4)
            r2.put(r3, r4)
        L23:
            return r2
        L24:
            org.json.JSONException r4 = new org.json.JSONException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "JSONObject["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "] is not a JSONArray."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    public java.lang.Object get(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            if (r4 == 0) goto L29
            java.lang.Object r0 = r3.opt(r4)
            if (r0 == 0) goto L9
            return r0
        L9:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] not found."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L29:
            org.json.JSONException r4 = new org.json.JSONException
            java.lang.String r0 = "Null key."
            r4.<init>(r0)
            throw r4
    }

    public boolean getBoolean(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L53
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1c
            r2 = r0
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "false"
            boolean r2 = r2.equalsIgnoreCase(r3)
            if (r2 == 0) goto L1c
            goto L53
        L1c:
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L51
            if (r1 == 0) goto L31
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "true"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L31
            goto L51
        L31:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r5 = quote(r5)
            r1.append(r5)
            java.lang.String r5 = "] is not a Boolean."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L51:
            r5 = 1
            return r5
        L53:
            r5 = 0
            return r5
    }

    public double getDouble(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.get(r4)
            boolean r1 = r0 instanceof java.lang.Number     // Catch: java.lang.Exception -> L16
            if (r1 == 0) goto Lf
            java.lang.Number r0 = (java.lang.Number) r0     // Catch: java.lang.Exception -> L16
            double r0 = r0.doubleValue()     // Catch: java.lang.Exception -> L16
            goto L15
        Lf:
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L16
            double r0 = java.lang.Double.parseDouble(r0)     // Catch: java.lang.Exception -> L16
        L15:
            return r0
        L16:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] is not a number."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public int getInt(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.get(r4)
            boolean r1 = r0 instanceof java.lang.Number     // Catch: java.lang.Exception -> L16
            if (r1 == 0) goto Lf
            java.lang.Number r0 = (java.lang.Number) r0     // Catch: java.lang.Exception -> L16
            int r4 = r0.intValue()     // Catch: java.lang.Exception -> L16
            goto L15
        Lf:
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L16
            int r4 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L16
        L15:
            return r4
        L16:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] is not an int."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public org.json.JSONArray getJSONArray(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.get(r4)
            boolean r1 = r0 instanceof org.json.JSONArray
            if (r1 == 0) goto Lb
            org.json.JSONArray r0 = (org.json.JSONArray) r0
            return r0
        Lb:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] is not a JSONArray."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public org.json.JSONObject getJSONObject(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.get(r4)
            boolean r1 = r0 instanceof org.json.JSONObject
            if (r1 == 0) goto Lb
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            return r0
        Lb:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] is not a JSONObject."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public long getLong(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.get(r4)
            boolean r1 = r0 instanceof java.lang.Number     // Catch: java.lang.Exception -> L16
            if (r1 == 0) goto Lf
            java.lang.Number r0 = (java.lang.Number) r0     // Catch: java.lang.Exception -> L16
            long r0 = r0.longValue()     // Catch: java.lang.Exception -> L16
            goto L15
        Lf:
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L16
            long r0 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Exception -> L16
        L15:
            return r0
        L16:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] is not a long."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public java.lang.String getString(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.get(r4)
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto Lb
            java.lang.String r0 = (java.lang.String) r0
            return r0
        Lb:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONObject["
            r1.append(r2)
            java.lang.String r4 = quote(r4)
            r1.append(r4)
            java.lang.String r4 = "] not a string."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public boolean has(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public org.json.JSONObject increment(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.opt(r5)
            r1 = 1
            if (r0 != 0) goto Lb
            r4.put(r5, r1)
            goto L4d
        Lb:
            boolean r2 = r0 instanceof java.lang.Integer
            if (r2 == 0) goto L1a
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            int r0 = r0 + r1
            r4.put(r5, r0)
            goto L4d
        L1a:
            boolean r1 = r0 instanceof java.lang.Long
            if (r1 == 0) goto L2b
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            r2 = 1
            long r0 = r0 + r2
            r4.put(r5, r0)
            goto L4d
        L2b:
            boolean r1 = r0 instanceof java.lang.Double
            if (r1 == 0) goto L3c
            java.lang.Double r0 = (java.lang.Double) r0
            double r0 = r0.doubleValue()
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 + r2
            r4.put(r5, r0)
            goto L4d
        L3c:
            boolean r1 = r0 instanceof java.lang.Float
            if (r1 == 0) goto L4e
            java.lang.Float r0 = (java.lang.Float) r0
            float r0 = r0.floatValue()
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 + r1
            double r0 = (double) r0
            r4.put(r5, r0)
        L4d:
            return r4
        L4e:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unable to increment ["
            r1.append(r2)
            java.lang.String r5 = quote(r5)
            r1.append(r5)
            java.lang.String r5 = "]."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public boolean isNull(java.lang.String r2) {
            r1 = this;
            java.lang.Object r0 = org.json.JSONObject.NULL
            java.lang.Object r2 = r1.opt(r2)
            boolean r2 = r0.equals(r2)
            return r2
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
            int r1 = r0.length()
            if (r1 != 0) goto L1e
            r0 = 0
        L1e:
            return r0
    }

    public java.lang.Object opt(java.lang.String r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            goto La
        L4:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            java.lang.Object r2 = r0.get(r2)
        La:
            return r2
    }

    public boolean optBoolean(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.optBoolean(r2, r0)
            return r2
    }

    public boolean optBoolean(java.lang.String r1, boolean r2) {
            r0 = this;
            boolean r1 = r0.getBoolean(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public double optDouble(java.lang.String r3) {
            r2 = this;
            r0 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            double r0 = r2.optDouble(r3, r0)
            return r0
    }

    public double optDouble(java.lang.String r1, double r2) {
            r0 = this;
            double r1 = r0.getDouble(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public int optInt(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.optInt(r2, r0)
            return r2
    }

    public int optInt(java.lang.String r1, int r2) {
            r0 = this;
            int r1 = r0.getInt(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public org.json.JSONArray optJSONArray(java.lang.String r2) {
            r1 = this;
            java.lang.Object r2 = r1.opt(r2)
            boolean r0 = r2 instanceof org.json.JSONArray
            if (r0 == 0) goto Lb
            org.json.JSONArray r2 = (org.json.JSONArray) r2
            goto Lc
        Lb:
            r2 = 0
        Lc:
            return r2
    }

    public org.json.JSONObject optJSONObject(java.lang.String r2) {
            r1 = this;
            java.lang.Object r2 = r1.opt(r2)
            boolean r0 = r2 instanceof org.json.JSONObject
            if (r0 == 0) goto Lb
            org.json.JSONObject r2 = (org.json.JSONObject) r2
            goto Lc
        Lb:
            r2 = 0
        Lc:
            return r2
    }

    public long optLong(java.lang.String r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.optLong(r3, r0)
            return r0
    }

    public long optLong(java.lang.String r1, long r2) {
            r0 = this;
            long r1 = r0.getLong(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public java.lang.String optString(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.optString(r2, r0)
            return r2
    }

    public java.lang.String optString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.Object r2 = r1.opt(r2)
            java.lang.Object r0 = org.json.JSONObject.NULL
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto Ld
            goto L11
        Ld:
            java.lang.String r3 = r2.toString()
        L11:
            return r3
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

    public org.json.JSONObject put(java.lang.String r2, java.lang.Object r3) throws org.json.JSONException {
            r1 = this;
            if (r2 == 0) goto L11
            if (r3 == 0) goto Ld
            testValidity(r3)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            r0.put(r2, r3)
            goto L10
        Ld:
            r1.remove(r2)
        L10:
            return r1
        L11:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "Null key."
            r2.<init>(r3)
            throw r2
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

    public org.json.JSONObject put(java.lang.String r1, boolean r2) throws org.json.JSONException {
            r0 = this;
            if (r2 == 0) goto L5
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            goto L7
        L5:
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
        L7:
            r0.put(r1, r2)
            return r0
    }

    public org.json.JSONObject putOnce(java.lang.String r3, java.lang.Object r4) throws org.json.JSONException {
            r2 = this;
            if (r3 == 0) goto L2a
            if (r4 == 0) goto L2a
            java.lang.Object r0 = r2.opt(r3)
            if (r0 != 0) goto Le
            r2.put(r3, r4)
            goto L2a
        Le:
            org.json.JSONException r4 = new org.json.JSONException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Duplicate key \""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\""
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L2a:
            return r2
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
            java.lang.Object r2 = r0.remove(r2)
            return r2
    }

    public boolean similar(java.lang.Object r6) {
            r5 = this;
            r0 = 0
            boolean r1 = r6 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L6
            return r0
        L6:
            java.util.Set r1 = r5.keySet()     // Catch: java.lang.Throwable -> L56
            r2 = r6
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Throwable -> L56
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L56
            boolean r2 = r1.equals(r2)     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L18
            return r0
        L18:
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L56
        L1c:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L54
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L56
            java.lang.Object r3 = r5.get(r2)     // Catch: java.lang.Throwable -> L56
            r4 = r6
            org.json.JSONObject r4 = (org.json.JSONObject) r4     // Catch: java.lang.Throwable -> L56
            java.lang.Object r2 = r4.get(r2)     // Catch: java.lang.Throwable -> L56
            boolean r4 = r3 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> L56
            if (r4 == 0) goto L40
            org.json.JSONObject r3 = (org.json.JSONObject) r3     // Catch: java.lang.Throwable -> L56
            boolean r2 = r3.similar(r2)     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L1c
            return r0
        L40:
            boolean r4 = r3 instanceof org.json.JSONArray     // Catch: java.lang.Throwable -> L56
            if (r4 == 0) goto L4d
            org.json.JSONArray r3 = (org.json.JSONArray) r3     // Catch: java.lang.Throwable -> L56
            boolean r2 = r3.similar(r2)     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L1c
            return r0
        L4d:
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L1c
            return r0
        L54:
            r6 = 1
            return r6
        L56:
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
            r4 = 0
            return r4
    }

    public java.lang.String toString() {
            r1 = this;
            r0 = 0
            java.lang.String r0 = r1.toString(r0)     // Catch: java.lang.Exception -> L6
            return r0
        L6:
            r0 = 0
            return r0
    }

    public java.lang.String toString(int r4) throws org.json.JSONException {
            r3 = this;
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.lang.StringBuffer r1 = r0.getBuffer()
            monitor-enter(r1)
            r2 = 0
            java.io.Writer r4 = r3.write(r0, r4, r2)     // Catch: java.lang.Throwable -> L15
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            return r4
        L15:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            throw r4
    }

    public java.io.Writer write(java.io.Writer r2) throws org.json.JSONException {
            r1 = this;
            r0 = 0
            java.io.Writer r2 = r1.write(r2, r0, r0)
            return r2
    }

    java.io.Writer write(java.io.Writer r9, int r10, int r11) throws org.json.JSONException {
            r8 = this;
            int r0 = r8.length()     // Catch: java.io.IOException -> L81
            java.util.Iterator r1 = r8.keys()     // Catch: java.io.IOException -> L81
            r2 = 123(0x7b, float:1.72E-43)
            r9.write(r2)     // Catch: java.io.IOException -> L81
            r2 = 32
            r3 = 58
            r4 = 1
            if (r0 != r4) goto L35
            java.lang.Object r0 = r1.next()     // Catch: java.io.IOException -> L81
            java.lang.String r1 = r0.toString()     // Catch: java.io.IOException -> L81
            java.lang.String r1 = quote(r1)     // Catch: java.io.IOException -> L81
            r9.write(r1)     // Catch: java.io.IOException -> L81
            r9.write(r3)     // Catch: java.io.IOException -> L81
            if (r10 <= 0) goto L2b
            r9.write(r2)     // Catch: java.io.IOException -> L81
        L2b:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r8.map     // Catch: java.io.IOException -> L81
            java.lang.Object r0 = r1.get(r0)     // Catch: java.io.IOException -> L81
            writeValue(r9, r0, r10, r11)     // Catch: java.io.IOException -> L81
            goto L7b
        L35:
            if (r0 == 0) goto L7b
            int r0 = r11 + r10
            r5 = 0
        L3a:
            boolean r6 = r1.hasNext()     // Catch: java.io.IOException -> L81
            r7 = 10
            if (r6 == 0) goto L73
            java.lang.Object r6 = r1.next()     // Catch: java.io.IOException -> L81
            if (r5 == 0) goto L4d
            r5 = 44
            r9.write(r5)     // Catch: java.io.IOException -> L81
        L4d:
            if (r10 <= 0) goto L52
            r9.write(r7)     // Catch: java.io.IOException -> L81
        L52:
            indent(r9, r0)     // Catch: java.io.IOException -> L81
            java.lang.String r5 = r6.toString()     // Catch: java.io.IOException -> L81
            java.lang.String r5 = quote(r5)     // Catch: java.io.IOException -> L81
            r9.write(r5)     // Catch: java.io.IOException -> L81
            r9.write(r3)     // Catch: java.io.IOException -> L81
            if (r10 <= 0) goto L68
            r9.write(r2)     // Catch: java.io.IOException -> L81
        L68:
            java.util.Map<java.lang.String, java.lang.Object> r5 = r8.map     // Catch: java.io.IOException -> L81
            java.lang.Object r5 = r5.get(r6)     // Catch: java.io.IOException -> L81
            writeValue(r9, r5, r10, r0)     // Catch: java.io.IOException -> L81
            r5 = 1
            goto L3a
        L73:
            if (r10 <= 0) goto L78
            r9.write(r7)     // Catch: java.io.IOException -> L81
        L78:
            indent(r9, r11)     // Catch: java.io.IOException -> L81
        L7b:
            r10 = 125(0x7d, float:1.75E-43)
            r9.write(r10)     // Catch: java.io.IOException -> L81
            return r9
        L81:
            r9 = move-exception
            org.json.JSONException r10 = new org.json.JSONException
            r10.<init>(r9)
            throw r10
    }
}
