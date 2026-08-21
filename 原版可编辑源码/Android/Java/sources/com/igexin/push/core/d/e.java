package com.igexin.push.core.d;

import android.content.Context;
import android.os.Build;

class e implements c {
    private final c a;

    protected e() {
        this.a = Build.VERSION.SDK_INT >= 30 ? new a() : new b();
        com.igexin.b.a.c.b.a("SDCardWrapper|SDCardWrapper.mBase = " + this.a.getClass(), new Object[0]);
    }

    @Override
    public String a(Context context) {
        try {
            return this.a.a(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|getDeviceId()|" + th.toString(), new Object[0]);
            return null;
        }
    }

    @Override
    public void a(Context context, long j) {
        try {
            this.a.a(context, j);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|saveSession()|" + th.toString(), new Object[0]);
        }
    }

    @Override
    public void a(Context context, String str) {
        try {
            this.a.a(context, str);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|saveDeviceId()|" + th.toString(), new Object[0]);
        }
    }

    @Override
    public String b(Context context) {
        try {
            return this.a.b(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|getCid()|" + th.toString(), new Object[0]);
            return null;
        }
    }

    @Override
    public void b(Context context, String str) {
        try {
            this.a.b(context, str);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|saveCid()|" + th.toString(), new Object[0]);
        }
    }

    @Override
    public long c(Context context) {
        try {
            return this.a.c(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|getSession()|" + th.toString(), new Object[0]);
            return 0L;
        }
    }
}
