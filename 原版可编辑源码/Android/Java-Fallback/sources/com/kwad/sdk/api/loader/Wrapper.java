package com.kwad.sdk.api.loader;

public class Wrapper {
    private static final java.lang.String CLAZZ_NAME = null;
    private static final int COUNT_LIMIT_AUTO_UN_WRAP = 5;
    private static final int COUNT_LIMIT_AUTO_UN_WRAP_APPLICATION = 15;
    private static final int COUNT_LIMIT_SAME_STACK_TRACE = 5;
    private static final java.lang.String METHOD_GET_BASE_CONTEXT = "getBaseContext";
    private static final java.lang.String METHOD_WRAP_CONTEXT = "wrapContextIfNeed";
    private static final java.lang.String TAG = "Wrapper";
    private static final int TIMELINE_MINIWRAP = 150;
    private static final java.lang.ThreadLocal<com.kwad.sdk.api.loader.Wrapper.a> sAutoUnWrapModelTL = null;
    private static final java.util.List<java.lang.String> sAutoUnWrapStackList = null;
    private static java.util.Map<android.content.Context, android.content.Context> sResContextCache;

    static class a {
        private java.lang.ref.WeakReference<android.content.Context> afg;
        private int afh;
        private java.lang.StackTraceElement[] afi;
        private int afj;
        private long afk;

        private a() {
                r2 = this;
                r2.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r1 = 0
                r0.<init>(r1)
                r2.afg = r0
                r0 = 0
                r2.afh = r0
                r2.afi = r1
                r2.afj = r0
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static long a(com.kwad.sdk.api.loader.Wrapper.a r0, long r1) {
                r0.afk = r1
                return r1
        }

        static java.lang.ref.WeakReference a(com.kwad.sdk.api.loader.Wrapper.a r0) {
                java.lang.ref.WeakReference<android.content.Context> r0 = r0.afg
                return r0
        }

        static java.lang.ref.WeakReference a(com.kwad.sdk.api.loader.Wrapper.a r0, java.lang.ref.WeakReference r1) {
                r0.afg = r1
                return r1
        }

        static java.lang.StackTraceElement[] a(com.kwad.sdk.api.loader.Wrapper.a r0, java.lang.StackTraceElement[] r1) {
                r0.afi = r1
                return r1
        }

        static long b(com.kwad.sdk.api.loader.Wrapper.a r2) {
                long r0 = r2.afk
                return r0
        }

        static int c(com.kwad.sdk.api.loader.Wrapper.a r2) {
                int r0 = r2.afh
                int r1 = r0 + 1
                r2.afh = r1
                return r0
        }

        private void clear() {
                r2 = this;
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r1 = 0
                r0.<init>(r1)
                r2.afg = r0
                r0 = 0
                r2.afh = r0
                r2.afi = r1
                r2.afj = r0
                r0 = 0
                r2.afk = r0
                return
        }

        static int d(com.kwad.sdk.api.loader.Wrapper.a r0) {
                int r0 = r0.afh
                return r0
        }

        static void e(com.kwad.sdk.api.loader.Wrapper.a r0) {
                r0.clear()
                return
        }

        static java.lang.StackTraceElement[] f(com.kwad.sdk.api.loader.Wrapper.a r0) {
                java.lang.StackTraceElement[] r0 = r0.afi
                return r0
        }

        static int g(com.kwad.sdk.api.loader.Wrapper.a r2) {
                int r0 = r2.afj
                int r1 = r0 + 1
                r2.afj = r1
                return r0
        }

        static int h(com.kwad.sdk.api.loader.Wrapper.a r0) {
                int r0 = r0.afj
                return r0
        }
    }

    static {
            java.lang.Class<com.kwad.sdk.api.loader.Wrapper> r0 = com.kwad.sdk.api.loader.Wrapper.class
            java.lang.String r0 = r0.getName()
            com.kwad.sdk.api.loader.Wrapper.CLAZZ_NAME = r0
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapModelTL = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapStackList = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            com.kwad.sdk.api.loader.Wrapper.sResContextCache = r0
            return
    }

    public Wrapper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.List<java.lang.String> getAutoUnWrapStackList() {
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapStackList
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lf
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapStackList
            java.lang.String r1 = "com.sensorsdata.analytics.android.sdk"
            r0.add(r1)
        Lf:
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapStackList
            return r0
    }

