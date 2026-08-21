package com.huawei.hms.hatool;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public final class i {
    public static Map<String, m> b = new HashMap();
    public static i c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public l f2098a = new l();

    public static i c() {
        if (c == null) {
            d();
        }
        return c;
    }

    public static synchronized void d() {
        if (c == null) {
            c = new i();
        }
    }

    public m a(String str) {
        return b.get(str);
    }

    public Set<String> a() {
        return b.keySet();
    }

    public void a(String str, m mVar) {
        b.put(str, mVar);
    }

    public l b() {
        return this.f2098a;
    }
}
