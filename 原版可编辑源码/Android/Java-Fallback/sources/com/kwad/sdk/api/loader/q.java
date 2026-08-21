package com.kwad.sdk.api.loader;

final class q {
    private static java.util.Map<java.lang.String, android.content.res.Resources> afe;
    private static final java.lang.Object aff = null;

    static final class a {
        private static android.content.res.Resources a(android.content.res.Resources r7, android.content.res.AssetManager r8) {
                java.lang.Class r0 = r7.getClass()     // Catch: java.lang.Exception -> L3f
                com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.a(r0)     // Catch: java.lang.Exception -> L3f
                r1 = 3
                java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3f
                java.lang.Class<android.content.res.AssetManager> r3 = android.content.res.AssetManager.class
                r4 = 0
                r2[r4] = r3     // Catch: java.lang.Exception -> L3f
                java.lang.Class<android.util.DisplayMetrics> r3 = android.util.DisplayMetrics.class
                r5 = 1
                r2[r5] = r3     // Catch: java.lang.Exception -> L3f
                java.lang.Class<android.content.res.Configuration> r3 = android.content.res.Configuration.class
                r6 = 2
                r2[r6] = r3     // Catch: java.lang.Exception -> L3f
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3f
                r1[r4] = r8     // Catch: java.lang.Exception -> L3f
                android.util.DisplayMetrics r3 = r7.getDisplayMetrics()     // Catch: java.lang.Exception -> L3f
                r1[r5] = r3     // Catch: java.lang.Exception -> L3f
                android.content.res.Configuration r3 = r7.getConfiguration()     // Catch: java.lang.Exception -> L3f
                r1[r6] = r3     // Catch: java.lang.Exception -> L3f
                com.kwad.sdk.api.loader.Reflect r0 = r0.a(r2, r1)     // Catch: java.lang.Exception -> L3f
                java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L3f
                android.content.res.Resources r0 = (android.content.res.Resources) r0     // Catch: java.lang.Exception -> L3f
                if (r0 == 0) goto L37
                return r0
            L37:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException     // Catch: java.lang.Exception -> L3f
                java.lang.String r1 = "Can not create Resources"
                r0.<init>(r1)     // Catch: java.lang.Exception -> L3f
                throw r0     // Catch: java.lang.Exception -> L3f
            L3f:
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r7.getDisplayMetrics()
                android.content.res.Configuration r7 = r7.getConfiguration()
                r0.<init>(r8, r1, r7)
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
                android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
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

        private static android.content.res.Resources c(android.content.res.Resources r7, android.content.res.AssetManager r8) {
                java.lang.String r0 = "android.content.res.HwResources"
                com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.ca(r0)
                r1 = 3
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.Class<android.content.res.AssetManager> r3 = android.content.res.AssetManager.class
                r4 = 0
                r2[r4] = r3
                java.lang.Class<android.util.DisplayMetrics> r3 = android.util.DisplayMetrics.class
                r5 = 1
                r2[r5] = r3
                java.lang.Class<android.content.res.Configuration> r3 = android.content.res.Configuration.class
                r6 = 2
                r2[r6] = r3
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r1[r4] = r8
                android.util.DisplayMetrics r8 = r7.getDisplayMetrics()
                r1[r5] = r8
                android.content.res.Configuration r7 = r7.getConfiguration()
                r1[r6] = r7
                com.kwad.sdk.api.loader.Reflect r7 = r0.a(r2, r1)
                java.lang.Object r7 = r7.get()
                android.content.res.Resources r7 = (android.content.res.Resources) r7
                if (r7 == 0) goto L35
                return r7
            L35:
                java.lang.RuntimeException r7 = new java.lang.RuntimeException
                java.lang.String r8 = "Can not create Resources"
                r7.<init>(r8)
                throw r7
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
                android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
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

        private static android.content.res.Resources e(android.content.res.Resources r7, android.content.res.AssetManager r8) {
                java.lang.String r0 = "android.content.res.MiuiResourcesImpl"
                com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.ca(r0)
                r1 = 3
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.Class<android.content.res.AssetManager> r3 = android.content.res.AssetManager.class
                r4 = 0
                r2[r4] = r3
                java.lang.Class<android.util.DisplayMetrics> r3 = android.util.DisplayMetrics.class
                r5 = 1
                r2[r5] = r3
                java.lang.Class<android.content.res.Configuration> r3 = android.content.res.Configuration.class
                r6 = 2
                r2[r6] = r3
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r1[r4] = r8
                android.util.DisplayMetrics r8 = r7.getDisplayMetrics()
                r1[r5] = r8
                android.content.res.Configuration r7 = r7.getConfiguration()
                r1[r6] = r7
                com.kwad.sdk.api.loader.Reflect r7 = r0.a(r2, r1)
                java.lang.Object r7 = r7.get()
                android.content.res.Resources r7 = (android.content.res.Resources) r7
                if (r7 == 0) goto L35
                return r7
            L35:
                java.lang.RuntimeException r7 = new java.lang.RuntimeException
                java.lang.String r8 = "Can not create Resources"
                r7.<init>(r8)
                throw r7
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
                android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.a.b(r2, r3)     // Catch: java.lang.Exception -> La
                return r2
            La:
                android.content.res.Resources r0 = new android.content.res.Resources
                android.util.DisplayMetrics r1 = r2.getDisplayMetrics()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r0.<init>(r3, r1, r2)
                return r0
        }

        private static android.content.res.Resources g(android.content.res.Resources r7, android.content.res.AssetManager r8) {
                java.lang.String r0 = "android.content.res.MiuiResources"
                com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.ca(r0)
                r1 = 3
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.Class<android.content.res.AssetManager> r3 = android.content.res.AssetManager.class
                r4 = 0
                r2[r4] = r3
                java.lang.Class<android.util.DisplayMetrics> r3 = android.util.DisplayMetrics.class
                r5 = 1
                r2[r5] = r3
                java.lang.Class<android.content.res.Configuration> r3 = android.content.res.Configuration.class
                r6 = 2
                r2[r6] = r3
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r1[r4] = r8
                android.util.DisplayMetrics r8 = r7.getDisplayMetrics()
                r1[r5] = r8
                android.content.res.Configuration r7 = r7.getConfiguration()
                r1[r6] = r7
                com.kwad.sdk.api.loader.Reflect r7 = r0.a(r2, r1)
                java.lang.Object r7 = r7.get()
                android.content.res.Resources r7 = (android.content.res.Resources) r7
                if (r7 == 0) goto L35
                return r7
            L35:
                java.lang.RuntimeException r7 = new java.lang.RuntimeException
                java.lang.String r8 = "Can not create Resources"
                r7.<init>(r8)
                throw r7
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
                android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
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

        private static android.content.res.Resources i(android.content.res.Resources r7, android.content.res.AssetManager r8) {
                java.lang.String r0 = "android.content.res.NubiaResources"
                com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.ca(r0)
                r1 = 3
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.Class<android.content.res.AssetManager> r3 = android.content.res.AssetManager.class
                r4 = 0
                r2[r4] = r3
                java.lang.Class<android.util.DisplayMetrics> r3 = android.util.DisplayMetrics.class
                r5 = 1
                r2[r5] = r3
                java.lang.Class<android.content.res.Configuration> r3 = android.content.res.Configuration.class
                r6 = 2
                r2[r6] = r3
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r1[r4] = r8
                android.util.DisplayMetrics r8 = r7.getDisplayMetrics()
                r1[r5] = r8
                android.content.res.Configuration r7 = r7.getConfiguration()
                r1[r6] = r7
                com.kwad.sdk.api.loader.Reflect r7 = r0.a(r2, r1)
                java.lang.Object r7 = r7.get()
                android.content.res.Resources r7 = (android.content.res.Resources) r7
                if (r7 == 0) goto L35
                return r7
            L35:
                java.lang.RuntimeException r7 = new java.lang.RuntimeException
                java.lang.String r8 = "Can not create Resources"
                r7.<init>(r8)
                throw r7
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
                android.content.res.Resources r1 = com.kwad.sdk.api.loader.q.a.b(r2, r3)     // Catch: java.lang.Exception -> Le
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

        private static android.content.res.Resources b(android.content.Context r8, android.content.res.Resources r9, android.content.res.AssetManager r10) {
                java.lang.String r0 = "mThemeValues"
                java.lang.String r1 = "android.content.res.VivoResources"
                com.kwad.sdk.api.loader.Reflect r1 = com.kwad.sdk.api.loader.Reflect.ca(r1)
                r2 = 3
                java.lang.Class[] r3 = new java.lang.Class[r2]
                java.lang.Class<android.content.res.AssetManager> r4 = android.content.res.AssetManager.class
                r5 = 0
                r3[r5] = r4
                java.lang.Class<android.util.DisplayMetrics> r4 = android.util.DisplayMetrics.class
                r6 = 1
                r3[r6] = r4
                java.lang.Class<android.content.res.Configuration> r4 = android.content.res.Configuration.class
                r7 = 2
                r3[r7] = r4
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r2[r5] = r10
                android.util.DisplayMetrics r10 = r9.getDisplayMetrics()
                r2[r6] = r10
                android.content.res.Configuration r10 = r9.getConfiguration()
                r2[r7] = r10
                com.kwad.sdk.api.loader.Reflect r10 = r1.a(r3, r2)
                java.lang.Object r10 = r10.get()
                android.content.res.Resources r10 = (android.content.res.Resources) r10
                if (r10 == 0) goto L67
                com.kwad.sdk.api.loader.Reflect r1 = com.kwad.sdk.api.loader.Reflect.h(r10)     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                java.lang.String r2 = "init"
                java.lang.Class[] r3 = new java.lang.Class[r6]     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r3[r5] = r4     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                java.lang.Object[] r4 = new java.lang.Object[r6]     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                java.lang.String r8 = r8.getPackageName()     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                r4[r5] = r8     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                r1.a(r2, r3, r4)     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L4e
                goto L52
            L4e:
                r8 = move-exception
                r8.printStackTrace()
            L52:
                com.kwad.sdk.api.loader.Reflect r8 = com.kwad.sdk.api.loader.Reflect.h(r9)     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L62
                java.lang.Object r8 = r8.get(r0)     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L62
                com.kwad.sdk.api.loader.Reflect r9 = com.kwad.sdk.api.loader.Reflect.h(r10)     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L62
                r9.b(r0, r8)     // Catch: com.kwad.sdk.api.loader.Reflect.ReflectException -> L62
                goto L66
            L62:
                r8 = move-exception
                r8.printStackTrace()
            L66:
                return r10
            L67:
                java.lang.RuntimeException r8 = new java.lang.RuntimeException
                java.lang.String r9 = "Can not create Resources"
                r8.<init>(r9)
                throw r8
        }

        static android.content.res.Resources c(android.content.Context r0, android.content.res.Resources r1, android.content.res.AssetManager r2) {
                android.content.res.Resources r0 = a(r0, r1, r2)
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.api.loader.q.afe = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.kwad.sdk.api.loader.q.aff = r0
            return
    }

    private static android.content.res.Resources a(android.content.Context r2, android.content.res.AssetManager r3, android.util.DisplayMetrics r4, android.content.res.Configuration r5) {
            android.content.res.Resources r0 = r2.getResources()
            boolean r1 = a(r0)
            if (r1 == 0) goto Lf
            android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.d.h(r0, r3)
            return r2
        Lf:
            boolean r1 = b(r0)
            if (r1 == 0) goto L1a
            android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.c.f(r0, r3)
            return r2
        L1a:
            boolean r1 = e(r0)
            if (r1 == 0) goto L25
            android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.b.d(r0, r3)
            return r2
        L25:
            boolean r1 = c(r0)
            if (r1 == 0) goto L30
            android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.f.c(r2, r0, r3)
            return r2
        L30:
            boolean r2 = d(r0)
            if (r2 == 0) goto L3b
            android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.e.j(r0, r3)
            return r2
        L3b:
            boolean r2 = f(r0)
            if (r2 == 0) goto L46
            android.content.res.Resources r2 = com.kwad.sdk.api.loader.q.a.b(r0, r3)
            return r2
        L46:
            android.content.res.Resources r2 = new android.content.res.Resources
            r2.<init>(r3, r4, r5)
            return r2
    }

    static android.content.res.Resources a(android.content.Context r2, android.content.res.Resources r3, java.lang.String r4) {
            java.lang.Object r0 = com.kwad.sdk.api.loader.q.aff
            monitor-enter(r0)
            java.util.Map<java.lang.String, android.content.res.Resources> r1 = com.kwad.sdk.api.loader.q.afe     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L2f
            android.content.res.Resources r1 = (android.content.res.Resources) r1     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L2d
            android.content.res.Resources r1 = b(r2, r3, r4)     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L19
            java.util.Map<java.lang.String, android.content.res.Resources> r2 = com.kwad.sdk.api.loader.q.afe     // Catch: java.lang.Throwable -> L2f
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

    private static void a(android.content.res.AssetManager r6, java.lang.String r7) {
            r0 = 0
            r1 = 1
            com.kwad.sdk.api.loader.Reflect r2 = com.kwad.sdk.api.loader.Reflect.h(r6)     // Catch: java.lang.Throwable -> L16
            java.lang.String r3 = "addOverlayPath"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L16
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L16
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L16
            r5[r0] = r7     // Catch: java.lang.Throwable -> L16
            r2.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            com.kwad.sdk.api.loader.Reflect r6 = com.kwad.sdk.api.loader.Reflect.h(r6)
            java.lang.Class[] r2 = new java.lang.Class[r1]
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r2[r0] = r3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r7
            java.lang.String r7 = "addAssetPath"
            r6.a(r7, r2, r1)
            return
    }

    private static boolean a(android.content.res.Resources r1) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = "android.content.res.MiuiResources"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static int b(android.content.res.AssetManager r7, java.lang.String r8) {
            java.lang.String r0 = "addAssetPath"
            r1 = 1
            r2 = 0
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L30
            r4 = 24
            if (r3 < r4) goto L1e
            com.kwad.sdk.api.loader.Reflect r3 = com.kwad.sdk.api.loader.Reflect.h(r7)     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "addAssetPathAsSharedLibrary"
            java.lang.Class[] r5 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L30
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r2] = r6     // Catch: java.lang.Throwable -> L30
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L30
            r6[r2] = r8     // Catch: java.lang.Throwable -> L30
            r3.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L30
            goto L41
        L1e:
            com.kwad.sdk.api.loader.Reflect r3 = com.kwad.sdk.api.loader.Reflect.h(r7)     // Catch: java.lang.Throwable -> L30
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L30
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L30
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L30
            r5[r2] = r8     // Catch: java.lang.Throwable -> L30
            r3.a(r0, r4, r5)     // Catch: java.lang.Throwable -> L30
            goto L41
        L30:
            com.kwad.sdk.api.loader.Reflect r7 = com.kwad.sdk.api.loader.Reflect.h(r7)
            java.lang.Class[] r3 = new java.lang.Class[r1]
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r2] = r4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r2] = r8
            r7.a(r0, r3, r1)
        L41:
            return r2
    }

    private static android.content.res.Resources b(android.content.Context r7, android.content.res.Resources r8, java.lang.String r9) {
            java.lang.Class<android.content.res.AssetManager> r0 = android.content.res.AssetManager.class
            com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.a(r0)
            com.kwad.sdk.api.loader.Reflect r0 = r0.yx()
            java.lang.Object r0 = r0.get()
            android.content.res.AssetManager r0 = (android.content.res.AssetManager) r0
            com.kwad.sdk.api.loader.Reflect r1 = com.kwad.sdk.api.loader.Reflect.h(r0)
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r2[r5] = r9
            java.lang.String r9 = "addAssetPath"
            r1.a(r9, r3, r2)
            int r9 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r9 < r1) goto L86
            android.content.pm.ApplicationInfo r9 = r7.getApplicationInfo()
            com.kwad.sdk.api.loader.Reflect r1 = com.kwad.sdk.api.loader.Reflect.h(r9)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "resourceDirs"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L62
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.Throwable -> L5e
            boolean r2 = r2.isArray()     // Catch: java.lang.Throwable -> L5e
            if (r2 == 0) goto L62
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.Throwable -> L5e
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.Throwable -> L5e
            int r2 = r1.length     // Catch: java.lang.Throwable -> L5e
            if (r2 <= 0) goto L62
            int r2 = r1.length     // Catch: java.lang.Throwable -> L5e
            r3 = r5
        L4e:
            if (r3 >= r2) goto L62
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L5e
            boolean r6 = r4 instanceof java.lang.String     // Catch: java.lang.Throwable -> L5e
            if (r6 == 0) goto L5b
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L5e
            a(r0, r4)     // Catch: java.lang.Throwable -> L5e
        L5b:
            int r3 = r3 + 1
            goto L4e
        L5e:
            r1 = move-exception
            r1.printStackTrace()
        L62:
            java.lang.String[] r1 = r9.sharedLibraryFiles     // Catch: java.lang.Throwable -> L82
            if (r1 == 0) goto L86
            java.lang.String[] r1 = r9.sharedLibraryFiles     // Catch: java.lang.Throwable -> L82
            int r1 = r1.length     // Catch: java.lang.Throwable -> L82
            if (r1 <= 0) goto L86
            java.lang.String[] r9 = r9.sharedLibraryFiles     // Catch: java.lang.Throwable -> L82
            int r1 = r9.length     // Catch: java.lang.Throwable -> L82
        L6e:
            if (r5 >= r1) goto L86
            r2 = r9[r5]     // Catch: java.lang.Throwable -> L82
            if (r2 == 0) goto L7f
            java.lang.String r3 = ".apk"
            boolean r3 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L82
            if (r3 == 0) goto L7f
            b(r0, r2)     // Catch: java.lang.Throwable -> L82
        L7f:
            int r5 = r5 + 1
            goto L6e
        L82:
            r9 = move-exception
            r9.printStackTrace()
        L86:
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
