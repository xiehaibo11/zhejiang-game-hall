package com.igexin.push.c;

import android.text.TextUtils;
import com.igexin.push.config.SDKUrlConfig;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static final String f = "DT_" + a.class.getName();
    protected int c;
    protected volatile long d;
    protected volatile long e;
    private int g;
    private int h;
    private int i;
    private j j;
    private boolean p;
    private final List<e> k = new ArrayList();
    private final List<j> l = new ArrayList();
    private final Object m = new Object();
    private final Object n = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile d f2468a = d.NORMAL;
    private int o = 0;
    public AtomicBoolean b = new AtomicBoolean(false);
    private final Comparator<j> q = new b(this);

    /* JADX WARN: Removed duplicated region for block: B:22:0x0081 A[Catch: all -> 0x00b4, TryCatch #0 {, blocks: (B:3:0x0001, B:5:0x0021, B:6:0x0025, B:24:0x00a5, B:13:0x0037, B:15:0x003b, B:16:0x003e, B:18:0x0047, B:19:0x004d, B:20:0x0074, B:22:0x0081, B:23:0x0086), top: B:30:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized void a(com.igexin.push.c.d r5) {
        /*
            r4 = this;
            monitor-enter(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> Lb4
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = "|set domain type = "
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb4
            r0.append(r5)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb4
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.d r0 = r4.f2468a     // Catch: java.lang.Throwable -> Lb4
            if (r0 == r5) goto L25
            r0 = 0
            r4.a(r0)     // Catch: java.lang.Throwable -> Lb4
        L25:
            int[] r0 = com.igexin.push.c.c.f2470a     // Catch: java.lang.Throwable -> Lb4
            int r2 = r5.ordinal()     // Catch: java.lang.Throwable -> Lb4
            r0 = r0[r2]     // Catch: java.lang.Throwable -> Lb4
            r2 = 1
            if (r0 == r2) goto L74
            r3 = 2
            if (r0 == r3) goto L3e
            r3 = 3
            if (r0 == r3) goto L37
            goto La5
        L37:
            com.igexin.push.c.d r0 = r4.f2468a     // Catch: java.lang.Throwable -> Lb4
            if (r0 == r5) goto L74
            r4.o = r1     // Catch: java.lang.Throwable -> Lb4
            goto L74
        L3e:
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.b     // Catch: java.lang.Throwable -> Lb4
            r0.set(r2)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.d r0 = r4.f2468a     // Catch: java.lang.Throwable -> Lb4
            if (r0 == r5) goto L4d
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb4
            r4.d = r2     // Catch: java.lang.Throwable -> Lb4
        L4d:
            java.lang.String[] r0 = com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK     // Catch: java.lang.Throwable -> Lb4
            r0 = r0[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.config.SDKUrlConfig.setCmAddress(r0)     // Catch: java.lang.Throwable -> Lb4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = "|set domain type backup cm = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.config.SDKUrlConfig.getCmAddress()     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lb4
            goto La5
        L74:
            r4.g = r1     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r4.c(r2)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.config.SDKUrlConfig.setCmAddress(r0)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.d r0 = com.igexin.push.c.d.NORMAL     // Catch: java.lang.Throwable -> Lb4
            if (r5 != r0) goto L86
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.b     // Catch: java.lang.Throwable -> Lb4
            r0.set(r1)     // Catch: java.lang.Throwable -> Lb4
        L86:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = "|set domain type normal cm = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.config.SDKUrlConfig.getCmAddress()     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lb4
        La5:
            r4.f2468a = r5     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.i r5 = com.igexin.push.c.i.a()     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.m r5 = r5.f()     // Catch: java.lang.Throwable -> Lb4
            r5.n()     // Catch: java.lang.Throwable -> Lb4
            monitor-exit(r4)
            return
        Lb4:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.c.a.a(com.igexin.push.c.d):void");
    }

    private void a(String str) {
        try {
            JSONArray jSONArray = new JSONArray(str);
            for (int i = 0; i < jSONArray.length(); i++) {
                this.k.add(new e().a(jSONArray.getJSONObject(i)));
            }
            com.igexin.b.a.c.b.a(f + "|get cm from cache, isWifi = " + this.p + ", lastCmList = " + str, new Object[0]);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f + "|" + th.toString(), new Object[0]);
        }
    }

    private String b(boolean z) {
        try {
            synchronized (this.n) {
                String str = this.p ? com.igexin.push.core.d.aj : com.igexin.push.core.d.ak;
                if (this.k.isEmpty() && TextUtils.isEmpty(str)) {
                    com.igexin.b.a.c.b.a(f + "cm list size = 0", new Object[0]);
                    this.i = 0;
                    this.h = 0;
                    return null;
                }
                if (this.k.isEmpty() && !TextUtils.isEmpty(str)) {
                    a(str);
                }
                com.igexin.b.a.c.b.a(f + "cm try = " + this.i + " times", new Object[0]);
                if (this.i >= this.k.size() * 2) {
                    com.igexin.b.a.c.b.a(f + "cm invalid", new Object[0]);
                    this.i = 0;
                    this.h = 0;
                    this.k.clear();
                    return null;
                }
                long jCurrentTimeMillis = System.currentTimeMillis();
                Iterator<e> it = this.k.iterator();
                while (it.hasNext()) {
                    e next = it.next();
                    if (next.b < jCurrentTimeMillis) {
                        com.igexin.b.a.c.b.a(f + "|add[" + next.f2472a + "] outDate", new Object[0]);
                        it.remove();
                    }
                }
                d();
                if (this.k.isEmpty()) {
                    return null;
                }
                if (z) {
                    this.i++;
                }
                int i = this.h >= this.k.size() ? 0 : this.h;
                this.h = i;
                String str2 = this.k.get(i).f2472a;
                this.h++;
                return str2;
            }
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(f + "|" + e.toString(), new Object[0]);
            return null;
        }
    }

    private String c(boolean z) {
        String strB;
        synchronized (this.m) {
            int i = this.g >= this.l.size() ? 0 : this.g;
            this.g = i;
            j jVar = this.l.get(i);
            this.j = jVar;
            strB = jVar.b(z);
        }
        return strB;
    }

    private void j() {
        d dVar;
        com.igexin.b.a.c.b.a(f + "|before disconnect, type = " + this.f2468a, new Object[0]);
        int i = c.f2470a[this.f2468a.ordinal()];
        if (i != 1) {
            if (i != 2 || System.currentTimeMillis() - this.d <= com.igexin.push.config.j.g) {
                return;
            } else {
                dVar = d.TRY_NORMAL;
            }
        } else if (System.currentTimeMillis() - this.e <= 86400000 || this.c <= com.igexin.push.config.j.i) {
            return;
        } else {
            dVar = d.BACKUP;
        }
        a(dVar);
    }

    public void a(List<e> list) {
        synchronized (this.n) {
            this.h = 0;
            this.i = 0;
            this.k.clear();
            if (list != null) {
                this.k.addAll(list);
                com.igexin.b.a.c.b.a(f + "|set cm list: " + list.toString(), new Object[0]);
            }
            d();
        }
    }

    public void a(boolean z) {
        this.p = z;
    }

    public boolean a() {
        boolean z;
        String strB;
        try {
            z = true;
            boolean z2 = !com.igexin.push.core.c.a().i().h();
            strB = b(z2);
            com.igexin.b.a.c.b.a(f + "|get from cm = " + strB, new Object[0]);
            if (strB == null) {
                if (this.f2468a == d.BACKUP) {
                    this.g = this.g >= SDKUrlConfig.XFR_ADDRESS_BAK.length ? 0 : this.g;
                    strB = SDKUrlConfig.XFR_ADDRESS_BAK[this.g];
                    this.g++;
                } else {
                    if (this.j != null && !this.j.f()) {
                        this.g++;
                    }
                    strB = c(z2);
                }
                z = false;
            }
        } catch (Exception e) {
            e = e;
            z = false;
        }
        try {
            if (!SDKUrlConfig.getCmAddress().equals(strB)) {
                com.igexin.b.a.c.b.a(f + "|address changed : form [" + SDKUrlConfig.getCmAddress() + "] to [" + strB + "]", new Object[0]);
            }
            SDKUrlConfig.setCmAddress(strB);
        } catch (Exception e2) {
            e = e2;
            e.printStackTrace();
            com.igexin.b.a.c.b.a(f + "|switch address|" + e.toString(), new Object[0]);
        }
        return z;
    }

    public synchronized void b() {
        this.i = 0;
        if (this.j != null) {
            this.j.g();
        }
    }

    public void b(List<j> list) {
        synchronized (this.m) {
            this.l.clear();
            this.l.addAll(list);
            Collections.sort(this.l, this.q);
        }
    }

    public synchronized void c() {
        this.c++;
        com.igexin.b.a.c.b.a(f + "|loginFailedlCnt = " + this.c, new Object[0]);
    }

    public void d() {
        JSONArray jSONArray = new JSONArray();
        Iterator<e> it = this.k.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().a());
        }
        com.igexin.push.core.b.i.a().c(jSONArray.length() == 0 ? "null" : jSONArray.toString(), !this.p);
    }

    public void e() {
        synchronized (this.m) {
            this.g = 0;
            Collections.sort(this.l, this.q);
        }
    }

    public void f() {
        com.igexin.b.a.c.b.a(f + "|detect success, current type = " + this.f2468a, new Object[0]);
        if (this.f2468a == d.BACKUP) {
            a(d.TRY_NORMAL);
            com.igexin.push.core.c.a().i().a(true);
        }
    }

    public void g() {
        if (c.f2470a[this.f2468a.ordinal()] == 2 && System.currentTimeMillis() - this.d > com.igexin.push.config.j.g) {
            a(d.TRY_NORMAL);
        }
    }

    public void h() {
        if (this.f2468a != d.BACKUP) {
            this.c = 0;
        }
        int i = c.f2470a[this.f2468a.ordinal()];
        if (i == 1) {
            this.e = System.currentTimeMillis();
            i.a().f().n();
        } else if (i != 3) {
            return;
        } else {
            a(d.NORMAL);
        }
        this.b.set(false);
    }

    public void i() {
        j();
        if (com.igexin.push.core.d.n && this.f2468a != d.BACKUP) {
            this.e = System.currentTimeMillis();
            i.a().f().n();
        }
        if (c.f2470a[this.f2468a.ordinal()] != 3) {
            return;
        }
        int i = this.o + 1;
        this.o = i;
        if (i >= 10) {
            this.c = 0;
            this.d = System.currentTimeMillis();
            a(d.BACKUP);
        }
    }
}
