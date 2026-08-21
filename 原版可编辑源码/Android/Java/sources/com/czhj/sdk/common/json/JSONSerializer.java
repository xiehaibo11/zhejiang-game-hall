package com.czhj.sdk.common.json;

import android.text.TextUtils;
import com.czhj.sdk.logger.SigmobLog;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Array;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class JSONSerializer {
    private static Pattern linePattern = Pattern.compile("_(\\w)");

    public static String Serialize(Object obj) throws CyclicObjectException {
        return Serialize(obj, new HashMap(), null, false, false);
    }

    public static String Serialize(Object obj, String str) throws CyclicObjectException {
        return Serialize(obj, new HashMap(), str, false, false);
    }

    public static String Serialize(Object obj, String str, boolean z) throws CyclicObjectException {
        return Serialize(obj, new HashMap(), str, z, false);
    }

    public static String Serialize(Object obj, String str, boolean z, boolean z2) throws CyclicObjectException {
        return Serialize(obj, new HashMap(), str, z, z2);
    }

    private static String Serialize(Object obj, HashMap<Integer, Object> map, String str, boolean z, boolean z2) throws CyclicObjectException {
        if (obj == null) {
            return "null";
        }
        String strSerializePrimitive = null;
        Class<?> cls = obj.getClass();
        if (obj instanceof String) {
            strSerializePrimitive = SerializeString(((String) obj).replace("\"", "'"));
        } else if (cls.isPrimitive() || cls == Boolean.class || cls == Short.class || cls == Integer.class || cls == Long.class || cls == Float.class || cls == Double.class || cls == Byte.class || cls == Character.class) {
            strSerializePrimitive = SerializePrimitive(obj);
        } else if (!z2 && map.get(Integer.valueOf(obj.hashCode())) != null) {
            return "null";
        }
        map.put(Integer.valueOf(obj.hashCode()), obj);
        if (TextUtils.isEmpty(strSerializePrimitive)) {
            if (obj instanceof List) {
                List list = (List) obj;
                strSerializePrimitive = SerializeArray(list.toArray(new Object[list.size()]), map, z, z2);
            } else {
                strSerializePrimitive = obj instanceof Map ? SerializeMap((Map) obj, map, z, z2) : cls.isArray() ? SerializeArray(obj, map, z, z2) : SerializeObject(obj, map, z, z2);
            }
        }
        if (TextUtils.isEmpty(str)) {
            return strSerializePrimitive;
        }
        StringBuilder sb = new StringBuilder("{");
        if (z) {
            str = lineToHump(str);
        }
        sb.append(SerializeString(str));
        sb.append(':');
        sb.append(strSerializePrimitive);
        sb.append('}');
        return sb.toString();
    }

    private static String SerializeArray(Object obj, HashMap<Integer, Object> map, boolean z, boolean z2) {
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        int length = Array.getLength(obj);
        for (int i = 0; i < length; i++) {
            sb.append(Serialize(Array.get(obj, i), map, null, z, z2));
            if (i < length - 1) {
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
        }
        sb.append("]");
        return sb.toString();
    }

    private static String SerializeMap(Map map, HashMap<Integer, Object> map2, boolean z, boolean z2) {
        StringBuilder sb = new StringBuilder();
        sb.append("{");
        boolean z3 = false;
        for (Map.Entry entry : map.entrySet()) {
            String string = entry.getKey().toString();
            Object value = entry.getValue();
            if (z3) {
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
            String strSerializeString = SerializeString(string);
            if (z) {
                strSerializeString = lineToHump(strSerializeString);
            }
            sb.append(strSerializeString);
            sb.append(Constants.COLON_SEPARATOR);
            sb.append(Serialize(value, map2, null, z, z2));
            z3 = true;
        }
        sb.append("}");
        return sb.toString();
    }

    private static String SerializeObject(Object obj, HashMap<Integer, Object> map, boolean z, boolean z2) {
        StringBuilder sb = new StringBuilder();
        sb.append("{");
        boolean z3 = false;
        for (Field field : obj.getClass().getDeclaredFields()) {
            field.setAccessible(true);
            try {
                Object obj2 = field.get(obj);
                String name = field.getName();
                boolean zIsStatic = Modifier.isStatic(field.getModifiers());
                boolean zIsAnnotationPresent = field.isAnnotationPresent(Transient.class);
                if (!name.startsWith("this$") && !zIsStatic && (obj2 == null || !zIsAnnotationPresent)) {
                    if (z3) {
                        sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    }
                    String strSerializeString = SerializeString(name);
                    if (z) {
                        strSerializeString = lineToHump(strSerializeString);
                    }
                    sb.append(strSerializeString);
                    sb.append(Constants.COLON_SEPARATOR);
                    sb.append(Serialize(obj2, map, null, z, z2));
                    z3 = true;
                }
            } catch (Throwable th) {
                SigmobLog.e("json seriallize error", th);
            }
        }
        sb.append("}");
        return sb.toString();
    }

    private static String SerializePrimitive(Object obj) {
        return obj.toString();
    }

    private static String SerializeString(String str) {
        return "\"" + str + "\"";
    }

    private static String lineToHump(String str) {
        if (!linePattern.matcher(str).find()) {
            return str;
        }
        Matcher matcher = linePattern.matcher(str.toLowerCase());
        StringBuffer stringBuffer = new StringBuffer();
        while (matcher.find()) {
            matcher.appendReplacement(stringBuffer, matcher.group(1).toUpperCase());
        }
        matcher.appendTail(stringBuffer);
        return stringBuffer.toString();
    }
}
