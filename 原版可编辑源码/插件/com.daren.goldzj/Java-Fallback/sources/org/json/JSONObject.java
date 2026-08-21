package org.json;

import java.io.IOException;
import java.io.StringWriter;
import java.io.Writer;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Collection;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.ResourceBundle;
import java.util.Set;

public class JSONObject {
    public static final Object NULL = null;
    private final Map<String, Object> map;

    static class 1 {
    }

    private static final class Null {
        private Null() {
        }

        protected final Object clone() {
            return this;
        }

        public boolean equals(Object r1) {
            if (r1 == null) goto L6;
            if (r1 == this) goto L6;
            return false;
        L6:
            return true;
        }

        public String toString() {
            return "null";
        }

        Null(1 r1) {
            this();
        }
    }

    static {
        NULL = new Null(null);
    }

    public JSONObject() {
        this.map = new HashMap();
    }

    public static String doubleToString(double r1) {
        if (Double.isInfinite(r1) == false) goto L5;
        return "null";
    L5:
        if (Double.isNaN(r1) == true) goto L27;
        String r12 = Double.toString(r1);
        if (r12.indexOf(46) > 0) goto L10;
        return r12;
    L10:
        if (r12.indexOf(101) < 0) goto L12;
        return r12;
    L12:
        if (r12.indexOf(69) < 0) goto L14;
        return r12;
    L14:
        if (r12.endsWith("0") == false) goto L17;
        r12 = r12.substring(0, r12.length() - 1);
        goto L14
    L17:
        if (r12.endsWith(".") == true) goto L19;
        return r12;
    L19:
        return r12.substring(0, r12.length() - 1);
    L27:
        return "null";
    }

    public static String[] getNames(JSONObject r3) {
        int r0 = r3.length();
        if (r0 != 0) goto L6;
        return null;
    L6:
        Iterator<String> r32 = r3.keys();
        String[] r02 = new String[r0];
        int r1 = 0;
    L8:
        if (r32.hasNext() == false) goto L10;
        r02[r1] = r32.next();
        r1 = r1 + 1;
        goto L8
    L10:
        return r02;
    }

    static final void indent(Writer r2, int r3) throws IOException {
        int r0 = 0;
    L3:
        if (r0 >= r3) goto L5;
        r2.write(32);
        r0 = r0 + 1;
        goto L3
    }

    public static String numberToString(Number r2) throws JSONException {
        if (r2 == null) goto L17;
        testValidity(r2);
        String r22 = r2.toString();
        if (r22.indexOf(46) > 0) goto L6;
        return r22;
    L6:
        if (r22.indexOf(101) < 0) goto L8;
        return r22;
    L8:
        if (r22.indexOf(69) < 0) goto L10;
        return r22;
    L10:
        if (r22.endsWith("0") == false) goto L13;
        r22 = r22.substring(0, r22.length() - 1);
        goto L10
    L13:
        if (r22.endsWith(".") == true) goto L15;
        return r22;
    L15:
        return r22.substring(0, r22.length() - 1);
    L17:
        throw new JSONException("Null pointer");
    }

    private void populateMap(Object r9) {
        Class<?> r0 = r9.getClass();
        if (r0.getClassLoader() == null) goto L5;
        boolean r1 = true;
    L6:
        if (r1 == false) goto L8;
        Method[] r02 = r0.getMethods();
    L9:
        int r12 = 0;
    L11:
        if (r12 >= r02.length) goto L44;
        Method r4 = r02[r12];     // Catch: Exception -> L45
        if (Modifier.isPublic(r4.getModifiers()) == false) goto L43;
        String r5 = r4.getName();     // Catch: Exception -> L45
        String r7 = "";
        if (r5.startsWith("get") == false) goto L24;
        if ("getClass".equals(r5) == true) goto L28;
        if ("getDeclaringClass".equals(r5) == true) goto L28;
        String r52 = r5.substring(3);     // Catch: Exception -> L45
    L26:
        r7 = r52;
    L28:
        if (r7.length() <= 0) goto L43;
        if (Character.isUpperCase(r7.charAt(0)) == false) goto L43;
        if (r4.getParameterTypes().length != 0) goto L43;
        if (r7.length() != 1) goto L38;
        String r53 = r7.toLowerCase();     // Catch: Exception -> L45
    L36:
        r7 = r53;
    L40:
        Object r42 = r4.invoke(r9, null);     // Catch: Exception -> L45
        if (r42 == null) goto L43;
        this.map.put(r7, wrap(r42));     // Catch: Exception -> L45
        goto L43
    L38:
        if (Character.isUpperCase(r7.charAt(1)) == true) goto L40;
        r53 = r7.substring(0, 1).toLowerCase() + r7.substring(1);     // Catch: Exception -> L45
        goto L36
    L24:
        if (r5.startsWith("is") == false) goto L28;
        r52 = r5.substring(2);     // Catch: Exception -> L45
    L43:
        r12 = r12 + 1;
        goto L11
    L44:
        return;
    L8:
        r02 = r0.getDeclaredMethods();
        goto L9
    L5:
        r1 = false;
        goto L6
    }

