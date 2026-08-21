package org.json;

import com.alipay.sdk.m.n.a;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
public class CookieList {
    public static JSONObject toJSONObject(String string) throws JSONException {
        JSONObject jo = new JSONObject();
        JSONTokener x = new JSONTokener(string);
        while (x.more()) {
            String name = Cookie.unescape(x.nextTo(a.h));
            x.next(a.h);
            jo.put(name, Cookie.unescape(x.nextTo(';')));
            x.next();
        }
        return jo;
    }

    public static String toString(JSONObject jo) throws JSONException {
        boolean b = false;
        Iterator<String> keys = jo.keys();
        StringBuilder sb = new StringBuilder();
        while (keys.hasNext()) {
            String string = keys.next();
            if (!jo.isNull(string)) {
                if (b) {
                    sb.append(';');
                }
                sb.append(Cookie.escape(string));
                sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                sb.append(Cookie.escape(jo.getString(string)));
                b = true;
            }
        }
        return sb.toString();
    }
}
