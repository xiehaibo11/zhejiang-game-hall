package com.kuaishou.weapon.p0;

import android.content.Context;
import android.net.Proxy;
import android.os.Build;
import android.text.TextUtils;
import com.qihoo360.replugin.RePlugin;
import org.json.JSONObject;

public class ah {
    public static JSONObject a(Context context) {
        int port;
        String property;
        try {
            if (Build.VERSION.SDK_INT >= 14) {
                property = System.getProperty("http.proxyHost");
                String property2 = System.getProperty("http.proxyPort");
                if (property2 == null) {
                    property2 = RePlugin.PROCESS_UI;
                }
                port = Integer.parseInt(property2);
            } else {
                String host = Proxy.getHost(context);
                port = Proxy.getPort(context);
                property = host;
            }
            if (TextUtils.isEmpty(property) || port == -1) {
                return null;
            }
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(com.loc.at.g, property);
            jSONObject.put("p", port);
            return jSONObject;
        } catch (Throwable unused) {
            return null;
        }
    }
}
