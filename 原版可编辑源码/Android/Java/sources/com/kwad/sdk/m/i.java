package com.kwad.sdk.m;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.text.TextUtils;
import android.util.Log;
import android.view.ContextThemeWrapper;
import com.kwad.sdk.service.ServiceProvider;
import java.lang.ref.WeakReference;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public class i {
    private static final String CLAZZ_NAME = i.class.getName();
    private static final ThreadLocal<a> sAutoUnWrapModelTL = new ThreadLocal<>();
    private static final List<String> sAutoUnWrapStackList = new CopyOnWriteArrayList();
    private static final Map<Context, Context> sResContextCache = new WeakHashMap();
    private static final AtomicBoolean aMJ = new AtomicBoolean(false);

    static class a {
        private WeakReference<Context> afg;
        private int afh;
        private StackTraceElement[] afi;
        private int afj;
        private long afk;

        private a() {
            this.afg = new WeakReference<>(null);
            this.afh = 0;
            this.afi = null;
            this.afj = 0;
        }

        a(byte b) {
            this();
        }

        static int c(a aVar) {
            int i = aVar.afh;
            aVar.afh = i + 1;
            return i;
        }

        private void clear() {
            this.afg = new WeakReference<>(null);
            this.afh = 0;
            this.afi = null;
            this.afj = 0;
            this.afk = 0L;
        }

        static int g(a aVar) {
            int i = aVar.afj;
            aVar.afj = i + 1;
            return i;
        }
    }

    public static boolean KR() {
        return aMJ.get();
    }

    private static void a(final Context context, Context context2) {
        sResContextCache.put(context, context2);
        if (context instanceof Activity) {
            com.kwad.sdk.core.c.b.AU();
            com.kwad.sdk.core.c.b.a(new com.kwad.sdk.core.c.d() {
                @Override
                public final void d(Activity activity) {
                    if (activity == context) {
                        com.kwad.sdk.core.c.b.AU();
                        com.kwad.sdk.core.c.b.b((com.kwad.sdk.core.c.c) this);
                        i.onDestroy(context);
                    }
                }
            });
        }
    }

    private static boolean a(Context context, a aVar) {
        String str;
        Context context2 = sResContextCache.get(context);
        String name = context2 != null ? context2.getClass().getName() : "";
        StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
        if (!Arrays.equals(stackTrace, aVar.afi)) {
            if (aVar.afi != null) {
                aVar.clear();
                return false;
            }
            aVar.afi = stackTrace;
            int i = 0;
            int i2 = 0;
            while (i < stackTrace.length) {
                StackTraceElement stackTraceElement = stackTrace[i];
                String className = stackTraceElement.getClassName();
                for (String str2 : getAutoUnWrapStackList()) {
                    if (!TextUtils.isEmpty(str2) && className.contains(str2)) {
                        str = "needAutoUnWrap true 命中白名单";
                    }
                }
                String methodName = stackTraceElement.getMethodName();
                i++;
                if (i < stackTrace.length && CLAZZ_NAME.equals(className) && "wrapContextIfNeed".equals(methodName)) {
                    StackTraceElement stackTraceElement2 = stackTrace[i];
                    if (TextUtils.equals(name, stackTraceElement2.getClassName()) && "getBaseContext".equals(stackTraceElement2.getMethodName()) && (i2 = i2 + 1) >= 5) {
                        return true;
                    }
                }
            }
            return false;
        }
        a.g(aVar);
        aVar.afi = stackTrace;
        if (aVar.afj < 5) {
            return false;
        }
        str = "needAutoUnWrap true 连续相同堆栈";
        Log.d("Wrapper", str);
        return true;
    }

    public static void bW(boolean z) {
        aMJ.set(z);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v0, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r5v1, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r5v10 */
    /* JADX WARN: Type inference failed for: r5v11 */
    /* JADX WARN: Type inference failed for: r5v12 */
    /* JADX WARN: Type inference failed for: r5v13 */
    /* JADX WARN: Type inference failed for: r5v14 */
    /* JADX WARN: Type inference failed for: r5v15 */
    /* JADX WARN: Type inference failed for: r5v16 */
    /* JADX WARN: Type inference failed for: r5v17 */
    /* JADX WARN: Type inference failed for: r5v2, types: [android.content.Context, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r5v3 */
    /* JADX WARN: Type inference failed for: r5v4, types: [android.content.Context] */
    static Context dn(Context context) {
        boolean z = context instanceof com.kwad.sdk.m.a;
        ?? delegatedContext = context;
        if (z) {
            delegatedContext = ((com.kwad.sdk.m.a) context).getDelegatedContext();
        }
        if (l.dw(delegatedContext)) {
            return delegatedContext;
        }
        RuntimeException runtimeException = null;
        int i = 0;
        ?? r5 = delegatedContext;
        while (i < 10) {
            if (runtimeException == null) {
                RuntimeException runtimeException2 = new RuntimeException("expect normalContext --context:" + r5.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish());
                ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(runtimeException2);
                runtimeException = runtimeException2;
            }
            boolean zAu = j.au(r5);
            ?? At = r5;
            if (zAu) {
                At = j.at(r5);
            }
            boolean z2 = At instanceof com.kwad.sdk.m.a;
            ?? delegatedContext2 = At;
            if (z2) {
                delegatedContext2 = ((com.kwad.sdk.m.a) At).getDelegatedContext();
            }
            if (l.dw(delegatedContext2)) {
                return delegatedContext2;
            }
            i++;
            r5 = delegatedContext2;
        }
        return r5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v3, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r2v4, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r2v5 */
    /* JADX WARN: Type inference failed for: r2v7, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r2v8 */
    /* JADX WARN: Type inference failed for: r2v9 */
    static Context do(Context context) {
        if (context instanceof Application) {
            return context;
        }
        Context applicationContext = dn(context).getApplicationContext();
        if (applicationContext instanceof Application) {
            return applicationContext;
        }
        int i = 0;
        ?? r2 = applicationContext;
        while (i < 10) {
            ?? applicationContext2 = r2.getApplicationContext();
            if (applicationContext2 instanceof Application) {
                return applicationContext2;
            }
            if (applicationContext2 instanceof com.kwad.sdk.m.a) {
                applicationContext2 = ((com.kwad.sdk.m.a) applicationContext2).getDelegatedContext();
            }
            i++;
            r2 = applicationContext2;
        }
        return r2;
    }

    private static List<String> getAutoUnWrapStackList() {
        if (sAutoUnWrapStackList.isEmpty()) {
            sAutoUnWrapStackList.add("com.sensorsdata.analytics.android.sdk");
        }
        return sAutoUnWrapStackList;
    }

    public static void onDestroy(Context context) {
        sResContextCache.remove(context);
    }

    static ClassLoader replaceExternalClassLoader(ClassLoader classLoader) {
        ClassLoader classLoader2 = e.KO().getClassLoader();
        return classLoader2 != null ? classLoader2 : classLoader;
    }

    static Resources.Theme replaceTheme(Resources.Theme theme, Resources.Theme theme2, int i) {
        Resources resources = e.KO().getResources();
        if (resources == null) {
            return theme;
        }
        if (theme2 != null) {
            return theme2;
        }
        Resources.Theme themeNewTheme = resources.newTheme();
        themeNewTheme.applyStyle(i, true);
        return themeNewTheme;
    }

    private static boolean returnUnWrappedContext(Context context) {
        a aVar = sAutoUnWrapModelTL.get();
        byte b = 0;
        if (aVar == null) {
            sAutoUnWrapModelTL.set(new a(b));
        } else if (aVar.afg.get() != context || Math.abs(System.currentTimeMillis() - aVar.afk) >= 150) {
            aVar.clear();
            aVar.afg = new WeakReference(context);
            aVar.afk = System.currentTimeMillis();
        } else {
            a.c(aVar);
            if (aVar.afh >= (context instanceof Application ? 15 : 5) && a(context, aVar)) {
                aVar.clear();
                return true;
            }
        }
        return false;
    }

    static Context wrapContextIfNeed(Context context) {
        Context fVar;
        if (context == null) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(new RuntimeException("KSWrapper wrapContextIfNeed context is null"));
            return null;
        }
        if (!((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal() || (context instanceof com.kwad.sdk.m.a)) {
            return context;
        }
        if (j.au(context)) {
            context = j.unwrapContextIfNeed(context);
            if (j.au(context)) {
                ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(new RuntimeException("KSWrapper unwrapContextIfNeed fail"));
                return context;
            }
        }
        Context context2 = sResContextCache.get(context);
        if (context2 instanceof com.kwad.sdk.m.a) {
            return context2;
        }
        if (k.dp(context)) {
            return context;
        }
        if (returnUnWrappedContext(context)) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(new RuntimeException("KSWrapper returnUnWrappedContext context: " + context.getClass().getName()));
            return context;
        }
        if (context instanceof Application) {
            try {
                fVar = new f((Application) context, new g(context, e.KO()));
                l.a((Application) fVar);
            } catch (Throwable unused) {
                ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(new RuntimeException("wrapper Application fail --context:" + context.getClass().getName() + "--initFinish:" + ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).hasInitFinish()));
                return context;
            }
        } else {
            fVar = context instanceof ContextThemeWrapper ? new b((ContextThemeWrapper) context) : context instanceof android.support.v7.view.ContextThemeWrapper ? new c((android.support.v7.view.ContextThemeWrapper) context) : context instanceof ContextWrapper ? new d(context) : new d(context);
        }
        a(context, fVar);
        return fVar;
    }
}
