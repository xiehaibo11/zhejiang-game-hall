package com.kwad.library.b.b;

public final class a {
    private static java.util.Map<java.lang.String, android.content.res.Resources> afe;
    private static final java.lang.Object aff = null;

    static final class a {
        private static android.content.res.Resources a(android.content.res.Resources r4, android.content.res.AssetManager r5) {
                java.lang.Class r0 = r4.getClass()     // Catch: java.lang.Exception -> L29
                r1 = 3
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L29
                r2 = 0
                r1[r2] = r5     // Catch: java.lang.Exception -> L29
                r2 = 1
                android.util.DisplayMetrics r3 = r4.getDisplayMetrics()     // Catch: java.lang.Exception -> L29
                r1[r2] = r3     // Catch: java.lang.Exception -> L29
                r2 = 2
                android.content.res.Configuration r3 = r4.getConfiguration()     // Catch: java.lang.Exception -> L29
                r1[r2] = r3     // Catch: java.lang.Exception -> L29
                java.lang.Object r0 = com.kwad.sdk.utils.s.a(r0, r1)     // Catch: java.lang.Exception -> L29
                android.content.res.Resources r0 = (android.content.res.Resources) r0     // Catch: java.lang.Exception -> L29
                if (r0 == 0) goto L21
                return r0
            L21:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException     // Catch: java.lang.Exception -> L29
                java.lang.String r1 = "Can not create Resources"
                r0.<init>(r1)     // Catch: java.lang.Exception -> L29
                throw r0     // Catch: java.lang.Exception -> L29
            L29:
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r4.getDisplayMetrics()
                android.content.res.Configuration r4 = r4.getConfiguration()
                r0.<init>(r5, r1, r4)
                return r0
        }

        static android.content.res.Resources b(android.content.res.Resources r0, android.content.res.AssetManager r1) {
                android.content.res.Resources r0 = a(r0, r1)
                return r0
        }
    }

    static final class b {
        private static android.content.res.Resources a(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                android.content.res.Resources r2 = c(r2, r3)     // Catch: java.lang.Exception -> L5
                return r2
            L5:
                r0 = move-exception
                r0.printStackTrace()
                android.content.res.Resources r2 = com.kwad.library.b.b.a.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r0 = move-exception
                r0.printStackTrace()
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r2.getDisplayMetrics()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r0.<init>(r3, r1, r2)
                return r0
        }

        private static android.content.res.Resources c(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r3
                android.util.DisplayMetrics r3 = r2.getDisplayMetrics()
                r1 = 1
                r0[r1] = r3
                android.content.res.Configuration r2 = r2.getConfiguration()
                r3 = 2
                r0[r3] = r2
                java.lang.String r2 = "android.content.res.HwResources"
                java.lang.Object r2 = com.kwad.sdk.utils.s.g(r2, r0)
                android.content.res.Resources r2 = (android.content.res.Resources) r2
                if (r2 == 0) goto L1f
                return r2
            L1f:
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.String r3 = "Can not create Resources"
                r2.<init>(r3)
                throw r2
        }

        static android.content.res.Resources d(android.content.res.Resources r0, android.content.res.AssetManager r1) {
                android.content.res.Resources r0 = a(r0, r1)
                return r0
        }
    }

    static final class c {
        private static android.content.res.Resources a(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                android.content.res.Resources r2 = e(r2, r3)     // Catch: java.lang.Exception -> L5
                return r2
            L5:
                r0 = move-exception
                r0.printStackTrace()
                android.content.res.Resources r2 = com.kwad.library.b.b.a.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r0 = move-exception
                r0.printStackTrace()
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r2.getDisplayMetrics()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r0.<init>(r3, r1, r2)
                return r0
        }

        private static android.content.res.Resources e(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r3
                android.util.DisplayMetrics r3 = r2.getDisplayMetrics()
                r1 = 1
                r0[r1] = r3
                android.content.res.Configuration r2 = r2.getConfiguration()
                r3 = 2
                r0[r3] = r2
                java.lang.String r2 = "android.content.res.MiuiResourcesImpl"
                java.lang.Object r2 = com.kwad.sdk.utils.s.g(r2, r0)
                android.content.res.Resources r2 = (android.content.res.Resources) r2
                if (r2 == 0) goto L1f
                return r2
            L1f:
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.String r3 = "Can not create Resources"
                r2.<init>(r3)
                throw r2
        }

