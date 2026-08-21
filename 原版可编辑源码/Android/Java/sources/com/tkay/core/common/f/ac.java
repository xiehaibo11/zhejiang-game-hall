package com.tkay.core.common.f;

import com.tkay.core.api.TYAdInfo;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class ac {
    private Map<String, Object> b;
    private c c;
    private Map<String, String> d;
    private boolean f;
    private Map<String, String> h;
    private String g = "";
    final Object a = new Object();
    private Map<String, com.tkay.core.common.f> e = new ConcurrentHashMap(1);

    public final Object a() {
        return this.a;
    }

    public final com.tkay.core.common.f a(String str) {
        return this.e.get(str);
    }

    public final void a(String str, com.tkay.core.common.f fVar) {
        this.e.put(str, fVar);
    }

    public final Map<String, Object> b() {
        return this.b;
    }

    public final void a(Map<String, Object> map) {
        this.b = map;
    }

    public final void a(String str, Object obj) {
        if (this.b == null) {
            this.b = new ConcurrentHashMap(2);
        }
        this.b.put(str, obj);
    }

    public final c c() {
        return this.c;
    }

    public final void a(TYAdInfo tYAdInfo) {
        if (tYAdInfo != null) {
            this.c = new c(tYAdInfo.getAdsourceId(), tYAdInfo.getShowId(), tYAdInfo.getNetworkFirmId());
        } else {
            this.c = null;
        }
    }

    public final String b(String str) {
        Map<String, String> map = this.d;
        return map == null ? "" : map.remove(str);
    }

    public final void a(String str, String str2) {
        synchronized (this) {
            if (this.d == null) {
                this.d = new ConcurrentHashMap(2);
            }
        }
        this.d.put(str, str2);
    }

    public final void a(boolean z) {
        this.f = z;
    }

    public final boolean d() {
        return this.f;
    }

    public final String e() {
        return this.g;
    }

    public final void a(Object[] objArr) {
        this.g = com.tkay.core.common.l.h.a(objArr);
    }

    public final void b(String str, String str2) {
        if (this.h == null) {
            this.h = new ConcurrentHashMap(2);
        }
        this.h.put(str, str2);
    }

    public final String c(String str) {
        Map<String, String> map = this.h;
        if (map != null) {
            return map.get(str);
        }
        return null;
    }
}
