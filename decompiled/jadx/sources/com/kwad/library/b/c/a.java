package com.kwad.library.b.c;

import android.app.Application;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.text.TextUtils;
import android.util.Log;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import com.kwad.library.solder.lib.i;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static final String CLAZZ_NAME = a.class.getName();
    private static final ThreadLocal<C0192a> sAutoUnWrapModelTL = new ThreadLocal<>();
    private static final List<String> sAutoUnWrapStackList = new ArrayList();
    private static final Map<String, WeakReference<Context>> sResContextCache = new HashMap();

    /* JADX INFO: renamed from: com.kwad.library.b.c.a$a, reason: collision with other inner class name */
    static class C0192a {
        private WeakReference<Context> afg;
        private int afh;
        private StackTraceElement[] afi;
        private int afj;
        private long afk;

        private C0192a() {
            this.afg = new WeakReference<>(null);
            this.afh = 0;
            this.afi = null;
            this.afj = 0;
        }

        /* synthetic */ C0192a(byte b) {
            this();
        }

        static /* synthetic */ int c(C0192a c0192a) {
            int i = c0192a.afh;
            c0192a.afh = i + 1;
            return i;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void clear() {
            this.afg = new WeakReference<>(null);
            this.afh = 0;
            this.afi = null;
            this.afj = 0;
            this.afk = 0L;
        }

        static /* synthetic */ int g(C0192a c0192a) {
            int i = c0192a.afj;
            c0192a.afj = i + 1;
            return i;
        }
    }

    private static Context a(String str, Context context) {
        WeakReference<Context> weakReference = sResContextCache.get(str + System.identityHashCode(context));
        if (weakReference != null) {
            return weakReference.get();
        }
        return null;
    }

    static Resources.Theme a(Resources.Theme theme, Resources.Theme theme2, int i, String str) {
        Resources resources;
        com.kwad.library.b.a aVarBy = by(str);
        if (aVarBy == null || !aVarBy.isLoaded() || (resources = aVarBy.getResources()) == null) {
            return theme;
        }
        if (theme2 != null) {
            return theme2;
        }
        Resources.Theme themeNewTheme = resources.newTheme();
        themeNewTheme.applyStyle(i, true);
        return themeNewTheme;
    }

    static Resources a(Resources resources, String str) {
        com.kwad.library.b.a aVarBy = by(str);
        if (aVarBy == null || !aVarBy.isLoaded()) {
            StringBuilder sb = new StringBuilder("replaceExternalResources pluginId: ");
            sb.append(str);
            sb.append(" , plugin: ");
            sb.append(aVarBy);
            sb.append(", isLoaded(): false");
            return resources;
        }
        Resources resources2 = aVarBy.getResources();
        StringBuilder sb2 = new StringBuilder("replaceExternalResources pluginId: ");
        sb2.append(str);
        sb2.append(", wrappedResources: ");
        sb2.append(resources2);
        return resources2 != null ? resources2 : resources;
    }

    public static LayoutInflater a(LayoutInflater layoutInflater, String str) {
        com.kwad.library.b.a aVarBy = by(str);
        if (aVarBy == null || !aVarBy.isLoaded()) {
            return layoutInflater;
        }
        Context context = layoutInflater.getContext();
        if (context instanceof b) {
            return layoutInflater;
        }
        Context contextG = g(context, str);
        return contextG instanceof b ? layoutInflater.cloneInContext(contextG) : layoutInflater;
    }

    private static void a(String str, Context context, Context context2) {
        sResContextCache.put(str + System.identityHashCode(context), new WeakReference<>(context2));
    }

    private static boolean a(String str, Context context, C0192a c0192a) {
        String str2;
        Context contextA = a(str, context);
        String name = contextA != null ? contextA.getClass().getName() : "";
        StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
        if (!Arrays.equals(stackTrace, c0192a.afi)) {
            if (c0192a.afi != null) {
                c0192a.clear();
                return false;
            }
            c0192a.afi = stackTrace;
            int i = 0;
            int i2 = 0;
            while (i < stackTrace.length) {
                StackTraceElement stackTraceElement = stackTrace[i];
                String className = stackTraceElement.getClassName();
                Iterator<String> it = getAutoUnWrapStackList().iterator();
                while (it.hasNext()) {
                    if (className.contains(it.next())) {
                        str2 = "needAutoUnWrap true 命中白名单";
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
        C0192a.g(c0192a);
        c0192a.afi = stackTrace;
        if (c0192a.afj < 5) {
            return false;
        }
        str2 = "needAutoUnWrap true 连续相同堆栈";
        Log.d("Solder.PluginWrapper", str2);
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static Context at(Context context) {
        return ((b) context).getDelegatedContext();
    }

    private static boolean au(Context context) {
        return context instanceof b;
    }

    static ClassLoader b(ClassLoader classLoader, String str) {
        com.kwad.library.b.a.b bVarVV;
        com.kwad.library.b.a aVarBy = by(str);
        return (aVarBy == null || !aVarBy.isLoaded() || (bVarVV = aVarBy.vV()) == null) ? classLoader : bVarVV;
    }

    private static boolean b(String str, Context context) {
        C0192a c0192a = sAutoUnWrapModelTL.get();
        byte b = 0;
        if (c0192a == null) {
            sAutoUnWrapModelTL.set(new C0192a(b));
        } else if (c0192a.afg.get() != context || Math.abs(System.currentTimeMillis() - c0192a.afk) >= 150) {
            c0192a.clear();
            c0192a.afg = new WeakReference(context);
            c0192a.afk = System.currentTimeMillis();
        } else {
            C0192a.c(c0192a);
            if (c0192a.afh >= (context instanceof Application ? 15 : 5) && a(str, context, c0192a)) {
                c0192a.clear();
                return true;
            }
        }
        return false;
    }

    private static com.kwad.library.b.a by(String str) {
        com.kwad.library.solder.lib.a.a aVarBB = i.wb().we().bB(str);
        if (aVarBB != null && aVarBB.isLoaded() && (aVarBB instanceof com.kwad.library.b.a)) {
            return (com.kwad.library.b.a) aVarBB;
        }
        return null;
    }

    public static Context g(Context context, String str) {
        if (context == null) {
            return null;
        }
        com.kwad.library.b.a aVarBy = by(str);
        if (aVarBy == null || !aVarBy.isLoaded() || (context instanceof b) || b(str, context)) {
            return context;
        }
        Context contextA = a(str, context);
        if (contextA != null) {
            return contextA;
        }
        Context cVar = context instanceof ContextThemeWrapper ? new c((ContextThemeWrapper) context, str) : context instanceof android.support.v7.view.ContextThemeWrapper ? new d((android.support.v7.view.ContextThemeWrapper) context, str) : context instanceof ContextWrapper ? new e(context, str) : new e(context, str);
        a(str, context, cVar);
        return cVar;
    }

    private static List<String> getAutoUnWrapStackList() {
        if (sAutoUnWrapStackList.isEmpty()) {
            sAutoUnWrapStackList.add("com.sensorsdata.analytics.android.sdk");
        }
        return sAutoUnWrapStackList;
    }

    public static Context unwrapContextIfNeed(Context context) {
        if (au(context)) {
            context = at(context);
        }
        if (!au(context)) {
            return context;
        }
        for (int i = 0; i < 10; i++) {
            context = at(context);
            if (!au(context)) {
                return context;
            }
        }
        return context;
    }

    static Object wrapSystemService(Object obj, String str, Context context) {
        if (!"layout_inflater".equals(str) || !(obj instanceof LayoutInflater)) {
            return obj;
        }
        LayoutInflater layoutInflater = (LayoutInflater) obj;
        return layoutInflater.getContext() instanceof b ? layoutInflater : layoutInflater.cloneInContext(context);
    }
}
