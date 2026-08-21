package com.vivo.push.d;

import android.text.TextUtils;
import com.vivo.push.d.r;
import java.util.HashMap;

final class t implements r.a {
    final s a;

    t(s sVar) {
        this.a = sVar;
    }

    @Override
    public final void a() {
        long jL = com.vivo.push.e.a().l();
        if (jL < 1400 && jL != 1340) {
            com.vivo.push.util.p.b("OnNotificationArrivedTask", "引擎版本太低，不支持正向展示功能，pushEngineSDKVersion：".concat(String.valueOf(jL)));
            return;
        }
        HashMap map = new HashMap();
        map.put("srt", "1");
        map.put("message_id", String.valueOf(this.a.b.f()));
        String strB = com.vivo.push.util.z.b(this.a.c.a, this.a.c.a.getPackageName());
        if (!TextUtils.isEmpty(strB)) {
            map.put("app_id", strB);
        }
        map.put("type", "1");
        map.put("dtp", "1");
        com.vivo.push.util.e.a(6L, map);
    }

    @Override
    public final void b() {
        HashMap map = new HashMap();
        map.put(com.heytap.mcssdk.constant.b.c, String.valueOf(this.a.b.f()));
        String strB = com.vivo.push.util.z.b(this.a.c.a, this.a.c.a.getPackageName());
        if (!TextUtils.isEmpty(strB)) {
            map.put("remoteAppId", strB);
        }
        com.vivo.push.util.e.a(2122L, map);
    }
}
