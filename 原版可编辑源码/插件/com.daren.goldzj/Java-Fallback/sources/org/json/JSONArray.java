package org.json;

import java.io.IOException;
import java.io.StringWriter;
import java.io.Writer;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;

public class JSONArray {
    private final ArrayList<Object> myArrayList;

    public JSONArray() {
        this.myArrayList = new ArrayList();
    }

    public Object get(int r4) throws JSONException {
        Object r0 = opt(r4);
        if (r0 == null) goto L6;
        return r0;
    L6:
        throw new JSONException("JSONArray[" + r4 + "] not found.");
    }

    public boolean getBoolean(int r5) throws JSONException {
        Object r0 = get(r5);
        if (r0.equals(Boolean.FALSE) == true) goto L19;
        boolean r1 = r0 instanceof String;
        if (r1 == false) goto L10;
        if (((String) r0).equalsIgnoreCase("false") == false) goto L10;
        return false;
    L10:
        if (r0.equals(Boolean.TRUE) == true) goto L17;
        if (r1 == false) goto L16;
        if (((String) r0).equalsIgnoreCase("true") == false) goto L16;
        return true;
    L16:
        throw new JSONException("JSONArray[" + r5 + "] is not a boolean.");
    L17:
        return true;
    L19:
        return false;
    }

