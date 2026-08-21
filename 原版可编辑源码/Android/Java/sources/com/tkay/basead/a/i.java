package com.tkay.basead.a;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import com.tkay.core.common.b.m;

public final class i implements com.tkay.core.common.g.b {
    com.tkay.basead.d a;
    Context b = m.a().f();

    @Override
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
            final com.tkay.basead.a aVar = new com.tkay.basead.a() {
                @Override
                public final void onActivityResumed(Activity activity) {
                    super.onActivityResumed(activity);
                    if (i.this.a != null) {
                        i.this.a.a();
                    }
                }

                @Override
                public final void onActivityPaused(Activity activity) {
                    super.onActivityPaused(activity);
                    if (i.this.a != null) {
                        i.this.a.b();
                    }
                }
            };
            this.a = new com.tkay.basead.d(I, new Runnable() {
                @Override
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
