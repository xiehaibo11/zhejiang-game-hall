package org.json;

import com.alipay.sdk.m.n.a;
import java.util.Iterator;
import kotlin.text.Typography;

/* JADX INFO: loaded from: classes4.dex */
public class XML {
    public static final Character AMP = Character.valueOf(Typography.amp);
    public static final Character APOS = '\'';
    public static final Character BANG = '!';
    public static final Character EQ = Character.valueOf(a.h);
    public static final Character GT = Character.valueOf(Typography.greater);
    public static final Character LT = Character.valueOf(Typography.less);
    public static final Character QUEST = '?';
    public static final Character QUOT = '\"';
    public static final Character SLASH = '/';

    public static String escape(String string) {
        StringBuilder sb = new StringBuilder(string.length());
        int length = string.length();
        for (int i = 0; i < length; i++) {
            char c = string.charAt(i);
            if (c == '\"') {
                sb.append("&quot;");
            } else if (c == '<') {
                sb.append("&lt;");
            } else if (c == '>') {
                sb.append("&gt;");
            } else if (c == '&') {
                sb.append("&amp;");
            } else if (c == '\'') {
                sb.append("&apos;");
            } else {
                sb.append(c);
            }
        }
        return sb.toString();
    }

    public static void noSpace(String string) throws JSONException {
        int length = string.length();
        if (length == 0) {
            throw new JSONException("Empty string.");
        }
        for (int i = 0; i < length; i++) {
            if (Character.isWhitespace(string.charAt(i))) {
                throw new JSONException("'" + string + "' contains a space character.");
            }
        }
    }

    private static boolean parse(XMLTokener x, JSONObject context, String name) throws JSONException {
        Object token = x.nextToken();
        if (token == BANG) {
            char c = x.next();
            if (c == '-') {
                if (x.next() == '-') {
                    x.skipPast("-->");
                    return false;
                }
                x.back();
            } else if (c == '[') {
                if ("CDATA".equals(x.nextToken()) && x.next() == '[') {
                    String string = x.nextCDATA();
                    if (string.length() > 0) {
                        context.accumulate("content", string);
                    }
                    return false;
                }
                throw x.syntaxError("Expected 'CDATA['");
            }
            int i = 1;
            do {
                Object token2 = x.nextMeta();
                if (token2 == null) {
                    throw x.syntaxError("Missing '>' after '<!'.");
                }
                if (token2 == LT) {
                    i++;
                } else if (token2 == GT) {
                    i--;
                }
            } while (i > 0);
            return false;
        }
        if (token == QUEST) {
            x.skipPast("?>");
            return false;
        }
        if (token == SLASH) {
            Object token3 = x.nextToken();
            if (name == null) {
                throw x.syntaxError("Mismatched close tag " + token3);
            }
            if (!token3.equals(name)) {
                throw x.syntaxError("Mismatched " + name + " and " + token3);
            }
            if (x.nextToken() == GT) {
                return true;
            }
            throw x.syntaxError("Misshaped close tag");
        }
        if (token instanceof Character) {
            throw x.syntaxError("Misshaped tag");
        }
        String tagName = (String) token;
        Object token4 = null;
        JSONObject jsonobject = new JSONObject();
        while (true) {
            if (token4 == null) {
                token4 = x.nextToken();
            }
            if (token4 instanceof String) {
                String string2 = (String) token4;
                token4 = x.nextToken();
                if (token4 == EQ) {
                    Object token5 = x.nextToken();
                    if (!(token5 instanceof String)) {
                        throw x.syntaxError("Missing value");
                    }
                    jsonobject.accumulate(string2, stringToValue((String) token5));
                    token4 = null;
                } else {
                    jsonobject.accumulate(string2, "");
                }
            } else {
                if (token4 == SLASH) {
                    if (x.nextToken() != GT) {
                        throw x.syntaxError("Misshaped tag");
                    }
                    if (jsonobject.length() > 0) {
                        context.accumulate(tagName, jsonobject);
                    } else {
                        context.accumulate(tagName, "");
                    }
                    return false;
                }
                if (token4 != GT) {
                    throw x.syntaxError("Misshaped tag");
                }
                while (true) {
                    Object token6 = x.nextContent();
                    if (token6 == null) {
                        if (tagName == null) {
                            return false;
                        }
                        throw x.syntaxError("Unclosed tag " + tagName);
                    }
                    if (token6 instanceof String) {
                        String string3 = (String) token6;
                        if (string3.length() > 0) {
                            jsonobject.accumulate("content", stringToValue(string3));
                        }
                    } else if (token6 == LT && parse(x, jsonobject, tagName)) {
                        if (jsonobject.length() == 0) {
                            context.accumulate(tagName, "");
                        } else if (jsonobject.length() == 1 && jsonobject.opt("content") != null) {
                            context.accumulate(tagName, jsonobject.opt("content"));
                        } else {
                            context.accumulate(tagName, jsonobject);
                        }
                        return false;
                    }
                }
            }
        }
    }

