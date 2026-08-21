package com.tkay.core.common;

import com.tkay.core.api.TYAdInfo;
import com.tkay.core.common.f.ac;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile v f6320a;
    private ConcurrentHashMap<String, ac> b = new ConcurrentHashMap<>(4);

    private v() {
    }

    public static v a() {
        if (f6320a == null) {
            synchronized (v.class) {
                if (f6320a == null) {
                    f6320a = new v();
                }
            }
        }
        return f6320a;
    }

    private synchronized ac g(String str) {
        ac acVar;
        acVar = this.b.get(str);
        if (acVar == null) {
            acVar = new ac();
            this.b.put(str, acVar);
        }
        return acVar;
    }

    public final Object a(String str) {
        return g(str).a();
    }

    public final f a(String str, String str2) {
        return g(str).a(str2);
    }

    public final void a(String str, String str2, f fVar) {
        g(str).a(str2, fVar);
    }

    public final synchronized void a(String str, Map<String, Object> map) {
        ConcurrentHashMap concurrentHashMap = null;
        if (map != null) {
            try {
                concurrentHashMap = new ConcurrentHashMap(map);
            } catch (Throwable unused) {
            }
        }
        g(str).a(concurrentHashMap);
    }

    public final synchronized Map<String, Object> b(String str) {
        HashMap map;
        map = new HashMap(2);
        Map<String, Object> mapB = g(str).b();
        if (mapB != null) {
            map.putAll(mapB);
        }
        return map;
    }

    private synchronized void a(String str, String str2, Object obj) {
        g(str).a(str2, obj);
    }

    public final void a(String str, TYAdInfo tYAdInfo) {
        g(str).a(tYAdInfo);
    }

    public final com.tkay.core.common.f.c c(String str) {
        return g(str).c();
    }

    public final void d(String str) {
        g(str).a((TYAdInfo) null);
    }

    public final void a(String str, String str2, String str3) {
        g(str).a(str2, str3);
    }

    public final String b(String str, String str2) {
        return g(str).b(str2);
    }

    public final boolean e(String str) {
        return g(str).d();
    }

    public final void a(String str, boolean z) {
        g(str).a(z);
    }

    public final void a(String str, Object[] objArr) {
        g(str).a(objArr);
    }

    public final String f(String str) {
        return g(str).e();
    }

    public final void a(String str, int i, String str2) {
        g(str).b(String.valueOf(i), str2);
    }

    public final String a(String str, int i) {
        return g(str).c(String.valueOf(i));
    }
}
