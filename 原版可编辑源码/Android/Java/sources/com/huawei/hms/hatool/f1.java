package com.huawei.hms.hatool;

import android.content.Context;

public final class f1 {
    public static f1 b;
    public static final Object c = new Object();
    public Context a;

    static {
        new String[]{"ABTesting", "_default_config_tag", "_openness_config_tag", "_hms_config_tag"};
    }

    public static f1 a() {
        if (b == null) {
            b();
        }
        return b;
    }

    public static synchronized void b() {
        if (b == null) {
            b = new f1();
        }
    }

    public void a(Context context) {
        synchronized (c) {
            if (this.a != null) {
                y.f("hmsSdk", "DataManager already initialized.");
                return;
            }
            this.a = context;
            i.c().b().a(this.a);
            i.c().b().g(context.getPackageName());
            x0.a().a(context);
        }
    }

    public void a(String str) {
        y.c("hmsSdk", "HiAnalyticsDataManager.setAppid(String appid) is execute.");
        Context context = this.a;
        if (context == null) {
            y.e("hmsSdk", "sdk is not init");
        } else {
            i.c().b().f(q0.a(com.heytap.mcssdk.constant.b.u, str, "[a-zA-Z0-9_][a-zA-Z0-9. _-]{0,255}", context.getPackageName()));
        }
    }
}