    public static Object stringToValue(String string) {
        if ("true".equalsIgnoreCase(string)) {
            return Boolean.TRUE;
        }
        if ("false".equalsIgnoreCase(string)) {
            return Boolean.FALSE;
        }
        if ("null".equalsIgnoreCase(string)) {
            return JSONObject.NULL;
        }
        try {
            char initial = string.charAt(0);
            if (initial == '-' || (initial >= '0' && initial <= '9')) {
                Long value = new Long(string);
                if (value.toString().equals(string)) {
                    return value;
                }
            }
        } catch (Exception e) {
            try {
                Double value2 = new Double(string);
                if (value2.toString().equals(string)) {
                    return value2;
                }
            } catch (Exception e2) {
            }
        }
        return string;
    }

    public static JSONObject toJSONObject(String string) throws JSONException {
        JSONObject jo = new JSONObject();
        XMLTokener x = new XMLTokener(string);
        while (x.more() && x.skipPast("<")) {
            parse(x, jo, null);
        }
        return jo;
    }

    public static String toString(Object object) throws JSONException {
        return toString(object, null);
    }

    public static String toString(Object object, String tagName) throws JSONException {
        StringBuilder sb = new StringBuilder();
        if (object instanceof JSONObject) {
            if (tagName != null) {
                sb.append(Typography.less);
                sb.append(tagName);
                sb.append(Typography.greater);
            }
            JSONObject jo = (JSONObject) object;
            Iterator<String> keys = jo.keys();
            while (keys.hasNext()) {
                String key = keys.next();
                Object value = jo.opt(key);
                if (value == null) {
                    value = "";
                }
                if (value instanceof String) {
                }
                if ("content".equals(key)) {
                    if (value instanceof JSONArray) {
                        JSONArray ja = (JSONArray) value;
                        int length = ja.length();
                        for (int i = 0; i < length; i++) {
                            if (i > 0) {
                                sb.append('\n');
                            }
                            sb.append(escape(ja.get(i).toString()));
                        }
                    } else {
                        sb.append(escape(value.toString()));
                    }
                } else if (value instanceof JSONArray) {
                    JSONArray ja2 = (JSONArray) value;
                    int length2 = ja2.length();
                    for (int i2 = 0; i2 < length2; i2++) {
                        Object value2 = ja2.get(i2);
                        if (value2 instanceof JSONArray) {
                            sb.append(Typography.less);
                            sb.append(key);
                            sb.append(Typography.greater);
                            sb.append(toString(value2));
                            sb.append("</");
                            sb.append(key);
                            sb.append(Typography.greater);
                        } else {
                            sb.append(toString(value2, key));
                        }
                    }
                } else if ("".equals(value)) {
                    sb.append(Typography.less);
                    sb.append(key);
                    sb.append("/>");
                } else {
                    sb.append(toString(value, key));
                }
            }
            if (tagName != null) {
                sb.append("</");
                sb.append(tagName);
                sb.append(Typography.greater);
            }
            return sb.toString();
        }
        if (object.getClass().isArray()) {
            object = new JSONArray(object);
        }
        if (object instanceof JSONArray) {
            JSONArray ja3 = (JSONArray) object;
            int length3 = ja3.length();
            for (int i3 = 0; i3 < length3; i3++) {
                sb.append(toString(ja3.opt(i3), tagName == null ? "array" : tagName));
            }
            return sb.toString();
        }
        String string = object == null ? "null" : escape(object.toString());
        if (tagName == null) {
            return "\"" + string + "\"";
        }
        if (string.length() == 0) {
            return "<" + tagName + "/>";
        }
        return "<" + tagName + ">" + string + "</" + tagName + ">";
    }
}
