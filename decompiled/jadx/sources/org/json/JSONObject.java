package org.json;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.tkay.expressad.video.module.a.a;
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

/* JADX INFO: loaded from: classes4.dex */
public class JSONObject {
    public static final Object NULL = new Null();
    private final Map<String, Object> map;

    private static final class Null {
        private Null() {
        }

        protected final Object clone() {
            return this;
        }

        public boolean equals(Object object) {
            return object == null || object == this;
        }

        public String toString() {
            return "null";
        }
    }

    public JSONObject() {
        this.map = new HashMap();
    }

    public JSONObject(JSONObject jo, String[] names) {
        this();
        for (int i = 0; i < names.length; i++) {
            try {
                putOnce(names[i], jo.opt(names[i]));
            } catch (Exception e) {
            }
        }
    }

    public JSONObject(JSONTokener x) throws JSONException {
        this();
        if (x.nextClean() != '{') {
            throw x.syntaxError("A JSONObject text must begin with '{'");
        }
        while (true) {
            char c = x.nextClean();
            if (c == 0) {
                throw x.syntaxError("A JSONObject text must end with '}'");
            }
            if (c == '}') {
                return;
            }
            x.back();
            String key = x.nextValue().toString();
            if (x.nextClean() != ':') {
                throw x.syntaxError("Expected a ':' after a key");
            }
            putOnce(key, x.nextValue());
            char cNextClean = x.nextClean();
            if (cNextClean != ',' && cNextClean != ';') {
                if (cNextClean == '}') {
                    return;
                } else {
                    throw x.syntaxError("Expected a ',' or '}'");
                }
            } else if (x.nextClean() == '}') {
                return;
            } else {
                x.back();
            }
        }
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

    public JSONObject(Object bean) {
        this();
        populateMap(bean);
    }

    public JSONObject(Object object, String[] names) {
        this();
        Class<?> c = object.getClass();
        for (String name : names) {
            try {
                putOpt(name, c.getField(name).get(object));
            } catch (Exception e) {
            }
        }
    }

    public JSONObject(String source) throws JSONException {
        this(new JSONTokener(source));
    }

    public JSONObject(String baseName, Locale locale) throws JSONException {
        this();
        ResourceBundle bundle = ResourceBundle.getBundle(baseName, locale, Thread.currentThread().getContextClassLoader());
        Enumeration<String> keys = bundle.getKeys();
        while (keys.hasMoreElements()) {
            Object key = keys.nextElement();
            if (key != null) {
                String[] path = ((String) key).split("\\.");
                int last = path.length - 1;
                JSONObject target = this;
                for (int i = 0; i < last; i++) {
                    String segment = path[i];
                    JSONObject nextTarget = target.optJSONObject(segment);
                    if (nextTarget == null) {
                        nextTarget = new JSONObject();
                        target.put(segment, nextTarget);
                    }
                    target = nextTarget;
                }
                target.put(path[last], bundle.getString((String) key));
            }
        }
    }

    public JSONObject accumulate(String key, Object value) throws JSONException {
        testValidity(value);
        Object object = opt(key);
        if (object == null) {
            put(key, value instanceof JSONArray ? new JSONArray().put(value) : value);
        } else if (object instanceof JSONArray) {
            ((JSONArray) object).put(value);
        } else {
            put(key, new JSONArray().put(object).put(value));
        }
        return this;
    }

    public JSONObject append(String key, Object value) throws JSONException {
        testValidity(value);
        Object object = opt(key);
        if (object == null) {
            put(key, new JSONArray().put(value));
        } else if (object instanceof JSONArray) {
            put(key, ((JSONArray) object).put(value));
        } else {
            throw new JSONException("JSONObject[" + key + "] is not a JSONArray.");
        }
        return this;
    }

    public static String doubleToString(double d) {
        if (Double.isInfinite(d) || Double.isNaN(d)) {
            return "null";
        }
        String string = Double.toString(d);
        if (string.indexOf(46) > 0 && string.indexOf(101) < 0 && string.indexOf(69) < 0) {
            while (string.endsWith("0")) {
                string = string.substring(0, string.length() - 1);
            }
            if (string.endsWith(".")) {
                return string.substring(0, string.length() - 1);
            }
            return string;
        }
        return string;
    }

    public Object get(String key) throws JSONException {
        if (key == null) {
            throw new JSONException("Null key.");
        }
        Object object = opt(key);
        if (object == null) {
            throw new JSONException("JSONObject[" + quote(key) + "] not found.");
        }
        return object;
    }

    public boolean getBoolean(String key) throws JSONException {
        Object object = get(key);
        if (!object.equals(Boolean.FALSE)) {
            if ((object instanceof String) && ((String) object).equalsIgnoreCase("false")) {
                return false;
            }
            if (!object.equals(Boolean.TRUE)) {
                if ((object instanceof String) && ((String) object).equalsIgnoreCase("true")) {
                    return true;
                }
                throw new JSONException("JSONObject[" + quote(key) + "] is not a Boolean.");
            }
            return true;
        }
        return false;
    }

    public double getDouble(String key) throws JSONException {
        Object object = get(key);
        try {
            return object instanceof Number ? ((Number) object).doubleValue() : Double.parseDouble((String) object);
        } catch (Exception e) {
            throw new JSONException("JSONObject[" + quote(key) + "] is not a number.");
        }
    }

    public int getInt(String key) throws JSONException {
        Object object = get(key);
        try {
            return object instanceof Number ? ((Number) object).intValue() : Integer.parseInt((String) object);
        } catch (Exception e) {
            throw new JSONException("JSONObject[" + quote(key) + "] is not an int.");
        }
    }

    public JSONArray getJSONArray(String key) throws JSONException {
        Object object = get(key);
        if (object instanceof JSONArray) {
            return (JSONArray) object;
        }
        throw new JSONException("JSONObject[" + quote(key) + "] is not a JSONArray.");
    }

    public JSONObject getJSONObject(String key) throws JSONException {
        Object object = get(key);
        if (object instanceof JSONObject) {
            return (JSONObject) object;
        }
        throw new JSONException("JSONObject[" + quote(key) + "] is not a JSONObject.");
    }

    public long getLong(String key) throws JSONException {
        Object object = get(key);
        try {
            return object instanceof Number ? ((Number) object).longValue() : Long.parseLong((String) object);
        } catch (Exception e) {
            throw new JSONException("JSONObject[" + quote(key) + "] is not a long.");
        }
    }

    public static String[] getNames(JSONObject jo) {
        int length = jo.length();
        if (length == 0) {
            return null;
        }
        Iterator<String> iterator = jo.keys();
        String[] names = new String[length];
        int i = 0;
        while (iterator.hasNext()) {
            names[i] = iterator.next();
            i++;
        }
        return names;
    }

    public static String[] getNames(Object object) {
        if (object == null) {
            return null;
        }
        Class<?> klass = object.getClass();
        Field[] fields = klass.getFields();
        int length = fields.length;
        if (length == 0) {
            return null;
        }
        String[] names = new String[length];
        for (int i = 0; i < length; i++) {
            names[i] = fields[i].getName();
        }
        return names;
    }

    public String getString(String key) throws JSONException {
        Object object = get(key);
        if (object instanceof String) {
            return (String) object;
        }
        throw new JSONException("JSONObject[" + quote(key) + "] not a string.");
    }

    public boolean has(String key) {
        return this.map.containsKey(key);
    }

    public JSONObject increment(String key) throws JSONException {
        Object value = opt(key);
        if (value == null) {
            put(key, 1);
        } else if (value instanceof Integer) {
            put(key, ((Integer) value).intValue() + 1);
        } else if (value instanceof Long) {
            put(key, ((Long) value).longValue() + 1);
        } else if (value instanceof Double) {
            put(key, ((Double) value).doubleValue() + 1.0d);
        } else if (value instanceof Float) {
            put(key, ((Float) value).floatValue() + 1.0f);
        } else {
            throw new JSONException("Unable to increment [" + quote(key) + "].");
        }
        return this;
    }

    public boolean isNull(String key) {
        return NULL.equals(opt(key));
    }

    public Iterator<String> keys() {
        return keySet().iterator();
    }

    public Set<String> keySet() {
        return this.map.keySet();
    }

    public int length() {
        return this.map.size();
    }

    public JSONArray names() {
        JSONArray ja = new JSONArray();
        Iterator<String> keys = keys();
        while (keys.hasNext()) {
            ja.put(keys.next());
        }
        if (ja.length() == 0) {
            return null;
        }
        return ja;
    }

    public static String numberToString(Number number) throws JSONException {
        if (number == null) {
            throw new JSONException("Null pointer");
        }
        testValidity(number);
        String string = number.toString();
        if (string.indexOf(46) > 0 && string.indexOf(101) < 0 && string.indexOf(69) < 0) {
            while (string.endsWith("0")) {
                string = string.substring(0, string.length() - 1);
            }
            if (string.endsWith(".")) {
                return string.substring(0, string.length() - 1);
            }
            return string;
        }
        return string;
    }

    public Object opt(String key) {
        if (key == null) {
            return null;
        }
        return this.map.get(key);
    }

    public boolean optBoolean(String key) {
        return optBoolean(key, false);
    }

    public boolean optBoolean(String key, boolean defaultValue) {
        try {
            return getBoolean(key);
        } catch (Exception e) {
            return defaultValue;
        }
    }

    public double optDouble(String key) {
        return optDouble(key, Double.NaN);
    }

    public double optDouble(String key, double defaultValue) {
        try {
            return getDouble(key);
        } catch (Exception e) {
            return defaultValue;
        }
    }

    public int optInt(String key) {
        return optInt(key, 0);
    }

    public int optInt(String key, int defaultValue) {
        try {
            return getInt(key);
        } catch (Exception e) {
            return defaultValue;
        }
    }

    public JSONArray optJSONArray(String key) {
        Object o = opt(key);
        if (o instanceof JSONArray) {
            return (JSONArray) o;
        }
        return null;
    }

    public JSONObject optJSONObject(String key) {
        Object object = opt(key);
        if (object instanceof JSONObject) {
            return (JSONObject) object;
        }
        return null;
    }

    public long optLong(String key) {
        return optLong(key, 0L);
    }

    public long optLong(String key, long defaultValue) {
        try {
            return getLong(key);
        } catch (Exception e) {
            return defaultValue;
        }
    }

    public String optString(String key) {
        return optString(key, "");
    }

    public String optString(String key, String defaultValue) {
        Object object = opt(key);
        return NULL.equals(object) ? defaultValue : object.toString();
    }

    private void populateMap(Object bean) {
        Class<?> klass = bean.getClass();
        boolean includeSuperClass = klass.getClassLoader() != null;
        Method[] methods = includeSuperClass ? klass.getMethods() : klass.getDeclaredMethods();
        for (Method method : methods) {
            try {
                if (Modifier.isPublic(method.getModifiers())) {
                    String name = method.getName();
                    String key = "";
                    if (name.startsWith(MonitorConstants.CONNECT_TYPE_GET)) {
                        key = ("getClass".equals(name) || "getDeclaringClass".equals(name)) ? "" : name.substring(3);
                    } else if (name.startsWith("is")) {
                        key = name.substring(2);
                    }
                    if (key.length() > 0 && Character.isUpperCase(key.charAt(0)) && method.getParameterTypes().length == 0) {
                        if (key.length() == 1) {
                            key = key.toLowerCase();
                        } else if (!Character.isUpperCase(key.charAt(1))) {
                            key = key.substring(0, 1).toLowerCase() + key.substring(1);
                        }
                        Object result = method.invoke(bean, null);
                        if (result != null) {
                            this.map.put(key, wrap(result));
                        }
                    }
                }
            } catch (Exception e) {
            }
        }
    }

    public JSONObject put(String key, boolean value) throws JSONException {
        put(key, value ? Boolean.TRUE : Boolean.FALSE);
        return this;
    }

    public JSONObject put(String key, Collection<Object> value) throws JSONException {
        put(key, new JSONArray(value));
        return this;
    }

    public JSONObject put(String key, double value) throws JSONException {
        put(key, new Double(value));
        return this;
    }

    public JSONObject put(String key, int value) throws JSONException {
        put(key, new Integer(value));
        return this;
    }

    public JSONObject put(String key, long value) throws JSONException {
        put(key, new Long(value));
        return this;
    }

    public JSONObject put(String key, Map<String, Object> value) throws JSONException {
        put(key, new JSONObject(value));
        return this;
    }

    public JSONObject put(String key, Object value) throws JSONException {
        if (key == null) {
            throw new NullPointerException("Null key.");
        }
        if (value != null) {
            testValidity(value);
            this.map.put(key, value);
        } else {
            remove(key);
        }
        return this;
    }

    public JSONObject putOnce(String key, Object value) throws JSONException {
        if (key != null && value != null) {
            if (opt(key) != null) {
                throw new JSONException("Duplicate key \"" + key + "\"");
            }
            put(key, value);
        }
        return this;
    }

    public JSONObject putOpt(String key, Object value) throws JSONException {
        if (key != null && value != null) {
            put(key, value);
        }
        return this;
    }

    public static String quote(String string) {
        String string2;
        StringWriter sw = new StringWriter();
        synchronized (sw.getBuffer()) {
            try {
                try {
                    string2 = quote(string, sw).toString();
                } catch (IOException e) {
                    return "";
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return string2;
    }

    /* JADX WARN: Removed duplicated region for block: B:38:0x0080  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.io.Writer quote(java.lang.String r9, java.io.Writer r10) throws java.io.IOException {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.JSONObject.quote(java.lang.String, java.io.Writer):java.io.Writer");
    }

    public Object remove(String key) {
        return this.map.remove(key);
    }

    public boolean similar(Object other) {
        try {
            if (!(other instanceof JSONObject)) {
                return false;
            }
            Set<String> set = keySet();
            if (!set.equals(((JSONObject) other).keySet())) {
                return false;
            }
            for (String name : set) {
                Object valueThis = get(name);
                Object valueOther = ((JSONObject) other).get(name);
                if (valueThis instanceof JSONObject) {
                    if (!((JSONObject) valueThis).similar(valueOther)) {
                        return false;
                    }
                } else if (valueThis instanceof JSONArray) {
                    if (!((JSONArray) valueThis).similar(valueOther)) {
                        return false;
                    }
                } else if (!valueThis.equals(valueOther)) {
                    return false;
                }
            }
            return true;
        } catch (Throwable th) {
            return false;
        }
    }

    public static Object stringToValue(String string) {
        if (string.equals("")) {
            return string;
        }
        if (string.equalsIgnoreCase("true")) {
            return Boolean.TRUE;
        }
        if (string.equalsIgnoreCase("false")) {
            return Boolean.FALSE;
        }
        if (string.equalsIgnoreCase("null")) {
            return NULL;
        }
        char b = string.charAt(0);
        if ((b >= '0' && b <= '9') || b == '-') {
            try {
                if (string.indexOf(46) > -1 || string.indexOf(101) > -1 || string.indexOf(69) > -1) {
                    Double d = Double.valueOf(string);
                    if (!d.isInfinite() && !d.isNaN()) {
                        return d;
                    }
                } else {
                    Long myLong = new Long(string);
                    if (string.equals(myLong.toString())) {
                        if (myLong.longValue() == myLong.intValue()) {
                            return Integer.valueOf(myLong.intValue());
                        }
                        return myLong;
                    }
                }
            } catch (Exception e) {
            }
        }
        return string;
    }

    public static void testValidity(Object o) throws JSONException {
        if (o != null) {
            if (o instanceof Double) {
                if (((Double) o).isInfinite() || ((Double) o).isNaN()) {
                    throw new JSONException("JSON does not allow non-finite numbers.");
                }
            } else if (o instanceof Float) {
                if (((Float) o).isInfinite() || ((Float) o).isNaN()) {
                    throw new JSONException("JSON does not allow non-finite numbers.");
                }
            }
        }
    }

    public JSONArray toJSONArray(JSONArray names) throws JSONException {
        if (names == null || names.length() == 0) {
            return null;
        }
        JSONArray ja = new JSONArray();
        for (int i = 0; i < names.length(); i++) {
            ja.put(opt(names.getString(i)));
        }
        return ja;
    }

    public String toString() {
        try {
            return toString(0);
        } catch (Exception e) {
            return null;
        }
    }

    public String toString(int indentFactor) throws JSONException {
        String string;
        StringWriter w = new StringWriter();
        synchronized (w.getBuffer()) {
            string = write(w, indentFactor, 0).toString();
        }
        return string;
    }

    public static String valueToString(Object value) throws JSONException {
        if (value == null || value.equals(null)) {
            return "null";
        }
        if (value instanceof JSONString) {
            try {
                String jSONString = ((JSONString) value).toJSONString();
                if (jSONString instanceof String) {
                    return jSONString;
                }
                throw new JSONException("Bad value from toJSONString: " + ((Object) jSONString));
            } catch (Exception e) {
                throw new JSONException(e);
            }
        }
        if (value instanceof Number) {
            return numberToString((Number) value);
        }
        if ((value instanceof Boolean) || (value instanceof JSONObject) || (value instanceof JSONArray)) {
            return value.toString();
        }
        if (value instanceof Map) {
            Map<String, Object> map = (Map) value;
            return new JSONObject(map).toString();
        }
        if (value instanceof Collection) {
            Collection<Object> coll = (Collection) value;
            return new JSONArray(coll).toString();
        }
        if (value.getClass().isArray()) {
            return new JSONArray(value).toString();
        }
        return quote(value.toString());
    }

    public static Object wrap(Object object) {
        try {
            if (object == null) {
                return NULL;
            }
            if (!(object instanceof JSONObject) && !(object instanceof JSONArray) && !NULL.equals(object) && !(object instanceof JSONString) && !(object instanceof Byte) && !(object instanceof Character) && !(object instanceof Short) && !(object instanceof Integer) && !(object instanceof Long) && !(object instanceof Boolean) && !(object instanceof Float) && !(object instanceof Double) && !(object instanceof String)) {
                if (object instanceof Collection) {
                    Collection<Object> coll = (Collection) object;
                    return new JSONArray(coll);
                }
                if (object.getClass().isArray()) {
                    return new JSONArray(object);
                }
                if (object instanceof Map) {
                    Map<String, Object> map = (Map) object;
                    return new JSONObject(map);
                }
                Package objectPackage = object.getClass().getPackage();
                String objectPackageName = objectPackage != null ? objectPackage.getName() : "";
                if (!objectPackageName.startsWith("java.") && !objectPackageName.startsWith("javax.") && object.getClass().getClassLoader() != null) {
                    return new JSONObject(object);
                }
                return object.toString();
            }
            return object;
        } catch (Exception e) {
            return null;
        }
    }

    public Writer write(Writer writer) throws JSONException {
        return write(writer, 0, 0);
    }

    static final Writer writeValue(Writer writer, Object value, int indentFactor, int indent) throws JSONException, IOException {
        if (value == null || value.equals(null)) {
            writer.write("null");
        } else if (value instanceof JSONObject) {
            ((JSONObject) value).write(writer, indentFactor, indent);
        } else if (value instanceof JSONArray) {
            ((JSONArray) value).write(writer, indentFactor, indent);
        } else if (value instanceof Map) {
            Map<String, Object> map = (Map) value;
            new JSONObject(map).write(writer, indentFactor, indent);
        } else if (value instanceof Collection) {
            Collection<Object> coll = (Collection) value;
            new JSONArray(coll).write(writer, indentFactor, indent);
        } else if (value.getClass().isArray()) {
            new JSONArray(value).write(writer, indentFactor, indent);
        } else if (value instanceof Number) {
            writer.write(numberToString((Number) value));
        } else if (value instanceof Boolean) {
            writer.write(value.toString());
        } else if (value instanceof JSONString) {
            try {
                Object o = ((JSONString) value).toJSONString();
                writer.write(o != null ? o.toString() : quote(value.toString()));
            } catch (Exception e) {
                throw new JSONException(e);
            }
        } else {
            quote(value.toString(), writer);
        }
        return writer;
    }

    static final void indent(Writer writer, int indent) throws IOException {
        for (int i = 0; i < indent; i++) {
            writer.write(32);
        }
    }

    Writer write(Writer writer, int indentFactor, int indent) throws JSONException {
        boolean commanate = false;
        try {
            int length = length();
            Iterator<String> keys = keys();
            writer.write(a.N);
            if (length == 1) {
                Object key = keys.next();
                writer.write(quote(key.toString()));
                writer.write(58);
                if (indentFactor > 0) {
                    writer.write(32);
                }
                writeValue(writer, this.map.get(key), indentFactor, indent);
            } else if (length != 0) {
                int newindent = indent + indentFactor;
                while (keys.hasNext()) {
                    Object key2 = keys.next();
                    if (commanate) {
                        writer.write(44);
                    }
                    if (indentFactor > 0) {
                        writer.write(10);
                    }
                    indent(writer, newindent);
                    writer.write(quote(key2.toString()));
                    writer.write(58);
                    if (indentFactor > 0) {
                        writer.write(32);
                    }
                    writeValue(writer, this.map.get(key2), indentFactor, newindent);
                    commanate = true;
                }
                if (indentFactor > 0) {
                    writer.write(10);
                }
                indent(writer, indent);
            }
            writer.write(125);
            return writer;
        } catch (IOException exception) {
            throw new JSONException(exception);
        }
    }
}