    public static String quote(String r2) {
        StringWriter r0 = new StringWriter();
        StringBuffer r1 = r0.getBuffer();
        monitor-enter(r1);
        String r22 = quote(r2, r0).toString();     // Catch: Throwable -> L7 IOException -> L9
        monitor-exit(r1);     // Catch: Throwable -> L7
        return r22;
    L7:
        th = move-exception;
        throw th;
    L10:
        return "";
    }

    public static Object stringToValue(String r6) {
        if (r6.equals("") == false) goto L6;
        return r6;
    L6:
        if (r6.equalsIgnoreCase("true") == false) goto L10;
        return Boolean.TRUE;
    L10:
        if (r6.equalsIgnoreCase("false") == false) goto L14;
        return Boolean.FALSE;
    L14:
        if (r6.equalsIgnoreCase("null") == true) goto L16;
        char r0 = r6.charAt(0);
        if (r0 < '0') goto L22;
        if (r0 > '9') goto L22;
    L45:
        if (r6.indexOf(46) <= (-1)) goto L27;
    L38:
        Double r02 = Double.valueOf(r6);     // Catch: Exception -> L44
        if (r02.isInfinite() == true) goto L43;
        if (r02.isNaN() == true) goto L43;
        return r02;
    L27:
        if (r6.indexOf(101) > (-1)) goto L38;
        if (r6.indexOf(69) > (-1)) goto L38;
        Long r03 = new Long(r6);     // Catch: Exception -> L44
        if (r6.equals(r03.toString()) == false) goto L43;
        if (r03.longValue() == r03.intValue()) goto L36;
        return r03;
    L36:
        return Integer.valueOf(r03.intValue());
    L43:
        return r6;
    L22:
        if (r0 != '-') goto L43;
    L16:
        return NULL;
    }

    public static void testValidity(Object r2) throws JSONException {
        if (r2 != null) goto L4;
        return;
    L4:
        if ((r2 instanceof Double) == false) goto L13;
        Double r22 = (Double) r2;
        if (r22.isInfinite() == true) goto L11;
        if (r22.isNaN() == true) goto L11;
        return;
    L11:
        throw new JSONException("JSON does not allow non-finite numbers.");
    L13:
        if ((r2 instanceof Float) == false) goto L22;
        Float r23 = (Float) r2;
        if (r23.isInfinite() == true) goto L20;
        if (r23.isNaN() == true) goto L20;
        return;
    L20:
        throw new JSONException("JSON does not allow non-finite numbers.");
    }

    public static String valueToString(Object r3) throws JSONException {
        if (r3 != null) goto L4;
        return "null";
    L4:
        if (r3.equals(null) == false) goto L7;
        return "null";
    L7:
        if ((r3 instanceof JSONString) == false) goto L18;
        String r32 = ((JSONString) r3).toJSONString();     // Catch: Exception -> L14
        if ((r32 instanceof String) == false) goto L13;
        return r32;
    L13:
        throw new JSONException("Bad value from toJSONString: " + r32);
    L14:
        e = move-exception;
        throw new JSONException(e);
    L18:
        if ((r3 instanceof Number) == false) goto L22;
        return numberToString((Number) r3);
    L22:
        if ((r3 instanceof Boolean) == true) goto L43;
        if ((r3 instanceof JSONObject) == true) goto L43;
        if ((r3 instanceof JSONArray) == true) goto L43;
        if ((r3 instanceof Map) == false) goto L33;
        return new JSONObject((Map) r3).toString();
    L33:
        if ((r3 instanceof Collection) == false) goto L37;
        return new JSONArray((Collection) r3).toString();
    L37:
        if (r3.getClass().isArray() == false) goto L41;
        return new JSONArray(r3).toString();
    L41:
        return quote(r3.toString());
    L43:
        return r3.toString();
    }

