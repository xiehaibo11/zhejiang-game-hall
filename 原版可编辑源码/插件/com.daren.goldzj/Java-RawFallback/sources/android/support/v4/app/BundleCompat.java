package android.support.v4.app;

public final class BundleCompat {

    static class BundleCompatBaseImpl {
        private static final java.lang.String TAG = "BundleCompatBaseImpl";
        private static java.lang.reflect.Method sGetIBinderMethod;
        private static boolean sGetIBinderMethodFetched;
        private static java.lang.reflect.Method sPutIBinderMethod;
        private static boolean sPutIBinderMethodFetched;

        private BundleCompatBaseImpl() {
                r0 = this;
                r0.<init>()
                return
        }

        public static android.os.IBinder getBinder(android.os.Bundle r7, java.lang.String r8) {
                boolean r0 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sGetIBinderMethodFetched
                r1 = 0
                java.lang.String r2 = "BundleCompatBaseImpl"
                r3 = 1
                if (r0 != 0) goto L26
                java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
                java.lang.String r4 = "getIBinder"
                java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L1e
                java.lang.Class<java.lang.String> r6 = java.lang.String.class
                r5[r1] = r6     // Catch: java.lang.NoSuchMethodException -> L1e
                java.lang.reflect.Method r0 = r0.getMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L1e
                android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sGetIBinderMethod = r0     // Catch: java.lang.NoSuchMethodException -> L1e
                java.lang.reflect.Method r0 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sGetIBinderMethod     // Catch: java.lang.NoSuchMethodException -> L1e
                r0.setAccessible(r3)     // Catch: java.lang.NoSuchMethodException -> L1e
                goto L24
            L1e:
                r0 = move-exception
                java.lang.String r4 = "Failed to retrieve getIBinder method"
                android.util.Log.i(r2, r4, r0)
            L24:
                android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sGetIBinderMethodFetched = r3
            L26:
                java.lang.reflect.Method r0 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sGetIBinderMethod
                r4 = 0
                if (r0 == 0) goto L42
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.IllegalArgumentException -> L36 java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3a
                r3[r1] = r8     // Catch: java.lang.IllegalArgumentException -> L36 java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3a
                java.lang.Object r7 = r0.invoke(r7, r3)     // Catch: java.lang.IllegalArgumentException -> L36 java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3a
                android.os.IBinder r7 = (android.os.IBinder) r7     // Catch: java.lang.IllegalArgumentException -> L36 java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3a
                return r7
            L36:
                r7 = move-exception
                goto L3b
            L38:
                r7 = move-exception
                goto L3b
            L3a:
                r7 = move-exception
            L3b:
                java.lang.String r8 = "Failed to invoke getIBinder via reflection"
                android.util.Log.i(r2, r8, r7)
                android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sGetIBinderMethod = r4
            L42:
                return r4
        }

        public static void putBinder(android.os.Bundle r8, java.lang.String r9, android.os.IBinder r10) {
                boolean r0 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sPutIBinderMethodFetched
                r1 = 0
                java.lang.String r2 = "BundleCompatBaseImpl"
                r3 = 2
                r4 = 1
                if (r0 != 0) goto L2b
                java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
                java.lang.String r5 = "putIBinder"
                java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L23
                java.lang.Class<java.lang.String> r7 = java.lang.String.class
                r6[r1] = r7     // Catch: java.lang.NoSuchMethodException -> L23
                java.lang.Class<android.os.IBinder> r7 = android.os.IBinder.class
                r6[r4] = r7     // Catch: java.lang.NoSuchMethodException -> L23
                java.lang.reflect.Method r0 = r0.getMethod(r5, r6)     // Catch: java.lang.NoSuchMethodException -> L23
                android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sPutIBinderMethod = r0     // Catch: java.lang.NoSuchMethodException -> L23
                java.lang.reflect.Method r0 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sPutIBinderMethod     // Catch: java.lang.NoSuchMethodException -> L23
                r0.setAccessible(r4)     // Catch: java.lang.NoSuchMethodException -> L23
                goto L29
            L23:
                r0 = move-exception
                java.lang.String r5 = "Failed to retrieve putIBinder method"
                android.util.Log.i(r2, r5, r0)
            L29:
                android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sPutIBinderMethodFetched = r4
            L2b:
                java.lang.reflect.Method r0 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sPutIBinderMethod
                if (r0 == 0) goto L46
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3b java.lang.reflect.InvocationTargetException -> L3d
                r3[r1] = r9     // Catch: java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3b java.lang.reflect.InvocationTargetException -> L3d
                r3[r4] = r10     // Catch: java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3b java.lang.reflect.InvocationTargetException -> L3d
                r0.invoke(r8, r3)     // Catch: java.lang.IllegalArgumentException -> L39 java.lang.IllegalAccessException -> L3b java.lang.reflect.InvocationTargetException -> L3d
                goto L46
            L39:
                r8 = move-exception
                goto L3e
            L3b:
                r8 = move-exception
                goto L3e
            L3d:
                r8 = move-exception
            L3e:
                java.lang.String r9 = "Failed to invoke putIBinder via reflection"
                android.util.Log.i(r2, r9, r8)
                r8 = 0
                android.support.v4.app.BundleCompat.BundleCompatBaseImpl.sPutIBinderMethod = r8
            L46:
                return
        }
    }

    private BundleCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.Nullable
    public static android.os.IBinder getBinder(@android.support.annotation.NonNull android.os.Bundle r2, @android.support.annotation.Nullable java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            android.os.IBinder r2 = r2.getBinder(r3)
            return r2
        Lb:
            android.os.IBinder r2 = android.support.v4.app.BundleCompat.BundleCompatBaseImpl.getBinder(r2, r3)
            return r2
    }

    public static void putBinder(@android.support.annotation.NonNull android.os.Bundle r2, @android.support.annotation.Nullable java.lang.String r3, @android.support.annotation.Nullable android.os.IBinder r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto La
            r2.putBinder(r3, r4)
            goto Ld
        La:
            android.support.v4.app.BundleCompat.BundleCompatBaseImpl.putBinder(r2, r3, r4)
        Ld:
            return
    }
}