    private static boolean needAutoUnWrap(android.content.Context r11, com.kwad.sdk.api.loader.Wrapper.a r12) {
            java.util.Map<android.content.Context, android.content.Context> r0 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            java.lang.Object r11 = r0.get(r11)
            android.content.Context r11 = (android.content.Context) r11
            if (r11 == 0) goto L13
            java.lang.Class r11 = r11.getClass()
            java.lang.String r11 = r11.getName()
            goto L15
        L13:
            java.lang.String r11 = ""
        L15:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            java.lang.StackTraceElement[] r1 = com.kwad.sdk.api.loader.Wrapper.a.f(r12)
            boolean r1 = java.util.Arrays.equals(r0, r1)
            java.lang.String r2 = "Wrapper"
            r3 = 5
            r4 = 1
            r5 = 0
            if (r1 == 0) goto L3f
            com.kwad.sdk.api.loader.Wrapper.a.g(r12)
            com.kwad.sdk.api.loader.Wrapper.a.a(r12, r0)
            int r11 = com.kwad.sdk.api.loader.Wrapper.a.h(r12)
            if (r11 < r3) goto L3e
            java.lang.String r11 = "needAutoUnWrap true 连续相同堆栈"
        L3a:
            android.util.Log.d(r2, r11)
            return r4
        L3e:
            return r5
        L3f:
            java.lang.StackTraceElement[] r1 = com.kwad.sdk.api.loader.Wrapper.a.f(r12)
            if (r1 == 0) goto L49
            com.kwad.sdk.api.loader.Wrapper.a.e(r12)
            return r5
        L49:
            com.kwad.sdk.api.loader.Wrapper.a.a(r12, r0)
            r12 = r5
            r1 = r12
        L4e:
            int r6 = r0.length
            if (r12 >= r6) goto Lb0
            r6 = r0[r12]
            java.lang.String r7 = r6.getClassName()
            java.util.List r8 = getAutoUnWrapStackList()
            java.util.Iterator r8 = r8.iterator()
        L5f:
            boolean r9 = r8.hasNext()
            if (r9 == 0) goto L7a
            java.lang.Object r9 = r8.next()
            java.lang.String r9 = (java.lang.String) r9
            boolean r10 = android.text.TextUtils.isEmpty(r9)
            if (r10 != 0) goto L5f
            boolean r9 = r7.contains(r9)
            if (r9 == 0) goto L5f
            java.lang.String r11 = "needAutoUnWrap true 命中白名单"
            goto L3a
        L7a:
            java.lang.String r6 = r6.getMethodName()
            int r12 = r12 + 1
            int r8 = r0.length
            if (r12 >= r8) goto L4e
            java.lang.String r8 = com.kwad.sdk.api.loader.Wrapper.CLAZZ_NAME
            boolean r7 = r8.equals(r7)
            if (r7 == 0) goto L4e
            java.lang.String r7 = "wrapContextIfNeed"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L4e
            r6 = r0[r12]
            java.lang.String r7 = r6.getClassName()
            boolean r7 = android.text.TextUtils.equals(r11, r7)
            if (r7 == 0) goto L4e
            java.lang.String r6 = r6.getMethodName()
            java.lang.String r7 = "getBaseContext"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L4e
            int r1 = r1 + 1
            if (r1 < r3) goto L4e
            return r4
        Lb0:
            return r5
    }

    public static void onDestroy(android.content.Context r1) {
            if (r1 != 0) goto L3
            return
        L3:
            java.util.Map<android.content.Context, android.content.Context> r0 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            r0.remove(r1)
            return
    }

    static java.lang.ClassLoader replaceExternalClassLoader(java.lang.ClassLoader r1) {
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            if (r0 == 0) goto Lb
            return r0
        Lb:
            return r1
    }

    static android.content.res.Resources replaceExternalResources(android.content.res.Resources r1) {
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            android.content.res.Resources r0 = r0.getExternalResource()
            if (r0 == 0) goto Lb
            return r0
        Lb:
            return r1
    }

    static android.content.res.Resources.Theme replaceTheme(android.content.res.Resources.Theme r4, android.content.res.Resources.Theme r5, int r6) {
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            r1 = 1
            r0[r1] = r5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r6)
            r3 = 2
            r0[r3] = r2
            java.lang.String r2 = "WRT"
            java.lang.Object r0 = com.kwad.sdk.api.c.c(r2, r0)
            android.content.res.Resources$Theme r0 = (android.content.res.Resources.Theme) r0
            if (r0 == 0) goto L1b
            return r0
        L1b:
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            android.content.res.Resources r0 = r0.getExternalResource()
            if (r0 == 0) goto L2f
            if (r5 != 0) goto L2e
            android.content.res.Resources$Theme r5 = r0.newTheme()
            r5.applyStyle(r6, r1)
        L2e:
            return r5
        L2f:
            return r4
    }

