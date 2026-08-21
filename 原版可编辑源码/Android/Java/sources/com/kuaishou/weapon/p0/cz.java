package com.kuaishou.weapon.p0;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;

public class cz {
    private static volatile cz b;
    private Context a;
    private Application.ActivityLifecycleCallbacks c;
    private boolean d;

    private cz(Context context) {
        this.a = context;
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

    private void b() {
        try {
            if (this.a == null) {
                return;
            }
            h hVarA = h.a(this.a, "re_po_rt");
            if (hVarA.b(df.w, 0) == 0) {
                return;
            }
            final int[] iArr = {0};
            final int[] iArr2 = {hVarA.b(df.k, 1)};
            if (this.a instanceof Application) {
                Application.ActivityLifecycleCallbacks activityLifecycleCallbacks = new Application.ActivityLifecycleCallbacks() {
                    @Override
                    public void onActivityCreated(Activity activity, Bundle bundle) {
                    }

                    @Override
                    public void onActivityDestroyed(Activity activity) {
                    }

                    @Override
                    public void onActivityPaused(Activity activity) {
                        try {
                            int[] iArr3 = iArr;
                            iArr3[0] = iArr3[0] + 1;
                            n.a().a(new Runnable() {
                                @Override
                                public void run() {
                                    if (iArr[0] < 20 && iArr2[0] <= 0) {
                                        ((Application) cz.this.a).unregisterActivityLifecycleCallbacks(cz.this.c);
                                        return;
                                    }
                                    iArr2[0] = r0[0] - 1;
                                    cw.a(cz.this.a).a(106);
                                    dc.a(cz.this.a).a(106);
                                    da.a(cz.this.a).a(106, 0);
                                    cx.a(cz.this.a).a(106);
                                    cy.a(cz.this.a).a(106);
                                    dd.a(cz.this.a).a(106);
                                }
                            });
                        } catch (Throwable unused) {
                        }
                    }

                    @Override
                    public void onActivityResumed(Activity activity) {
                    }

                    @Override
                    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
                    }

                    @Override
                    public void onActivityStarted(Activity activity) {
                    }

                    @Override
                    public void onActivityStopped(Activity activity) {
                    }
                };
                this.c = activityLifecycleCallbacks;
                ((Application) this.a).registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
            }
        } catch (Throwable unused) {
        }
    }

    public void a() {
        try {
            n.a().a(new Runnable() {
                @Override
                public void run() {
                    try {
                        h hVarA = h.a(cz.this.a, "re_po_rt");
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