    public static Object wrap(Object r2) {
        if (r2 != null) goto L6;
        return NULL;
    L6:
        if ((r2 instanceof JSONObject) == false) goto L8;
        return r2;
    L8:
        if ((r2 instanceof JSONArray) == false) goto L10;
        return r2;
    L10:
        if (NULL.equals(r2) == false) goto L12;
        return r2;
    L12:
        if ((r2 instanceof JSONString) == false) goto L14;
        return r2;
    L14:
        if ((r2 instanceof Byte) == false) goto L16;
        return r2;
    L16:
        if ((r2 instanceof Character) == false) goto L18;
        return r2;
    L18:
        if ((r2 instanceof Short) == false) goto L20;
        return r2;
    L20:
        if ((r2 instanceof Integer) == false) goto L22;
        return r2;
    L22:
        if ((r2 instanceof Long) == false) goto L24;
        return r2;
    L24:
        if ((r2 instanceof Boolean) == false) goto L26;
        return r2;
    L26:
        if ((r2 instanceof Float) == false) goto L28;
        return r2;
    L28:
        if ((r2 instanceof Double) == false) goto L30;
        return r2;
    L30:
        if ((r2 instanceof String) == false) goto L33;
        return r2;
    L33:
        if ((r2 instanceof Collection) == false) goto L37;
        return new JSONArray((Collection) r2);
    L37:
        if (r2.getClass().isArray() == false) goto L41;
        return new JSONArray(r2);
    L41:
        if ((r2 instanceof Map) == true) goto L43;
        Package r0 = r2.getClass().getPackage();     // Catch: Exception -> L60
        if (r0 == null) goto L48;
        String r02 = r0.getName();     // Catch: Exception -> L60
    L50:
        if (r02.startsWith("java.") == true) goto L59;
        if (r02.startsWith("javax.") == true) goto L59;
        if (r2.getClass().getClassLoader() == null) goto L59;
        return new JSONObject(r2);
    L59:
        return r2.toString();
    L48:
        r02 = "";
        goto L50
    L43:
        return new JSONObject((Map) r2);
    L60:
        return null;
    }

    static final Writer writeValue(Writer r1, Object r2, int r3, int r4) throws JSONException, IOException {
        if (r2 != null) goto L4;
    L38:
        r1.write("null");
    L39:
        return r1;
    L4:
        if (r2.equals(null) == true) goto L38;
        if ((r2 instanceof JSONObject) == false) goto L10;
        ((JSONObject) r2).write(r1, r3, r4);
        goto L39
    L10:
        if ((r2 instanceof JSONArray) == false) goto L13;
        ((JSONArray) r2).write(r1, r3, r4);
        goto L39
    L13:
        if ((r2 instanceof Map) == false) goto L16;
        new JSONObject((Map) r2).write(r1, r3, r4);
        goto L39
    L16:
        if ((r2 instanceof Collection) == false) goto L19;
        new JSONArray((Collection) r2).write(r1, r3, r4);
        goto L39
    L19:
        if (r2.getClass().isArray() == false) goto L22;
        new JSONArray(r2).write(r1, r3, r4);
        goto L39
    L22:
        if ((r2 instanceof Number) == false) goto L25;
        r1.write(numberToString((Number) r2));
        goto L39
    L25:
        if ((r2 instanceof Boolean) == false) goto L28;
        r1.write(r2.toString());
        goto L39
    L28:
        if ((r2 instanceof JSONString) == true) goto L40;
        quote(r2.toString(), r1);
        goto L39
    L40:
        String r32 = ((JSONString) r2).toJSONString();     // Catch: Exception -> L34
        if (r32 == null) goto L32;
        String r22 = r32.toString();
    L33:
        r1.write(r22);
        goto L39
    L32:
        r22 = quote(r2.toString());
    L34:
        e = move-exception;
        throw new JSONException(e);
    }

