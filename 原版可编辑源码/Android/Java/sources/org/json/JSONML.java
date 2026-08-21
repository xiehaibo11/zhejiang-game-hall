package org.json;

import com.alipay.sdk.m.n.a;
import cz.msebera.android.httpclient.message.TokenParser;
import java.util.Iterator;
import kotlin.text.Typography;

public class JSONML {
    /* JADX WARN: Code restructure failed: missing block: B:113:0x0188, code lost:
    
        throw r9.syntaxError("Reserved attribute.");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Object parse(XMLTokener x, boolean arrayForm, JSONArray jSONArray) throws JSONException {
        loop0: while (x.more()) {
            Object token = x.nextContent();
            if (token == XML.LT) {
                Object token2 = x.nextToken();
                if (token2 instanceof Character) {
                    if (token2 == XML.SLASH) {
                        Object token3 = x.nextToken();
                        if (!(token3 instanceof String)) {
                            throw new JSONException("Expected a closing name instead of '" + token3 + "'.");
                        }
                        if (x.nextToken() != XML.GT) {
                            throw x.syntaxError("Misshaped close tag");
                        }
                        return token3;
                    }
                    if (token2 == XML.BANG) {
                        char c = x.next();
                        if (c == '-') {
                            if (x.next() == '-') {
                                x.skipPast("-->");
                            } else {
                                x.back();
                            }
                        } else if (c == '[') {
                            if (x.nextToken().equals("CDATA") && x.next() == '[') {
                                if (jSONArray != null) {
                                    jSONArray.put(x.nextCDATA());
                                }
                            } else {
                                throw x.syntaxError("Expected 'CDATA['");
                            }
                        } else {
                            int i = 1;
                            do {
                                Object token4 = x.nextMeta();
                                if (token4 == null) {
                                    throw x.syntaxError("Missing '>' after '<!'.");
                                }
                                if (token4 == XML.LT) {
                                    i++;
                                } else if (token4 == XML.GT) {
                                    i--;
                                }
                            } while (i > 0);
                        }
                    } else if (token2 == XML.QUEST) {
                        x.skipPast("?>");
                    } else {
                        throw x.syntaxError("Misshaped tag");
                    }
                } else {
                    if (!(token2 instanceof String)) {
                        throw x.syntaxError("Bad tagName '" + token2 + "'.");
                    }
                    String tagName = (String) token2;
                    JSONArray jSONArray2 = new JSONArray();
                    JSONObject jSONObject = new JSONObject();
                    if (arrayForm) {
                        jSONArray2.put(tagName);
                        if (jSONArray != null) {
                            jSONArray.put(jSONArray2);
                        }
                    } else {
                        jSONObject.put("tagName", tagName);
                        if (jSONArray != null) {
                            jSONArray.put(jSONObject);
                        }
                    }
                    Object token5 = null;
                    while (true) {
                        if (token5 == null) {
                            token5 = x.nextToken();
                        }
                        if (token5 == null) {
                            throw x.syntaxError("Misshaped tag");
                        }
                        if (token5 instanceof String) {
                            String attribute = (String) token5;
                            if (!arrayForm && ("tagName".equals(attribute) || "childNode".equals(attribute))) {
                                break loop0;
                            }
                            token5 = x.nextToken();
                            if (token5 == XML.EQ) {
                                Object token6 = x.nextToken();
                                if (!(token6 instanceof String)) {
                                    throw x.syntaxError("Missing value");
                                }
                                jSONObject.accumulate(attribute, XML.stringToValue((String) token6));
                                token5 = null;
                            } else {
                                jSONObject.accumulate(attribute, "");
                            }
                        } else {
                            if (arrayForm && jSONObject.length() > 0) {
                                jSONArray2.put(jSONObject);
                            }
                            if (token5 == XML.SLASH) {
                                if (x.nextToken() != XML.GT) {
                                    throw x.syntaxError("Misshaped tag");
                                }
                                if (jSONArray == null) {
                                    return arrayForm ? jSONArray2 : jSONObject;
                                }
                            } else {
                                if (token5 != XML.GT) {
                                    throw x.syntaxError("Misshaped tag");
                                }
                                String closeTag = (String) parse(x, arrayForm, jSONArray2);
                                if (closeTag == null) {
                                    continue;
                                } else {
                                    if (!closeTag.equals(tagName)) {
                                        throw x.syntaxError("Mismatched '" + tagName + "' and '" + closeTag + "'");
                                    }
                                    if (!arrayForm && jSONArray2.length() > 0) {
                                        jSONObject.put("childNodes", jSONArray2);
                                    }
                                    if (jSONArray == null) {
                                        return arrayForm ? jSONArray2 : jSONObject;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if (jSONArray != null) {
                jSONArray.put(token instanceof String ? XML.stringToValue((String) token) : token);
            }
        }
        throw x.syntaxError("Bad XML");
    }

    public static JSONArray toJSONArray(String string) throws JSONException {
        return toJSONArray(new XMLTokener(string));
    }

    public static JSONArray toJSONArray(XMLTokener x) throws JSONException {
        return (JSONArray) parse(x, true, null);
    }

    public static JSONObject toJSONObject(XMLTokener x) throws JSONException {
        return (JSONObject) parse(x, false, null);
    }

    public static JSONObject toJSONObject(String string) throws JSONException {
        return toJSONObject(new XMLTokener(string));
    }

    public static String toString(JSONArray ja) throws JSONException {
        int i;
        StringBuilder sb = new StringBuilder();
        String tagName = ja.getString(0);
        XML.noSpace(tagName);
        String tagName2 = XML.escape(tagName);
        sb.append(Typography.less);
        sb.append(tagName2);
        Object object = ja.opt(1);
        if (object instanceof JSONObject) {
            i = 2;
            JSONObject jo = (JSONObject) object;
            Iterator<String> keys = jo.keys();
            while (keys.hasNext()) {
                String key = keys.next();
                XML.noSpace(key);
                String value = jo.optString(key);
                if (value != null) {
                    sb.append(TokenParser.SP);
                    sb.append(XML.escape(key));
                    sb.append(a.h);
                    sb.append('\"');
                    sb.append(XML.escape(value));
                    sb.append('\"');
                }
            }
        } else {
            i = 1;
        }
        int length = ja.length();
        if (i >= length) {
            sb.append('/');
            sb.append(Typography.greater);
        } else {
            sb.append(Typography.greater);
            do {
                Object object2 = ja.get(i);
                i++;
                if (object2 != null) {
                    if (object2 instanceof String) {
                        sb.append(XML.escape(object2.toString()));
                    } else if (object2 instanceof JSONObject) {
                        sb.append(toString((JSONObject) object2));
                    } else if (object2 instanceof JSONArray) {
                        sb.append(toString((JSONArray) object2));
                    } else {
                        sb.append(object2.toString());
                    }
                }
            } while (i < length);
            sb.append(Typography.less);
            sb.append('/');
            sb.append(tagName2);
            sb.append(Typography.greater);
        }
        return sb.toString();
    }

    public static String toString(JSONObject jo) throws JSONException {
        StringBuilder sb = new StringBuilder();
        String tagName = jo.optString("tagName");
        if (tagName == null) {
            return XML.escape(jo.toString());
        }
        XML.noSpace(tagName);
        String tagName2 = XML.escape(tagName);
        sb.append(Typography.less);
        sb.append(tagName2);
        Iterator<String> keys = jo.keys();
        while (keys.hasNext()) {
            String key = keys.next();
            if (!"tagName".equals(key) && !"childNodes".equals(key)) {
                XML.noSpace(key);
                String value = jo.optString(key);
                if (value != null) {
                    sb.append(TokenParser.SP);
                    sb.append(XML.escape(key));
                    sb.append(a.h);
                    sb.append('\"');
                    sb.append(XML.escape(value));
                    sb.append('\"');
                }
            }
        }
        JSONArray ja = jo.optJSONArray("childNodes");
        if (ja == null) {
            sb.append('/');
            sb.append(Typography.greater);
        } else {
            sb.append(Typography.greater);
            int length = ja.length();
            for (int i = 0; i < length; i++) {
                Object object = ja.get(i);
                if (object != null) {
                    if (object instanceof String) {
                        sb.append(XML.escape(object.toString()));
                    } else if (object instanceof JSONObject) {
                        sb.append(toString((JSONObject) object));
                    } else if (object instanceof JSONArray) {
                        sb.append(toString((JSONArray) object));
                    } else {
                        sb.append(object.toString());
                    }
                }
            }
            sb.append(Typography.less);
            sb.append('/');
            sb.append(tagName2);
            sb.append(Typography.greater);
        }
        return sb.toString();
    }
}
