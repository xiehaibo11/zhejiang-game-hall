package com.mbridge.msdk.mbbid.common.c;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.b;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;

public class a {
    private static final String a = a.class.getName();

    public static void a(Context context, String str, String str2) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("key=");
            sb.append("2000064");
            sb.append("&");
            sb.append("result=");
            sb.append("1");
            sb.append("&");
            sb.append("network_type=");
            sb.append(v.D(context));
            sb.append("&");
            sb.append("bidid=");
            sb.append(str2);
            if (b.a().c()) {
                b.a().a(sb.toString());
                return;
            }
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a(sb.toString(), context, str), new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str3) {
                    z.d(a.a, str3);
                }

                @Override
                public final void onFailed(String str3) {
                    z.d(a.a, str3);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(a, e.getMessage());
        }
    }

    public static void b(Context context, String str, String str2) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a("key=2000064&result=2&network_type=" + v.D(context) + "&reason=" + str2, context, str), new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str3) {
                    z.d(a.a, str3);
                }

                @Override
                public final void onFailed(String str3) {
                    z.d(a.a, str3);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(a, e.getMessage());
        }
    }
}