    public JSONObject accumulate(String r3, Object r4) throws JSONException {
        testValidity(r4);
        Object r0 = opt(r3);
        if (r0 != null) goto L9;
        if ((r4 instanceof JSONArray) == false) goto L7;
        r4 = new JSONArray().put(r4);
    L7:
        put(r3, r4);
    L12:
        return this;
    L9:
        if ((r0 instanceof JSONArray) == false) goto L11;
        ((JSONArray) r0).put(r4);
        goto L12
    L11:
        put(r3, new JSONArray().put(r0).put(r4));
        goto L12
    }

    public JSONObject append(String r3, Object r4) throws JSONException {
        testValidity(r4);
        Object r0 = opt(r3);
        if (r0 != null) goto L6;
        put(r3, new JSONArray().put(r4));
    L8:
        return this;
    L6:
        if ((r0 instanceof JSONArray) == false) goto L10;
        put(r3, ((JSONArray) r0).put(r4));
        goto L8
    L10:
        throw new JSONException("JSONObject[" + r3 + "] is not a JSONArray.");
    }

    public Object get(String r4) throws JSONException {
        if (r4 == null) goto L9;
        Object r0 = opt(r4);
        if (r0 == null) goto L7;
        return r0;
    L7:
        throw new JSONException("JSONObject[" + quote(r4) + "] not found.");
    L9:
        throw new JSONException("Null key.");
    }

    public boolean getBoolean(String r5) throws JSONException {
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
        throw new JSONException("JSONObject[" + quote(r5) + "] is not a Boolean.");
    L17:
        return true;
    L19:
        return false;
    }