        static android.content.res.Resources f(android.content.res.Resources r0, android.content.res.AssetManager r1) {
                android.content.res.Resources r0 = a(r0, r1)
                return r0
        }
    }

    static final class d {
        private static android.content.res.Resources a(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                android.content.res.Resources r2 = g(r2, r3)     // Catch: java.lang.Exception -> L5
                return r2
            L5:
                android.content.res.Resources r2 = com.kwad.library.b.b.a.a.b(r2, r3)     // Catch: java.lang.Exception -> La
                return r2
            La:
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r2.getDisplayMetrics()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r0.<init>(r3, r1, r2)
                return r0
        }

        private static android.content.res.Resources g(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r3
                android.util.DisplayMetrics r3 = r2.getDisplayMetrics()
                r1 = 1
                r0[r1] = r3
                android.content.res.Configuration r2 = r2.getConfiguration()
                r3 = 2
                r0[r3] = r2
                java.lang.String r2 = "android.content.res.MiuiResources"
                java.lang.Object r2 = com.kwad.sdk.utils.s.g(r2, r0)
                android.content.res.Resources r2 = (android.content.res.Resources) r2
                if (r2 == 0) goto L1f
                return r2
            L1f:
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.String r3 = "Can not create Resources"
                r2.<init>(r3)
                throw r2
        }

        static android.content.res.Resources h(android.content.res.Resources r0, android.content.res.AssetManager r1) {
                android.content.res.Resources r0 = a(r0, r1)
                return r0
        }
    }

    static final class e {
        private static android.content.res.Resources a(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                android.content.res.Resources r2 = i(r2, r3)     // Catch: java.lang.Exception -> L5
                return r2
            L5:
                r0 = move-exception
                r0.printStackTrace()
                android.content.res.Resources r2 = com.kwad.library.b.b.a.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r0 = move-exception
                r0.printStackTrace()
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r2.getDisplayMetrics()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r0.<init>(r3, r1, r2)
                return r0
        }

        private static android.content.res.Resources i(android.content.res.Resources r2, android.content.res.AssetManager r3) {
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r3
                android.util.DisplayMetrics r3 = r2.getDisplayMetrics()
                r1 = 1
                r0[r1] = r3
                android.content.res.Configuration r2 = r2.getConfiguration()
                r3 = 2
                r0[r3] = r2
                java.lang.String r2 = "android.content.res.NubiaResources"
                java.lang.Object r2 = com.kwad.sdk.utils.s.g(r2, r0)
                android.content.res.Resources r2 = (android.content.res.Resources) r2
                if (r2 == 0) goto L1f
                return r2
            L1f:
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.String r3 = "Can not create Resources"
                r2.<init>(r3)
                throw r2
        }

        static android.content.res.Resources j(android.content.res.Resources r0, android.content.res.AssetManager r1) {
                android.content.res.Resources r0 = a(r0, r1)
                return r0
        }
    }

    static final class f {
        private static android.content.res.Resources a(android.content.Context r1, android.content.res.Resources r2, android.content.res.AssetManager r3) {
                android.content.res.Resources r1 = b(r1, r2, r3)     // Catch: java.lang.Exception -> L5
                return r1
            L5:
                r1 = move-exception
                r1.printStackTrace()
                android.content.res.Resources r1 = com.kwad.library.b.b.a.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
                return r1
            Le:
                r1 = move-exception
                r1.printStackTrace()
                android.content.res.Resources r1 = new android.content.res.Resources
                android.util.DisplayMetrics r0 = r2.getDisplayMetrics()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r1.<init>(r3, r0, r2)
                return r1
        }

