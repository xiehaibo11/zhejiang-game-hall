package com.igexin.push.core.d;

import android.content.Context;
import android.os.Build;

/* JADX INFO: loaded from: classes2.dex */
class e implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final c f2569a;

    protected e() {
        this.f2569a = Build.VERSION.SDK_INT >= 30 ? new a() : new b();
        com.igexin.b.a.c.b.a("SDCardWrapper|SDCardWrapper.mBase = " + this.f2569a.getClass(), new Object[0]);
    }

    @Override // com.igexin.push.core.d.c
    public String a(Context context) {
        try {
            return this.f2569a.a(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|getDeviceId()|" + th.toString(), new Object[0]);
            return null;
        }
    }

    @Override // com.igexin.push.core.d.c
    public void a(Context context, long j) {
        try {
            this.f2569a.a(context, j);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|saveSession()|" + th.toString(), new Object[0]);
        }
    }

    @Override // com.igexin.push.core.d.c
    public void a(Context context, String str) {
        try {
            this.f2569a.a(context, str);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|saveDeviceId()|" + th.toString(), new Object[0]);
        }
    }

    @Override // com.igexin.push.core.d.c
    public String b(Context context) {
        try {
            return this.f2569a.b(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|getCid()|" + th.toString(), new Object[0]);
            return null;
        }
    }

    @Override // com.igexin.push.core.d.c
    public void b(Context context, String str) {
        try {
            this.f2569a.b(context, str);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|saveCid()|" + th.toString(), new Object[0]);
        }
    }

    @Override // com.igexin.push.core.d.c
    public long c(Context context) {
        try {
            return this.f2569a.c(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("SDCardWrapper|getSession()|" + th.toString(), new Object[0]);
            return 0L;
        }
    }
}
