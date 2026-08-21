package com.xiaomi.push.service;

import com.xiaomi.push.hh;
import com.xiaomi.push.hn;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class r implements hh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final XMPushService f8387a;

    public r(XMPushService xMPushService) {
        this.f8387a = xMPushService;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String a(String str) {
        return "com.xiaomi.xmsf".equals(str) ? "1000271" : this.f8387a.getSharedPreferences("pref_registered_pkg_names", 0).getString(str, null);
    }

    @Override // com.xiaomi.push.hh
    public void a(List<hn> list, String str, String str2) {
        this.f8387a.a(new s(this, 4, str, list, str2));
    }
}
