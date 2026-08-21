package com.loc;

import android.content.Context;
import com.huawei.hms.framework.common.ContainerUtils;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public final class ax extends r {
    public JSONObject a = null;
    public Context b = null;

    @Override
    public final Map<String, String> a() {
        HashMap map = new HashMap();
        map.put("Content-Type", "application/x-www-form-urlencoded");
        map.put("Accept-Encoding", "gzip");
        map.put("User-Agent", "AMAP SDK Android core 4.3.6");
        map.put("X-INFO", n.a(this.b));
        map.put("platinfo", String.format("platform=Android&sdkversion=%s&product=%s", "4.3.6", "core"));
        map.put("logversion", "2.1");
        return map;
    }

    @Override
    public final String b() {
        return q.a().b() ? "https://restsdk.amap.com/sdk/compliance/params" : "http://restsdk.amap.com/sdk/compliance/params";
    }

    @Override
    public final String c_() {
        return "core";
    }

    @Override
    public final byte[] d() {
        try {
            StringBuffer stringBuffer = new StringBuffer();
            if (this.a != null) {
                Iterator<String> itKeys = this.a.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    stringBuffer.append(next + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(this.a.get(next).toString(), "utf-8") + "&");
                }
            }
            stringBuffer.append("output=json");
            String strF = l.f(this.b);
            stringBuffer.append("&key=".concat(String.valueOf(strF)));
            String strA = n.a();
            stringBuffer.append("&ts=".concat(String.valueOf(strA)));
            stringBuffer.append("&scode=" + n.a(this.b, strA, "key=".concat(String.valueOf(strF))));
            return stringBuffer.toString().getBytes("utf-8");
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    @Override
    public final Map<String, String> e() {
        return null;
    }
}
