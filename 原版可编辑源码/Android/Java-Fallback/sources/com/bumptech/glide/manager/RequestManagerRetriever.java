package com.bumptech.glide.manager;

public class RequestManagerRetriever implements android.os.Handler.Callback {
    static final java.lang.String FRAGMENT_TAG = "com.bumptech.glide.manager";
    private static final int ID_REMOVE_FRAGMENT_MANAGER = 1;
    private static final int ID_REMOVE_SUPPORT_FRAGMENT_MANAGER = 2;
    private static final com.bumptech.glide.manager.RequestManagerRetriever INSTANCE = null;
    private static final java.lang.String TAG = "RMRetriever";
    private volatile com.bumptech.glide.RequestManager applicationManager;
    private final android.os.Handler handler;
    final java.util.Map<android.app.FragmentManager, com.bumptech.glide.manager.RequestManagerFragment> pendingRequestManagerFragments;
    final java.util.Map<android.support.v4.app.FragmentManager, com.bumptech.glide.manager.SupportRequestManagerFragment> pendingSupportRequestManagerFragments;

    static {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = new com.bumptech.glide.manager.RequestManagerRetriever
            r0.<init>()
            com.bumptech.glide.manager.RequestManagerRetriever.INSTANCE = r0
            return
    }

    RequestManagerRetriever() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.pendingRequestManagerFragments = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.pendingSupportRequestManagerFragments = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1, r2)
            r2.handler = r0
            return
    }

    private static void assertNotDestroyed(android.app.Activity r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L15
            boolean r2 = r2.isDestroyed()
            if (r2 != 0) goto Ld
            goto L15
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You cannot start a load for a destroyed activity"
            r2.<init>(r0)
            throw r2
        L15:
            return
    }

    public static com.bumptech.glide.manager.RequestManagerRetriever get() {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = com.bumptech.glide.manager.RequestManagerRetriever.INSTANCE
            return r0
    }

    private com.bumptech.glide.RequestManager getApplicationManager(android.content.Context r4) {
            r3 = this;
            com.bumptech.glide.RequestManager r0 = r3.applicationManager
            if (r0 != 0) goto L23
            monitor-enter(r3)
            com.bumptech.glide.RequestManager r0 = r3.applicationManager     // Catch: java.lang.Throwable -> L20
            if (r0 != 0) goto L1e
            com.bumptech.glide.RequestManager r0 = new com.bumptech.glide.RequestManager     // Catch: java.lang.Throwable -> L20
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L20
            com.bumptech.glide.manager.ApplicationLifecycle r1 = new com.bumptech.glide.manager.ApplicationLifecycle     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            com.bumptech.glide.manager.EmptyRequestManagerTreeNode r2 = new com.bumptech.glide.manager.EmptyRequestManagerTreeNode     // Catch: java.lang.Throwable -> L20
            r2.<init>()     // Catch: java.lang.Throwable -> L20
            r0.<init>(r4, r1, r2)     // Catch: java.lang.Throwable -> L20
            r3.applicationManager = r0     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L20
            goto L23
        L20:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L20
            throw r4
        L23:
            com.bumptech.glide.RequestManager r4 = r3.applicationManager
            return r4
    }

    com.bumptech.glide.RequestManager fragmentGet(android.content.Context r4, android.app.FragmentManager r5) {
            r3 = this;
            com.bumptech.glide.manager.RequestManagerFragment r5 = r3.getRequestManagerFragment(r5)
            com.bumptech.glide.RequestManager r0 = r5.getRequestManager()
            if (r0 != 0) goto L1a
            com.bumptech.glide.RequestManager r0 = new com.bumptech.glide.RequestManager
            com.bumptech.glide.manager.ActivityFragmentLifecycle r1 = r5.getLifecycle()
            com.bumptech.glide.manager.RequestManagerTreeNode r2 = r5.getRequestManagerTreeNode()
            r0.<init>(r4, r1, r2)
            r5.setRequestManager(r0)
        L1a:
            return r0
    }

    public com.bumptech.glide.RequestManager get(android.app.Activity r3) {
            r2 = this;
            boolean r0 = com.bumptech.glide.util.Util.isOnBackgroundThread()
            if (r0 != 0) goto L19
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 >= r1) goto Ld
            goto L19
        Ld:
            assertNotDestroyed(r3)
            android.app.FragmentManager r0 = r3.getFragmentManager()
            com.bumptech.glide.RequestManager r3 = r2.fragmentGet(r3, r0)
            return r3
        L19:
            android.content.Context r3 = r3.getApplicationContext()
            com.bumptech.glide.RequestManager r3 = r2.get(r3)
            return r3
    }

    public com.bumptech.glide.RequestManager get(android.app.Fragment r3) {
            r2 = this;
            android.app.Activity r0 = r3.getActivity()
            if (r0 == 0) goto L2d
            boolean r0 = com.bumptech.glide.util.Util.isOnBackgroundThread()
            if (r0 != 0) goto L20
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L13
            goto L20
        L13:
            android.app.FragmentManager r0 = r3.getChildFragmentManager()
            android.app.Activity r3 = r3.getActivity()
            com.bumptech.glide.RequestManager r3 = r2.fragmentGet(r3, r0)
            return r3
        L20:
            android.app.Activity r3 = r3.getActivity()
            android.content.Context r3 = r3.getApplicationContext()
            com.bumptech.glide.RequestManager r3 = r2.get(r3)
            return r3
        L2d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You cannot start a load on a fragment before it is attached"
            r3.<init>(r0)
            throw r3
    }

    public com.bumptech.glide.RequestManager get(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto L36
            boolean r0 = com.bumptech.glide.util.Util.isOnMainThread()
            if (r0 == 0) goto L31
            boolean r0 = r2 instanceof android.app.Application
            if (r0 != 0) goto L31
            boolean r0 = r2 instanceof android.support.v4.app.FragmentActivity
            if (r0 == 0) goto L17
            android.support.v4.app.FragmentActivity r2 = (android.support.v4.app.FragmentActivity) r2
            com.bumptech.glide.RequestManager r2 = r1.get(r2)
            return r2
        L17:
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L22
            android.app.Activity r2 = (android.app.Activity) r2
            com.bumptech.glide.RequestManager r2 = r1.get(r2)
            return r2
        L22:
            boolean r0 = r2 instanceof android.content.ContextWrapper
            if (r0 == 0) goto L31
            android.content.ContextWrapper r2 = (android.content.ContextWrapper) r2
            android.content.Context r2 = r2.getBaseContext()
            com.bumptech.glide.RequestManager r2 = r1.get(r2)
            return r2
        L31:
            com.bumptech.glide.RequestManager r2 = r1.getApplicationManager(r2)
            return r2
        L36:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You cannot start a load on a null Context"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.RequestManager get(android.support.v4.app.Fragment r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r2.getActivity()
            if (r0 == 0) goto L26
            boolean r0 = com.bumptech.glide.util.Util.isOnBackgroundThread()
            if (r0 == 0) goto L19
            android.support.v4.app.FragmentActivity r2 = r2.getActivity()
            android.content.Context r2 = r2.getApplicationContext()
            com.bumptech.glide.RequestManager r2 = r1.get(r2)
            return r2
        L19:
            android.support.v4.app.FragmentManager r0 = r2.getChildFragmentManager()
            android.support.v4.app.FragmentActivity r2 = r2.getActivity()
            com.bumptech.glide.RequestManager r2 = r1.supportFragmentGet(r2, r0)
            return r2
        L26:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You cannot start a load on a fragment before it is attached"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.RequestManager get(android.support.v4.app.FragmentActivity r2) {
            r1 = this;
            boolean r0 = com.bumptech.glide.util.Util.isOnBackgroundThread()
            if (r0 == 0) goto Lf
            android.content.Context r2 = r2.getApplicationContext()
            com.bumptech.glide.RequestManager r2 = r1.get(r2)
            return r2
        Lf:
            assertNotDestroyed(r2)
            android.support.v4.app.FragmentManager r0 = r2.getSupportFragmentManager()
            com.bumptech.glide.RequestManager r2 = r1.supportFragmentGet(r2, r0)
            return r2
    }

    com.bumptech.glide.manager.RequestManagerFragment getRequestManagerFragment(android.app.FragmentManager r4) {
            r3 = this;
            java.lang.String r0 = "com.bumptech.glide.manager"
            android.app.Fragment r1 = r4.findFragmentByTag(r0)
            com.bumptech.glide.manager.RequestManagerFragment r1 = (com.bumptech.glide.manager.RequestManagerFragment) r1
            if (r1 != 0) goto L33
            java.util.Map<android.app.FragmentManager, com.bumptech.glide.manager.RequestManagerFragment> r1 = r3.pendingRequestManagerFragments
            java.lang.Object r1 = r1.get(r4)
            com.bumptech.glide.manager.RequestManagerFragment r1 = (com.bumptech.glide.manager.RequestManagerFragment) r1
            if (r1 != 0) goto L33
            com.bumptech.glide.manager.RequestManagerFragment r1 = new com.bumptech.glide.manager.RequestManagerFragment
            r1.<init>()
            java.util.Map<android.app.FragmentManager, com.bumptech.glide.manager.RequestManagerFragment> r2 = r3.pendingRequestManagerFragments
            r2.put(r4, r1)
            android.app.FragmentTransaction r2 = r4.beginTransaction()
            android.app.FragmentTransaction r0 = r2.add(r1, r0)
            r0.commitAllowingStateLoss()
            android.os.Handler r0 = r3.handler
            r2 = 1
            android.os.Message r4 = r0.obtainMessage(r2, r4)
            r4.sendToTarget()
        L33:
            return r1
    }

    com.bumptech.glide.manager.SupportRequestManagerFragment getSupportRequestManagerFragment(android.support.v4.app.FragmentManager r4) {
            r3 = this;
            java.lang.String r0 = "com.bumptech.glide.manager"
            android.support.v4.app.Fragment r1 = r4.findFragmentByTag(r0)
            com.bumptech.glide.manager.SupportRequestManagerFragment r1 = (com.bumptech.glide.manager.SupportRequestManagerFragment) r1
            if (r1 != 0) goto L33
            java.util.Map<android.support.v4.app.FragmentManager, com.bumptech.glide.manager.SupportRequestManagerFragment> r1 = r3.pendingSupportRequestManagerFragments
            java.lang.Object r1 = r1.get(r4)
            com.bumptech.glide.manager.SupportRequestManagerFragment r1 = (com.bumptech.glide.manager.SupportRequestManagerFragment) r1
            if (r1 != 0) goto L33
            com.bumptech.glide.manager.SupportRequestManagerFragment r1 = new com.bumptech.glide.manager.SupportRequestManagerFragment
            r1.<init>()
            java.util.Map<android.support.v4.app.FragmentManager, com.bumptech.glide.manager.SupportRequestManagerFragment> r2 = r3.pendingSupportRequestManagerFragments
            r2.put(r4, r1)
            android.support.v4.app.FragmentTransaction r2 = r4.beginTransaction()
            android.support.v4.app.FragmentTransaction r0 = r2.add(r1, r0)
            r0.commitAllowingStateLoss()
            android.os.Handler r0 = r3.handler
            r2 = 2
            android.os.Message r4 = r0.obtainMessage(r2, r4)
            r4.sendToTarget()
        L33:
            return r1
    }

    @Override
    public boolean handleMessage(android.os.Message r6) {
            r5 = this;
            int r0 = r6.what
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L18
            r3 = 2
            if (r0 == r3) goto Lc
            r2 = 0
            r6 = r1
            goto L26
        Lc:
            java.lang.Object r6 = r6.obj
            r1 = r6
            android.support.v4.app.FragmentManager r1 = (android.support.v4.app.FragmentManager) r1
            java.util.Map<android.support.v4.app.FragmentManager, com.bumptech.glide.manager.SupportRequestManagerFragment> r6 = r5.pendingSupportRequestManagerFragments
            java.lang.Object r6 = r6.remove(r1)
            goto L23
        L18:
            java.lang.Object r6 = r6.obj
            r1 = r6
            android.app.FragmentManager r1 = (android.app.FragmentManager) r1
            java.util.Map<android.app.FragmentManager, com.bumptech.glide.manager.RequestManagerFragment> r6 = r5.pendingRequestManagerFragments
            java.lang.Object r6 = r6.remove(r1)
        L23:
            r4 = r1
            r1 = r6
            r6 = r4
        L26:
            if (r2 == 0) goto L47
            if (r1 != 0) goto L47
            r0 = 5
            java.lang.String r1 = "RMRetriever"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Failed to remove expected request manager fragment, manager: "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            android.util.Log.w(r1, r6)
        L47:
            return r2
    }

    com.bumptech.glide.RequestManager supportFragmentGet(android.content.Context r4, android.support.v4.app.FragmentManager r5) {
            r3 = this;
            com.bumptech.glide.manager.SupportRequestManagerFragment r5 = r3.getSupportRequestManagerFragment(r5)
            com.bumptech.glide.RequestManager r0 = r5.getRequestManager()
            if (r0 != 0) goto L1a
            com.bumptech.glide.RequestManager r0 = new com.bumptech.glide.RequestManager
            com.bumptech.glide.manager.ActivityFragmentLifecycle r1 = r5.getLifecycle()
            com.bumptech.glide.manager.RequestManagerTreeNode r2 = r5.getRequestManagerTreeNode()
            r0.<init>(r4, r1, r2)
            r5.setRequestManager(r0)
        L1a:
            return r0
    }
}
