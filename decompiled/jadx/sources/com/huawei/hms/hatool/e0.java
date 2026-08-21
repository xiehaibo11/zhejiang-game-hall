package com.huawei.hms.hatool;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class e0 {
    public static e0 b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile Map<String, f0> f2091a = new HashMap();

    public static e0 a() {
        if (b == null) {
            b();
        }
        return b;
    }

    public static synchronized void b() {
        if (b == null) {
            b = new e0();
        }
    }

    public final f0 a(String str) {
        if (!this.f2091a.containsKey(str)) {
            this.f2091a.put(str, new f0());
        }
        return this.f2091a.get(str);
    }

    public f0 a(String str, long j) {
        f0 f0VarA = a(str);
        f0VarA.a(j);
        return f0VarA;
    }
}
