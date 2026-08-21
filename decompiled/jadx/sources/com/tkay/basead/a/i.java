package com.tkay.basead.a;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import com.tkay.core.common.b.m;

/* JADX INFO: loaded from: classes3.dex */
public final class i implements com.tkay.core.common.g.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.basead.d f5594a;
    Context b = m.a().f();

    @Override // com.tkay.core.common.g.b
    public final void a(final com.tkay.core.common.f.h hVar, final String str, final String str2, boolean z) {
        if (z) {
            b.a(this.b, hVar);
            return;
        }
        com.tkay.core.common.f.j jVarK = hVar.k();
        if (jVarK == null) {
            return;
        }
        int iH = jVarK.H();
        int I = jVarK.I();
        if (iH != 1) {
            if (iH != 3) {
                return;
            }
            com.tkay.core.common.b.a().a("1", new com.tkay.basead.c.g(hVar, str2, str));
        } else {
            final com.tkay.basead.a aVar = new com.tkay.basead.a() { // from class: com.tkay.basead.a.i.1
                @Override // com.tkay.basead.a, android.app.Application.ActivityLifecycleCallbacks
                public final void onActivityResumed(Activity activity) {
                    super.onActivityResumed(activity);
                    if (i.this.f5594a != null) {
                        i.this.f5594a.a();
                    }
                }

                @Override // com.tkay.basead.a, android.app.Application.ActivityLifecycleCallbacks
                public final void onActivityPaused(Activity activity) {
                    super.onActivityPaused(activity);
                    if (i.this.f5594a != null) {
                        i.this.f5594a.b();
                    }
                }
            };
            this.f5594a = new com.tkay.basead.d(I, new Runnable() { // from class: com.tkay.basead.a.i.2
                @Override // java.lang.Runnable
                public final void run() {
                    ((Application) i.this.b).unregisterActivityLifecycleCallbacks(aVar);
                    if (b.a(i.this.b, hVar)) {
                        com.tkay.core.common.k.c.a(str, hVar.p(), str2, 6, (String) null, 0L, 0L);
                    }
                }
            });
            try {
                ((Application) this.b).registerActivityLifecycleCallbacks(aVar);
            } catch (Exception unused) {
                com.tkay.core.common.k.c.a("Error", "Error, cannot registerActivityLifecycleCallbacks here!", m.a().q());
            }
        }
    }
}
