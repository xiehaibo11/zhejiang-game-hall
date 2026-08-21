package org.json;

import java.util.Iterator;

public class XML {
    public static final Character AMP = '&';
    public static final Character APOS = '\'';
    public static final Character BANG = '!';
    public static final Character EQ = '=';
    public static final Character GT = '>';
    public static final Character LT = '<';
    public static final Character QUEST = '?';
    public static final Character QUOT = '\"';
    public static final Character SLASH = '/';

    public static String escape(String str) {
        StringBuilder sb = new StringBuilder(str.length());
        int length = str.length();
        for (int i = 0; i < length; i++) {
            char cCharAt = str.charAt(i);
            if (cCharAt == '\"') {
                sb.append("&quot;");
            } else if (cCharAt == '<') {
                sb.append("&lt;");
            } else if (cCharAt == '>') {
                sb.append("&gt;");
            } else if (cCharAt == '&') {
                sb.append("&amp;");
            } else if (cCharAt != '\'') {
                sb.append(cCharAt);
            } else {
                sb.append("&apos;");
            }
        }
        return sb.toString();
    }

    public static void noSpace(String str) throws JSONException {
        int length = str.length();
        if (length == 0) {
            throw new JSONException("Empty string.");
        }
        for (int i = 0; i < length; i++) {
            if (Character.isWhitespace(str.charAt(i))) {
                throw new JSONException("'" + str + "' contains a space character.");
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:64:0x00ef, code lost:
    
        r7 = r10.nextToken();
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x00f5, code lost:
    
        if ((r7 instanceof java.lang.String) == false) goto L119;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0107, code lost:
    
        throw r10.syntaxError("Missing value");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean parse(XMLTokener xMLTokener, JSONObject jSONObject, String str) throws JSONException {
        String str2;
        Object objNextToken;
        Object objNextToken2 = xMLTokener.nextToken();
        int i = 1;
        if (objNextToken2 == BANG) {
            char next = xMLTokener.next();
            if (next == '-') {
                if (xMLTokener.next() == '-') {
                    xMLTokener.skipPast("-->");
                    return false;
                }
                xMLTokener.back();
            } else if (next == '[') {
                if (!"CDATA".equals(xMLTokener.nextToken()) || xMLTokener.next() != '[') {
                    throw xMLTokener.syntaxError("Expected 'CDATA['");
                }
                String strNextCDATA = xMLTokener.nextCDATA();
                if (strNextCDATA.length() > 0) {
                    jSONObject.accumulate("content", strNextCDATA);
                }
                return false;
            }
            do {
                Object objNextMeta = xMLTokener.nextMeta();
                if (objNextMeta == null) {
                    throw xMLTokener.syntaxError("Missing '>' after '<!'.");
                }
                if (objNextMeta == LT) {
                    i++;
                } else if (objNextMeta == GT) {
                    i--;
                }
            } while (i > 0);
            return false;
        }
        if (objNextToken2 == QUEST) {
            xMLTokener.skipPast("?>");
            return false;
        }
        if (objNextToken2 == SLASH) {
            Object objNextToken3 = xMLTokener.nextToken();
            if (str == null) {
                throw xMLTokener.syntaxError("Mismatched close tag " + objNextToken3);
            }
            if (objNextToken3.equals(str)) {
                if (xMLTokener.nextToken() == GT) {
                    return true;
                }
                throw xMLTokener.syntaxError("Misshaped close tag");
            }
            throw xMLTokener.syntaxError("Mismatched " + str + " and " + objNextToken3);
        }
        if (objNextToken2 instanceof Character) {
            throw xMLTokener.syntaxError("Misshaped tag");
        }
        String str3 = (String) objNextToken2;
        JSONObject jSONObject2 = new JSONObject();
        while (true) {
            Object objNextToken4 = null;
            while (true) {
                if (objNextToken4 == null) {
                    objNextToken4 = xMLTokener.nextToken();
                }
                if (objNextToken4 instanceof String) {
                    str2 = (String) objNextToken4;
                    Object objNextToken5 = xMLTokener.nextToken();
                    if (objNextToken5 == EQ) {
                        break;
                    }
                    jSONObject2.accumulate(str2, "");
                    objNextToken4 = objNextToken5;
                } else {
                    if (objNextToken4 == SLASH) {
                        if (xMLTokener.nextToken() != GT) {
                            throw xMLTokener.syntaxError("Misshaped tag");
                        }
                        if (jSONObject2.length() > 0) {
                            jSONObject.accumulate(str3, jSONObject2);
                        } else {
                            jSONObject.accumulate(str3, "");
                        }
                        return false;
                    }
                    if (objNextToken4 != GT) {
                        throw xMLTokener.syntaxError("Misshaped tag");
                    }
                    while (true) {
                        Object objNextContent = xMLTokener.nextContent();
                        if (objNextContent == null) {
                            if (str3 == null) {
                                return false;
                            }
                            throw xMLTokener.syntaxError("Unclosed tag " + str3);
                        }
                        if (objNextContent instanceof String) {
                            String str4 = (String) objNextContent;
                            if (str4.length() > 0) {
                                jSONObject2.accumulate("content", stringToValue(str4));
                            }
                        } else if (objNextContent == LT && parse(xMLTokener, jSONObject2, str3)) {
                            if (jSONObject2.length() == 0) {
                                jSONObject.accumulate(str3, "");
                            } else if (jSONObject2.length() != 1 || jSONObject2.opt("content") == null) {
                                jSONObject.accumulate(str3, jSONObject2);
                            } else {
                                jSONObject.accumulate(str3, jSONObject2.opt("content"));
                            }
                            return false;
                        }
                    }
                }
            }
            jSONObject2.accumulate(str2, stringToValue((String) objNextToken));
        }
    }

    public static Object stringToValue(String str) {
        if ("true".equalsIgnoreCase(str)) {
            return Boolean.TRUE;
        }
        if ("false".equalsIgnoreCase(str)) {
            return Boolean.FALSE;
        }
        if ("null".equalsIgnoreCase(str)) {
            return JSONObject.NULL;
        }
        try {
            try {
                char cCharAt = str.charAt(0);
                if (cCharAt == '-' || (cCharAt >= '0' && cCharAt <= '9')) {
                    Long l = new Long(str);
                    if (l.toString().equals(str)) {
                        return l;
                    }
                }
            } catch (Exception unused) {
            }
        } catch (Exception unused2) {
            Double d = new Double(str);
            if (d.toString().equals(str)) {
                return d;
            }
        }
        return str;
    }

    public static JSONObject toJSONObject(String str) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        XMLTokener xMLTokener = new XMLTokener(str);
        while (xMLTokener.more() && xMLTokener.skipPast("<")) {
            parse(xMLTokener, jSONObject, null);
        }
        return jSONObject;
    }

    public static String toString(Object obj) throws JSONException {
        return toString(obj, null);
    }

    public static String toString(Object obj, String str) throws JSONException {
        StringBuilder sb = new StringBuilder();
        if (!(obj instanceof JSONObject)) {
            if (obj.getClass().isArray()) {
                obj = new JSONArray(obj);
            }
            if (obj instanceof JSONArray) {
                JSONArray jSONArray = (JSONArray) obj;
                int length = jSONArray.length();
                for (int i = 0; i < length; i++) {
                    sb.append(toString(jSONArray.opt(i), str == null ? "array" : str));
                }
                return sb.toString();
            }
            String strEscape = obj == null ? "null" : escape(obj.toString());
            if (str == null) {
                return "\"" + strEscape + "\"";
            }
            if (strEscape.length() == 0) {
                return "<" + str + "/>";
            }
            return "<" + str + ">" + strEscape + "</" + str + ">";
        }
        if (str != null) {
            sb.append('<');
            sb.append(str);
            sb.append('>');
        }
        JSONObject jSONObject = (JSONObject) obj;
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            Object objOpt = jSONObject.opt(next);
            if (objOpt == null) {
                objOpt = "";
            }
            if (objOpt instanceof String) {
            }
            if ("content".equals(next)) {
                if (objOpt instanceof JSONArray) {
                    JSONArray jSONArray2 = (JSONArray) objOpt;
                    int length2 = jSONArray2.length();
                    for (int i2 = 0; i2 < length2; i2++) {
                        if (i2 > 0) {
                            sb.append('\n');
                        }
                        sb.append(escape(jSONArray2.get(i2).toString()));
                    }
                } else {
                    sb.append(escape(objOpt.toString()));
                }
            } else if (objOpt instanceof JSONArray) {
                JSONArray jSONArray3 = (JSONArray) objOpt;
                int length3 = jSONArray3.length();
                for (int i3 = 0; i3 < length3; i3++) {
                    Object obj2 = jSONArray3.get(i3);
                    if (obj2 instanceof JSONArray) {
                        sb.append('<');
                        sb.append(next);
                        sb.append('>');
                        sb.append(toString(obj2));
                        sb.append("</");
                        sb.append(next);
                        sb.append('>');
                    } else {
                        sb.append(toString(obj2, next));
                    }
                }
            } else if ("".equals(objOpt)) {
                sb.append('<');
                sb.append(next);
                sb.append("/>");
            } else {
                sb.append(toString(objOpt, next));
            }
        }
        if (str != null) {
            sb.append("</");
            sb.append(str);
            sb.append('>');
        }
        return sb.toString();
    }
}
