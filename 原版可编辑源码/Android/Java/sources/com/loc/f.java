package com.loc;

import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.os.Messenger;

public final class f {
    e a;
    Context b;
    Messenger c = null;

    public f(Context context) {
        this.a = null;
        this.b = null;
        this.b = context.getApplicationContext();
        this.a = new e(this.b);
    }

    public final IBinder a(Intent intent) {
        this.a.b(intent);
        this.a.a(intent);
        Messenger messenger = new Messenger(this.a.b());
        this.c = messenger;
        return messenger.getBinder();
    }

    public final void a() {
        try {
            e.d();
            this.a.j = fz.b();
            this.a.k = fz.a();
            this.a.a();
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "onCreate");
        }
    }

    public final int b() {
        e eVar = this.a;
        return (eVar == null || eVar.n.isSelfStartServiceEnable()) ? 0 : 2;
    }

    public final void c() {
        try {
            if (this.a != null) {
                this.a.b().sendEmptyMessage(11);
            }
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "onDestroy");
        }
    }
}
