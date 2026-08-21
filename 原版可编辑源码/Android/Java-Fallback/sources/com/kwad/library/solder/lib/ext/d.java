package com.kwad.library.solder.lib.ext;

public final class d {

    static final class a {
        private static void d(java.lang.ClassLoader r8, java.io.File r9) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r8, r0)
                java.lang.Object r8 = r0.get(r8)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r8, r0)
                java.lang.Object r1 = r0.get(r8)
                java.io.File[] r1 = (java.io.File[]) r1
                java.io.File[] r1 = (java.io.File[]) r1
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                int r3 = r1.length
                r4 = 0
                r5 = r4
            L20:
                if (r5 >= r3) goto L30
                r6 = r1[r5]
                boolean r7 = r9.equals(r6)
                if (r7 != 0) goto L2d
                r2.add(r6)
            L2d:
                int r5 = r5 + 1
                goto L20
            L30:
                r2.add(r9)
                java.io.File[] r9 = new java.io.File[r4]
                java.lang.Object[] r9 = r2.toArray(r9)
                r0.set(r8, r9)
                return
        }

        static void e(java.lang.ClassLoader r0, java.io.File r1) {
                d(r0, r1)
                return
        }
    }

    static final class b {
        private static void d(java.lang.ClassLoader r6, java.io.File r7) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r6, r0)
                java.lang.Object r6 = r0.get(r6)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r1 = com.kwad.library.solder.lib.ext.e.c(r6, r0)
                java.lang.Object r2 = r1.get(r6)
                java.util.List r2 = (java.util.List) r2
                r3 = 2
                if (r2 != 0) goto L1e
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>(r3)
            L1e:
                java.util.ArrayList r4 = new java.util.ArrayList
                r4.<init>(r2)
                java.util.Iterator r2 = r4.iterator()
            L27:
                boolean r5 = r2.hasNext()
                if (r5 == 0) goto L3a
                java.lang.Object r5 = r2.next()
                java.io.File r5 = (java.io.File) r5
                boolean r5 = r7.equals(r5)
                if (r5 == 0) goto L27
                return
            L3a:
                r4.add(r7)
                r1.set(r6, r4)
                java.lang.Object r7 = r1.get(r6)
                if (r7 == r4) goto L4d
                java.lang.reflect.Field r7 = com.kwad.library.solder.lib.ext.e.d(r6, r0)
                r7.set(r6, r4)
            L4d:
                java.lang.String r7 = "systemNativeLibraryDirectories"
                java.lang.reflect.Field r7 = com.kwad.library.solder.lib.ext.e.c(r6, r7)
                java.lang.Object r7 = r7.get(r6)
                java.util.List r7 = (java.util.List) r7
                if (r7 != 0) goto L60
                java.util.ArrayList r7 = new java.util.ArrayList
                r7.<init>(r3)
            L60:
                java.util.ArrayList r0 = new java.util.ArrayList
                int r1 = r4.size()
                int r2 = r7.size()
                int r1 = r1 + r2
                r2 = 1
                int r1 = r1 + r2
                r0.<init>(r1)
                r0.addAll(r4)
                r0.addAll(r7)
                r7 = 3
                java.lang.Class[] r1 = new java.lang.Class[r7]
                java.lang.Class<java.util.List> r4 = java.util.List.class
                r5 = 0
                r1[r5] = r4
                java.lang.Class<java.io.File> r4 = java.io.File.class
                r1[r2] = r4
                java.lang.Class<java.util.List> r4 = java.util.List.class
                r1[r3] = r4
                java.lang.String r4 = "makePathElements"
                java.lang.reflect.Method r1 = com.kwad.library.solder.lib.ext.e.b(r6, r4, r1)
                java.util.ArrayList r4 = new java.util.ArrayList
                r4.<init>()
                java.lang.Object[] r7 = new java.lang.Object[r7]
                r7[r5] = r0
                r0 = 0
                r7[r2] = r0
                r7[r3] = r4
                java.lang.Object r7 = r1.invoke(r6, r7)
                java.lang.Object[] r7 = (java.lang.Object[]) r7
                java.lang.Object[] r7 = (java.lang.Object[]) r7
                java.lang.String r0 = "nativeLibraryPathElements"
                java.lang.reflect.Field r1 = com.kwad.library.solder.lib.ext.e.c(r6, r0)
                r1.set(r6, r7)
                java.lang.Object r1 = r1.get(r6)
                if (r1 == r7) goto Lb8
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.d(r6, r0)
                r0.set(r6, r7)
            Lb8:
                return
        }

        static void f(java.lang.ClassLoader r0, java.io.File r1) {
                d(r0, r1)
                return
        }
    }

    static final class c {
        private static void d(java.lang.ClassLoader r6, java.io.File r7) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r6, r0)
                java.lang.Object r6 = r0.get(r6)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r6, r0)
                java.lang.Object r0 = r0.get(r6)
                java.util.List r0 = (java.util.List) r0
                r1 = 2
                if (r0 != 0) goto L1e
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>(r1)
            L1e:
                java.util.Iterator r2 = r0.iterator()
            L22:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L35
                java.lang.Object r3 = r2.next()
                java.io.File r3 = (java.io.File) r3
                boolean r3 = r7.equals(r3)
                if (r3 == 0) goto L22
                return
            L35:
                r0.add(r7)
                java.lang.String r7 = "systemNativeLibraryDirectories"
                java.lang.reflect.Field r7 = com.kwad.library.solder.lib.ext.e.c(r6, r7)
                java.lang.Object r7 = r7.get(r6)
                java.util.List r7 = (java.util.List) r7
                if (r7 != 0) goto L4b
                java.util.ArrayList r7 = new java.util.ArrayList
                r7.<init>(r1)
            L4b:
                java.util.ArrayList r2 = new java.util.ArrayList
                int r3 = r0.size()
                int r4 = r7.size()
                int r3 = r3 + r4
                r4 = 1
                int r3 = r3 + r4
                r2.<init>(r3)
                r2.addAll(r0)
                r2.addAll(r7)
                r7 = 3
                java.lang.Class[] r0 = new java.lang.Class[r7]
                java.lang.Class<java.util.List> r3 = java.util.List.class
                r5 = 0
                r0[r5] = r3
                java.lang.Class<java.io.File> r3 = java.io.File.class
                r0[r4] = r3
                java.lang.Class<java.util.List> r3 = java.util.List.class
                r0[r1] = r3
                java.lang.String r3 = "makePathElements"
                java.lang.reflect.Method r0 = com.kwad.library.solder.lib.ext.e.b(r6, r3, r0)
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                java.lang.Object[] r7 = new java.lang.Object[r7]
                r7[r5] = r2
                r2 = 0
                r7[r4] = r2
                r7[r1] = r3
                java.lang.Object r7 = r0.invoke(r6, r7)
                java.lang.Object[] r7 = (java.lang.Object[]) r7
                java.lang.Object[] r7 = (java.lang.Object[]) r7
                java.lang.String r0 = "nativeLibraryPathElements"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r6, r0)
                r0.set(r6, r7)
                return
        }

        static void g(java.lang.ClassLoader r0, java.io.File r1) {
                d(r0, r1)
                return
        }
    }

    static final class d {
        private static void d(java.lang.ClassLoader r4, java.io.File r5) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r4, r0)
                java.lang.Object r4 = r0.get(r4)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r4, r0)
                java.lang.Object r0 = r0.get(r4)
                java.util.List r0 = (java.util.List) r0
                r1 = 2
                if (r0 != 0) goto L1e
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>(r1)
            L1e:
                java.util.Iterator r2 = r0.iterator()
            L22:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L35
                java.lang.Object r3 = r2.next()
                java.io.File r3 = (java.io.File) r3
                boolean r3 = r5.equals(r3)
                if (r3 == 0) goto L22
                return
            L35:
                r0.add(r5)
                java.lang.String r5 = "systemNativeLibraryDirectories"
                java.lang.reflect.Field r5 = com.kwad.library.solder.lib.ext.e.c(r4, r5)
                java.lang.Object r5 = r5.get(r4)
                java.util.List r5 = (java.util.List) r5
                if (r5 != 0) goto L4b
                java.util.ArrayList r5 = new java.util.ArrayList
                r5.<init>(r1)
            L4b:
                java.util.ArrayList r1 = new java.util.ArrayList
                int r2 = r0.size()
                int r3 = r5.size()
                int r2 = r2 + r3
                r3 = 1
                int r2 = r2 + r3
                r1.<init>(r2)
                r1.addAll(r0)
                r1.addAll(r5)
                java.lang.Class[] r5 = new java.lang.Class[r3]
                java.lang.Class<java.util.List> r0 = java.util.List.class
                r2 = 0
                r5[r2] = r0
                java.lang.String r0 = "makePathElements"
                java.lang.reflect.Method r5 = com.kwad.library.solder.lib.ext.e.b(r4, r0, r5)
                java.lang.Object[] r0 = new java.lang.Object[r3]
                r0[r2] = r1
                java.lang.Object r5 = r5.invoke(r4, r0)
                java.lang.Object[] r5 = (java.lang.Object[]) r5
                java.lang.Object[] r5 = (java.lang.Object[]) r5
                java.lang.String r0 = "nativeLibraryPathElements"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r4, r0)
                r0.set(r4, r5)
                return
        }

        static void h(java.lang.ClassLoader r0, java.io.File r1) {
                d(r0, r1)
                return
        }
    }

    static final class e {
        private static void d(java.lang.ClassLoader r4, java.io.File r5) {
                java.lang.String r5 = r5.getPath()
                java.lang.String r0 = "libPath"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r4, r0)
                java.lang.Object r1 = r0.get(r4)
                java.lang.String r1 = java.lang.String.valueOf(r1)
                boolean r2 = android.text.TextUtils.isEmpty(r1)
                if (r2 != 0) goto L2d
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r1)
                java.lang.String r1 = ":"
                r2.append(r1)
                r2.append(r5)
                java.lang.String r1 = r2.toString()
                goto L2e
            L2d:
                r1 = r5
            L2e:
                r0.set(r4, r1)
                java.lang.String r0 = "libraryPathElements"
                java.lang.reflect.Field r0 = com.kwad.library.solder.lib.ext.e.c(r4, r0)
                java.lang.Object r1 = r0.get(r4)
                java.util.List r1 = (java.util.List) r1
                java.util.Iterator r2 = r1.iterator()
            L41:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L54
                java.lang.Object r3 = r2.next()
                java.lang.String r3 = (java.lang.String) r3
                boolean r3 = r5.equals(r3)
                if (r3 == 0) goto L41
                return
            L54:
                r1.add(r5)
                r0.set(r4, r1)
                return
        }

        static void i(java.lang.ClassLoader r0, java.io.File r1) {
                d(r0, r1)
                return
        }
    }

    public static synchronized void c(java.lang.ClassLoader r8, java.io.File r9) {
            java.lang.Class<com.kwad.library.solder.lib.ext.d> r0 = com.kwad.library.solder.lib.ext.d.class
            monitor-enter(r0)
            r1 = 0
            r2 = 1
            if (r9 == 0) goto Lac
            boolean r3 = r9.exists()     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto Lf
            goto Lac
        Lf:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            r4 = 25
            r5 = 2
            if (r3 != r4) goto L1a
            int r3 = android.os.Build.VERSION.PREVIEW_SDK_INT     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L1e
        L1a:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            if (r3 <= r4) goto L44
        L1e:
            com.kwad.library.solder.lib.ext.d.d.h(r8, r9)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r0)
            return
        L23:
            r3 = move-exception
            java.lang.String r4 = "Sodler.ShareLibraryLoader"
            java.lang.String r6 = "installNativeLibraryPath, v25 fail, sdk: %d, error: %s, try to fallback to V23"
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lbd
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> Lbd
            r5[r1] = r7     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = r3.getMessage()     // Catch: java.lang.Throwable -> Lbd
            r5[r2] = r1     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = java.lang.String.format(r6, r5)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.a.e(r4, r1)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.ext.d.b.f(r8, r9)     // Catch: java.lang.Throwable -> Lbd
            monitor-exit(r0)
            return
        L44:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            r4 = 24
            if (r3 != r4) goto L70
            com.kwad.library.solder.lib.ext.d.c.g(r8, r9)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r0)
            return
        L4f:
            r3 = move-exception
            java.lang.String r4 = "Sodler.ShareLibraryLoader"
            java.lang.String r6 = "installNativeLibraryPath, v23 fail, sdk: %d, error: %s, try to fallback to V14"
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lbd
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> Lbd
            r5[r1] = r7     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = r3.getMessage()     // Catch: java.lang.Throwable -> Lbd
            r5[r2] = r1     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = java.lang.String.format(r6, r5)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.a.e(r4, r1)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.ext.d.a.e(r8, r9)     // Catch: java.lang.Throwable -> L6f
            goto Laa
        L6f:
            throw r3     // Catch: java.lang.Throwable -> Lbd
        L70:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            r4 = 23
            if (r3 < r4) goto L9c
            com.kwad.library.solder.lib.ext.d.b.f(r8, r9)     // Catch: java.lang.Throwable -> L7b
            monitor-exit(r0)
            return
        L7b:
            r3 = move-exception
            java.lang.String r4 = "Sodler.ShareLibraryLoader"
            java.lang.String r6 = "installNativeLibraryPath, v23 fail, sdk: %d, error: %s, try to fallback to V14"
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lbd
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> Lbd
            r5[r1] = r7     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = r3.getMessage()     // Catch: java.lang.Throwable -> Lbd
            r5[r2] = r1     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = java.lang.String.format(r6, r5)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.a.e(r4, r1)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.ext.d.a.e(r8, r9)     // Catch: java.lang.Throwable -> L9b
            goto Laa
        L9b:
            throw r3     // Catch: java.lang.Throwable -> Lbd
        L9c:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lbd
            r2 = 14
            if (r1 < r2) goto La7
            com.kwad.library.solder.lib.ext.d.a.e(r8, r9)     // Catch: java.lang.Throwable -> Lbd
            monitor-exit(r0)
            return
        La7:
            com.kwad.library.solder.lib.ext.d.e.i(r8, r9)     // Catch: java.lang.Throwable -> Lbd
        Laa:
            monitor-exit(r0)
            return
        Lac:
            java.lang.String r8 = "Sodler.ShareLibraryLoader"
            java.lang.String r3 = "installNativeLibraryPath, folder %s is illegal"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lbd
            r2[r1] = r9     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r9 = java.lang.String.format(r3, r2)     // Catch: java.lang.Throwable -> Lbd
            com.kwad.library.solder.lib.a.e(r8, r9)     // Catch: java.lang.Throwable -> Lbd
            monitor-exit(r0)
            return
        Lbd:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }
}
