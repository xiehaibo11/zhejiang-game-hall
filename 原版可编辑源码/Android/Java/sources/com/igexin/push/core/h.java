package com.igexin.push.core;

public class h {
    private static h d;
    public long a = com.heytap.mcssdk.constant.a.j;
    private k b = k.a;
    private long c = 0;

    private h() {
    }

    public static h a() {
        if (d == null) {
            d = new h();
        }
        return d;
    }

    private void b(j jVar) {
        k kVar;
        int i = i.b[jVar.ordinal()];
        if (i == 1) {
            a(Math.min(this.a + 60000, 420000L));
        } else {
            if (i == 2 || i == 3) {
                long j = this.c + 1;
                this.c = j;
                if (j >= 2) {
                    a(Math.max(this.a - 60000, com.heytap.mcssdk.constant.a.j));
                    kVar = k.b;
                    a(kVar);
                }
                return;
            }
            if (i != 4) {
                return;
            } else {
                a(com.heytap.mcssdk.constant.a.j);
            }
        }
        kVar = k.a;
        a(kVar);
    }

    private void c(j jVar) {
        k kVar;
        int i = i.b[jVar.ordinal()];
        if (i == 1) {
            kVar = k.b;
        } else if (i == 2 || i == 3) {
            a(Math.max(this.a - 60000, com.heytap.mcssdk.constant.a.j));
            long j = this.c + 1;
            this.c = j;
            if (j < 2) {
                return;
            }
            a(com.heytap.mcssdk.constant.a.j);
            kVar = k.c;
        } else {
            if (i != 4) {
                return;
            }
            a(com.heytap.mcssdk.constant.a.j);
            kVar = k.a;
        }
        a(kVar);
    }

    private void d(j jVar) {
        k kVar;
        int i = i.b[jVar.ordinal()];
        if (i == 1) {
            a(com.heytap.mcssdk.constant.a.j);
            kVar = k.a;
        } else if (i == 2 || i == 3) {
            kVar = k.c;
        } else {
            if (i != 4) {
                return;
            }
            a(com.heytap.mcssdk.constant.a.j);
            kVar = k.a;
        }
        a(kVar);
    }

    public void a(long j) {
        this.a = j;
    }

    public void a(j jVar) {
        int i = i.a[this.b.ordinal()];
        if (i == 1) {
            b(jVar);
        } else if (i == 2) {
            c(jVar);
        } else {
            if (i != 3) {
                return;
            }
            d(jVar);
        }
    }

    public void a(k kVar) {
        this.b = kVar;
        this.c = 0L;
    }

    public long b() {
        long j = this.a;
        if (com.igexin.push.config.j.d > 0) {
            j = com.igexin.push.config.j.d * 1000;
        }
        if (d.i && d.n && c.a().i().a()) {
            return j;
        }
        return 3600000L;
    }
}
