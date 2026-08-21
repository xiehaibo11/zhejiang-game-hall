package com.reyun.tracking.sdk;

import com.reyun.tracking.utils.s;
import java.util.Map;
import org.json.JSONObject;

final class l implements Runnable {
    final String a;
    final JSONObject b;
    final String c;
    final boolean d;
    final String e;
    final int f;
    final Map g;

    l(String str, JSONObject jSONObject, String str2, boolean z, String str3, int i, Map map) {
        this.a = str;
        this.b = jSONObject;
        this.c = str2;
        this.d = z;
        this.e = str3;
        this.f = i;
        this.g = map;
    }

    @Override
    public void run() {
        try {
            long jCurrentTimeMillis = System.currentTimeMillis() - com.reyun.tracking.utils.f.b(Tracking.m_context, Tracking.XML_INSTALL, Tracking.KEY_INSTALL_SEND_SUCCESS_TIME);
            if (jCurrentTimeMillis < 2000) {
                com.reyun.tracking.a.a.d(Tracking.TAG, "sendOrSave cache data intervalTime:" + jCurrentTimeMillis + " what:" + this.a + " what2:" + this.c + " rid:" + Tracking.addRecordToDbase(this.a, this.b, 0));
            } else {
                long jAddRecordToDbase = Tracking.addRecordToDbase(this.a, this.b, this.d ? 1 : 0);
                if (this.d) {
                    com.reyun.tracking.utils.d.a(Tracking.m_context, this.a, this.e, this.b, this.f, new s(this.c, Tracking.m_context, jAddRecordToDbase, this.g));
                }
            }
        } catch (Throwable unused) {
        }
    }
}
