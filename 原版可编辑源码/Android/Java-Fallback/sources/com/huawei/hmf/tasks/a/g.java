package com.huawei.hmf.tasks.a;

public final class g extends android.app.Fragment {
    private static final java.util.WeakHashMap<android.app.Activity, java.lang.ref.WeakReference<com.huawei.hmf.tasks.a.g>> b = null;
    private final java.util.List<java.lang.ref.WeakReference<com.huawei.hmf.tasks.ExecuteResult<?>>> a;

    static {
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            com.huawei.hmf.tasks.a.g.b = r0
            return
    }

    public g() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    private static com.huawei.hmf.tasks.a.g a(android.app.Activity r3) {
            java.util.WeakHashMap<android.app.Activity, java.lang.ref.WeakReference<com.huawei.hmf.tasks.a.g>> r0 = com.huawei.hmf.tasks.a.g.b
            java.lang.Object r0 = r0.get(r3)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            if (r0 == 0) goto L17
            java.lang.Object r1 = r0.get()
            if (r1 == 0) goto L17
            java.lang.Object r3 = r0.get()
            com.huawei.hmf.tasks.a.g r3 = (com.huawei.hmf.tasks.a.g) r3
            goto L56
        L17:
            android.app.FragmentManager r0 = r3.getFragmentManager()
            r1 = 0
            java.lang.String r2 = "com.huawei.hmf.tasks.lifecycle_fragment_tag"
            android.app.Fragment r2 = r0.findFragmentByTag(r2)     // Catch: java.lang.ClassCastException -> L3c
            com.huawei.hmf.tasks.a.g r2 = (com.huawei.hmf.tasks.a.g) r2     // Catch: java.lang.ClassCastException -> L3c
            if (r2 != 0) goto L2e
            com.huawei.hmf.tasks.a.g r0 = a(r0)     // Catch: java.lang.ClassCastException -> L2b
            goto L2f
        L2b:
            r3 = move-exception
            r0 = r2
            goto L3e
        L2e:
            r0 = r2
        L2f:
            java.util.WeakHashMap<android.app.Activity, java.lang.ref.WeakReference<com.huawei.hmf.tasks.a.g>> r1 = com.huawei.hmf.tasks.a.g.b     // Catch: java.lang.ClassCastException -> L3a
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.ClassCastException -> L3a
            r2.<init>(r0)     // Catch: java.lang.ClassCastException -> L3a
            r1.put(r3, r2)     // Catch: java.lang.ClassCastException -> L3a
            goto L55
        L3a:
            r3 = move-exception
            goto L3e
        L3c:
            r3 = move-exception
            r0 = r1
        L3e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "found LifecycleCallbackFragment but the type do not match. "
            r1.<init>(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "LifecycleCallbackFrg"
            android.util.Log.e(r1, r3)
        L55:
            r3 = r0
        L56:
            return r3
    }

    private static com.huawei.hmf.tasks.a.g a(android.app.FragmentManager r3) {
            r0 = 0
            com.huawei.hmf.tasks.a.g r1 = new com.huawei.hmf.tasks.a.g     // Catch: java.lang.Exception -> L17
            r1.<init>()     // Catch: java.lang.Exception -> L17
            android.app.FragmentTransaction r3 = r3.beginTransaction()     // Catch: java.lang.Exception -> L14
            java.lang.String r0 = "com.huawei.hmf.tasks.lifecycle_fragment_tag"
            android.app.FragmentTransaction r3 = r3.add(r1, r0)     // Catch: java.lang.Exception -> L14
            r3.commitAllowingStateLoss()     // Catch: java.lang.Exception -> L14
            goto L30
        L14:
            r3 = move-exception
            r0 = r1
            goto L18
        L17:
            r3 = move-exception
        L18:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "create fragment failed."
            r1.<init>(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "LifecycleCallbackFrg"
            android.util.Log.e(r1, r3)
            r1 = r0
        L30:
            return r1
    }

    public static void a(android.app.Activity r2, com.huawei.hmf.tasks.ExecuteResult r3) {
            com.huawei.hmf.tasks.a.g r2 = a(r2)
            if (r2 == 0) goto L18
            java.util.List<java.lang.ref.WeakReference<com.huawei.hmf.tasks.ExecuteResult<?>>> r0 = r2.a
            monitor-enter(r0)
            java.util.List<java.lang.ref.WeakReference<com.huawei.hmf.tasks.ExecuteResult<?>>> r2 = r2.a     // Catch: java.lang.Throwable -> L15
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L15
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L15
            r2.add(r1)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r2
        L18:
            return
    }

    @Override
    public final void onStop() {
            r3 = this;
            super.onStop()
            java.util.List<java.lang.ref.WeakReference<com.huawei.hmf.tasks.ExecuteResult<?>>> r0 = r3.a
            monitor-enter(r0)
            java.util.List<java.lang.ref.WeakReference<com.huawei.hmf.tasks.ExecuteResult<?>>> r1 = r3.a     // Catch: java.lang.Throwable -> L2b
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2b
        Lc:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L24
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2b
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L2b
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2b
            com.huawei.hmf.tasks.ExecuteResult r2 = (com.huawei.hmf.tasks.ExecuteResult) r2     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto Lc
            r2.cancel()     // Catch: java.lang.Throwable -> L2b
            goto Lc
        L24:
            java.util.List<java.lang.ref.WeakReference<com.huawei.hmf.tasks.ExecuteResult<?>>> r1 = r3.a     // Catch: java.lang.Throwable -> L2b
            r1.clear()     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return
        L2b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r1
    }
}