        private static android.content.res.Resources b(android.content.Context r6, android.content.res.Resources r7, android.content.res.AssetManager r8) {
                java.lang.String r0 = "mThemeValues"
                java.lang.String r1 = "ResourcesManager"
                r2 = 3
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r3 = 0
                r2[r3] = r8
                android.util.DisplayMetrics r8 = r7.getDisplayMetrics()
                r4 = 1
                r2[r4] = r8
                android.content.res.Configuration r8 = r7.getConfiguration()
                r5 = 2
                r2[r5] = r8
                java.lang.String r8 = "android.content.res.VivoResources"
                java.lang.Object r8 = com.kwad.sdk.utils.s.g(r8, r2)
                android.content.res.Resources r8 = (android.content.res.Resources) r8
                if (r8 == 0) goto L45
                java.lang.String r2 = "init"
                java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L30
                java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Exception -> L30
                r4[r3] = r6     // Catch: java.lang.Exception -> L30
                com.kwad.sdk.utils.s.h(r8, r2, r4)     // Catch: java.lang.Exception -> L30
                goto L36
            L30:
                r6 = move-exception
                java.lang.String r2 = "createVivoResources init failed"
                com.kwad.library.solder.lib.a.e(r1, r2, r6)
            L36:
                java.lang.Object r6 = com.kwad.sdk.utils.s.g(r7, r0)     // Catch: java.lang.Exception -> L3e
                com.kwad.sdk.utils.s.b(r8, r0, r6)     // Catch: java.lang.Exception -> L3e
                goto L44
            L3e:
                r6 = move-exception
                java.lang.String r7 = "createVivoResources set mThemeValues failed"
                com.kwad.library.solder.lib.a.e(r1, r7, r6)
            L44:
                return r8
            L45:
                java.lang.RuntimeException r6 = new java.lang.RuntimeException
                java.lang.String r7 = "Can not create Resources"
                r6.<init>(r7)
                throw r6
        }

        static android.content.res.Resources c(android.content.Context r0, android.content.res.Resources r1, android.content.res.AssetManager r2) {
                android.content.res.Resources r0 = a(r0, r1, r2)
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.library.b.b.a.afe = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.kwad.library.b.b.a.aff = r0
            return
    }

    private static android.content.res.Resources a(android.content.Context r2, android.content.res.AssetManager r3, android.util.DisplayMetrics r4, android.content.res.Configuration r5) {
            android.content.res.Resources r0 = r2.getResources()
            boolean r1 = a(r0)
            if (r1 == 0) goto Lf
            android.content.res.Resources r2 = com.kwad.library.b.b.a.d.h(r0, r3)
            return r2
        Lf:
            boolean r1 = b(r0)
            if (r1 == 0) goto L1a
            android.content.res.Resources r2 = com.kwad.library.b.b.a.c.f(r0, r3)
            return r2
        L1a:
            boolean r1 = e(r0)
            if (r1 == 0) goto L25
            android.content.res.Resources r2 = com.kwad.library.b.b.a.b.d(r0, r3)
            return r2
        L25:
            boolean r1 = c(r0)
            if (r1 == 0) goto L30
            android.content.res.Resources r2 = com.kwad.library.b.b.a.f.c(r2, r0, r3)
            return r2
        L30:
            boolean r2 = d(r0)
            if (r2 == 0) goto L3b
            android.content.res.Resources r2 = com.kwad.library.b.b.a.e.j(r0, r3)
            return r2
        L3b:
            boolean r2 = f(r0)
            if (r2 == 0) goto L46
            android.content.res.Resources r2 = com.kwad.library.b.b.a.a.b(r0, r3)
            return r2
        L46:
            android.content.res.Resources r2 = new android.content.res.Resources
            r2.<init>(r3, r4, r5)
            return r2
    }

    public static android.content.res.Resources a(android.content.Context r2, android.content.res.Resources r3, java.lang.String r4) {
            java.lang.Object r0 = com.kwad.library.b.b.a.aff
            monitor-enter(r0)
            java.util.Map<java.lang.String, android.content.res.Resources> r1 = com.kwad.library.b.b.a.afe     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L2f
            android.content.res.Resources r1 = (android.content.res.Resources) r1     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L2d
            android.content.res.Resources r1 = b(r2, r3, r4)     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L19
            java.util.Map<java.lang.String, android.content.res.Resources> r2 = com.kwad.library.b.b.a.afe     // Catch: java.lang.Throwable -> L2f
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L2f
            goto L2d
        L19:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L2f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = "Can not createResources for "
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L2f
            r3.append(r4)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2f
            throw r2     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            return r1
        L2f:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r2
    }

