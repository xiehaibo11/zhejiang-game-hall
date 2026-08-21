package com.meizu.cloud.pushsdk.d.e;

import android.content.Context;
import android.os.Build;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import com.meizu.cloud.pushsdk.d.f.e;
import java.util.HashMap;
import java.util.Map;

public class c {
    private static final String a = c.class.getSimpleName();
    private final HashMap<String, String> b;
    private final HashMap<String, Object> c;
    private final HashMap<String, String> d;

    public class a {
        private Context a = null;

        public a a(Context context) {
            this.a = context;
            return this;
        }

        public c a() {
            return new c(this);
        }
    }

    private c(a aVar) {
        this.b = new HashMap<>();
        this.c = new HashMap<>();
        this.d = new HashMap<>();
        d();
        e();
        f();
        g();
        if (aVar.a != null) {
            a(aVar.a);
        }
        com.meizu.cloud.pushsdk.d.f.c.c(a, "Subject created successfully.", new Object[0]);
    }

    private void a(String str, String str2) {
        if (str == null || str2 == null || str.isEmpty() || str2.isEmpty()) {
            return;
        }
        this.d.put(str, str2);
    }

    private void d() {
        a(com.tkay.expressad.foundation.g.a.J, "android-" + Build.VERSION.RELEASE);
    }

    private void e() {
        a(com.tkay.expressad.foundation.g.a.F, Build.DISPLAY);
    }

    private void f() {
        a("dm", Build.MODEL);
    }

    private void g() {
        a("df", Build.MANUFACTURER);
    }

    public Map<String, Object> a() {
        return this.c;
    }

    public void a(Context context) {
        b(context);
    }

    public Map<String, String> b() {
        return this.d;
    }

    public void b(Context context) {
        String strB = e.b(context);
        if (strB != null) {
            a(DownloadCommon.DOWNLOAD_REPORT_CANCEL, strB);
        }
    }

    public Map<String, String> c() {
        return this.b;
    }
}
