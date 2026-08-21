package com.kwad.library.b.c;

public class a {
    private static final java.lang.String CLAZZ_NAME = null;
    private static final java.lang.ThreadLocal<com.kwad.library.b.c.a.a> sAutoUnWrapModelTL = null;
    private static final java.util.List<java.lang.String> sAutoUnWrapStackList = null;
    private static final java.util.Map<java.lang.String, java.lang.ref.WeakReference<android.content.Context>> sResContextCache = null;

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

        static long a(com.kwad.library.b.c.a.a r0, long r1) {
                r0.afk = r1
                return r1
        }

        static java.lang.ref.WeakReference a(com.kwad.library.b.c.a.a r0) {
                java.lang.ref.WeakReference<android.content.Context> r0 = r0.afg
                return r0
        }

        static java.lang.ref.WeakReference a(com.kwad.library.b.c.a.a r0, java.lang.ref.WeakReference r1) {
                r0.afg = r1
                return r1
        }

        static java.lang.StackTraceElement[] a(com.kwad.library.b.c.a.a r0, java.lang.StackTraceElement[] r1) {
                r0.afi = r1
                return r1
        }

        static long b(com.kwad.library.b.c.a.a r2) {
                long r0 = r2.afk
                return r0
        }

        static int c(com.kwad.library.b.c.a.a r2) {
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

        static int d(com.kwad.library.b.c.a.a r0) {
                int r0 = r0.afh
                return r0
        }

        static void e(com.kwad.library.b.c.a.a r0) {
                r0.clear()
                return
        }

        static java.lang.StackTraceElement[] f(com.kwad.library.b.c.a.a r0) {
                java.lang.StackTraceElement[] r0 = r0.afi
                return r0
        }

        static int g(com.kwad.library.b.c.a.a r2) {
                int r0 = r2.afj
                int r1 = r0 + 1
                r2.afj = r1
                return r0
        }

        static int h(com.kwad.library.b.c.a.a r0) {
                int r0 = r0.afj
                return r0
        }
    }

