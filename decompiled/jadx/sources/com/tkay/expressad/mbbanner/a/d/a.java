package com.tkay.expressad.mbbanner.a.d;

import android.content.Context;
import android.os.Handler;
import com.tkay.core.common.b.m;
import com.tkay.expressad.mbbanner.a.b.d;
import com.tkay.expressad.mbbanner.a.b.e;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6988a = a.class.getSimpleName();
    private static volatile a h;
    private Context b = m.a().f();
    private com.tkay.expressad.mbbanner.a.e.a c = new com.tkay.expressad.mbbanner.a.e.a();
    private Map<String, e> d = new ConcurrentHashMap();
    private Map<String, Boolean> e = new ConcurrentHashMap();
    private Map<String, Handler> f = new ConcurrentHashMap();
    private Map<String, Integer> g = new ConcurrentHashMap();

    public static a a() {
        if (h == null) {
            synchronized (a.class) {
                if (h == null) {
                    h = new a();
                }
            }
        }
        return h;
    }

    private a() {
    }

    private void a(String str, d dVar, com.tkay.expressad.mbbanner.a.c.b bVar) {
        if (this.b == null) {
            this.c.a(bVar, "Banner Context == null!", str);
            return;
        }
        if (dVar == null || bVar == null) {
            this.c.a(bVar, "Banner request parameters or callback empty!", str);
            return;
        }
        Map<String, Boolean> map = this.e;
        if (map != null && map.containsKey(str) && this.e.get(str).booleanValue()) {
            this.c.a(bVar, "Current unit is loading!", str);
            return;
        }
        this.e.put(str, Boolean.TRUE);
        new b(this.b, b(str), bVar, this.c);
    }

    public final void a(String str, com.tkay.expressad.foundation.d.d dVar, com.tkay.expressad.mbbanner.a.c.b bVar) {
        synchronized (a()) {
            if (this.e != null && this.e.containsKey(str) && this.e.get(str).booleanValue()) {
                this.c.a(bVar, "Current unit is loading!", str);
                return;
            }
            this.e.put(str, Boolean.TRUE);
            new b(this.b, b(str), bVar, this.c).a(str, dVar, new com.tkay.expressad.mbbanner.a.c.d() { // from class: com.tkay.expressad.mbbanner.a.d.a.1
                @Override // com.tkay.expressad.mbbanner.a.c.d
                public final void a(String str2) {
                    synchronized (a.a()) {
                        a.this.e.put(str2, Boolean.FALSE);
                    }
                }
            });
        }
    }

    private e b(String str) {
        if (this.d.containsKey(str)) {
            return this.d.get(str);
        }
        String strE = com.tkay.expressad.foundation.b.b.b().e();
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(strE, str);
        if (cVarC == null) {
            cVarC = com.tkay.expressad.d.c.c(str);
        }
        e eVar = new e(str, "", cVarC.t() * 1);
        this.d.put(str, eVar);
        return eVar;
    }

    public final void a(String str) {
        if (this.f.containsKey(str)) {
            this.f.get(str).removeCallbacksAndMessages(null);
            this.f.remove(str);
        }
    }

    public final void a(int i, String str) {
        int iIntValue = this.g.containsKey(str) ? this.g.get(str).intValue() : 0;
        if (i == 1) {
            if (this.f.containsKey(str)) {
                this.f.get(str).removeCallbacksAndMessages(null);
            }
            this.g.put(str, Integer.valueOf(i));
            return;
        }
        if (i == 2) {
            if (iIntValue == 1) {
                if (this.f.containsKey(str)) {
                    this.f.get(str).removeCallbacksAndMessages(null);
                }
                this.g.put(str, Integer.valueOf(i));
                return;
            }
            return;
        }
        if (i == 3) {
            if (iIntValue == 2 || iIntValue == 4) {
                this.g.put(str, 1);
                return;
            }
            return;
        }
        if (i != 4) {
            return;
        }
        if (iIntValue == 0) {
            this.g.put(str, 0);
            return;
        }
        if (this.f.containsKey(str)) {
            this.f.get(str).removeCallbacksAndMessages(null);
        }
        this.g.put(str, Integer.valueOf(i));
    }

    public final void b() {
        Map<String, e> map = this.d;
        if (map != null) {
            map.clear();
        }
        Map<String, Boolean> map2 = this.e;
        if (map2 != null) {
            map2.clear();
        }
        Map<String, Handler> map3 = this.f;
        if (map3 != null) {
            for (Map.Entry<String, Handler> entry : map3.entrySet()) {
                if (entry.getValue() != null) {
                    entry.getValue().removeCallbacksAndMessages(null);
                }
            }
            this.f.clear();
        }
        Map<String, Integer> map4 = this.g;
        if (map4 != null) {
            map4.clear();
        }
    }
}
