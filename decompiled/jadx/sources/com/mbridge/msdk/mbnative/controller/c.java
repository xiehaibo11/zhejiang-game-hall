package com.mbridge.msdk.mbnative.controller;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.d.r;
import java.util.List;

/* JADX INFO: compiled from: NativeVideoTrackingReport.java */
/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3789a = c.class.getName();

    public static void a(Context context, String str) {
        if (context != null) {
            try {
                t tVarA = t.a(i.a(context));
                if (TextUtils.isEmpty(str) || tVarA == null || tVarA.a() <= 0) {
                    return;
                }
                List<p> listA = tVarA.a(r.d);
                List<p> listA2 = tVarA.a(r.b);
                List<p> listA3 = tVarA.a(r.k);
                String strA = p.a(listA2);
                String strB = p.b(listA);
                String strC = p.c(listA3);
                StringBuilder sb = new StringBuilder();
                if (!TextUtils.isEmpty(strA)) {
                    sb.append(strA);
                }
                if (!TextUtils.isEmpty(strB)) {
                    sb.append(strB);
                }
                if (!TextUtils.isEmpty(strC)) {
                    sb.append(strC);
                }
                if (TextUtils.isEmpty(sb.toString())) {
                    return;
                }
                String string = sb.toString();
                if (context == null || TextUtils.isEmpty(string) || TextUtils.isEmpty(str)) {
                    return;
                }
                try {
                    new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, e.a(string, context, str), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.mbnative.controller.c.1
                        @Override // com.mbridge.msdk.foundation.same.report.d.b
                        public final void onSuccess(String str2) {
                            z.d(c.f3789a, str2);
                        }

                        @Override // com.mbridge.msdk.foundation.same.report.d.b
                        public final void onFailed(String str2) {
                            z.d(c.f3789a, str2);
                        }
                    });
                } catch (Exception e) {
                    e.printStackTrace();
                    z.d(f3789a, e.getMessage());
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }
}
