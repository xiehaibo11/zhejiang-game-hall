package org.json;

public class JSONArray {
    private final java.util.ArrayList<java.lang.Object> myArrayList;

    public JSONArray() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.myArrayList = r0
            return
    }

    public JSONArray(java.lang.Object r4) throws org.json.JSONException {
            r3 = this;
            r3.<init>()
            java.lang.Class r0 = r4.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L24
            int r0 = java.lang.reflect.Array.getLength(r4)
            r1 = 0
        L12:
            if (r1 >= r0) goto L22
            java.lang.Object r2 = java.lang.reflect.Array.get(r4, r1)
            java.lang.Object r2 = org.json.JSONObject.wrap(r2)
            r3.put(r2)
            int r1 = r1 + 1
            goto L12
        L22:
            return
        L24:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.String r1 = "JSONArray initial value should be a string or collection or array."
            r0.<init>(r1)
            throw r0
    }

    public JSONArray(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public JSONArray(java.util.Collection<java.lang.Object> r4) {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.myArrayList = r0
            if (r4 == 0) goto L24
            java.util.Iterator r0 = r4.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L24
            java.util.ArrayList<java.lang.Object> r1 = r3.myArrayList
            java.lang.Object r2 = r0.next()
            java.lang.Object r2 = org.json.JSONObject.wrap(r2)
            r1.add(r2)
            goto L10
        L24:
            return
    }

    public JSONArray(org.json.JSONTokener r5) throws org.json.JSONException {
            r4 = this;
            r4.<init>()
            char r0 = r5.nextClean()
            r1 = 91
            if (r0 != r1) goto L51
            char r0 = r5.nextClean()
            r1 = 93
            if (r0 == r1) goto L50
            r5.back()
        L16:
            char r0 = r5.nextClean()
            r2 = 44
            if (r0 != r2) goto L29
            r5.back()
            java.util.ArrayList<java.lang.Object> r0 = r4.myArrayList
            java.lang.Object r3 = org.json.JSONObject.NULL
            r0.add(r3)
            goto L35
        L29:
            r5.back()
            java.util.ArrayList<java.lang.Object> r0 = r4.myArrayList
            java.lang.Object r3 = r5.nextValue()
            r0.add(r3)
        L35:
            char r0 = r5.nextClean()
            if (r0 == r2) goto L45
            if (r0 != r1) goto L3e
            return
        L3e:
            java.lang.String r0 = "Expected a ',' or ']'"
            org.json.JSONException r0 = r5.syntaxError(r0)
            throw r0
        L45:
            char r0 = r5.nextClean()
            if (r0 != r1) goto L4c
            return
        L4c:
            r5.back()
            goto L16
        L50:
            return
        L51:
            java.lang.String r0 = "A JSONArray text must start with '['"
            org.json.JSONException r0 = r5.syntaxError(r0)
            throw r0
    }

    public java.lang.Object get(int r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.opt(r5)
            if (r0 == 0) goto L7
            return r0
        L7:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONArray["
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "] not found."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public boolean getBoolean(int r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L52
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1c
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "false"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L1c
            goto L52
        L1c:
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L50
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L34
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "true"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L34
            goto L50
        L34:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "JSONArray["
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "] is not a boolean."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L50:
            r1 = 1
            return r1
        L52:
            r1 = 0
            return r1
    }

    public double getDouble(int r6) throws org.json.JSONException {
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
            java.lang.String r4 = "JSONArray["
            r3.append(r4)
            r3.append(r6)
            java.lang.String r4 = "] is not a number."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public int getInt(int r6) throws org.json.JSONException {
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
            java.lang.String r4 = "JSONArray["
            r3.append(r4)
            r3.append(r6)
            java.lang.String r4 = "] is not a number."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public org.json.JSONArray getJSONArray(int r5) throws org.json.JSONException {
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
            java.lang.String r3 = "JSONArray["
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "] is not a JSONArray."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public org.json.JSONObject getJSONObject(int r5) throws org.json.JSONException {
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
            java.lang.String r3 = "JSONArray["
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "] is not a JSONObject."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public long getLong(int r6) throws org.json.JSONException {
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
            java.lang.String r4 = "JSONArray["
            r3.append(r4)
            r3.append(r6)
            java.lang.String r4 = "] is not a number."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public java.lang.String getString(int r5) throws org.json.JSONException {
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
            java.lang.String r3 = "JSONArray["
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "] not a string."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public boolean isNull(int r3) {
            r2 = this;
            java.lang.Object r0 = org.json.JSONObject.NULL
            java.lang.Object r1 = r2.opt(r3)
            boolean r0 = r0.equals(r1)
            return r0
    }

    public java.lang.String join(java.lang.String r5) throws org.json.JSONException {
            r4 = this;
            int r0 = r4.length()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L21
            if (r2 <= 0) goto L11
            r1.append(r5)
        L11:
            java.util.ArrayList<java.lang.Object> r3 = r4.myArrayList
            java.lang.Object r3 = r3.get(r2)
            java.lang.String r3 = org.json.JSONObject.valueToString(r3)
            r1.append(r3)
            int r2 = r2 + 1
            goto La
        L21:
            java.lang.String r2 = r1.toString()
            return r2
    }

    public int length() {
            r1 = this;
            java.util.ArrayList<java.lang.Object> r0 = r1.myArrayList
            int r0 = r0.size()
            return r0
    }

    public java.lang.Object opt(int r2) {
            r1 = this;
            if (r2 < 0) goto L10
            int r0 = r1.length()
            if (r2 < r0) goto L9
            goto L10
        L9:
            java.util.ArrayList<java.lang.Object> r0 = r1.myArrayList
            java.lang.Object r0 = r0.get(r2)
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public boolean optBoolean(int r2) {
            r1 = this;
            r0 = 0
            boolean r0 = r1.optBoolean(r2, r0)
            return r0
    }

    public boolean optBoolean(int r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.getBoolean(r2)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    public double optDouble(int r3) {
            r2 = this;
            r0 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            double r0 = r2.optDouble(r3, r0)
            return r0
    }

    public double optDouble(int r3, double r4) {
            r2 = this;
            double r0 = r2.getDouble(r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r4
    }

    public int optInt(int r2) {
            r1 = this;
            r0 = 0
            int r0 = r1.optInt(r2, r0)
            return r0
    }

    public int optInt(int r2, int r3) {
            r1 = this;
            int r0 = r1.getInt(r2)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    public org.json.JSONArray optJSONArray(int r3) {
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

    public org.json.JSONObject optJSONObject(int r3) {
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

    public long optLong(int r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.optLong(r3, r0)
            return r0
    }

    public long optLong(int r3, long r4) {
            r2 = this;
            long r0 = r2.getLong(r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            return r4
    }

    public java.lang.String optString(int r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r0 = r1.optString(r2, r0)
            return r0
    }

    public java.lang.String optString(int r3, java.lang.String r4) {
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

    public org.json.JSONArray put(double r2) throws org.json.JSONException {
            r1 = this;
            java.lang.Double r0 = new java.lang.Double
            r0.<init>(r2)
            org.json.JSONObject.testValidity(r0)
            r1.put(r0)
            return r1
    }

    public org.json.JSONArray put(int r2) {
            r1 = this;
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r2)
            r1.put(r0)
            return r1
    }

    public org.json.JSONArray put(int r2, double r3) throws org.json.JSONException {
            r1 = this;
            java.lang.Double r0 = new java.lang.Double
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONArray put(int r2, int r3) throws org.json.JSONException {
            r1 = this;
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONArray put(int r2, long r3) throws org.json.JSONException {
            r1 = this;
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONArray put(int r4, java.lang.Object r5) throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject.testValidity(r5)
            if (r4 < 0) goto L21
            int r0 = r3.length()
            if (r4 >= r0) goto L11
            java.util.ArrayList<java.lang.Object> r0 = r3.myArrayList
            r0.set(r4, r5)
            goto L20
        L11:
            int r0 = r3.length()
            if (r4 == r0) goto L1d
            java.lang.Object r0 = org.json.JSONObject.NULL
            r3.put(r0)
            goto L11
        L1d:
            r3.put(r5)
        L20:
            return r3
        L21:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = "] not found."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public org.json.JSONArray put(int r2, java.util.Collection<java.lang.Object> r3) throws org.json.JSONException {
            r1 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONArray put(int r2, java.util.Map<java.lang.String, java.lang.Object> r3) throws org.json.JSONException {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            r1.put(r2, r0)
            return r1
    }

    public org.json.JSONArray put(int r2, boolean r3) throws org.json.JSONException {
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

    public org.json.JSONArray put(long r2) {
            r1 = this;
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r2)
            r1.put(r0)
            return r1
    }

    public org.json.JSONArray put(java.lang.Object r2) {
            r1 = this;
            java.util.ArrayList<java.lang.Object> r0 = r1.myArrayList
            r0.add(r2)
            return r1
    }

    public org.json.JSONArray put(java.util.Collection<java.lang.Object> r2) {
            r1 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r2)
            r1.put(r0)
            return r1
    }

    public org.json.JSONArray put(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            r1.put(r0)
            return r1
    }

    public org.json.JSONArray put(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L5
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            goto L7
        L5:
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
        L7:
            r1.put(r0)
            return r1
    }

    public java.lang.Object remove(int r2) {
            r1 = this;
            if (r2 < 0) goto Lf
            int r0 = r1.length()
            if (r2 >= r0) goto Lf
            java.util.ArrayList<java.lang.Object> r0 = r1.myArrayList
            java.lang.Object r0 = r0.remove(r2)
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public boolean similar(java.lang.Object r7) {
            r6 = this;
            boolean r0 = r7 instanceof org.json.JSONArray
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r6.length()
            r2 = r7
            org.json.JSONArray r2 = (org.json.JSONArray) r2
            int r2 = r2.length()
            if (r0 == r2) goto L14
            return r1
        L14:
            r2 = 0
        L15:
            if (r2 >= r0) goto L48
            java.lang.Object r3 = r6.get(r2)
            r4 = r7
            org.json.JSONArray r4 = (org.json.JSONArray) r4
            java.lang.Object r4 = r4.get(r2)
            boolean r5 = r3 instanceof org.json.JSONObject
            if (r5 == 0) goto L30
            r5 = r3
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            boolean r5 = r5.similar(r4)
            if (r5 != 0) goto L45
            return r1
        L30:
            boolean r5 = r3 instanceof org.json.JSONArray
            if (r5 == 0) goto L3e
            r5 = r3
            org.json.JSONArray r5 = (org.json.JSONArray) r5
            boolean r5 = r5.similar(r4)
            if (r5 != 0) goto L45
            return r1
        L3e:
            boolean r5 = r3.equals(r4)
            if (r5 != 0) goto L45
            return r1
        L45:
            int r2 = r2 + 1
            goto L15
        L48:
            r1 = 1
            return r1
    }

    public org.json.JSONObject toJSONObject(org.json.JSONArray r5) throws org.json.JSONException {
            r4 = this;
            if (r5 == 0) goto L2a
            int r0 = r5.length()
            if (r0 == 0) goto L2a
            int r0 = r4.length()
            if (r0 != 0) goto Lf
            goto L2a
        Lf:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1 = 0
        L15:
            int r2 = r5.length()
            if (r1 >= r2) goto L29
            java.lang.String r2 = r5.getString(r1)
            java.lang.Object r3 = r4.opt(r1)
            r0.put(r2, r3)
            int r1 = r1 + 1
            goto L15
        L29:
            return r0
        L2a:
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

    java.io.Writer write(java.io.Writer r7, int r8, int r9) throws org.json.JSONException {
            r6 = this;
            r0 = 0
            int r1 = r6.length()     // Catch: java.io.IOException -> L4b
            r2 = 91
            r7.write(r2)     // Catch: java.io.IOException -> L4b
            r2 = 1
            if (r1 != r2) goto L18
            java.util.ArrayList<java.lang.Object> r2 = r6.myArrayList     // Catch: java.io.IOException -> L4b
            r3 = 0
            java.lang.Object r2 = r2.get(r3)     // Catch: java.io.IOException -> L4b
            org.json.JSONObject.writeValue(r7, r2, r8, r9)     // Catch: java.io.IOException -> L4b
            goto L45
        L18:
            if (r1 == 0) goto L45
            int r2 = r9 + r8
            r3 = 0
        L1d:
            r4 = 10
            if (r3 >= r1) goto L3d
            if (r0 == 0) goto L28
            r5 = 44
            r7.write(r5)     // Catch: java.io.IOException -> L4b
        L28:
            if (r8 <= 0) goto L2d
            r7.write(r4)     // Catch: java.io.IOException -> L4b
        L2d:
            org.json.JSONObject.indent(r7, r2)     // Catch: java.io.IOException -> L4b
            java.util.ArrayList<java.lang.Object> r4 = r6.myArrayList     // Catch: java.io.IOException -> L4b
            java.lang.Object r4 = r4.get(r3)     // Catch: java.io.IOException -> L4b
            org.json.JSONObject.writeValue(r7, r4, r8, r2)     // Catch: java.io.IOException -> L4b
            r0 = 1
            int r3 = r3 + 1
            goto L1d
        L3d:
            if (r8 <= 0) goto L42
            r7.write(r4)     // Catch: java.io.IOException -> L4b
        L42:
            org.json.JSONObject.indent(r7, r9)     // Catch: java.io.IOException -> L4b
        L45:
            r2 = 93
            r7.write(r2)     // Catch: java.io.IOException -> L4b
            return r7
        L4b:
            r0 = move-exception
            org.json.JSONException r1 = new org.json.JSONException
            r1.<init>(r0)
            throw r1
    }
}
