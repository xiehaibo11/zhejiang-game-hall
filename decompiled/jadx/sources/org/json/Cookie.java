package org.json;

import com.alipay.sdk.m.n.a;
import com.huawei.hms.framework.common.ContainerUtils;
import cz.msebera.android.httpclient.cookie.ClientCookie;
import cz.msebera.android.httpclient.message.TokenParser;

/* JADX INFO: loaded from: classes4.dex */
public class Cookie {
    public static String escape(String string) {
        String s = string.trim();
        int length = s.length();
        StringBuilder sb = new StringBuilder(length);
        for (int i = 0; i < length; i++) {
            char c = s.charAt(i);
            if (c < ' ' || c == '+' || c == '%' || c == '=' || c == ';') {
                sb.append('%');
                sb.append(Character.forDigit((char) ((c >>> 4) & 15), 16));
                sb.append(Character.forDigit((char) (c & 15), 16));
            } else {
                sb.append(c);
            }
        }
        return sb.toString();
    }

    public static JSONObject toJSONObject(String string) throws JSONException {
        Object value;
        JSONObject jo = new JSONObject();
        JSONTokener x = new JSONTokener(string);
        jo.put("name", x.nextTo(a.h));
        x.next(a.h);
        jo.put("value", x.nextTo(';'));
        x.next();
        while (x.more()) {
            String name = unescape(x.nextTo("=;"));
            if (x.next() != '=') {
                if (name.equals(ClientCookie.SECURE_ATTR)) {
                    value = Boolean.TRUE;
                } else {
                    throw x.syntaxError("Missing '=' in cookie parameter.");
                }
            } else {
                value = unescape(x.nextTo(';'));
                x.next();
            }
            jo.put(name, value);
        }
        return jo;
    }

    public static String toString(JSONObject jo) throws JSONException {
        StringBuilder sb = new StringBuilder();
        sb.append(escape(jo.getString("name")));
        sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
        sb.append(escape(jo.getString("value")));
        if (jo.has(ClientCookie.EXPIRES_ATTR)) {
            sb.append(";expires=");
            sb.append(jo.getString(ClientCookie.EXPIRES_ATTR));
        }
        if (jo.has("domain")) {
            sb.append(";domain=");
            sb.append(escape(jo.getString("domain")));
        }
        if (jo.has("path")) {
            sb.append(";path=");
            sb.append(escape(jo.getString("path")));
        }
        if (jo.optBoolean(ClientCookie.SECURE_ATTR)) {
            sb.append(";secure");
        }
        return sb.toString();
    }

    public static String unescape(String string) {
        int length = string.length();
        StringBuilder sb = new StringBuilder(length);
        int i = 0;
        while (i < length) {
            char c = string.charAt(i);
            if (c == '+') {
                c = TokenParser.SP;
            } else if (c == '%' && i + 2 < length) {
                int d = JSONTokener.dehexchar(string.charAt(i + 1));
                int e = JSONTokener.dehexchar(string.charAt(i + 2));
                if (d >= 0 && e >= 0) {
                    c = (char) ((d * 16) + e);
                    i += 2;
                }
            }
            sb.append(c);
            i++;
        }
        return sb.toString();
    }
}
