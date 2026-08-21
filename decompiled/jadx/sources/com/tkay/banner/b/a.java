package com.tkay.banner.b;

import android.text.TextUtils;
import com.tkay.banner.a.d;
import com.tkay.core.c.e;
import com.tkay.core.common.b.m;
import java.lang.ref.WeakReference;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5554a;
    WeakReference<d> b;
    Timer c;
    private boolean d = false;

    public a(d dVar) {
        this.b = new WeakReference<>(dVar);
    }

    public final void a(String str) {
        this.f5554a = str;
    }

    public final boolean a() {
        return this.d;
    }

    public final synchronized void b() {
        if (TextUtils.isEmpty(this.f5554a)) {
            return;
        }
        com.tkay.core.c.d dVarA = e.a(m.a().f()).a(this.f5554a);
        if (this.c != null) {
            this.c.cancel();
        }
        if (dVarA != null && dVarA.W() == 1) {
            this.d = true;
            this.c = new Timer();
            long jX = dVarA.X() > 5000 ? dVarA.X() : 5000L;
            this.c.schedule(new AnonymousClass1(), jX, jX);
        }
    }

    public final boolean c() {
        return this.c == null;
    }

    /* JADX INFO: renamed from: com.tkay.banner.b.a$1, reason: invalid class name */
    final class AnonymousClass1 extends TimerTask {
        AnonymousClass1() {
        }

        @Override // java.util.TimerTask, java.lang.Runnable
        public final void run() {
            a.a(a.this);
        }
    }

    private TimerTask e() {
        return new AnonymousClass1();
    }

    private void f() {
        WeakReference<d> weakReference = this.b;
        d dVar = weakReference != null ? weakReference.get() : null;
        if (dVar != null) {
            dVar.timeUpRefreshView();
        } else {
            d();
        }
    }

    public final synchronized void d() {
        if (this.c != null) {
            this.c.cancel();
        }
        this.c = null;
    }

    static /* synthetic */ void a(a aVar) {
        WeakReference<d> weakReference = aVar.b;
        d dVar = weakReference != null ? weakReference.get() : null;
        if (dVar != null) {
            dVar.timeUpRefreshView();
        } else {
            aVar.d();
        }
    }
}
