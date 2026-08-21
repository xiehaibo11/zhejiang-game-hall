package com.huawei.hms.opendevice;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.agconnect.config.AGConnectServicesConfig;
import com.huawei.hms.support.log.HMSLog;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import java.util.Map;

class m extends Thread {
    public final Context a;
    public final String b;

    public m(Context context, String str) {
        this.a = context;
        this.b = str;
    }

    @Override
    public void run() throws Throwable {
        if (!p.a()) {
            HMSLog.d("ReportAaidToken", "Not HW Phone.");
            return;
        }
        if (n.b(this.a)) {
            return;
        }
        String strA = o.a(this.a);
        if (TextUtils.isEmpty(strA)) {
            HMSLog.w("ReportAaidToken", "AAID is empty.");
            return;
        }
        if (!n.d(this.a, strA, this.b)) {
            HMSLog.d("ReportAaidToken", "This time need not report.");
            return;
        }
        String string = AGConnectServicesConfig.fromContext(this.a).getString(TtmlNode.TAG_REGION);
        if (TextUtils.isEmpty(string)) {
            HMSLog.i("ReportAaidToken", "The data storage region is empty.");
            return;
        }
        String strA2 = e.a(this.a, "com.huawei.hms.opendevicesdk", "ROOT", null, string);
        if (TextUtils.isEmpty(strA2)) {
            return;
        }
        String strC = n.c(this.a, strA, this.b);
        n.b(this.a, d.a(this.a, strA2 + "/rest/appdata/v1/aaid/report", strC, (Map<String, String>) null), strA, this.b);
    }
}
