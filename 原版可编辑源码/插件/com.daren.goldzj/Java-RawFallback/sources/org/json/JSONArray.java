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
            if (r0 == 0) goto L23
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
        L23:
            org.json.JSONException r4 = new org.json.JSONException
            java.lang.String r0 = "JSONArray initial value should be a string or collection or array."
            r4.<init>(r0)
            throw r4
    }

    public JSONArray(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public JSONArray(java.util.Collection<java.lang.Object> r3) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.myArrayList = r0
            if (r3 == 0) goto L24
            java.util.Iterator r3 = r3.iterator()
        L10:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L24
            java.util.ArrayList<java.lang.Object> r0 = r2.myArrayList
            java.lang.Object r1 = r3.next()
            java.lang.Object r1 = org.json.JSONObject.wrap(r1)
            r0.add(r1)
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
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
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
            org.json.JSONException r5 = r5.syntaxError(r0)
            throw r5
    }

    public java.lang.Object get(int r4) throws org.json.JSONException {
            r3 = this;
            java.lang.Object r0 = r3.opt(r4)
            if (r0 == 0) goto L7
            return r0
        L7:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] not found."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public boolean getBoolean(int r5) throws org.json.JSONException {
            r4 = this;
            java.lang.Object r0 = r4.get(r5)
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L4f
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1c
            r2 = r0
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "false"
            boolean r2 = r2.equalsIgnoreCase(r3)
            if (r2 == 0) goto L1c
            goto L4f
        L1c:
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L4d
            if (r1 == 0) goto L31
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "true"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L31
            goto L4d
        L31:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = "] is not a boolean."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L4d:
            r5 = 1
            return r5
        L4f:
            r5 = 0
            return r5
    }

    public double getDouble(int r4) throws org.json.JSONException {
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
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] is not a number."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public int getInt(int r4) throws org.json.JSONException {
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
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] is not a number."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public org.json.JSONArray getJSONArray(int r4) throws org.json.JSONException {
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
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] is not a JSONArray."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public org.json.JSONObject getJSONObject(int r4) throws org.json.JSONException {
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
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] is not a JSONObject."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public long getLong(int r4) throws org.json.JSONException {
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
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] is not a number."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public java.lang.String getString(int r4) throws org.json.JSONException {
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
            java.lang.String r2 = "JSONArray["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] not a string."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public boolean isNull(int r2) {
            r1 = this;
            java.lang.Object r0 = org.json.JSONObject.NULL
            java.lang.Object r2 = r1.opt(r2)
            boolean r2 = r0.equals(r2)
            return r2
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
            java.lang.String r5 = r1.toString()
            return r5
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
            java.lang.Object r2 = r0.get(r2)
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    public boolean optBoolean(int r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.optBoolean(r2, r0)
            return r2
    }

    public boolean optBoolean(int r1, boolean r2) {
            r0 = this;
            boolean r1 = r0.getBoolean(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public double optDouble(int r3) {
            r2 = this;
            r0 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            double r0 = r2.optDouble(r3, r0)
            return r0
    }

    public double optDouble(int r1, double r2) {
            r0 = this;
            double r1 = r0.getDouble(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public int optInt(int r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.optInt(r2, r0)
            return r2
    }

    public int optInt(int r1, int r2) {
            r0 = this;
            int r1 = r0.getInt(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public org.json.JSONArray optJSONArray(int r2) {
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

    public org.json.JSONObject optJSONObject(int r2) {
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

    public long optLong(int r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.optLong(r3, r0)
            return r0
    }

    public long optLong(int r1, long r2) {
            r0 = this;
            long r1 = r0.getLong(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    public java.lang.String optString(int r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.optString(r2, r0)
            return r2
    }

    public java.lang.String optString(int r2, java.lang.String r3) {
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

    public org.json.JSONArray put(int r3, java.lang.Object r4) throws org.json.JSONException {
            r2 = this;
            org.json.JSONObject.testValidity(r4)
            if (r3 < 0) goto L21
            int r0 = r2.length()
            if (r3 >= r0) goto L11
            java.util.ArrayList<java.lang.Object> r0 = r2.myArrayList
            r0.set(r3, r4)
            goto L20
        L11:
            int r0 = r2.length()
            if (r3 == r0) goto L1d
            java.lang.Object r0 = org.json.JSONObject.NULL
            r2.put(r0)
            goto L11
        L1d:
            r2.put(r4)
        L20:
            return r2
        L21:
            org.json.JSONException r4 = new org.json.JSONException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "JSONArray["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "] not found."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
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

    public org.json.JSONArray put(int r1, boolean r2) throws org.json.JSONException {
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

    public org.json.JSONArray put(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L5
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            goto L7
        L5:
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
        L7:
            r0.put(r1)
            return r0
    }

    public java.lang.Object remove(int r2) {
            r1 = this;
            if (r2 < 0) goto Lf
            int r0 = r1.length()
            if (r2 >= r0) goto Lf
            java.util.ArrayList<java.lang.Object> r0 = r1.myArrayList
            java.lang.Object r2 = r0.remove(r2)
            goto L10
        Lf:
            r2 = 0
        L10:
            return r2
    }

    public boolean similar(java.lang.Object r7) {
            r6 = this;
            boolean r0 = r7 instanceof org.json.JSONArray
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r6.length()
            org.json.JSONArray r7 = (org.json.JSONArray) r7
            int r2 = r7.length()
            if (r0 == r2) goto L13
            return r1
        L13:
            r2 = 0
        L14:
            if (r2 >= r0) goto L42
            java.lang.Object r3 = r6.get(r2)
            java.lang.Object r4 = r7.get(r2)
            boolean r5 = r3 instanceof org.json.JSONObject
            if (r5 == 0) goto L2b
            org.json.JSONObject r3 = (org.json.JSONObject) r3
            boolean r3 = r3.similar(r4)
            if (r3 != 0) goto L3f
            return r1
        L2b:
            boolean r5 = r3 instanceof org.json.JSONArray
            if (r5 == 0) goto L38
            org.json.JSONArray r3 = (org.json.JSONArray) r3
            boolean r3 = r3.similar(r4)
            if (r3 != 0) goto L3f
            return r1
        L38:
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L3f
            return r1
        L3f:
            int r2 = r2 + 1
            goto L14
        L42:
            r7 = 1
            return r7
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
            r5 = 0
            return r5
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

    java.io.Writer write(java.io.Writer r7, int r8, int r9) throws org.json.JSONException {
            r6 = this;
            int r0 = r6.length()     // Catch: java.io.IOException -> L4a
            r1 = 91
            r7.write(r1)     // Catch: java.io.IOException -> L4a
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L17
            java.util.ArrayList<java.lang.Object> r0 = r6.myArrayList     // Catch: java.io.IOException -> L4a
            java.lang.Object r0 = r0.get(r2)     // Catch: java.io.IOException -> L4a
            org.json.JSONObject.writeValue(r7, r0, r8, r9)     // Catch: java.io.IOException -> L4a
            goto L44
        L17:
            if (r0 == 0) goto L44
            int r3 = r9 + r8
            r4 = 0
        L1c:
            r5 = 10
            if (r2 >= r0) goto L3c
            if (r4 == 0) goto L27
            r4 = 44
            r7.write(r4)     // Catch: java.io.IOException -> L4a
        L27:
            if (r8 <= 0) goto L2c
            r7.write(r5)     // Catch: java.io.IOException -> L4a
        L2c:
            org.json.JSONObject.indent(r7, r3)     // Catch: java.io.IOException -> L4a
            java.util.ArrayList<java.lang.Object> r4 = r6.myArrayList     // Catch: java.io.IOException -> L4a
            java.lang.Object r4 = r4.get(r2)     // Catch: java.io.IOException -> L4a
            org.json.JSONObject.writeValue(r7, r4, r8, r3)     // Catch: java.io.IOException -> L4a
            int r2 = r2 + 1
            r4 = 1
            goto L1c
        L3c:
            if (r8 <= 0) goto L41
            r7.write(r5)     // Catch: java.io.IOException -> L4a
        L41:
            org.json.JSONObject.indent(r7, r9)     // Catch: java.io.IOException -> L4a
        L44:
            r8 = 93
            r7.write(r8)     // Catch: java.io.IOException -> L4a
            return r7
        L4a:
            r7 = move-exception
            org.json.JSONException r8 = new org.json.JSONException
            r8.<init>(r7)
            throw r8
    }
}
