package com.kwad.sdk.api.loader;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.text.TextUtils;
import android.util.Log;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import com.kwad.sdk.api.core.ResContext;
import java.lang.ref.WeakReference;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class Wrapper {
    private static final int COUNT_LIMIT_AUTO_UN_WRAP = 5;
    private static final int COUNT_LIMIT_AUTO_UN_WRAP_APPLICATION = 15;
    private static final int COUNT_LIMIT_SAME_STACK_TRACE = 5;
    private static final String METHOD_GET_BASE_CONTEXT = "getBaseContext";
    private static final String METHOD_WRAP_CONTEXT = "wrapContextIfNeed";
    private static final String TAG = "Wrapper";
    private static final int TIMELINE_MINIWRAP = 150;
    private static final String CLAZZ_NAME = Wrapper.class.getName();
    private static final ThreadLocal<a> sAutoUnWrapModelTL = new ThreadLocal<>();
    private static final List<String> sAutoUnWrapStackList = new CopyOnWriteArrayList();
    private static Map<Context, Context> sResContextCache = new WeakHashMap();

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

    private static List<String> getAutoUnWrapStackList() {
        if (sAutoUnWrapStackList.isEmpty()) {
            sAutoUnWrapStackList.add("com.sensorsdata.analytics.android.sdk");
        }
        return sAutoUnWrapStackList;
    }

    private static boolean needAutoUnWrap(Context context, a aVar) {
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
                if (i < stackTrace.length && CLAZZ_NAME.equals(className) && METHOD_WRAP_CONTEXT.equals(methodName)) {
                    StackTraceElement stackTraceElement2 = stackTrace[i];
                    if (TextUtils.equals(name, stackTraceElement2.getClassName()) && METHOD_GET_BASE_CONTEXT.equals(stackTraceElement2.getMethodName()) && (i2 = i2 + 1) >= 5) {
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
        Log.d(TAG, str);
        return true;
    }

    public static void onDestroy(Context context) {
        if (context == null) {
            return;
        }
        sResContextCache.remove(context);
    }

    static ClassLoader replaceExternalClassLoader(ClassLoader classLoader) {
        ClassLoader externalClassLoader = Loader.get().getExternalClassLoader();
        return externalClassLoader != null ? externalClassLoader : classLoader;
    }

    static Resources replaceExternalResources(Resources resources) {
        Resources externalResource = Loader.get().getExternalResource();
        return externalResource != null ? externalResource : resources;
    }

    static Resources.Theme replaceTheme(Resources.Theme theme, Resources.Theme theme2, int i) {
        Resources.Theme theme3 = (Resources.Theme) com.kwad.sdk.api.c.c("WRT", theme, theme2, Integer.valueOf(i));
        if (theme3 != null) {
            return theme3;
        }
        Resources externalResource = Loader.get().getExternalResource();
        if (externalResource == null) {
            return theme;
        }
        if (theme2 != null) {
            return theme2;
        }
        Resources.Theme themeNewTheme = externalResource.newTheme();
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
            if (aVar.afh >= (context instanceof Application ? 15 : 5) && needAutoUnWrap(context, aVar)) {
                aVar.clear();
                return true;
            }
        }
        return false;
    }

    @Deprecated
    public static Context unwrapContextIfNeed(Context context) {
        Context context2 = (Context) com.kwad.sdk.api.c.c("URC", context);
        if (context2 != null) {
            return context2;
        }
        ResContext resContext = context instanceof ResContext ? (ResContext) context : null;
        Context delegatedContext = context;
        while (delegatedContext instanceof ContextWrapper) {
            if (delegatedContext instanceof Activity) {
                return delegatedContext;
            }
            if (delegatedContext instanceof ResContext) {
                resContext = (ResContext) delegatedContext;
                delegatedContext = resContext.getDelegatedContext();
            } else {
                delegatedContext = ((ContextWrapper) delegatedContext).getBaseContext();
            }
        }
        return resContext != null ? resContext.getDelegatedContext() : context;
    }

    public static Context wrapContextIfNeed(Context context) {
        Context context2 = (Context) com.kwad.sdk.api.c.c("WRC", context);
        if (context2 != null) {
            return context2;
        }
        if (!Loader.get().isExternalLoaded()) {
            return context;
        }
        if (context == null) {
            return null;
        }
        if ((context instanceof ResContext) || returnUnWrappedContext(context)) {
            return context;
        }
        if (context instanceof ContextThemeWrapper) {
            Context context3 = sResContextCache.get(context);
            if (context3 != null) {
                return context3;
            }
            n nVar = new n((ContextThemeWrapper) context);
            sResContextCache.put(context, nVar);
            return nVar;
        }
        if (context instanceof android.support.v7.view.ContextThemeWrapper) {
            Context context4 = sResContextCache.get(context);
            if (context4 != null) {
                return context4;
            }
            o oVar = new o((android.support.v7.view.ContextThemeWrapper) context);
            sResContextCache.put(context, oVar);
            return oVar;
        }
        if (context instanceof ContextWrapper) {
            Context context5 = sResContextCache.get(context);
            if (context5 != null) {
                return context5;
            }
            p pVar = new p(context);
            sResContextCache.put(context, pVar);
            return pVar;
        }
        Context context6 = sResContextCache.get(context);
        if (context6 != null) {
            return context6;
        }
        p pVar2 = new p(context);
        sResContextCache.put(context, pVar2);
        return pVar2;
    }

    @Deprecated
    public static LayoutInflater wrapInflaterIfNeed(LayoutInflater layoutInflater) {
        LayoutInflater layoutInflater2 = (LayoutInflater) com.kwad.sdk.api.c.c("WRI", layoutInflater);
        if (layoutInflater2 != null) {
            return layoutInflater2;
        }
        if (!Loader.get().isExternalLoaded()) {
            return layoutInflater;
        }
        Context context = layoutInflater.getContext();
        if (context instanceof ResContext) {
            return layoutInflater;
        }
        Context contextWrapContextIfNeed = wrapContextIfNeed(context);
        return contextWrapContextIfNeed instanceof ResContext ? layoutInflater.cloneInContext(contextWrapContextIfNeed) : layoutInflater;
    }

    static Object wrapSystemService(Object obj, String str, Context context) {
        if (!"layout_inflater".equals(str) || !(obj instanceof LayoutInflater)) {
            return obj;
        }
        LayoutInflater layoutInflater = (LayoutInflater) obj;
        return layoutInflater.getContext() instanceof ResContext ? layoutInflater : layoutInflater.cloneInContext(context);
    }
}
