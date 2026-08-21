package com.reyun.tracking.sdk;

import com.reyun.tracking.utils.s;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
final class l implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f4740a;
    final /* synthetic */ JSONObject b;
    final /* synthetic */ String c;
    final /* synthetic */ boolean d;
    final /* synthetic */ String e;
    final /* synthetic */ int f;
    final /* synthetic */ Map g;

    l(String str, JSONObject jSONObject, String str2, boolean z, String str3, int i, Map map) {
        this.f4740a = str;
        this.b = jSONObject;
        this.c = str2;
        this.d = z;
        this.e = str3;
        this.f = i;
        this.g = map;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            long jCurrentTimeMillis = System.currentTimeMillis() - com.reyun.tracking.utils.f.b(Tracking.m_context, Tracking.XML_INSTALL, Tracking.KEY_INSTALL_SEND_SUCCESS_TIME);
            if (jCurrentTimeMillis < 2000) {
                com.reyun.tracking.a.a.d(Tracking.TAG, "sendOrSave cache data intervalTime:" + jCurrentTimeMillis + " what:" + this.f4740a + " what2:" + this.c + " rid:" + Tracking.addRecordToDbase(this.f4740a, this.b, 0));
            } else {
                long jAddRecordToDbase = Tracking.addRecordToDbase(this.f4740a, this.b, this.d ? 1 : 0);
                if (this.d) {
                    com.reyun.tracking.utils.d.a(Tracking.m_context, this.f4740a, this.e, this.b, this.f, new s(this.c, Tracking.m_context, jAddRecordToDbase, this.g));
                }
            }
        } catch (Throwable unused) {
        }
    }
}
