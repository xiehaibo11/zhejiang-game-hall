package com.kuaishou.weapon.p0;

public class do {

    static final class a {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static void a(java.lang.ClassLoader r0, java.io.File r1) {
                b(r0, r1)
                return
        }

        private static void b(java.lang.ClassLoader r8, java.io.File r9) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r8, r0)
                java.lang.Object r8 = r0.get(r8)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r8, r0)
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
    }

    static final class b {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        static void a(java.lang.ClassLoader r0, java.io.File r1) {
                b(r0, r1)
                return
        }

        private static void b(java.lang.ClassLoader r6, java.io.File r7) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r6, r0)
                java.lang.Object r6 = r0.get(r6)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r1 = com.kuaishou.weapon.p0.dq.a(r6, r0)
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
                java.lang.reflect.Field r7 = com.kuaishou.weapon.p0.dq.b(r6, r0)
                r7.set(r6, r4)
            L4d:
                java.lang.String r7 = "systemNativeLibraryDirectories"
                java.lang.reflect.Field r7 = com.kuaishou.weapon.p0.dq.a(r6, r7)
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
                java.lang.reflect.Method r1 = com.kuaishou.weapon.p0.dq.a(r6, r4, r1)
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
                java.lang.reflect.Field r1 = com.kuaishou.weapon.p0.dq.a(r6, r0)
                r1.set(r6, r7)
                java.lang.Object r1 = r1.get(r6)
                if (r1 == r7) goto Lb8
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.b(r6, r0)
                r0.set(r6, r7)
            Lb8:
                return
        }
    }

    static final class c {
        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        static void a(java.lang.ClassLoader r0, java.io.File r1) {
                b(r0, r1)
                return
        }

        private static void b(java.lang.ClassLoader r6, java.io.File r7) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r6, r0)
                java.lang.Object r6 = r0.get(r6)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r6, r0)
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
                java.lang.reflect.Field r7 = com.kuaishou.weapon.p0.dq.a(r6, r7)
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
                java.lang.reflect.Method r0 = com.kuaishou.weapon.p0.dq.a(r6, r3, r0)
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
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r6, r0)
                r0.set(r6, r7)
                return
        }
    }

    static final class d {
        private d() {
                r0 = this;
                r0.<init>()
                return
        }

        static void a(java.lang.ClassLoader r0, java.io.File r1) {
                b(r0, r1)
                return
        }

        private static void b(java.lang.ClassLoader r4, java.io.File r5) {
                java.lang.String r0 = "pathList"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r4, r0)
                java.lang.Object r4 = r0.get(r4)
                java.lang.String r0 = "nativeLibraryDirectories"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r4, r0)
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
                java.lang.reflect.Field r5 = com.kuaishou.weapon.p0.dq.a(r4, r5)
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
                java.lang.reflect.Method r5 = com.kuaishou.weapon.p0.dq.a(r4, r0, r5)
                java.lang.Object[] r0 = new java.lang.Object[r3]
                r0[r2] = r1
                java.lang.Object r5 = r5.invoke(r4, r0)
                java.lang.Object[] r5 = (java.lang.Object[]) r5
                java.lang.Object[] r5 = (java.lang.Object[]) r5
                java.lang.String r0 = "nativeLibraryPathElements"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r4, r0)
                r0.set(r4, r5)
                return
        }
    }

    static final class e {
        private e() {
                r0 = this;
                r0.<init>()
                return
        }

        static void a(java.lang.ClassLoader r0, java.io.File r1) {
                b(r0, r1)
                return
        }

        private static void b(java.lang.ClassLoader r4, java.io.File r5) {
                java.lang.String r5 = r5.getPath()
                java.lang.String r0 = "libPath"
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r4, r0)
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
                java.lang.reflect.Field r0 = com.kuaishou.weapon.p0.dq.a(r4, r0)
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
    }

    public do() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized void a(java.lang.ClassLoader r3, java.io.File r4) {
            java.lang.Class<com.kuaishou.weapon.p0.do> r0 = com.kuaishou.weapon.p0.do.class
            monitor-enter(r0)
            if (r4 == 0) goto L59
            boolean r1 = r4.exists()     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto Lc
            goto L59
        Lc:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L56
            r2 = 25
            if (r1 != r2) goto L16
            int r1 = android.os.Build.VERSION.PREVIEW_SDK_INT     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L1a
        L16:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L56
            if (r1 <= r2) goto L24
        L1a:
            com.kuaishou.weapon.p0.do.d.a(r3, r4)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return
        L1f:
            com.kuaishou.weapon.p0.do.b.a(r3, r4)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)
            return
        L24:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L56
            r2 = 24
            if (r1 != r2) goto L35
            com.kuaishou.weapon.p0.do.c.a(r3, r4)     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r0)
            return
        L2f:
            r1 = move-exception
            com.kuaishou.weapon.p0.do.a.a(r3, r4)     // Catch: java.lang.Throwable -> L34
            goto L54
        L34:
            throw r1     // Catch: java.lang.Throwable -> L56
        L35:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L56
            r2 = 23
            if (r1 < r2) goto L46
            com.kuaishou.weapon.p0.do.b.a(r3, r4)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)
            return
        L40:
            r1 = move-exception
            com.kuaishou.weapon.p0.do.a.a(r3, r4)     // Catch: java.lang.Throwable -> L45
            goto L54
        L45:
            throw r1     // Catch: java.lang.Throwable -> L56
        L46:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L56
            r2 = 14
            if (r1 < r2) goto L51
            com.kuaishou.weapon.p0.do.a.a(r3, r4)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)
            return
        L51:
            com.kuaishou.weapon.p0.do.e.a(r3, r4)     // Catch: java.lang.Throwable -> L56
        L54:
            monitor-exit(r0)
            return
        L56:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
        L59:
            monitor-exit(r0)
            return
    }
}
