package com.huawei.hms.hatool;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public final class f1 {
    public static f1 b;
    public static final Object c = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Context f2094a;

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
            if (this.f2094a != null) {
                y.f("hmsSdk", "DataManager already initialized.");
                return;
            }
            this.f2094a = context;
            i.c().b().a(this.f2094a);
            i.c().b().g(context.getPackageName());
            x0.a().a(context);
        }
    }

    public void a(String str) {
        y.c("hmsSdk", "HiAnalyticsDataManager.setAppid(String appid) is execute.");
        Context context = this.f2094a;
        if (context == null) {
            y.e("hmsSdk", "sdk is not init");
        } else {
            i.c().b().f(q0.a(com.heytap.mcssdk.constant.b.u, str, "[a-zA-Z0-9_][a-zA-Z0-9. _-]{0,255}", context.getPackageName()));
        }
    }
}
