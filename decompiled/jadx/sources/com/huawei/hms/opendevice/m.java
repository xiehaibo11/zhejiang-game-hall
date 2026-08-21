package com.huawei.hms.opendevice;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.agconnect.config.AGConnectServicesConfig;
import com.huawei.hms.support.log.HMSLog;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import java.util.Map;

/* JADX INFO: compiled from: ReportAaidToken.java */
/* JADX INFO: loaded from: classes.dex */
class m extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Context f2140a;
    public final /* synthetic */ String b;

    public m(Context context, String str) {
        this.f2140a = context;
        this.b = str;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() throws Throwable {
        if (!p.a()) {
            HMSLog.d("ReportAaidToken", "Not HW Phone.");
            return;
        }
        if (n.b(this.f2140a)) {
            return;
        }
        String strA = o.a(this.f2140a);
        if (TextUtils.isEmpty(strA)) {
            HMSLog.w("ReportAaidToken", "AAID is empty.");
            return;
        }
        if (!n.d(this.f2140a, strA, this.b)) {
            HMSLog.d("ReportAaidToken", "This time need not report.");
            return;
        }
        String string = AGConnectServicesConfig.fromContext(this.f2140a).getString(TtmlNode.TAG_REGION);
        if (TextUtils.isEmpty(string)) {
            HMSLog.i("ReportAaidToken", "The data storage region is empty.");
            return;
        }
        String strA2 = e.a(this.f2140a, "com.huawei.hms.opendevicesdk", "ROOT", null, string);
        if (TextUtils.isEmpty(strA2)) {
            return;
        }
        String strC = n.c(this.f2140a, strA, this.b);
        n.b(this.f2140a, d.a(this.f2140a, strA2 + "/rest/appdata/v1/aaid/report", strC, (Map<String, String>) null), strA, this.b);
    }
}
