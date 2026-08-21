package org.json;

import java.util.Iterator;

public class JSONML {
    /* JADX WARN: Code restructure failed: missing block: B:112:0x017e, code lost:
    
        throw r9.syntaxError("Reserved attribute.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x0187, code lost:
    
        r7 = r9.nextToken();
     */
    /* JADX WARN: Code restructure failed: missing block: B:116:0x018d, code lost:
    
        if ((r7 instanceof java.lang.String) == false) goto L156;
     */
    /* JADX WARN: Code restructure failed: missing block: B:119:0x01a0, code lost:
    
        throw r9.syntaxError("Missing value");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Object parse(XMLTokener xMLTokener, boolean z, JSONArray jSONArray) throws JSONException {
        String str;
        Object objNextToken;
        loop0: while (xMLTokener.more()) {
            Object objNextContent = xMLTokener.nextContent();
            if (objNextContent == XML.LT) {
                Object objNextToken2 = xMLTokener.nextToken();
                if (objNextToken2 instanceof Character) {
                    if (objNextToken2 == XML.SLASH) {
                        Object objNextToken3 = xMLTokener.nextToken();
                        if (objNextToken3 instanceof String) {
                            if (xMLTokener.nextToken() == XML.GT) {
                                return objNextToken3;
                            }
                            throw xMLTokener.syntaxError("Misshaped close tag");
                        }
                        throw new JSONException("Expected a closing name instead of '" + objNextToken3 + "'.");
                    }
                    if (objNextToken2 == XML.BANG) {
                        char next = xMLTokener.next();
                        if (next == '-') {
                            if (xMLTokener.next() == '-') {
                                xMLTokener.skipPast("-->");
                            } else {
                                xMLTokener.back();
                            }
                        } else if (next != '[') {
                            int i = 1;
                            do {
                                Object objNextMeta = xMLTokener.nextMeta();
                                if (objNextMeta == null) {
                                    throw xMLTokener.syntaxError("Missing '>' after '<!'.");
                                }
                                if (objNextMeta == XML.LT) {
                                    i++;
                                } else if (objNextMeta == XML.GT) {
                                    i--;
                                }
                            } while (i > 0);
                        } else {
                            if (!xMLTokener.nextToken().equals("CDATA") || xMLTokener.next() != '[') {
                                throw xMLTokener.syntaxError("Expected 'CDATA['");
                            }
                            if (jSONArray != null) {
                                jSONArray.put(xMLTokener.nextCDATA());
                            }
                        }
                    } else {
                        if (objNextToken2 != XML.QUEST) {
                            throw xMLTokener.syntaxError("Misshaped tag");
                        }
                        xMLTokener.skipPast("?>");
                    }
                } else {
                    if (!(objNextToken2 instanceof String)) {
                        throw xMLTokener.syntaxError("Bad tagName '" + objNextToken2 + "'.");
                    }
                    String str2 = (String) objNextToken2;
                    JSONArray jSONArray2 = new JSONArray();
                    JSONObject jSONObject = new JSONObject();
                    if (z) {
                        jSONArray2.put(str2);
                        if (jSONArray != null) {
                            jSONArray.put(jSONArray2);
                        }
                    } else {
                        jSONObject.put("tagName", str2);
                        if (jSONArray != null) {
                            jSONArray.put(jSONObject);
                        }
                    }
                    while (true) {
                        Object objNextToken4 = null;
                        while (true) {
                            if (objNextToken4 == null) {
                                objNextToken4 = xMLTokener.nextToken();
                            }
                            if (objNextToken4 == null) {
                                throw xMLTokener.syntaxError("Misshaped tag");
                            }
                            if (objNextToken4 instanceof String) {
                                str = (String) objNextToken4;
                                if (!z && ("tagName".equals(str) || "childNode".equals(str))) {
                                    break loop0;
                                }
                                Object objNextToken5 = xMLTokener.nextToken();
                                if (objNextToken5 == XML.EQ) {
                                    break;
                                }
                                jSONObject.accumulate(str, "");
                                objNextToken4 = objNextToken5;
                            } else {
                                if (z && jSONObject.length() > 0) {
                                    jSONArray2.put(jSONObject);
                                }
                                if (objNextToken4 == XML.SLASH) {
                                    if (xMLTokener.nextToken() != XML.GT) {
                                        throw xMLTokener.syntaxError("Misshaped tag");
                                    }
                                    if (jSONArray == null) {
                                        return z ? jSONArray2 : jSONObject;
                                    }
                                } else {
                                    if (objNextToken4 != XML.GT) {
                                        throw xMLTokener.syntaxError("Misshaped tag");
                                    }
                                    String str3 = (String) parse(xMLTokener, z, jSONArray2);
                                    if (str3 == null) {
                                        continue;
                                    } else {
                                        if (!str3.equals(str2)) {
                                            throw xMLTokener.syntaxError("Mismatched '" + str2 + "' and '" + str3 + "'");
                                        }
                                        if (!z && jSONArray2.length() > 0) {
                                            jSONObject.put("childNodes", jSONArray2);
                                        }
                                        if (jSONArray == null) {
                                            return z ? jSONArray2 : jSONObject;
                                        }
                                    }
                                }
                            }
                        }
                        jSONObject.accumulate(str, XML.stringToValue((String) objNextToken));
                    }
                }
            } else if (jSONArray != null) {
                if (objNextContent instanceof String) {
                    objNextContent = XML.stringToValue((String) objNextContent);
                }
                jSONArray.put(objNextContent);
            }
        }
        throw xMLTokener.syntaxError("Bad XML");
    }

    public static JSONArray toJSONArray(String str) throws JSONException {
        return toJSONArray(new XMLTokener(str));
    }

    public static JSONObject toJSONObject(XMLTokener xMLTokener) throws JSONException {
        return (JSONObject) parse(xMLTokener, false, null);
    }

    public static String toString(JSONArray jSONArray) throws JSONException {
        int i;
        StringBuilder sb = new StringBuilder();
        String string = jSONArray.getString(0);
        XML.noSpace(string);
        String strEscape = XML.escape(string);
        sb.append('<');
        sb.append(strEscape);
        Object objOpt = jSONArray.opt(1);
        if (objOpt instanceof JSONObject) {
            i = 2;
            JSONObject jSONObject = (JSONObject) objOpt;
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                XML.noSpace(next);
                String strOptString = jSONObject.optString(next);
                if (strOptString != null) {
                    sb.append(' ');
                    sb.append(XML.escape(next));
                    sb.append('=');
                    sb.append('\"');
                    sb.append(XML.escape(strOptString));
                    sb.append('\"');
                }
            }
        } else {
            i = 1;
        }
        int length = jSONArray.length();
        if (i >= length) {
            sb.append('/');
            sb.append('>');
        } else {
            sb.append('>');
            do {
                Object obj = jSONArray.get(i);
                i++;
                if (obj != null) {
                    if (obj instanceof String) {
                        sb.append(XML.escape(obj.toString()));
                    } else if (obj instanceof JSONObject) {
                        sb.append(toString((JSONObject) obj));
                    } else if (obj instanceof JSONArray) {
                        sb.append(toString((JSONArray) obj));
                    } else {
                        sb.append(obj.toString());
                    }
                }
            } while (i < length);
            sb.append('<');
            sb.append('/');
            sb.append(strEscape);
            sb.append('>');
        }
        return sb.toString();
    }

    public static JSONArray toJSONArray(XMLTokener xMLTokener) throws JSONException {
        return (JSONArray) parse(xMLTokener, true, null);
    }

    public static JSONObject toJSONObject(String str) throws JSONException {
        return toJSONObject(new XMLTokener(str));
    }

    public static String toString(JSONObject jSONObject) throws JSONException {
        StringBuilder sb = new StringBuilder();
        String strOptString = jSONObject.optString("tagName");
        if (strOptString == null) {
            return XML.escape(jSONObject.toString());
        }
        XML.noSpace(strOptString);
        String strEscape = XML.escape(strOptString);
        sb.append('<');
        sb.append(strEscape);
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            if (!"tagName".equals(next) && !"childNodes".equals(next)) {
                XML.noSpace(next);
                String strOptString2 = jSONObject.optString(next);
                if (strOptString2 != null) {
                    sb.append(' ');
                    sb.append(XML.escape(next));
                    sb.append('=');
                    sb.append('\"');
                    sb.append(XML.escape(strOptString2));
                    sb.append('\"');
                }
            }
        }
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("childNodes");
        if (jSONArrayOptJSONArray == null) {
            sb.append('/');
            sb.append('>');
        } else {
            sb.append('>');
            int length = jSONArrayOptJSONArray.length();
            for (int i = 0; i < length; i++) {
                Object obj = jSONArrayOptJSONArray.get(i);
                if (obj != null) {
                    if (obj instanceof String) {
                        sb.append(XML.escape(obj.toString()));
                    } else if (obj instanceof JSONObject) {
                        sb.append(toString((JSONObject) obj));
                    } else if (obj instanceof JSONArray) {
                        sb.append(toString((JSONArray) obj));
                    } else {
                        sb.append(obj.toString());
                    }
                }
            }
            sb.append('<');
            sb.append('/');
            sb.append(strEscape);
            sb.append('>');
        }
        return sb.toString();
    }
}