    public double getDouble(int r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof Number) == false) goto L7;
        return ((Number) r0).doubleValue();
    L7:
        return Double.parseDouble((String) r0);
    L9:
        throw new JSONException("JSONArray[" + r4 + "] is not a number.");
    }

    public int getInt(int r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof Number) == false) goto L7;
        return ((Number) r0).intValue();
    L7:
        return Integer.parseInt((String) r0);
    L9:
        throw new JSONException("JSONArray[" + r4 + "] is not a number.");
    }

    public JSONArray getJSONArray(int r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof JSONArray) == false) goto L7;
        return (JSONArray) r0;
    L7:
        throw new JSONException("JSONArray[" + r4 + "] is not a JSONArray.");
    }

    public JSONObject getJSONObject(int r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof JSONObject) == false) goto L7;
        return (JSONObject) r0;
    L7:
        throw new JSONException("JSONArray[" + r4 + "] is not a JSONObject.");
    }

    public long getLong(int r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof Number) == false) goto L7;
        return ((Number) r0).longValue();
    L7:
        return Long.parseLong((String) r0);
    L9:
        throw new JSONException("JSONArray[" + r4 + "] is not a number.");
    }

    public String getString(int r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof String) == false) goto L7;
        return (String) r0;
    L7:
        throw new JSONException("JSONArray[" + r4 + "] not a string.");
    }

    public boolean isNull(int r2) {
        return JSONObject.NULL.equals(opt(r2));
    }

    public String join(String r5) throws JSONException {
        int r0 = length();
        StringBuilder r1 = new StringBuilder();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L8;
        if (r2 <= 0) goto L6;
        r1.append(r5);
    L6:
        r1.append(JSONObject.valueToString(this.myArrayList.get(r2)));
        r2 = r2 + 1;
        goto L3
    L8:
        return r1.toString();
    }

    public int length() {
        return this.myArrayList.size();
    }

    public Object opt(int r2) {
        if (r2 >= 0) goto L4;
    L7:
        return null;
    L4:
        if (r2 >= length()) goto L7;
        return this.myArrayList.get(r2);
    }

    public boolean optBoolean(int r2) {
        return optBoolean(r2, false);
    }

    public double optDouble(int r3) {
        return optDouble(r3, Double.NaN);
    }

    public int optInt(int r2) {
        return optInt(r2, 0);
    }

    public JSONArray optJSONArray(int r2) {
        Object r22 = opt(r2);
        if ((r22 instanceof JSONArray) == true) goto L7;
        return null;
    L7:
        return (JSONArray) r22;
    }

    public JSONObject optJSONObject(int r2) {
        Object r22 = opt(r2);
        if ((r22 instanceof JSONObject) == true) goto L7;
        return null;
    L7:
        return (JSONObject) r22;
    }

    public long optLong(int r3) {
        return optLong(r3, 0);
    }

    public String optString(int r2) {
        return optString(r2, "");
    }

    public JSONArray put(boolean r1) {
        if (r1 == false) goto L4;
        Boolean r12 = Boolean.TRUE;
    L5:
        put(r12);
        return this;
    L4:
        r12 = Boolean.FALSE;
        goto L5
    }

    public Object remove(int r2) {
        if (r2 >= 0) goto L4;
    L6:
        return null;
    L4:
        if (r2 >= length()) goto L6;
        return this.myArrayList.remove(r2);
    }

    public boolean similar(Object r7) {
        if ((r7 instanceof JSONArray) == true) goto L5;
        return false;
    L5:
        int r0 = length();
        JSONArray r72 = (JSONArray) r7;
        if (r0 == r72.length()) goto L8;
        return false;
    L8:
        int r2 = 0;
    L9:
        if (r2 >= r0) goto L24;
        Object r3 = get(r2);
        Object r4 = r72.get(r2);
        if ((r3 instanceof JSONObject) == false) goto L16;
        if (((JSONObject) r3).similar(r4) == true) goto L23;
        return false;
    L23:
        r2 = r2 + 1;
        goto L9
    L16:
        if ((r3 instanceof JSONArray) == false) goto L21;
        if (((JSONArray) r3).similar(r4) == true) goto L23;
        return false;
    L21:
        if (r3.equals(r4) == true) goto L23;
        return false;
    L24:
        return true;
    }

    public JSONObject toJSONObject(JSONArray r5) throws JSONException {
        if (r5 != null) goto L4;
        return null;
    L4:
        if (r5.length() != 0) goto L6;
        return null;
    L6:
        if (length() == 0) goto L17;
        JSONObject r0 = new JSONObject();
        int r1 = 0;
    L10:
        if (r1 >= r5.length()) goto L12;
        r0.put(r5.getString(r1), opt(r1));
        r1 = r1 + 1;
        goto L10
    L12:
        return r0;
    L17:
        return null;
    }

    public String toString() {
        return toString(0);
    L5:
        return null;
    }

    public Writer write(Writer r2) throws JSONException {
        return write(r2, 0, 0);
    }

    public boolean optBoolean(int r1, boolean r2) {
        return getBoolean(r1);
    L4:
        return r2;
    }

    public double optDouble(int r1, double r2) {
        return getDouble(r1);
    L4:
        return r2;
    }

    public int optInt(int r1, int r2) {
        return getInt(r1);
    L4:
        return r2;
    }

    public long optLong(int r1, long r2) {
        return getLong(r1);
    L4:
        return r2;
    }

    public String optString(int r2, String r3) {
        Object r22 = opt(r2);
        if (JSONObject.NULL.equals(r22) == false) goto L6;
        return r3;
    L6:
        return r22.toString();
    }

    public JSONArray put(Collection<Object> r2) {
        put(new JSONArray(r2));
        return this;
    }

    public String toString(int r4) throws JSONException {
        StringWriter r0 = new StringWriter();
        StringBuffer r1 = r0.getBuffer();
        monitor-enter(r1);
        String r42 = write(r0, r4, 0).toString();     // Catch: Throwable -> L8
        monitor-exit(r1);     // Catch: Throwable -> L8
        return r42;
    L8:
        th = move-exception;
        throw th;
    }

    Writer write(Writer r7, int r8, int r9) throws JSONException {
        int r0 = length();     // Catch: IOException -> L19
        r7.write(91);     // Catch: IOException -> L19
        int r2 = 0;
        if (r0 != 1) goto L5;
        JSONObject.writeValue(r7, this.myArrayList.get(0), r8, r9);     // Catch: IOException -> L19
    L17:
        r7.write(93);     // Catch: IOException -> L19
        return r7;
    L5:
        if (r0 == 0) goto L17;
        int r3 = r9 + r8;     // Catch: IOException -> L19
        boolean r4 = false;
    L8:
        if (r2 >= r0) goto L14;
        if (r4 == false) goto L11;
        r7.write(44);     // Catch: IOException -> L19
    L11:
        if (r8 <= 0) goto L13;
        r7.write(10);     // Catch: IOException -> L19
    L13:
        JSONObject.indent(r7, r3);     // Catch: IOException -> L19
        JSONObject.writeValue(r7, this.myArrayList.get(r2), r8, r3);     // Catch: IOException -> L19
        r2 = r2 + 1;     // Catch: IOException -> L19
        r4 = true;
        goto L8
    L14:
        if (r8 <= 0) goto L16;
        r7.write(10);     // Catch: IOException -> L19
    L16:
        JSONObject.indent(r7, r9);     // Catch: IOException -> L19
    L19:
        e = move-exception;
        throw new JSONException(e);
    }

    public JSONArray(JSONTokener r5) throws JSONException {
        this();
        if (r5.nextClean() != '[') goto L23;
        if (r5.nextClean() == ']') goto L21;
        r5.back();
    L8:
        if (r5.nextClean() != ',') goto L10;
        r5.back();
        this.myArrayList.add(JSONObject.NULL);
    L11:
        char r0 = r5.nextClean();
        if (r0 != ',') goto L13;
        if (r5.nextClean() == ']') goto L19;
        r5.back();
        goto L8
    L19:
        return;
    L13:
        if (r0 != ']') goto L16;
        return;
    L16:
        throw r5.syntaxError("Expected a ',' or ']'");
    L10:
        r5.back();
        this.myArrayList.add(r5.nextValue());
        goto L11
    L21:
        return;
    L23:
        throw r5.syntaxError("A JSONArray text must start with '['");
    }

    public JSONArray put(double r2) throws JSONException {
        Double r0 = new Double(r2);
        JSONObject.testValidity(r0);
        put(r0);
        return this;
    }

    public JSONArray put(int r2) {
        put(new Integer(r2));
        return this;
    }

    public JSONArray put(long r2) {
        put(new Long(r2));
        return this;
    }

    public JSONArray put(Map<String, Object> r2) {
        put(new JSONObject(r2));
        return this;
    }

    public JSONArray put(Object r2) {
        this.myArrayList.add(r2);
        return this;
    }

    public JSONArray put(int r1, boolean r2) throws JSONException {
        if (r2 == false) goto L4;
        Boolean r22 = Boolean.TRUE;
    L5:
        put(r1, r22);
        return this;
    L4:
        r22 = Boolean.FALSE;
        goto L5
    }

    public JSONArray put(int r2, Collection<Object> r3) throws JSONException {
        put(r2, new JSONArray(r3));
        return this;
    }

    public JSONArray put(int r2, double r3) throws JSONException {
        put(r2, new Double(r3));
        return this;
    }

    public JSONArray put(int r2, int r3) throws JSONException {
        put(r2, new Integer(r3));
        return this;
    }

    public JSONArray put(int r2, long r3) throws JSONException {
        put(r2, new Long(r3));
        return this;
    }

    public JSONArray put(int r2, Map<String, Object> r3) throws JSONException {
        put(r2, new JSONObject(r3));
        return this;
    }

    public JSONArray put(int r3, Object r4) throws JSONException {
        JSONObject.testValidity(r4);
        if (r3 < 0) goto L13;
        if (r3 >= length()) goto L8;
        this.myArrayList.set(r3, r4);
    L11:
        return this;
    L8:
        if (r3 == length()) goto L10;
        put(JSONObject.NULL);
        goto L8
    L10:
        put(r4);
        goto L11
    L13:
        throw new JSONException("JSONArray[" + r3 + "] not found.");
    }

    public JSONArray(String r2) throws JSONException {
        this(new JSONTokener(r2));
    }

    public JSONArray(Collection<Object> r3) {
        this.myArrayList = new ArrayList();
        if (r3 == null) goto L8;
        Iterator<Object> r32 = r3.iterator();
    L6:
        if (r32.hasNext() == false) goto L10;
        this.myArrayList.add(JSONObject.wrap(r32.next()));
        goto L6
    L10:
        return;
    }

    public JSONArray(Object r4) throws JSONException {
        this();
        if (r4.getClass().isArray() == false) goto L9;
        int r0 = Array.getLength(r4);
        int r1 = 0;
    L5:
        if (r1 >= r0) goto L7;
        put(JSONObject.wrap(Array.get(r4, r1)));
        r1 = r1 + 1;
        goto L5
    L7:
        return;
    L9:
        throw new JSONException("JSONArray initial value should be a string or collection or array.");
    }
}