    public double getDouble(String r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof Number) == false) goto L7;
        return ((Number) r0).doubleValue();
    L7:
        return Double.parseDouble((String) r0);
    L9:
        throw new JSONException("JSONObject[" + quote(r4) + "] is not a number.");
    }

    public int getInt(String r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof Number) == false) goto L7;
        return ((Number) r0).intValue();
    L7:
        return Integer.parseInt((String) r0);
    L9:
        throw new JSONException("JSONObject[" + quote(r4) + "] is not an int.");
    }

    public JSONArray getJSONArray(String r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof JSONArray) == false) goto L7;
        return (JSONArray) r0;
    L7:
        throw new JSONException("JSONObject[" + quote(r4) + "] is not a JSONArray.");
    }

    public JSONObject getJSONObject(String r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof JSONObject) == false) goto L7;
        return (JSONObject) r0;
    L7:
        throw new JSONException("JSONObject[" + quote(r4) + "] is not a JSONObject.");
    }

    public long getLong(String r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof Number) == false) goto L7;
        return ((Number) r0).longValue();
    L7:
        return Long.parseLong((String) r0);
    L9:
        throw new JSONException("JSONObject[" + quote(r4) + "] is not a long.");
    }

    public String getString(String r4) throws JSONException {
        Object r0 = get(r4);
        if ((r0 instanceof String) == false) goto L7;
        return (String) r0;
    L7:
        throw new JSONException("JSONObject[" + quote(r4) + "] not a string.");
    }

    public boolean has(String r2) {
        return this.map.containsKey(r2);
    }

    public JSONObject increment(String r5) throws JSONException {
        Object r0 = opt(r5);
        if (r0 != null) goto L6;
        put(r5, 1);
    L17:
        return this;
    L6:
        if ((r0 instanceof Integer) == false) goto L9;
        put(r5, ((Integer) r0).intValue() + 1);
        goto L17
    L9:
        if ((r0 instanceof Long) == false) goto L12;
        put(r5, ((Long) r0).longValue() + 1);
        goto L17
    L12:
        if ((r0 instanceof Double) == false) goto L15;
        put(r5, ((Double) r0).doubleValue() + 1.0d);
        goto L17
    L15:
        if ((r0 instanceof Float) == false) goto L19;
        put(r5, ((Float) r0).floatValue() + 1.0f);
        goto L17
    L19:
        throw new JSONException("Unable to increment [" + quote(r5) + "].");
    }

    public boolean isNull(String r2) {
        return NULL.equals(opt(r2));
    }

    public Set<String> keySet() {
        return this.map.keySet();
    }

    public Iterator<String> keys() {
        return keySet().iterator();
    }

    public int length() {
        return this.map.size();
    }

    public JSONArray names() {
        JSONArray r0 = new JSONArray();
        Iterator<String> r1 = keys();
    L4:
        if (r1.hasNext() == false) goto L7;
        r0.put(r1.next());
        goto L4
    L7:
        if (r0.length() != 0) goto L11;
        return null;
    L11:
        return r0;
    }

    public Object opt(String r2) {
        if (r2 != null) goto L5;
        return null;
    L5:
        return this.map.get(r2);
    }

    public boolean optBoolean(String r2) {
        return optBoolean(r2, false);
    }

    public double optDouble(String r3) {
        return optDouble(r3, Double.NaN);
    }

    public int optInt(String r2) {
        return optInt(r2, 0);
    }

    public JSONArray optJSONArray(String r2) {
        Object r22 = opt(r2);
        if ((r22 instanceof JSONArray) == true) goto L7;
        return null;
    L7:
        return (JSONArray) r22;
    }

    public JSONObject optJSONObject(String r2) {
        Object r22 = opt(r2);
        if ((r22 instanceof JSONObject) == true) goto L7;
        return null;
    L7:
        return (JSONObject) r22;
    }

    public long optLong(String r3) {
        return optLong(r3, 0);
    }

    public String optString(String r2) {
        return optString(r2, "");
    }

    public JSONObject put(String r1, boolean r2) throws JSONException {
        if (r2 == false) goto L4;
        Boolean r22 = Boolean.TRUE;
    L5:
        put(r1, r22);
        return this;
    L4:
        r22 = Boolean.FALSE;
        goto L5
    }

    public JSONObject putOnce(String r3, Object r4) throws JSONException {
        if (r3 == null) goto L9;
        if (r4 == null) goto L9;
        if (opt(r3) != null) goto L8;
        put(r3, r4);
        goto L9
    L8:
        throw new JSONException("Duplicate key \"" + r3 + "\"");
    L9:
        return this;
    }

    public JSONObject putOpt(String r1, Object r2) throws JSONException {
        if (r1 == null) goto L5;
        if (r2 == null) goto L5;
        put(r1, r2);
    L5:
        return this;
    }

    public Object remove(String r2) {
        return this.map.remove(r2);
    }

    public boolean similar(Object r6) {
    L27:
        return false;
    L4:
        if ((r6 instanceof JSONObject) == true) goto L6;
        return false;
    L6:
        Set<String> r1 = keySet();     // Catch: Throwable -> L27
        if (r1.equals(((JSONObject) r6).keySet()) == true) goto L9;
        return false;
    L9:
        Iterator<String> r12 = r1.iterator();     // Catch: Throwable -> L27
    L10:
        if (r12.hasNext() == false) goto L25;
        String r2 = r12.next();     // Catch: Throwable -> L27
        Object r3 = get(r2);     // Catch: Throwable -> L27
        Object r22 = ((JSONObject) r6).get(r2);     // Catch: Throwable -> L27
        if ((r3 instanceof JSONObject) == true) goto L15;
        if ((r3 instanceof JSONArray) == true) goto L20;
        if (r3.equals(r22) == true) goto L10;
        return false;
    L20:
        if (((JSONArray) r3).similar(r22) == true) goto L10;
        return false;
    L15:
        if (((JSONObject) r3).similar(r22) == true) goto L10;
        return false;
    L25:
        return true;
    }

    public JSONArray toJSONArray(JSONArray r4) throws JSONException {
        if (r4 != null) goto L4;
        return null;
    L4:
        if (r4.length() == 0) goto L14;
        JSONArray r0 = new JSONArray();
        int r1 = 0;
    L8:
        if (r1 >= r4.length()) goto L10;
        r0.put(opt(r4.getString(r1)));
        r1 = r1 + 1;
        goto L8
    L10:
        return r0;
    L14:
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

    public boolean optBoolean(String r1, boolean r2) {
        return getBoolean(r1);
    L4:
        return r2;
    }

    public double optDouble(String r1, double r2) {
        return getDouble(r1);
    L4:
        return r2;
    }

    public int optInt(String r1, int r2) {
        return getInt(r1);
    L4:
        return r2;
    }

    public long optLong(String r1, long r2) {
        return getLong(r1);
    L4:
        return r2;
    }

    public String optString(String r2, String r3) {
        Object r22 = opt(r2);
        if (NULL.equals(r22) == false) goto L6;
        return r3;
    L6:
        return r22.toString();
    }

    public JSONObject put(String r2, Collection<Object> r3) throws JSONException {
        put(r2, new JSONArray(r3));
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

    Writer write(Writer r9, int r10, int r11) throws JSONException {
        int r0 = length();     // Catch: IOException -> L26
        Iterator<String> r1 = keys();     // Catch: IOException -> L26
        r9.write(123);     // Catch: IOException -> L26
        if (r0 != 1) goto L8;
        String r02 = r1.next();     // Catch: IOException -> L26
        r9.write(quote(r02.toString()));     // Catch: IOException -> L26
        r9.write(58);     // Catch: IOException -> L26
        if (r10 <= 0) goto L7;
        r9.write(32);     // Catch: IOException -> L26
    L7:
        writeValue(r9, this.map.get(r02), r10, r11);     // Catch: IOException -> L26
    L24:
        r9.write(125);     // Catch: IOException -> L26
        return r9;
    L8:
        if (r0 == 0) goto L24;
        int r03 = r11 + r10;     // Catch: IOException -> L26
        boolean r5 = false;
    L11:
        if (r1.hasNext() == false) goto L21;
        String r6 = r1.next();     // Catch: IOException -> L26
        if (r5 == false) goto L15;
        r9.write(44);     // Catch: IOException -> L26
    L15:
        if (r10 <= 0) goto L17;
        r9.write(10);     // Catch: IOException -> L26
    L17:
        indent(r9, r03);     // Catch: IOException -> L26
        r9.write(quote(r6.toString()));     // Catch: IOException -> L26
        r9.write(58);     // Catch: IOException -> L26
        if (r10 <= 0) goto L20;
        r9.write(32);     // Catch: IOException -> L26
    L20:
        writeValue(r9, this.map.get(r6), r10, r03);     // Catch: IOException -> L26
        r5 = true;
        goto L11
    L21:
        if (r10 <= 0) goto L23;
        r9.write(10);     // Catch: IOException -> L26
    L23:
        indent(r9, r11);     // Catch: IOException -> L26
    L26:
        e = move-exception;
        throw new JSONException(e);
    }

    public JSONObject(JSONObject r4, String[] r5) {
        this();
        int r0 = 0;
    L4:
        if (r0 >= r5.length) goto L7;
        putOnce(r5[r0], r4.opt(r5[r0]));     // Catch: Exception -> L8
    L6:
        r0 = r0 + 1;
        goto L4
    }

    public JSONObject put(String r2, double r3) throws JSONException {
        put(r2, new Double(r3));
        return this;
    }

    public JSONObject put(String r2, int r3) throws JSONException {
        put(r2, new Integer(r3));
        return this;
    }

    public JSONObject put(String r2, long r3) throws JSONException {
        put(r2, new Long(r3));
        return this;
    }

    public JSONObject put(String r2, Map<String, Object> r3) throws JSONException {
        put(r2, new JSONObject(r3));
        return this;
    }

    public JSONObject(JSONTokener r5) throws JSONException {
        this();
        if (r5.nextClean() != '{') goto L28;
    L4:
        char r0 = r5.nextClean();
        if (r0 == 0) goto L26;
        if (r0 == '}') goto L24;
        r5.back();
        String r02 = r5.nextValue().toString();
        if (r5.nextClean() != ':') goto L23;
        putOnce(r02, r5.nextValue());
        char r03 = r5.nextClean();
        if (r03 == ',') goto L19;
        if (r03 == ';') goto L19;
        if (r03 != '}') goto L17;
        return;
    L17:
        throw r5.syntaxError("Expected a ',' or '}'");
    L19:
        if (r5.nextClean() == '}') goto L20;
        r5.back();
        goto L4
    L20:
        return;
    L23:
        throw r5.syntaxError("Expected a ':' after a key");
    L24:
        return;
    L26:
        throw r5.syntaxError("A JSONObject text must end with '}'");
    L28:
        throw r5.syntaxError("A JSONObject text must begin with '{'");
    }

    public JSONObject put(String r2, Object r3) throws JSONException {
        if (r2 == null) goto L8;
        if (r3 == null) goto L5;
        testValidity(r3);
        this.map.put(r2, r3);
    L6:
        return this;
    L5:
        remove(r2);
        goto L6
    L8:
        throw new NullPointerException("Null key.");
    }

    public static String[] getNames(Object r4) {
        if (r4 != null) goto L5;
        return null;
    L5:
        Field[] r42 = r4.getClass().getFields();
        int r1 = r42.length;
        if (r1 != 0) goto L8;
        return null;
    L8:
        String[] r0 = new String[r1];
        int r2 = 0;
    L9:
        if (r2 >= r1) goto L11;
        r0[r2] = r42[r2].getName();
        r2 = r2 + 1;
        goto L9
    L11:
        return r0;
    }

    public static Writer quote(String r8, Writer r9) throws IOException {
        if (r8 != null) goto L4;
    L44:
        r9.write("\"\"");
        return r9;
    L4:
        if (r8.length() == 0) goto L44;
        int r0 = r8.length();
        r9.write(34);
        int r3 = 0;
        char r4 = 0;
    L7:
        if (r3 >= r0) goto L42;
        char r5 = r8.charAt(r3);
        if (r5 != '\f') goto L11;
        r9.write("\\f");
    L41:
        r3 = r3 + 1;
        r4 = r5;
        goto L7
    L11:
        if (r5 != '\r') goto L13;
        r9.write("\\r");
        goto L41
    L13:
        if (r5 != '\"') goto L15;
    L38:
        r9.write(92);
        r9.write(r5);
        goto L41
    L15:
        if (r5 == '/') goto L35;
        if (r5 == '\\') goto L38;
        switch(r5) {
            case 8: goto L33;
            case 9: goto L32;
            case 10: goto L31;
            default: goto L19;
        };
    L31:
        r9.write("\\n");
        goto L41
    L32:
        r9.write("\\t");
        goto L41
    L33:
        r9.write("\\b");
        goto L41
    L19:
        if (r5 >= ' ') goto L21;
    L30:
        r9.write("\\u");
        String r42 = Integer.toHexString(r5);
        r9.write("0000", 0, 4 - r42.length());
        r9.write(r42);
        goto L41
    L21:
        if (r5 < 128) goto L25;
        if (r5 < 160) goto L30;
    L25:
        if (r5 >= 8192) goto L27;
    L29:
        r9.write(r5);
        goto L41
    L27:
        if (r5 >= 8448) goto L29;
    L35:
        if (r4 != '<') goto L37;
        r9.write(92);
    L37:
        r9.write(r5);
        goto L41
    L42:
        r9.write(34);
        return r9;
    }

    public JSONObject(Map<String, Object> r4) {
        this.map = new HashMap();
        if (r4 == null) goto L10;
        Iterator<Map.Entry<String, Object>> r42 = r4.entrySet().iterator();
    L6:
        if (r42.hasNext() == false) goto L16;
        Map.Entry<String, Object> r0 = r42.next();
        Object r1 = r0.getValue();
        if (r1 == null) goto L6;
        this.map.put(r0.getKey(), wrap(r1));
        goto L6
    L16:
        return;
    }

    public JSONObject(Object r1) {
        this();
        populateMap(r1);
    }

    public JSONObject(Object r5, String[] r6) {
        this();
        Class<?> r0 = r5.getClass();
        int r1 = 0;
    L4:
        if (r1 >= r6.length) goto L8;
        String r2 = r6[r1];
        putOpt(r2, r0.getField(r2).get(r5));     // Catch: Exception -> L9
    L7:
        r1 = r1 + 1;
        goto L4
    }

    public JSONObject(String r2) throws JSONException {
        this(new JSONTokener(r2));
    }

    public JSONObject(String r8, Locale r9) throws JSONException {
        this();
        ResourceBundle r82 = ResourceBundle.getBundle(r8, r9, Thread.currentThread().getContextClassLoader());
        Enumeration<String> r92 = r82.getKeys();
    L4:
        if (r92.hasMoreElements() == false) goto L14;
        String r0 = r92.nextElement();
        if (r0 == null) goto L4;
        String r02 = r0;
        String[] r1 = r02.split("\\.");
        int r2 = r1.length - 1;
        int r3 = 0;
        JSONObject r4 = this;
    L8:
        if (r3 >= r2) goto L13;
        String r5 = r1[r3];
        JSONObject r6 = r4.optJSONObject(r5);
        if (r6 != null) goto L12;
        r6 = new JSONObject();
        r4.put(r5, r6);
    L12:
        r4 = r6;
        r3 = r3 + 1;
        goto L8
    L13:
        r4.put(r1[r2], r82.getString(r02));
        goto L4
    }
}
