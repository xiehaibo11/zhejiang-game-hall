package com.kuaishou.weapon.p0;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;

/* JADX INFO: loaded from: classes2.dex */
public class cz {
    private static volatile cz b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2755a;
    private Application.ActivityLifecycleCallbacks c;
    private boolean d;

    private cz(Context context) {
        this.f2755a = context;
    }

    public static cz a(Context context) {
        if (b == null) {
            synchronized (cz.class) {
                if (b == null) {
                    b = new cz(context);
                }
            }
        }
        return b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        try {
            if (this.f2755a == null) {
                return;
            }
            h hVarA = h.a(this.f2755a, "re_po_rt");
            if (hVarA.b(df.w, 0) == 0) {
                return;
            }
            final int[] iArr = {0};
            final int[] iArr2 = {hVarA.b(df.k, 1)};
            if (this.f2755a instanceof Application) {
                Application.ActivityLifecycleCallbacks activityLifecycleCallbacks = new Application.ActivityLifecycleCallbacks() { // from class: com.kuaishou.weapon.p0.cz.2
                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivityCreated(Activity activity, Bundle bundle) {
                    }

                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivityDestroyed(Activity activity) {
                    }

                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivityPaused(Activity activity) {
                        try {
                            int[] iArr3 = iArr;
                            iArr3[0] = iArr3[0] + 1;
                            n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.cz.2.1
                                @Override // java.lang.Runnable
                                public void run() {
                                    if (iArr[0] < 20 && iArr2[0] <= 0) {
                                        ((Application) cz.this.f2755a).unregisterActivityLifecycleCallbacks(cz.this.c);
                                        return;
                                    }
                                    iArr2[0] = r0[0] - 1;
                                    cw.a(cz.this.f2755a).a(106);
                                    dc.a(cz.this.f2755a).a(106);
                                    da.a(cz.this.f2755a).a(106, 0);
                                    cx.a(cz.this.f2755a).a(106);
                                    cy.a(cz.this.f2755a).a(106);
                                    dd.a(cz.this.f2755a).a(106);
                                }
                            });
                        } catch (Throwable unused) {
                        }
                    }

                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivityResumed(Activity activity) {
                    }

                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
                    }

                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivityStarted(Activity activity) {
                    }

                    @Override // android.app.Application.ActivityLifecycleCallbacks
                    public void onActivityStopped(Activity activity) {
                    }
                };
                this.c = activityLifecycleCallbacks;
                ((Application) this.f2755a).registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
            }
        } catch (Throwable unused) {
        }
    }

    public void a() {
        try {
            n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.cz.1
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        h hVarA = h.a(cz.this.f2755a, "re_po_rt");
                        boolean zE = hVarA.e("a1_p_s_p_s");
                        boolean zE2 = hVarA.e("a1_p_s_p_s_c_b");
                        if ((zE || zE2) && !cz.this.d) {
                            cz.this.d = true;
                            cz.this.b();
                        }
                    } catch (Throwable unused) {
                    }
                }
            });
        } catch (Throwable unused) {
        }
    }
}
