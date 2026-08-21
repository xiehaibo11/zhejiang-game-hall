package com.kwad.sdk.m;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.ContextWrapper;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.s;

/* JADX INFO: loaded from: classes2.dex */
public final class l {
    private static Application aMP;

    public static Application KT() {
        checkInit();
        Application applicationKU = KU();
        if (i.KR()) {
            aMP = (Application) i.wrapContextIfNeed(applicationKU);
        }
        return aMP;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x0065  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static android.app.Application KU() {
        /*
            android.app.Application r0 = com.kwad.sdk.m.l.aMP
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r0 = r0.getApplicationContext()
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L16
            android.app.Application r0 = (android.app.Application) r0
        L13:
            com.kwad.sdk.m.l.aMP = r0
            return r0
        L16:
            boolean r1 = au(r0)
            if (r1 == 0) goto L21
            android.content.Context r0 = com.kwad.sdk.m.i.m22do(r0)
            goto L34
        L21:
            boolean r1 = com.kwad.sdk.m.j.au(r0)
            if (r1 == 0) goto L2c
            android.content.Context r0 = com.kwad.sdk.m.j.m23do(r0)
            goto L34
        L2c:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r0 = r0.getApplicationContext()
        L34:
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L3e
            r1 = r0
            android.app.Application r1 = (android.app.Application) r1
        L3b:
            com.kwad.sdk.m.l.aMP = r1
            goto L61
        L3e:
            com.kwad.sdk.core.c.b r1 = com.kwad.sdk.core.c.b.AU()
            android.app.Application r1 = r1.getApplication()
            if (r1 == 0) goto L49
            goto L3b
        L49:
            boolean r1 = r0 instanceof android.content.ContextWrapper
            if (r1 == 0) goto L61
            r1 = r0
            android.content.ContextWrapper r1 = (android.content.ContextWrapper) r1
            android.content.Context r1 = r1.getBaseContext()
            if (r1 == 0) goto L5a
            android.content.Context r1 = r1.getApplicationContext()
        L5a:
            boolean r2 = r1 instanceof android.app.Application
            if (r2 == 0) goto L61
            android.app.Application r1 = (android.app.Application) r1
            goto L3b
        L61:
            android.app.Application r1 = com.kwad.sdk.m.l.aMP
            if (r1 != 0) goto L6b
            android.app.Application r1 = KV()
            com.kwad.sdk.m.l.aMP = r1
        L6b:
            android.app.Application r0 = dv(r0)
            goto L13
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.m.l.KU():android.app.Application");
    }

    private static Application KV() {
        Application application = (Application) s.a("android.app.ActivityThread", "currentApplication", new Object[0]);
        return application != null ? application : (Application) s.a("android.app.AppGlobals", "getInitialApplication", new Object[0]);
    }

    public static View a(Context context, int i, ViewGroup viewGroup, boolean z) {
        return dy(context).inflate(i, viewGroup, false);
    }

    public static void a(Application application) {
        if (aMP == null) {
            aMP = application;
        }
    }

    private static void a(LayoutInflater layoutInflater) {
        s.a(layoutInflater, "mFactory", (Object) null);
        s.a(layoutInflater, "mFactory2", (Object) null);
    }

    private static boolean au(Context context) {
        return context instanceof a;
    }

    public static LayoutInflater b(Context context, Context context2) {
        LayoutInflater layoutInflaterCloneInContext = LayoutInflater.from(dz(context)).cloneInContext(context2);
        a(layoutInflaterCloneInContext);
        return layoutInflaterCloneInContext;
    }

    private static void checkInit() {
        if (e.KO().Jr()) {
            return;
        }
        ServiceProvider.b(new RuntimeException("please init KSPlugin"));
    }

    public static int dq(Context context) {
        if (!(context instanceof ContextThemeWrapper)) {
            if (context instanceof android.support.v7.view.ContextThemeWrapper) {
                return ((android.support.v7.view.ContextThemeWrapper) context).getThemeResId();
            }
            return 0;
        }
        Object objF = s.f(context, "getThemeResId", new Object[0]);
        if (objF != null) {
            return ((Integer) objF).intValue();
        }
        return 0;
    }

    public static Activity dr(Context context) {
        if (context instanceof Activity) {
            return (Activity) context;
        }
        Context contextDt = dt(context);
        if (contextDt instanceof Activity) {
            return (Activity) contextDt;
        }
        com.kwad.sdk.core.c.b.AU();
        return com.kwad.sdk.core.c.b.getCurrentActivity();
    }

    private static Context ds(Context context) {
        RuntimeException runtimeException;
        if (!i.KR() || au(context)) {
            if (!i.KR() && !j.au(context)) {
                runtimeException = new RuntimeException("expect ResContext in external --context:" + context.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish());
            }
            return context;
        }
        runtimeException = new RuntimeException("expect KSContext in external --context:" + context.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish());
        ServiceProvider.b(runtimeException);
        return context;
    }

    public static Context dt(Context context) {
        checkInit();
        if (((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal() && !dw(context)) {
            return du(au(context) ? i.dn(context) : j.unwrapContextIfNeed(context));
        }
        return context;
    }

    private static Context du(Context context) {
        if (j.au(context) || (context instanceof a)) {
            ServiceProvider.b(new RuntimeException("expect normalContext --context:" + context.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish()));
        }
        return context;
    }

    private static Application dv(Context context) {
        if (context instanceof Application) {
            return (Application) context;
        }
        ServiceProvider.b(new RuntimeException("expect normalContext --context:" + context.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish() + "--isExternal:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal()));
        return null;
    }

    public static boolean dw(Context context) {
        return (au(context) || j.au(context)) ? false : true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v14 */
    /* JADX WARN: Type inference failed for: r2v15 */
    /* JADX WARN: Type inference failed for: r2v16 */
    /* JADX WARN: Type inference failed for: r2v17 */
    /* JADX WARN: Type inference failed for: r2v18 */
    /* JADX WARN: Type inference failed for: r2v19 */
    /* JADX WARN: Type inference failed for: r2v2, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r2v20 */
    /* JADX WARN: Type inference failed for: r2v21 */
    /* JADX WARN: Type inference failed for: r2v3, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r2v4 */
    /* JADX WARN: Type inference failed for: r2v5, types: [android.content.Context] */
    public static Context dx(Context context) {
        boolean zAu = j.au(context);
        Object objAt = context;
        if (zAu) {
            objAt = j.at(context);
        }
        boolean z = objAt instanceof a;
        ?? delegatedContext = objAt;
        if (z) {
            delegatedContext = ((a) objAt).getDelegatedContext();
        }
        if (dw(delegatedContext)) {
            return delegatedContext;
        }
        int i = 0;
        ?? r2 = delegatedContext;
        while (i < 5) {
            boolean zAu2 = j.au(r2);
            ?? At = r2;
            if (zAu2) {
                At = j.at(r2);
            }
            boolean z2 = At instanceof a;
            ?? delegatedContext2 = At;
            if (z2) {
                delegatedContext2 = ((a) At).getDelegatedContext();
            }
            if (dw(delegatedContext2)) {
                return delegatedContext2;
            }
            i++;
            r2 = delegatedContext2;
        }
        return r2;
    }

    public static LayoutInflater dy(Context context) {
        Context contextWrapContextIfNeed = wrapContextIfNeed(context);
        boolean zAu = j.au(contextWrapContextIfNeed);
        LayoutInflater layoutInflaterFrom = LayoutInflater.from(contextWrapContextIfNeed);
        if (zAu) {
            a(layoutInflaterFrom);
        }
        return layoutInflaterFrom;
    }

    private static Context dz(Context context) {
        return context instanceof ContextWrapper ? ((ContextWrapper) context).getBaseContext() : context;
    }

    public static void h(Activity activity) {
        j.onDestroy(activity);
    }

    public static View inflate(Context context, int i, ViewGroup viewGroup) {
        return dy(context).inflate(i, viewGroup);
    }

    public static Context wrapContextIfNeed(Context context) {
        checkInit();
        if (((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal()) {
            return ds(i.KR() ? i.wrapContextIfNeed(context) : j.wrapContextIfNeed(context));
        }
        return context;
    }

    public static void x(Context context, boolean z) {
        try {
            context.getSharedPreferences("kssdk_api_pref", 0).edit().putBoolean("useContextClassLoader", z).apply();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }
}
