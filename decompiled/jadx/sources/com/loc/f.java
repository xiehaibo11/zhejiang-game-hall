package com.loc;

import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.os.Messenger;

/* JADX INFO: compiled from: ApsServiceCore.java */
/* JADX INFO: loaded from: classes2.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    e f2964a;
    Context b;
    Messenger c = null;

    public f(Context context) {
        this.f2964a = null;
        this.b = null;
        this.b = context.getApplicationContext();
        this.f2964a = new e(this.b);
    }

    public final IBinder a(Intent intent) {
        this.f2964a.b(intent);
        this.f2964a.a(intent);
        Messenger messenger = new Messenger(this.f2964a.b());
        this.c = messenger;
        return messenger.getBinder();
    }

    public final void a() {
        try {
            e.d();
            this.f2964a.j = fz.b();
            this.f2964a.k = fz.a();
            this.f2964a.a();
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "onCreate");
        }
    }

    public final int b() {
        e eVar = this.f2964a;
        return (eVar == null || eVar.n.isSelfStartServiceEnable()) ? 0 : 2;
    }

    public final void c() {
        try {
            if (this.f2964a != null) {
                this.f2964a.b().sendEmptyMessage(11);
            }
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "onDestroy");
        }
    }
}
