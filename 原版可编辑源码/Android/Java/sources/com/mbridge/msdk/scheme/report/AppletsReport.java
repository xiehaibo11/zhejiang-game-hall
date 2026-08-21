package com.mbridge.msdk.scheme.report;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.a;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.b;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;

public class AppletsReport {
    public static final String APPLETS_API_VALUE = "2000118";
    private static final String TAG = AppletsReport.class.getName();

    public static void reportAppletsLoadState(Context context, String str, String str2, String str3) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000118&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                if (!TextUtils.isEmpty(a.t)) {
                    stringBuffer.append("b=" + a.t + "&");
                }
                if (!TextUtils.isEmpty(a.u)) {
                    stringBuffer.append("c=" + a.u + "&");
                }
                stringBuffer.append("hb=0&");
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(str3);
                    stringBuffer.append("&");
                }
                stringBuffer.append("reason=" + str);
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    reportLoadData(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    private static void reportLoadData(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a(str, context), new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str2) {
                    z.d(AppletsReport.TAG, str2);
                }

                @Override
                public final void onFailed(String str2) {
                    z.d(AppletsReport.TAG, str2);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(TAG, e.getMessage());
        }
    }
}
