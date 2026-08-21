package com.tkay.basead.a;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.view.View;
import com.tkay.basead.ui.BaseATActivity;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.u;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.basead.d f5556a;
    com.tkay.core.common.l.a.c b;
    private View d;
    private com.tkay.core.common.f.i e;
    private InterfaceC0383a f;
    private Application.ActivityLifecycleCallbacks i;
    private final String c = getClass().getSimpleName();
    private Activity g = null;
    private boolean h = false;

    /* JADX INFO: renamed from: com.tkay.basead.a.a$a, reason: collision with other inner class name */
    public interface InterfaceC0383a {
        void a(int i);
    }

    public a(View view, com.tkay.core.common.f.i iVar, InterfaceC0383a interfaceC0383a) {
        this.d = view;
        this.e = iVar;
        this.f = interfaceC0383a;
        final Context applicationContext = view.getContext().getApplicationContext();
        applicationContext = applicationContext instanceof Application ? applicationContext : m.a().f();
        com.tkay.basead.a aVar = new com.tkay.basead.a() { // from class: com.tkay.basead.a.a.1
            @Override // com.tkay.basead.a, android.app.Application.ActivityLifecycleCallbacks
            public final void onActivityResumed(Activity activity) {
                if (a.this.g == null && (activity instanceof BaseATActivity)) {
                    a.this.g = activity;
                }
                if (a.this.g == activity || a.b(a.this)) {
                    a.c(a.this);
                }
            }

            @Override // com.tkay.basead.a, android.app.Application.ActivityLifecycleCallbacks
            public final void onActivityPaused(Activity activity) {
                if (a.this.g == activity || a.b(a.this)) {
                    a.this.f5556a.b();
                }
            }

            @Override // com.tkay.basead.a, android.app.Application.ActivityLifecycleCallbacks
            public final void onActivityDestroyed(Activity activity) {
                if ((a.this.g == activity || a.b(a.this)) && a.this.i != null) {
                    ((Application) applicationContext).unregisterActivityLifecycleCallbacks(a.this.i);
                    a.this.i = null;
                }
            }
        };
        this.i = aVar;
        try {
            ((Application) applicationContext).registerActivityLifecycleCallbacks(aVar);
        } catch (Exception unused) {
            com.tkay.core.common.k.c.a("Error", "Error, cannot registerActivityLifecycleCallbacks here!", m.a().q());
        }
        this.f5556a = new com.tkay.basead.d(this.e.m.G(), new Runnable() { // from class: com.tkay.basead.a.a.2
            @Override // java.lang.Runnable
            public final void run() {
                a.this.a(2);
            }
        });
    }

    public final void a() {
        this.h = true;
        com.tkay.core.common.f.j jVar = this.e.m;
        if (jVar.F() != 2 || jVar.G() < 0) {
            return;
        }
        this.f5556a.a();
    }

    public final void b() {
        if (this.i != null) {
            ((Application) m.a().f()).unregisterActivityLifecycleCallbacks(this.i);
            this.i = null;
        }
        this.f5556a.c();
        com.tkay.core.common.l.a.c cVar = this.b;
        if (cVar != null) {
            cVar.b();
        }
    }

    private boolean d() {
        return this.e.j == 4;
    }

    public final void c() {
        if (this.e.m.F() == 3) {
            a(3);
        }
    }

    private void e() {
        if (this.h) {
            a();
        }
    }

    private void f() {
        this.f5556a.b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final int i) {
        int i2;
        View view;
        View view2;
        boolean z = false;
        if (i != 2 || ((i2 = this.e.j) == 0 || i2 == 2 ? !((view = this.d) == null || view.getParent() == null || !this.d.isShown() || !u.b(this.d)) : !((view2 = this.d) == null || view2.getParent() == null || !this.d.isShown()))) {
            z = true;
        }
        if (z) {
            b(i);
            return;
        }
        if (this.e.j == 2 || this.e.j == 0) {
            com.tkay.core.common.l.a.a aVar = new com.tkay.core.common.l.a.a() { // from class: com.tkay.basead.a.a.3
                @Override // com.tkay.core.common.l.a.a, com.tkay.core.common.l.a.b
                public final int getImpressionMinPercentageViewed() {
                    return 30;
                }

                @Override // com.tkay.core.common.l.a.a, com.tkay.core.common.l.a.b
                public final void recordImpression(View view3) {
                    a.this.b(i);
                }
            };
            if (this.b == null) {
                this.d.getContext();
                this.b = new com.tkay.core.common.l.a.c();
            }
            this.b.a(this.d, aVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(final int i) {
        if (this.f != null) {
            m.a().a(new Runnable() { // from class: com.tkay.basead.a.a.4
                @Override // java.lang.Runnable
                public final void run() {
                    a.this.f.a(i);
                }
            });
        }
    }

    static /* synthetic */ boolean b(a aVar) {
        return aVar.e.j == 4;
    }

    static /* synthetic */ void c(a aVar) {
        if (aVar.h) {
            aVar.a();
        }
    }
}