    static {
            java.lang.Class<com.kwad.library.b.c.a> r0 = com.kwad.library.b.c.a.class
            java.lang.String r0 = r0.getName()
            com.kwad.library.b.c.a.CLAZZ_NAME = r0
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            com.kwad.library.b.c.a.sAutoUnWrapModelTL = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.library.b.c.a.sAutoUnWrapStackList = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.library.b.c.a.sResContextCache = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.content.Context a(java.lang.String r2, android.content.Context r3) {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<android.content.Context>> r0 = com.kwad.library.b.c.a.sResContextCache
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            int r2 = java.lang.System.identityHashCode(r3)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            java.lang.Object r2 = r0.get(r2)
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2
            if (r2 == 0) goto L24
            java.lang.Object r2 = r2.get()
            android.content.Context r2 = (android.content.Context) r2
            return r2
        L24:
            r2 = 0
            return r2
    }

    static android.content.res.Resources.Theme a(android.content.res.Resources.Theme r1, android.content.res.Resources.Theme r2, int r3, java.lang.String r4) {
            com.kwad.library.b.a r4 = by(r4)
            if (r4 == 0) goto L1e
            boolean r0 = r4.isLoaded()
            if (r0 != 0) goto Ld
            goto L1e
        Ld:
            android.content.res.Resources r4 = r4.getResources()
            if (r4 == 0) goto L1e
            if (r2 != 0) goto L1d
            android.content.res.Resources$Theme r2 = r4.newTheme()
            r1 = 1
            r2.applyStyle(r3, r1)
        L1d:
            return r2
        L1e:
            return r1
    }

    static android.content.res.Resources a(android.content.res.Resources r3, java.lang.String r4) {
            com.kwad.library.b.a r0 = by(r4)
            java.lang.String r1 = "replaceExternalResources pluginId: "
            if (r0 == 0) goto L27
            boolean r2 = r0.isLoaded()
            if (r2 != 0) goto Lf
            goto L27
        Lf:
            android.content.res.Resources r0 = r0.getResources()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r4)
            java.lang.String r4 = ", wrappedResources: "
            r2.append(r4)
            r2.append(r0)
            if (r0 == 0) goto L26
            return r0
        L26:
            return r3
        L27:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r4)
            java.lang.String r4 = " , plugin: "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = ", isLoaded(): false"
            r2.append(r4)
            return r3
    }

    public static android.view.LayoutInflater a(android.view.LayoutInflater r2, java.lang.String r3) {
            com.kwad.library.b.a r0 = by(r3)
            if (r0 == 0) goto L21
            boolean r0 = r0.isLoaded()
            if (r0 != 0) goto Ld
            goto L21
        Ld:
            android.content.Context r0 = r2.getContext()
            boolean r1 = r0 instanceof com.kwad.library.b.c.b
            if (r1 != 0) goto L21
            android.content.Context r3 = g(r0, r3)
            boolean r0 = r3 instanceof com.kwad.library.b.c.b
            if (r0 == 0) goto L21
            android.view.LayoutInflater r2 = r2.cloneInContext(r3)
        L21:
            return r2
    }

    private static void a(java.lang.String r2, android.content.Context r3, android.content.Context r4) {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<android.content.Context>> r0 = com.kwad.library.b.c.a.sResContextCache
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            int r2 = java.lang.System.identityHashCode(r3)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r4)
            r0.put(r2, r3)
            return
    }

    private static boolean a(java.lang.String r9, android.content.Context r10, com.kwad.library.b.c.a.a r11) {
            android.content.Context r9 = a(r9, r10)
            if (r9 == 0) goto Lf
            java.lang.Class r9 = r9.getClass()
            java.lang.String r9 = r9.getName()
            goto L11
        Lf:
            java.lang.String r9 = ""
        L11:
            java.lang.Thread r10 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r10 = r10.getStackTrace()
            java.lang.StackTraceElement[] r0 = com.kwad.library.b.c.a.a.f(r11)
            boolean r0 = java.util.Arrays.equals(r10, r0)
            java.lang.String r1 = "Solder.PluginWrapper"
            r2 = 5
            r3 = 1
            r4 = 0
            if (r0 == 0) goto L3b
            com.kwad.library.b.c.a.a.g(r11)
            com.kwad.library.b.c.a.a.a(r11, r10)
            int r9 = com.kwad.library.b.c.a.a.h(r11)
            if (r9 < r2) goto L3a
            java.lang.String r9 = "needAutoUnWrap true 连续相同堆栈"
        L36:
            android.util.Log.d(r1, r9)
            return r3
        L3a:
            return r4
        L3b:
            java.lang.StackTraceElement[] r0 = com.kwad.library.b.c.a.a.f(r11)
            if (r0 == 0) goto L45
            com.kwad.library.b.c.a.a.e(r11)
            return r4
        L45:
            com.kwad.library.b.c.a.a.a(r11, r10)
            r11 = r4
            r0 = r11
        L4a:
            int r5 = r10.length
            if (r11 >= r5) goto La6
            r5 = r10[r11]
            java.lang.String r6 = r5.getClassName()
            java.util.List r7 = getAutoUnWrapStackList()
            java.util.Iterator r7 = r7.iterator()
        L5b:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L70
            java.lang.Object r8 = r7.next()
            java.lang.String r8 = (java.lang.String) r8
            boolean r8 = r6.contains(r8)
            if (r8 == 0) goto L5b
            java.lang.String r9 = "needAutoUnWrap true 命中白名单"
            goto L36
        L70:
            java.lang.String r5 = r5.getMethodName()
            int r11 = r11 + 1
            int r7 = r10.length
            if (r11 >= r7) goto L4a
            java.lang.String r7 = com.kwad.library.b.c.a.CLAZZ_NAME
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L4a
            java.lang.String r6 = "wrapContextIfNeed"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L4a
            r5 = r10[r11]
            java.lang.String r6 = r5.getClassName()
            boolean r6 = android.text.TextUtils.equals(r9, r6)
            if (r6 == 0) goto L4a
            java.lang.String r5 = r5.getMethodName()
            java.lang.String r6 = "getBaseContext"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L4a
            int r0 = r0 + 1
            if (r0 < r2) goto L4a
            return r3
        La6:
            return r4
    }

    private static android.content.Context at(android.content.Context r0) {
            com.kwad.library.b.c.b r0 = (com.kwad.library.b.c.b) r0
            android.content.Context r0 = r0.getDelegatedContext()
            return r0
    }

    private static boolean au(android.content.Context r0) {
            boolean r0 = r0 instanceof com.kwad.library.b.c.b
            return r0
    }

    static java.lang.ClassLoader b(java.lang.ClassLoader r1, java.lang.String r2) {
            com.kwad.library.b.a r2 = by(r2)
            if (r2 == 0) goto L14
            boolean r0 = r2.isLoaded()
            if (r0 != 0) goto Ld
            goto L14
        Ld:
            com.kwad.library.b.a.b r2 = r2.vV()
            if (r2 == 0) goto L14
            return r2
        L14:
            return r1
    }

    private static boolean b(java.lang.String r6, android.content.Context r7) {
            java.lang.ThreadLocal<com.kwad.library.b.c.a$a> r0 = com.kwad.library.b.c.a.sAutoUnWrapModelTL
            java.lang.Object r0 = r0.get()
            com.kwad.library.b.c.a$a r0 = (com.kwad.library.b.c.a.a) r0
            r1 = 0
            if (r0 == 0) goto L57
            java.lang.ref.WeakReference r2 = com.kwad.library.b.c.a.a.a(r0)
            java.lang.Object r2 = r2.get()
            if (r2 != r7) goto L44
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = com.kwad.library.b.c.a.a.b(r0)
            long r2 = r2 - r4
            long r2 = java.lang.Math.abs(r2)
            r4 = 150(0x96, double:7.4E-322)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L44
            com.kwad.library.b.c.a.a.c(r0)
            boolean r2 = r7 instanceof android.app.Application
            if (r2 == 0) goto L32
            r2 = 15
            goto L33
        L32:
            r2 = 5
        L33:
            int r3 = com.kwad.library.b.c.a.a.d(r0)
            if (r3 < r2) goto L61
            boolean r6 = a(r6, r7, r0)
            if (r6 == 0) goto L61
            com.kwad.library.b.c.a.a.e(r0)
            r6 = 1
            return r6
        L44:
            com.kwad.library.b.c.a.a.e(r0)
            java.lang.ref.WeakReference r6 = new java.lang.ref.WeakReference
            r6.<init>(r7)
            com.kwad.library.b.c.a.a.a(r0, r6)
            long r6 = java.lang.System.currentTimeMillis()
            com.kwad.library.b.c.a.a.a(r0, r6)
            goto L61
        L57:
            java.lang.ThreadLocal<com.kwad.library.b.c.a$a> r6 = com.kwad.library.b.c.a.sAutoUnWrapModelTL
            com.kwad.library.b.c.a$a r7 = new com.kwad.library.b.c.a$a
            r7.<init>(r1)
            r6.set(r7)
        L61:
            return r1
    }

    private static com.kwad.library.b.a by(java.lang.String r1) {
            com.kwad.library.solder.lib.i r0 = com.kwad.library.solder.lib.i.wb()
            com.kwad.library.solder.lib.a.d r0 = r0.we()
            com.kwad.library.solder.lib.a.a r1 = r0.bB(r1)
            if (r1 == 0) goto L1c
            boolean r0 = r1.isLoaded()
            if (r0 == 0) goto L1c
            boolean r0 = r1 instanceof com.kwad.library.b.a
            if (r0 != 0) goto L19
            goto L1c
        L19:
            com.kwad.library.b.a r1 = (com.kwad.library.b.a) r1
            return r1
        L1c:
            r1 = 0
            return r1
    }

    public static android.content.Context g(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.kwad.library.b.a r0 = by(r3)
            if (r0 == 0) goto L50
            boolean r0 = r0.isLoaded()
            if (r0 != 0) goto L11
            goto L50
        L11:
            boolean r0 = r2 instanceof com.kwad.library.b.c.b
            if (r0 != 0) goto L50
            boolean r0 = b(r3, r2)
            if (r0 == 0) goto L1c
            goto L50
        L1c:
            android.content.Context r0 = a(r3, r2)
            if (r0 == 0) goto L23
            return r0
        L23:
            boolean r0 = r2 instanceof android.view.ContextThemeWrapper
            if (r0 == 0) goto L30
            com.kwad.library.b.c.c r0 = new com.kwad.library.b.c.c
            r1 = r2
            android.view.ContextThemeWrapper r1 = (android.view.ContextThemeWrapper) r1
            r0.<init>(r1, r3)
            goto L4c
        L30:
            boolean r0 = r2 instanceof android.support.v7.view.ContextThemeWrapper
            if (r0 == 0) goto L3d
            com.kwad.library.b.c.d r0 = new com.kwad.library.b.c.d
            r1 = r2
            android.support.v7.view.ContextThemeWrapper r1 = (android.support.v7.view.ContextThemeWrapper) r1
            r0.<init>(r1, r3)
            goto L4c
        L3d:
            boolean r0 = r2 instanceof android.content.ContextWrapper
            if (r0 == 0) goto L47
            com.kwad.library.b.c.e r0 = new com.kwad.library.b.c.e
            r0.<init>(r2, r3)
            goto L4c
        L47:
            com.kwad.library.b.c.e r0 = new com.kwad.library.b.c.e
            r0.<init>(r2, r3)
        L4c:
            a(r3, r2, r0)
            return r0
        L50:
            return r2
    }

    private static java.util.List<java.lang.String> getAutoUnWrapStackList() {
            java.util.List<java.lang.String> r0 = com.kwad.library.b.c.a.sAutoUnWrapStackList
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lf
            java.util.List<java.lang.String> r0 = com.kwad.library.b.c.a.sAutoUnWrapStackList
            java.lang.String r1 = "com.sensorsdata.analytics.android.sdk"
            r0.add(r1)
        Lf:
            java.util.List<java.lang.String> r0 = com.kwad.library.b.c.a.sAutoUnWrapStackList
            return r0
    }

    public static android.content.Context unwrapContextIfNeed(android.content.Context r2) {
            boolean r0 = au(r2)
            if (r0 == 0) goto La
            android.content.Context r2 = at(r2)
        La:
            boolean r0 = au(r2)
            if (r0 != 0) goto L11
            return r2
        L11:
            r0 = 0
        L12:
            r1 = 10
            if (r0 >= r1) goto L24
            android.content.Context r2 = at(r2)
            boolean r1 = au(r2)
            if (r1 != 0) goto L21
            return r2
        L21:
            int r0 = r0 + 1
            goto L12
        L24:
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
            boolean r2 = r2 instanceof com.kwad.library.b.c.b
            if (r2 == 0) goto L17
            return r1
        L17:
            android.view.LayoutInflater r1 = r1.cloneInContext(r3)
        L1b:
            return r1
    }
}
