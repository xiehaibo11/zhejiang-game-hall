package com.alipay.sdk.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import com.alipay.sdk.m.m.a;
import com.alipay.sdk.m.s.a;
import com.alipay.sdk.m.u.h;
import com.alipay.sdk.m.u.l;
import com.alipay.sdk.m.u.n;
import java.io.IOException;
import java.util.List;
import java.util.Map;

public class AuthTask {
    public static final Object c = com.alipay.sdk.m.u.h.class;
    public Activity a;
    public com.alipay.sdk.m.x.a b;

    public class a implements h.g {
        public a() {
        }

        @Override
        public void a() {
            AuthTask.this.a();
        }

        @Override
        public void b() {
        }
    }

    public AuthTask(Activity activity) {
        this.a = activity;
        com.alipay.sdk.m.s.b.d().a(this.a);
        this.b = new com.alipay.sdk.m.x.a(activity, "去支付宝授权");
    }

    private h.g b() {
        return new a();
    }

    private void c() {
        com.alipay.sdk.m.x.a aVar = this.b;
        if (aVar != null) {
            aVar.d();
        }
    }

    public synchronized String auth(String str, boolean z) {
        return innerAuth(new com.alipay.sdk.m.s.a(this.a, str, "auth"), str, z);
    }

    public synchronized Map<String, String> authV2(String str, boolean z) {
        com.alipay.sdk.m.s.a aVar;
        aVar = new com.alipay.sdk.m.s.a(this.a, str, "authV2");
        return l.a(aVar, innerAuth(aVar, str, z));
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x00c1 A[Catch: all -> 0x0137, DONT_GENERATE, PHI: r9
      0x00c1: PHI (r9v11 java.lang.String) = (r9v2 java.lang.String), (r9v13 java.lang.String) binds: [B:16:0x00bf, B:9:0x006b] A[DONT_GENERATE, DONT_INLINE], TryCatch #1 {, blocks: (B:4:0x0003, B:5:0x0006, B:8:0x0020, B:18:0x00ca, B:17:0x00c1, B:21:0x00d6, B:23:0x0123, B:24:0x012c, B:25:0x0136, B:15:0x0074, B:7:0x001a, B:14:0x0071), top: B:31:0x0003, inners: #0, #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized String innerAuth(com.alipay.sdk.m.s.a aVar, String str, boolean z) {
        String strA;
        if (z) {
            c();
            com.alipay.sdk.m.s.b.d().a(this.a);
            strA = com.alipay.sdk.m.j.b.a();
            com.alipay.sdk.m.j.a.a("");
            try {
                try {
                    strA = a(this.a, str, aVar);
                    com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.V, "" + SystemClock.elapsedRealtime());
                    com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.W, l.a(strA, "resultStatus") + "|" + l.a(strA, "memo"));
                } catch (Exception e) {
                    com.alipay.sdk.m.u.e.a(e);
                }
                if (!com.alipay.sdk.m.m.a.D().s()) {
                }
            } finally {
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.V, "" + SystemClock.elapsedRealtime());
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.W, l.a(strA, "resultStatus") + "|" + l.a(strA, "memo"));
                if (!com.alipay.sdk.m.m.a.D().s()) {
                    com.alipay.sdk.m.m.a.D().a(aVar, this.a, false, 1);
                }
                a();
                com.alipay.sdk.m.k.a.b(this.a, aVar, str, aVar.d);
            }
        } else {
            com.alipay.sdk.m.s.b.d().a(this.a);
            strA = com.alipay.sdk.m.j.b.a();
            com.alipay.sdk.m.j.a.a("");
            strA = a(this.a, str, aVar);
            com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.V, "" + SystemClock.elapsedRealtime());
            com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.W, l.a(strA, "resultStatus") + "|" + l.a(strA, "memo"));
            if (!com.alipay.sdk.m.m.a.D().s()) {
            }
        }
        return strA;
    }

    private void a() {
        com.alipay.sdk.m.x.a aVar = this.b;
        if (aVar != null) {
            aVar.a();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x006d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String b(Activity activity, String str, com.alipay.sdk.m.s.a aVar) {
        List<com.alipay.sdk.m.r.b> listA;
        int i;
        c();
        com.alipay.sdk.m.j.c cVarB = null;
        try {
            try {
                listA = com.alipay.sdk.m.r.b.a(new com.alipay.sdk.m.q.a().a(aVar, activity, str).c().optJSONObject("form").optJSONObject("onload"));
                a();
            } finally {
                a();
            }
        } catch (IOException e) {
            com.alipay.sdk.m.j.c cVarB2 = com.alipay.sdk.m.j.c.b(com.alipay.sdk.m.j.c.f.b());
            com.alipay.sdk.m.k.a.a(aVar, "net", e);
            cVarB = cVarB2;
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(aVar, "biz", "H5AuthDataAnalysisError", th);
        }
        for (i = 0; i < listA.size(); i++) {
            if (listA.get(i).a() == com.alipay.sdk.m.r.a.c) {
                return a(aVar, listA.get(i));
            }
            if (cVarB == null) {
                cVarB = com.alipay.sdk.m.j.c.b(com.alipay.sdk.m.j.c.d.b());
            }
            return com.alipay.sdk.m.j.b.a(cVarB.b(), cVarB.a(), "");
        }
        a();
        if (cVarB == null) {
        }
        return com.alipay.sdk.m.j.b.a(cVarB.b(), cVarB.a(), "");
    }

    private String a(Activity activity, String str, com.alipay.sdk.m.s.a aVar) {
        String strA = aVar.a(str);
        List<a.b> listL = com.alipay.sdk.m.m.a.D().l();
        if (!com.alipay.sdk.m.m.a.D().h || listL == null) {
            listL = com.alipay.sdk.m.j.a.d;
        }
        if (n.a(aVar, (Context) this.a, listL, true)) {
            com.alipay.sdk.m.u.h hVar = new com.alipay.sdk.m.u.h(activity, aVar, b());
            String strA2 = hVar.a(strA, false);
            hVar.a();
            if (!TextUtils.equals(strA2, "failed") && !TextUtils.equals(strA2, "scheme_failed")) {
                return TextUtils.isEmpty(strA2) ? com.alipay.sdk.m.j.b.a() : strA2;
            }
            com.alipay.sdk.m.k.a.a(aVar, "biz", "LogBindCalledH5");
            return b(activity, strA, aVar);
        }
        com.alipay.sdk.m.k.a.a(aVar, "biz", "LogCalledH5");
        return b(activity, strA, aVar);
    }

    private String a(com.alipay.sdk.m.s.a aVar, com.alipay.sdk.m.r.b bVar) {
        String[] strArrC = bVar.c();
        Bundle bundle = new Bundle();
        bundle.putString("url", strArrC[0]);
        Intent intent = new Intent(this.a, (Class<?>) H5AuthActivity.class);
        intent.putExtras(bundle);
        a.a.a(aVar, intent);
        this.a.startActivity(intent);
        synchronized (c) {
            try {
                c.wait();
            } catch (InterruptedException unused) {
                return com.alipay.sdk.m.j.b.a();
            }
        }
        String strD = com.alipay.sdk.m.j.b.d();
        return TextUtils.isEmpty(strD) ? com.alipay.sdk.m.j.b.a() : strD;
    }
}