    private static void a(android.content.res.AssetManager r4, java.lang.String r5) {
            r0 = 0
            r1 = 1
            java.lang.String r2 = "addOverlayPath"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lc
            r3[r0] = r5     // Catch: java.lang.Throwable -> Lc
            com.kwad.sdk.utils.s.h(r4, r2, r3)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r5
            java.lang.String r5 = "addAssetPath"
            com.kwad.sdk.utils.s.h(r4, r5, r1)
            return
    }

    private static boolean a(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.MiuiResources"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static int b(android.content.res.AssetManager r5, java.lang.String r6) {
            java.lang.String r0 = "addAssetPath"
            r1 = 1
            r2 = 0
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1c
            r4 = 24
            if (r3 < r4) goto L14
            java.lang.String r3 = "addAssetPathAsSharedLibrary"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1c
            r4[r2] = r6     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.utils.s.h(r5, r3, r4)     // Catch: java.lang.Throwable -> L1c
            goto L23
        L14:
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1c
            r3[r2] = r6     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.utils.s.h(r5, r0, r3)     // Catch: java.lang.Throwable -> L1c
            goto L23
        L1c:
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r2] = r6
            com.kwad.sdk.utils.s.h(r5, r0, r1)
        L23:
            return r2
    }

    private static android.content.res.Resources b(android.content.Context r7, android.content.res.Resources r8, java.lang.String r9) {
            java.lang.Class<android.content.res.AssetManager> r0 = android.content.res.AssetManager.class
            java.lang.Object r0 = com.kwad.sdk.utils.s.i(r0)
            android.content.res.AssetManager r0 = (android.content.res.AssetManager) r0
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r9
            java.lang.String r9 = "addAssetPath"
            com.kwad.sdk.utils.s.h(r0, r9, r1)
            int r9 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r9 < r1) goto L70
            android.content.pm.ApplicationInfo r9 = r7.getApplicationInfo()
            java.lang.String r1 = "resourceDirs"
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r9, r1)     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L4c
            java.lang.Class r3 = r1.getClass()     // Catch: java.lang.Throwable -> L48
            boolean r3 = r3.isArray()     // Catch: java.lang.Throwable -> L48
            if (r3 == 0) goto L4c
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.Throwable -> L48
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.Throwable -> L48
            int r3 = r1.length     // Catch: java.lang.Throwable -> L48
            if (r3 <= 0) goto L4c
            int r3 = r1.length     // Catch: java.lang.Throwable -> L48
            r4 = r2
        L38:
            if (r4 >= r3) goto L4c
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L48
            boolean r6 = r5 instanceof java.lang.String     // Catch: java.lang.Throwable -> L48
            if (r6 == 0) goto L45
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L48
            a(r0, r5)     // Catch: java.lang.Throwable -> L48
        L45:
            int r4 = r4 + 1
            goto L38
        L48:
            r1 = move-exception
            r1.printStackTrace()
        L4c:
            java.lang.String[] r1 = r9.sharedLibraryFiles     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L70
            java.lang.String[] r1 = r9.sharedLibraryFiles     // Catch: java.lang.Throwable -> L6c
            int r1 = r1.length     // Catch: java.lang.Throwable -> L6c
            if (r1 <= 0) goto L70
            java.lang.String[] r9 = r9.sharedLibraryFiles     // Catch: java.lang.Throwable -> L6c
            int r1 = r9.length     // Catch: java.lang.Throwable -> L6c
        L58:
            if (r2 >= r1) goto L70
            r3 = r9[r2]     // Catch: java.lang.Throwable -> L6c
            if (r3 == 0) goto L69
            java.lang.String r4 = ".apk"
            boolean r4 = r3.endsWith(r4)     // Catch: java.lang.Throwable -> L6c
            if (r4 == 0) goto L69
            b(r0, r3)     // Catch: java.lang.Throwable -> L6c
        L69:
            int r2 = r2 + 1
            goto L58
        L6c:
            r9 = move-exception
            r9.printStackTrace()
        L70:
            android.util.DisplayMetrics r9 = r8.getDisplayMetrics()
            android.content.res.Configuration r8 = r8.getConfiguration()
            android.content.res.Resources r7 = a(r7, r0, r9, r8)
            return r7
    }

    private static boolean b(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.MiuiResourcesImpl"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static boolean c(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.VivoResources"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static boolean d(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.NubiaResources"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static boolean e(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.HwResources"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static boolean f(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.Resources"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }
}