    private static boolean returnUnWrappedContext(android.content.Context r6) {
            java.lang.ThreadLocal<com.kwad.sdk.api.loader.Wrapper$a> r0 = com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapModelTL
            java.lang.Object r0 = r0.get()
            com.kwad.sdk.api.loader.Wrapper$a r0 = (com.kwad.sdk.api.loader.Wrapper.a) r0
            r1 = 0
            if (r0 == 0) goto L57
            java.lang.ref.WeakReference r2 = com.kwad.sdk.api.loader.Wrapper.a.a(r0)
            java.lang.Object r2 = r2.get()
            if (r2 != r6) goto L44
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = com.kwad.sdk.api.loader.Wrapper.a.b(r0)
            long r2 = r2 - r4
            long r2 = java.lang.Math.abs(r2)
            r4 = 150(0x96, double:7.4E-322)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L44
            com.kwad.sdk.api.loader.Wrapper.a.c(r0)
            boolean r2 = r6 instanceof android.app.Application
            if (r2 == 0) goto L32
            r2 = 15
            goto L33
        L32:
            r2 = 5
        L33:
            int r3 = com.kwad.sdk.api.loader.Wrapper.a.d(r0)
            if (r3 < r2) goto L61
            boolean r6 = needAutoUnWrap(r6, r0)
            if (r6 == 0) goto L61
            com.kwad.sdk.api.loader.Wrapper.a.e(r0)
            r6 = 1
            return r6
        L44:
            com.kwad.sdk.api.loader.Wrapper.a.e(r0)
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r6)
            com.kwad.sdk.api.loader.Wrapper.a.a(r0, r2)
            long r2 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.api.loader.Wrapper.a.a(r0, r2)
            goto L61
        L57:
            java.lang.ThreadLocal<com.kwad.sdk.api.loader.Wrapper$a> r6 = com.kwad.sdk.api.loader.Wrapper.sAutoUnWrapModelTL
            com.kwad.sdk.api.loader.Wrapper$a r0 = new com.kwad.sdk.api.loader.Wrapper$a
            r0.<init>(r1)
            r6.set(r0)
        L61:
            return r1
    }

    @java.lang.Deprecated
    public static android.content.Context unwrapContextIfNeed(android.content.Context r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "URC"
            java.lang.Object r0 = com.kwad.sdk.api.c.c(r1, r0)
            android.content.Context r0 = (android.content.Context) r0
            if (r0 == 0) goto L11
            return r0
        L11:
            r0 = 0
            boolean r1 = r3 instanceof com.kwad.sdk.api.core.ResContext
            if (r1 == 0) goto L19
            r0 = r3
            com.kwad.sdk.api.core.ResContext r0 = (com.kwad.sdk.api.core.ResContext) r0
        L19:
            r1 = r3
        L1a:
            boolean r2 = r1 instanceof android.content.ContextWrapper
            if (r2 == 0) goto L36
            boolean r2 = r1 instanceof android.app.Activity
            if (r2 == 0) goto L23
            return r1
        L23:
            boolean r2 = r1 instanceof com.kwad.sdk.api.core.ResContext
            if (r2 == 0) goto L2f
            r0 = r1
            com.kwad.sdk.api.core.ResContext r0 = (com.kwad.sdk.api.core.ResContext) r0
            android.content.Context r1 = r0.getDelegatedContext()
            goto L1a
        L2f:
            android.content.ContextWrapper r1 = (android.content.ContextWrapper) r1
            android.content.Context r1 = r1.getBaseContext()
            goto L1a
        L36:
            if (r0 == 0) goto L3c
            android.content.Context r3 = r0.getDelegatedContext()
        L3c:
            return r3
    }

    public static android.content.Context wrapContextIfNeed(android.content.Context r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r1 = "WRC"
            java.lang.Object r0 = com.kwad.sdk.api.c.c(r1, r0)
            android.content.Context r0 = (android.content.Context) r0
            if (r0 == 0) goto L11
            return r0
        L11:
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            boolean r0 = r0.isExternalLoaded()
            if (r0 != 0) goto L1c
            return r2
        L1c:
            if (r2 != 0) goto L20
            r2 = 0
            return r2
        L20:
            boolean r0 = r2 instanceof com.kwad.sdk.api.core.ResContext
            if (r0 != 0) goto L91
            boolean r0 = returnUnWrappedContext(r2)
            if (r0 == 0) goto L2b
            goto L91
        L2b:
            boolean r0 = r2 instanceof android.view.ContextThemeWrapper
            if (r0 == 0) goto L47
            java.util.Map<android.content.Context, android.content.Context> r0 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            java.lang.Object r0 = r0.get(r2)
            android.content.Context r0 = (android.content.Context) r0
            if (r0 != 0) goto L46
            com.kwad.sdk.api.loader.n r0 = new com.kwad.sdk.api.loader.n
            r1 = r2
            android.view.ContextThemeWrapper r1 = (android.view.ContextThemeWrapper) r1
            r0.<init>(r1)
            java.util.Map<android.content.Context, android.content.Context> r1 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            r1.put(r2, r0)
        L46:
            return r0
        L47:
            boolean r0 = r2 instanceof android.support.v7.view.ContextThemeWrapper
            if (r0 == 0) goto L63
            java.util.Map<android.content.Context, android.content.Context> r0 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            java.lang.Object r0 = r0.get(r2)
            android.content.Context r0 = (android.content.Context) r0
            if (r0 != 0) goto L62
            com.kwad.sdk.api.loader.o r0 = new com.kwad.sdk.api.loader.o
            r1 = r2
            android.support.v7.view.ContextThemeWrapper r1 = (android.support.v7.view.ContextThemeWrapper) r1
            r0.<init>(r1)
            java.util.Map<android.content.Context, android.content.Context> r1 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            r1.put(r2, r0)
        L62:
            return r0
        L63:
            boolean r0 = r2 instanceof android.content.ContextWrapper
            if (r0 == 0) goto L7c
            java.util.Map<android.content.Context, android.content.Context> r0 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            java.lang.Object r0 = r0.get(r2)
            android.content.Context r0 = (android.content.Context) r0
            if (r0 != 0) goto L7b
            com.kwad.sdk.api.loader.p r0 = new com.kwad.sdk.api.loader.p
            r0.<init>(r2)
            java.util.Map<android.content.Context, android.content.Context> r1 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            r1.put(r2, r0)
        L7b:
            return r0
        L7c:
            java.util.Map<android.content.Context, android.content.Context> r0 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            java.lang.Object r0 = r0.get(r2)
            android.content.Context r0 = (android.content.Context) r0
            if (r0 != 0) goto L90
            com.kwad.sdk.api.loader.p r0 = new com.kwad.sdk.api.loader.p
            r0.<init>(r2)
            java.util.Map<android.content.Context, android.content.Context> r1 = com.kwad.sdk.api.loader.Wrapper.sResContextCache
            r1.put(r2, r0)
        L90:
            return r0
        L91:
            return r2
    }

    @java.lang.Deprecated
    public static android.view.LayoutInflater wrapInflaterIfNeed(android.view.LayoutInflater r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r1 = "WRI"
            java.lang.Object r0 = com.kwad.sdk.api.c.c(r1, r0)
            android.view.LayoutInflater r0 = (android.view.LayoutInflater) r0
            if (r0 == 0) goto L11
            return r0
        L11:
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            boolean r0 = r0.isExternalLoaded()
            if (r0 != 0) goto L1c
            return r2
        L1c:
            android.content.Context r0 = r2.getContext()
            boolean r1 = r0 instanceof com.kwad.sdk.api.core.ResContext
            if (r1 != 0) goto L30
            android.content.Context r0 = wrapContextIfNeed(r0)
            boolean r1 = r0 instanceof com.kwad.sdk.api.core.ResContext
            if (r1 == 0) goto L30
            android.view.LayoutInflater r2 = r2.cloneInContext(r0)
        L30:
            return r2
    }

    static java.lang.Object wrapSystemService(java.lang.Object r1, java.lang.String r2, android.content.Context r3) {
            java.lang.String r0 = "layout_inflater"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1b
            boolean r2 = r1 instanceof android.view.LayoutInflater
            if (r2 == 0) goto L1b
            android.view.LayoutInflater r1 = (android.view.LayoutInflater) r1
            android.content.Context r2 = r1.getContext()
            boolean r2 = r2 instanceof com.kwad.sdk.api.core.ResContext
            if (r2 == 0) goto L17
            return r1
        L17:
            android.view.LayoutInflater r1 = r1.cloneInContext(r3)
        L1b:
            return r1
    }
}
