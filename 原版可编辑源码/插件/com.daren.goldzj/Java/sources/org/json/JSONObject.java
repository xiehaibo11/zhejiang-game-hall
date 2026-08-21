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
    public static final Object NULL = new Null();
    private final Map<String, Object> map;

    private static final class Null {
        private Null() {
        }

        protected final Object clone() {
            return this;
        }

        public boolean equals(Object obj) {
            return obj == null || obj == this;
        }

        public String toString() {
            return "null";
        }
    }

    public JSONObject() {
        this.map = new HashMap();
    }

    public static String doubleToString(double d) {
        if (Double.isInfinite(d) || Double.isNaN(d)) {
            return "null";
        }
        String string = Double.toString(d);
        if (string.indexOf(46) <= 0 || string.indexOf(101) >= 0 || string.indexOf(69) >= 0) {
            return string;
        }
        while (string.endsWith("0")) {
            string = string.substring(0, string.length() - 1);
        }
        return string.endsWith(".") ? string.substring(0, string.length() - 1) : string;
    }

    public static String[] getNames(JSONObject jSONObject) {
        int length = jSONObject.length();
        if (length == 0) {
            return null;
        }
        Iterator<String> itKeys = jSONObject.keys();
        String[] strArr = new String[length];
        int i = 0;
        while (itKeys.hasNext()) {
            strArr[i] = itKeys.next();
            i++;
        }
        return strArr;
    }

    static final void indent(Writer writer, int i) throws IOException {
        for (int i2 = 0; i2 < i; i2++) {
            writer.write(32);
        }
    }

    public static String numberToString(Number number) throws JSONException {
        if (number == null) {
            throw new JSONException("Null pointer");
        }
        testValidity(number);
        String string = number.toString();
        if (string.indexOf(46) <= 0 || string.indexOf(101) >= 0 || string.indexOf(69) >= 0) {
            return string;
        }
        while (string.endsWith("0")) {
            string = string.substring(0, string.length() - 1);
        }
        return string.endsWith(".") ? string.substring(0, string.length() - 1) : string;
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x00ad A[Catch: Exception -> 0x00b6, TRY_LEAVE, TryCatch #0 {Exception -> 0x00b6, blocks: (B:12:0x001e, B:14:0x002a, B:17:0x0038, B:19:0x0040, B:22:0x0049, B:27:0x005d, B:29:0x0063, B:31:0x006d, B:33:0x0074, B:35:0x007a, B:40:0x00a6, B:42:0x00ad, B:37:0x0080, B:39:0x008a, B:23:0x004f, B:25:0x0057), top: B:46:0x001e }] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00b6 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void populateMap(Object obj) {
        String strSubstring;
        String lowerCase;
        Object objInvoke;
        Class<?> cls = obj.getClass();
        for (Method method : cls.getClassLoader() != null ? cls.getMethods() : cls.getDeclaredMethods()) {
            try {
                if (Modifier.isPublic(method.getModifiers())) {
                    String name = method.getName();
                    String str = "";
                    if (name.startsWith("get")) {
                        if (!"getClass".equals(name) && !"getDeclaringClass".equals(name)) {
                            strSubstring = name.substring(3);
                            str = strSubstring;
                        }
                        if (str.length() <= 0 && Character.isUpperCase(str.charAt(0)) && method.getParameterTypes().length == 0) {
                            if (str.length() == 1) {
                                lowerCase = str.toLowerCase();
                            } else {
                                if (!Character.isUpperCase(str.charAt(1))) {
                                    lowerCase = str.substring(0, 1).toLowerCase() + str.substring(1);
                                }
                                objInvoke = method.invoke(obj, null);
                                if (objInvoke == null) {
                                    this.map.put(str, wrap(objInvoke));
                                }
                            }
                            str = lowerCase;
                            objInvoke = method.invoke(obj, null);
                            if (objInvoke == null) {
                            }
                        }
                    } else {
                        if (name.startsWith("is")) {
                            strSubstring = name.substring(2);
                            str = strSubstring;
                        }
                        if (str.length() <= 0) {
                        }
                    }
                }
            } catch (Exception unused) {
            }
        }
    }

    public static String quote(String str) {
        String string;
        StringWriter stringWriter = new StringWriter();
        synchronized (stringWriter.getBuffer()) {
            try {
                try {
                    string = quote(str, stringWriter).toString();
                } catch (IOException unused) {
                    return "";
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return string;
    }

    public static Object stringToValue(String str) {
        if (str.equals("")) {
            return str;
        }
        if (str.equalsIgnoreCase("true")) {
            return Boolean.TRUE;
        }
        if (str.equalsIgnoreCase("false")) {
            return Boolean.FALSE;
        }
        if (str.equalsIgnoreCase("null")) {
            return NULL;
        }
        char cCharAt = str.charAt(0);
        if ((cCharAt >= '0' && cCharAt <= '9') || cCharAt == '-') {
            try {
                if (str.indexOf(46) > -1 || str.indexOf(101) > -1 || str.indexOf(69) > -1) {
                    Double dValueOf = Double.valueOf(str);
                    if (!dValueOf.isInfinite() && !dValueOf.isNaN()) {
                        return dValueOf;
                    }
                } else {
                    Long l = new Long(str);
                    if (str.equals(l.toString())) {
                        return l.longValue() == ((long) l.intValue()) ? Integer.valueOf(l.intValue()) : l;
                    }
                }
            } catch (Exception unused) {
            }
        }
        return str;
    }

    public static void testValidity(Object obj) throws JSONException {
        if (obj != null) {
            if (obj instanceof Double) {
                Double d = (Double) obj;
                if (d.isInfinite() || d.isNaN()) {
                    throw new JSONException("JSON does not allow non-finite numbers.");
                }
                return;
            }
            if (obj instanceof Float) {
                Float f = (Float) obj;
                if (f.isInfinite() || f.isNaN()) {
                    throw new JSONException("JSON does not allow non-finite numbers.");
                }
            }
        }
    }

    public static String valueToString(Object obj) throws JSONException {
        if (obj == null || obj.equals(null)) {
            return "null";
        }
        if (!(obj instanceof JSONString)) {
            return obj instanceof Number ? numberToString((Number) obj) : ((obj instanceof Boolean) || (obj instanceof JSONObject) || (obj instanceof JSONArray)) ? obj.toString() : obj instanceof Map ? new JSONObject((Map<String, Object>) obj).toString() : obj instanceof Collection ? new JSONArray((Collection<Object>) obj).toString() : obj.getClass().isArray() ? new JSONArray(obj).toString() : quote(obj.toString());
        }
        try {
            String jSONString = ((JSONString) obj).toJSONString();
            if (jSONString instanceof String) {
                return jSONString;
            }
            throw new JSONException("Bad value from toJSONString: " + ((Object) jSONString));
        } catch (Exception e) {
            throw new JSONException(e);
        }
    }

    public static Object wrap(Object obj) {
        try {
            if (obj == null) {
                return NULL;
            }
            if (!(obj instanceof JSONObject) && !(obj instanceof JSONArray) && !NULL.equals(obj) && !(obj instanceof JSONString) && !(obj instanceof Byte) && !(obj instanceof Character) && !(obj instanceof Short) && !(obj instanceof Integer) && !(obj instanceof Long) && !(obj instanceof Boolean) && !(obj instanceof Float) && !(obj instanceof Double) && !(obj instanceof String)) {
                if (obj instanceof Collection) {
                    return new JSONArray((Collection<Object>) obj);
                }
                if (obj.getClass().isArray()) {
                    return new JSONArray(obj);
                }
                if (obj instanceof Map) {
                    return new JSONObject((Map<String, Object>) obj);
                }
                Package r0 = obj.getClass().getPackage();
                String name = r0 != null ? r0.getName() : "";
                if (!name.startsWith("java.") && !name.startsWith("javax.") && obj.getClass().getClassLoader() != null) {
                    return new JSONObject(obj);
                }
                return obj.toString();
            }
            return obj;
        } catch (Exception unused) {
            return null;
        }
    }

    static final Writer writeValue(Writer writer, Object obj, int i, int i2) throws JSONException, IOException {
        if (obj == null || obj.equals(null)) {
            writer.write("null");
        } else if (obj instanceof JSONObject) {
            ((JSONObject) obj).write(writer, i, i2);
        } else if (obj instanceof JSONArray) {
            ((JSONArray) obj).write(writer, i, i2);
        } else if (obj instanceof Map) {
            new JSONObject((Map<String, Object>) obj).write(writer, i, i2);
        } else if (obj instanceof Collection) {
            new JSONArray((Collection<Object>) obj).write(writer, i, i2);
        } else if (obj.getClass().isArray()) {
            new JSONArray(obj).write(writer, i, i2);
        } else if (obj instanceof Number) {
            writer.write(numberToString((Number) obj));
        } else if (obj instanceof Boolean) {
            writer.write(obj.toString());
        } else if (obj instanceof JSONString) {
            try {
                String jSONString = ((JSONString) obj).toJSONString();
                writer.write(jSONString != null ? jSONString.toString() : quote(obj.toString()));
            } catch (Exception e) {
                throw new JSONException(e);
            }
        } else {
            quote(obj.toString(), writer);
        }
        return writer;
    }

    public JSONObject accumulate(String str, Object obj) throws JSONException {
        testValidity(obj);
        Object objOpt = opt(str);
        if (objOpt == null) {
            if (obj instanceof JSONArray) {
                obj = new JSONArray().put(obj);
            }
            put(str, obj);
        } else if (objOpt instanceof JSONArray) {
            ((JSONArray) objOpt).put(obj);
        } else {
            put(str, new JSONArray().put(objOpt).put(obj));
        }
        return this;
    }

    public JSONObject append(String str, Object obj) throws JSONException {
        testValidity(obj);
        Object objOpt = opt(str);
        if (objOpt == null) {
            put(str, new JSONArray().put(obj));
        } else {
            if (!(objOpt instanceof JSONArray)) {
                throw new JSONException("JSONObject[" + str + "] is not a JSONArray.");
            }
            put(str, ((JSONArray) objOpt).put(obj));
        }
        return this;
    }

    public Object get(String str) throws JSONException {
        if (str == null) {
            throw new JSONException("Null key.");
        }
        Object objOpt = opt(str);
        if (objOpt != null) {
            return objOpt;
        }
        throw new JSONException("JSONObject[" + quote(str) + "] not found.");
    }

    public boolean getBoolean(String str) throws JSONException {
        Object obj = get(str);
        if (obj.equals(Boolean.FALSE)) {
            return false;
        }
        boolean z = obj instanceof String;
        if (z && ((String) obj).equalsIgnoreCase("false")) {
            return false;
        }
        if (obj.equals(Boolean.TRUE)) {
            return true;
        }
        if (z && ((String) obj).equalsIgnoreCase("true")) {
            return true;
        }
        throw new JSONException("JSONObject[" + quote(str) + "] is not a Boolean.");
    }

    public double getDouble(String str) throws JSONException {
        Object obj = get(str);
        try {
            return obj instanceof Number ? ((Number) obj).doubleValue() : Double.parseDouble((String) obj);
        } catch (Exception unused) {
            throw new JSONException("JSONObject[" + quote(str) + "] is not a number.");
        }
    }

    public int getInt(String str) throws JSONException {
        Object obj = get(str);
        try {
            return obj instanceof Number ? ((Number) obj).intValue() : Integer.parseInt((String) obj);
        } catch (Exception unused) {
            throw new JSONException("JSONObject[" + quote(str) + "] is not an int.");
        }
    }

    public JSONArray getJSONArray(String str) throws JSONException {
        Object obj = get(str);
        if (obj instanceof JSONArray) {
            return (JSONArray) obj;
        }
        throw new JSONException("JSONObject[" + quote(str) + "] is not a JSONArray.");
    }

    public JSONObject getJSONObject(String str) throws JSONException {
        Object obj = get(str);
        if (obj instanceof JSONObject) {
            return (JSONObject) obj;
        }
        throw new JSONException("JSONObject[" + quote(str) + "] is not a JSONObject.");
    }

    public long getLong(String str) throws JSONException {
        Object obj = get(str);
        try {
            return obj instanceof Number ? ((Number) obj).longValue() : Long.parseLong((String) obj);
        } catch (Exception unused) {
            throw new JSONException("JSONObject[" + quote(str) + "] is not a long.");
        }
    }

    public String getString(String str) throws JSONException {
        Object obj = get(str);
        if (obj instanceof String) {
            return (String) obj;
        }
        throw new JSONException("JSONObject[" + quote(str) + "] not a string.");
    }

    public boolean has(String str) {
        return this.map.containsKey(str);
    }

    public JSONObject increment(String str) throws JSONException {
        Object objOpt = opt(str);
        if (objOpt == null) {
            put(str, 1);
        } else if (objOpt instanceof Integer) {
            put(str, ((Integer) objOpt).intValue() + 1);
        } else if (objOpt instanceof Long) {
            put(str, ((Long) objOpt).longValue() + 1);
        } else if (objOpt instanceof Double) {
            put(str, ((Double) objOpt).doubleValue() + 1.0d);
        } else {
            if (!(objOpt instanceof Float)) {
                throw new JSONException("Unable to increment [" + quote(str) + "].");
            }
            put(str, ((Float) objOpt).floatValue() + 1.0f);
        }
        return this;
    }

    public boolean isNull(String str) {
        return NULL.equals(opt(str));
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
        JSONArray jSONArray = new JSONArray();
        Iterator<String> itKeys = keys();
        while (itKeys.hasNext()) {
            jSONArray.put(itKeys.next());
        }
        if (jSONArray.length() == 0) {
            return null;
        }
        return jSONArray;
    }

    public Object opt(String str) {
        if (str == null) {
            return null;
        }
        return this.map.get(str);
    }

    public boolean optBoolean(String str) {
        return optBoolean(str, false);
    }

    public double optDouble(String str) {
        return optDouble(str, Double.NaN);
    }

    public int optInt(String str) {
        return optInt(str, 0);
    }

    public JSONArray optJSONArray(String str) {
        Object objOpt = opt(str);
        if (objOpt instanceof JSONArray) {
            return (JSONArray) objOpt;
        }
        return null;
    }

    public JSONObject optJSONObject(String str) {
        Object objOpt = opt(str);
        if (objOpt instanceof JSONObject) {
            return (JSONObject) objOpt;
        }
        return null;
    }

    public long optLong(String str) {
        return optLong(str, 0L);
    }

    public String optString(String str) {
        return optString(str, "");
    }

    public JSONObject put(String str, boolean z) throws JSONException {
        put(str, z ? Boolean.TRUE : Boolean.FALSE);
        return this;
    }

    public JSONObject putOnce(String str, Object obj) throws JSONException {
        if (str != null && obj != null) {
            if (opt(str) != null) {
                throw new JSONException("Duplicate key \"" + str + "\"");
            }
            put(str, obj);
        }
        return this;
    }

    public JSONObject putOpt(String str, Object obj) throws JSONException {
        if (str != null && obj != null) {
            put(str, obj);
        }
        return this;
    }

    public Object remove(String str) {
        return this.map.remove(str);
    }

    public boolean similar(Object obj) {
        try {
            if (!(obj instanceof JSONObject)) {
                return false;
            }
            Set<String> setKeySet = keySet();
            if (!setKeySet.equals(((JSONObject) obj).keySet())) {
                return false;
            }
            for (String str : setKeySet) {
                Object obj2 = get(str);
                Object obj3 = ((JSONObject) obj).get(str);
                if (obj2 instanceof JSONObject) {
                    if (!((JSONObject) obj2).similar(obj3)) {
                        return false;
                    }
                } else if (obj2 instanceof JSONArray) {
                    if (!((JSONArray) obj2).similar(obj3)) {
                        return false;
                    }
                } else if (!obj2.equals(obj3)) {
                    return false;
                }
            }
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public JSONArray toJSONArray(JSONArray jSONArray) throws JSONException {
        if (jSONArray == null || jSONArray.length() == 0) {
            return null;
        }
        JSONArray jSONArray2 = new JSONArray();
        for (int i = 0; i < jSONArray.length(); i++) {
            jSONArray2.put(opt(jSONArray.getString(i)));
        }
        return jSONArray2;
    }

    public String toString() {
        try {
            return toString(0);
        } catch (Exception unused) {
            return null;
        }
    }

    public Writer write(Writer writer) throws JSONException {
        return write(writer, 0, 0);
    }

    public boolean optBoolean(String str, boolean z) {
        try {
            return getBoolean(str);
        } catch (Exception unused) {
            return z;
        }
    }

    public double optDouble(String str, double d) {
        try {
            return getDouble(str);
        } catch (Exception unused) {
            return d;
        }
    }

    public int optInt(String str, int i) {
        try {
            return getInt(str);
        } catch (Exception unused) {
            return i;
        }
    }

    public long optLong(String str, long j) {
        try {
            return getLong(str);
        } catch (Exception unused) {
            return j;
        }
    }

    public String optString(String str, String str2) {
        Object objOpt = opt(str);
        return NULL.equals(objOpt) ? str2 : objOpt.toString();
    }

    public JSONObject put(String str, Collection<Object> collection) throws JSONException {
        put(str, new JSONArray(collection));
        return this;
    }

    public String toString(int i) throws JSONException {
        String string;
        StringWriter stringWriter = new StringWriter();
        synchronized (stringWriter.getBuffer()) {
            string = write(stringWriter, i, 0).toString();
        }
        return string;
    }

    Writer write(Writer writer, int i, int i2) throws JSONException {
        try {
            int length = length();
            Iterator<String> itKeys = keys();
            writer.write(123);
            if (length == 1) {
                String next = itKeys.next();
                writer.write(quote(next.toString()));
                writer.write(58);
                if (i > 0) {
                    writer.write(32);
                }
                writeValue(writer, this.map.get(next), i, i2);
            } else if (length != 0) {
                int i3 = i2 + i;
                boolean z = false;
                while (itKeys.hasNext()) {
                    String next2 = itKeys.next();
                    if (z) {
                        writer.write(44);
                    }
                    if (i > 0) {
                        writer.write(10);
                    }
                    indent(writer, i3);
                    writer.write(quote(next2.toString()));
                    writer.write(58);
                    if (i > 0) {
                        writer.write(32);
                    }
                    writeValue(writer, this.map.get(next2), i, i3);
                    z = true;
                }
                if (i > 0) {
                    writer.write(10);
                }
                indent(writer, i2);
            }
            writer.write(125);
            return writer;
        } catch (IOException e) {
            throw new JSONException(e);
        }
    }

    public JSONObject(JSONObject jSONObject, String[] strArr) {
        this();
        for (int i = 0; i < strArr.length; i++) {
            try {
                putOnce(strArr[i], jSONObject.opt(strArr[i]));
            } catch (Exception unused) {
            }
        }
    }

    public JSONObject put(String str, double d) throws JSONException {
        put(str, new Double(d));
        return this;
    }

    public JSONObject put(String str, int i) throws JSONException {
        put(str, new Integer(i));
        return this;
    }

    public JSONObject put(String str, long j) throws JSONException {
        put(str, new Long(j));
        return this;
    }

    public JSONObject put(String str, Map<String, Object> map) throws JSONException {
        put(str, new JSONObject(map));
        return this;
    }

    public JSONObject(JSONTokener jSONTokener) throws JSONException {
        this();
        if (jSONTokener.nextClean() != '{') {
            throw jSONTokener.syntaxError("A JSONObject text must begin with '{'");
        }
        while (true) {
            char cNextClean = jSONTokener.nextClean();
            if (cNextClean == 0) {
                throw jSONTokener.syntaxError("A JSONObject text must end with '}'");
            }
            if (cNextClean == '}') {
                return;
            }
            jSONTokener.back();
            String string = jSONTokener.nextValue().toString();
            if (jSONTokener.nextClean() == ':') {
                putOnce(string, jSONTokener.nextValue());
                char cNextClean2 = jSONTokener.nextClean();
                if (cNextClean2 != ',' && cNextClean2 != ';') {
                    if (cNextClean2 != '}') {
                        throw jSONTokener.syntaxError("Expected a ',' or '}'");
                    }
                    return;
                } else if (jSONTokener.nextClean() == '}') {
                    return;
                } else {
                    jSONTokener.back();
                }
            } else {
                throw jSONTokener.syntaxError("Expected a ':' after a key");
            }
        }
    }

    public JSONObject put(String str, Object obj) throws JSONException {
        if (str == null) {
            throw new NullPointerException("Null key.");
        }
        if (obj != null) {
            testValidity(obj);
            this.map.put(str, obj);
        } else {
            remove(str);
        }
        return this;
    }

    public static String[] getNames(Object obj) {
        Field[] fields;
        int length;
        if (obj == null || (length = (fields = obj.getClass().getFields()).length) == 0) {
            return null;
        }
        String[] strArr = new String[length];
        for (int i = 0; i < length; i++) {
            strArr[i] = fields[i].getName();
        }
        return strArr;
    }

    /* JADX WARN: Removed duplicated region for block: B:38:0x007f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Writer quote(String str, Writer writer) throws IOException {
        if (str != null && str.length() != 0) {
            int length = str.length();
            writer.write(34);
            int i = 0;
            char c = 0;
            while (i < length) {
                char cCharAt = str.charAt(i);
                if (cCharAt == '\f') {
                    writer.write("\\f");
                } else if (cCharAt == '\r') {
                    writer.write("\\r");
                } else if (cCharAt == '\"') {
                    writer.write(92);
                    writer.write(cCharAt);
                } else if (cCharAt == '/') {
                    if (c == '<') {
                        writer.write(92);
                    }
                    writer.write(cCharAt);
                } else if (cCharAt != '\\') {
                    switch (cCharAt) {
                        case '\b':
                            writer.write("\\b");
                            break;
                        case '\t':
                            writer.write("\\t");
                            break;
                        case '\n':
                            writer.write("\\n");
                            break;
                        default:
                            if (cCharAt >= ' ' && ((cCharAt < 128 || cCharAt >= 160) && (cCharAt < 8192 || cCharAt >= 8448))) {
                                writer.write(cCharAt);
                            } else {
                                writer.write("\\u");
                                String hexString = Integer.toHexString(cCharAt);
                                writer.write("0000", 0, 4 - hexString.length());
                                writer.write(hexString);
                            }
                            break;
                    }
                }
                i++;
                c = cCharAt;
            }
            writer.write(34);
            return writer;
        }
        writer.write("\"\"");
        return writer;
    }

    public JSONObject(Map<String, Object> map) {
        this.map = new HashMap();
        if (map != null) {
            for (Map.Entry<String, Object> entry : map.entrySet()) {
                Object value = entry.getValue();
                if (value != null) {
                    this.map.put(entry.getKey(), wrap(value));
                }
            }
        }
    }

    public JSONObject(Object obj) {
        this();
        populateMap(obj);
    }

    public JSONObject(Object obj, String[] strArr) {
        this();
        Class<?> cls = obj.getClass();
        for (String str : strArr) {
            try {
                putOpt(str, cls.getField(str).get(obj));
            } catch (Exception unused) {
            }
        }
    }

    public JSONObject(String str) throws JSONException {
        this(new JSONTokener(str));
    }

    public JSONObject(String str, Locale locale) throws JSONException {
        this();
        ResourceBundle bundle = ResourceBundle.getBundle(str, locale, Thread.currentThread().getContextClassLoader());
        Enumeration<String> keys = bundle.getKeys();
        while (keys.hasMoreElements()) {
            String strNextElement = keys.nextElement();
            if (strNextElement != null) {
                String str2 = strNextElement;
                String[] strArrSplit = str2.split("\\.");
                int length = strArrSplit.length - 1;
                JSONObject jSONObject = this;
                for (int i = 0; i < length; i++) {
                    String str3 = strArrSplit[i];
                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(str3);
                    if (jSONObjectOptJSONObject == null) {
                        jSONObjectOptJSONObject = new JSONObject();
                        jSONObject.put(str3, jSONObjectOptJSONObject);
                    }
                    jSONObject = jSONObjectOptJSONObject;
                }
                jSONObject.put(strArrSplit[length], bundle.getString(str2));
            }
        }
    }
}
