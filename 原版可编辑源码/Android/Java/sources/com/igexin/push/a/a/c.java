package com.igexin.push.a.a;

import com.igexin.push.config.j;
import java.util.Calendar;

public class c implements com.igexin.push.f.b.c {
    private static c c;
    private long a = 0;
    private long b = 0;
    private boolean d = false;

    private c() {
    }

    public static c c() {
        if (c == null) {
            c = new c();
        }
        return c;
    }

    @Override
    public void a() {
        d();
    }

    @Override
    public void a(long j) {
        this.a = j;
    }

    @Override
    public boolean b() {
        return System.currentTimeMillis() - this.a > this.b;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x007c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void d() {
        this.b = 3600000L;
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (j.b != 0) {
            Calendar calendar = Calendar.getInstance();
            if (com.igexin.push.util.a.a(jCurrentTimeMillis)) {
                if (!this.d) {
                    this.d = true;
                    com.igexin.push.core.c.a().i().c();
                }
                calendar.set(11, j.a + j.b > 24 ? (j.a + j.b) - 24 : j.a + j.b);
                calendar.set(12, 0);
                calendar.set(13, 0);
                if (calendar.getTimeInMillis() < jCurrentTimeMillis) {
                    calendar.add(5, 1);
                }
                this.b = calendar.getTimeInMillis() - jCurrentTimeMillis;
            } else {
                if (this.d) {
                    this.d = false;
                    com.igexin.push.core.c.a().i().b();
                }
                calendar.set(11, j.a);
                calendar.set(12, 0);
                calendar.set(13, 0);
                if (calendar.getTimeInMillis() < jCurrentTimeMillis) {
                }
                this.b = calendar.getTimeInMillis() - jCurrentTimeMillis;
            }
        } else if (this.d) {
            this.d = false;
            com.igexin.push.core.c.a().i().b();
        }
        if (j.c > this.b + jCurrentTimeMillis) {
            this.b = j.c - jCurrentTimeMillis;
            if (this.d) {
                return;
            }
            this.d = true;
            com.igexin.push.core.c.a().i().c();
        }
    }
}
