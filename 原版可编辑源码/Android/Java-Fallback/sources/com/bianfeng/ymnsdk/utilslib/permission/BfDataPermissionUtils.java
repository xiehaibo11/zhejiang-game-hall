package com.bianfeng.ymnsdk.utilslib.permission;

public class BfDataPermissionUtils {
    private static final long TIME_48 = 172800000;
    private java.lang.String TAG_PERMISSION;
    private android.app.Activity activity;
    private com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback callback;
    private java.util.List<java.lang.String> lists;
    private java.util.List<java.lang.String> manifestPermission;
    private com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissionResultCallback resultCallback;
    private java.util.Set<java.lang.String> set;


    public interface PermissCallback {
        void onAllow(int r1, java.lang.String r2);

        void onAllowAll(int r1);

        void onDeny(int r1, java.lang.String r2);

        void onDenyIn48Hours(int r1, java.lang.String r2);
    }

    public interface PermissionResultCallback {
        void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3);
    }

    public interface RequestPermissionsResultCallback {
        void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3);
    }

    protected class RequestPermissionsResultCallbackImpl implements com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.RequestPermissionsResultCallback {
        final com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils this$0;

        protected RequestPermissionsResultCallbackImpl(com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
                r1 = this;
                com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r1.this$0
                r0.onRequestPermissionsResult(r2, r3, r4)
                return
        }
    }

    private BfDataPermissionUtils(android.app.Activity r6) {
            r5 = this;
            r5.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r5.set = r0
            java.lang.String r0 = "YMNSDK_PERMISSION_TAG"
            r5.TAG_PERMISSION = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.manifestPermission = r0
            r5.activity = r6
            java.util.List<java.lang.String> r0 = r5.manifestPermission
            int r0 = r0.size()
            if (r0 != 0) goto L3b
            android.content.pm.PackageManager r0 = r6.getPackageManager()
            java.lang.String r1 = r6.getPackageName()
            r2 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L3a
            java.lang.String[] r2 = r2.requestedPermissions     // Catch: java.lang.Exception -> L3a
            java.util.List<java.lang.String> r3 = r5.manifestPermission     // Catch: java.lang.Exception -> L3a
            java.util.List r4 = java.util.Arrays.asList(r2)     // Catch: java.lang.Exception -> L3a
            r3.addAll(r4)     // Catch: java.lang.Exception -> L3a
            goto L3b
        L3a:
            r2 = move-exception
        L3b:
            return
    }

    static void access$000(com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0, int r1) {
            r0.request(r1)
            return
    }

    public static boolean check(java.lang.String r3, android.content.Context r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 23
            if (r0 < r2) goto L10
            int r0 = r4.checkSelfPermission(r3)
            if (r0 != 0) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
        L10:
            return r1
    }

    private boolean check48Hours(java.lang.String r13) {
            r12 = this;
            java.lang.String r0 = "isInitiative"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L13
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r3)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r0 = move-exception
            r0.printStackTrace()
        L12:
            return r2
        L13:
            long r4 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getLong(r13)
            long r6 = java.lang.System.currentTimeMillis()
            long r8 = r6 - r4
            r10 = 172800000(0xa4cb800, double:8.53745436E-316)
            int r0 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r0 < 0) goto L25
            return r2
        L25:
            return r3
    }

    public static com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils newInstance(android.app.Activity r1) {
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils
            r0.<init>(r1)
            return r0
    }

    private void request(int r6) {
            r5 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L4f
            java.util.List<java.lang.String> r0 = r5.lists
            int r0 = r0.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.util.List<java.lang.String> r1 = r5.lists
            r1.toArray(r0)
            android.app.Activity r1 = r5.activity
            android.app.FragmentManager r1 = r1.getFragmentManager()
            java.lang.String r2 = r5.TAG_PERMISSION
            android.app.Fragment r2 = r1.findFragmentByTag(r2)
            com.bianfeng.ymnsdk.utilslib.permission.PermissionFragment r2 = (com.bianfeng.ymnsdk.utilslib.permission.PermissionFragment) r2
            if (r2 != 0) goto L44
            com.bianfeng.ymnsdk.utilslib.permission.PermissionFragment r3 = new com.bianfeng.ymnsdk.utilslib.permission.PermissionFragment
            r3.<init>()
            r2 = r3
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl r3 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl
            r3.<init>(r5)
            r2.setCallback(r3)
            android.app.FragmentTransaction r3 = r1.beginTransaction()
            java.lang.String r4 = r5.TAG_PERMISSION
            r3.add(r2, r4)
            r3.commit()
            r1.executePendingTransactions()
            r2.requestPermissions(r0, r6)
            goto L4f
        L44:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl r3 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl
            r3.<init>(r5)
            r2.setCallback(r3)
            r2.requestPermissions(r0, r6)
        L4f:
            return
    }

    public void onRequestPermissionsResult(int r8, java.lang.String[] r9, int[] r10) {
            r7 = this;
            int r0 = r10.length
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
        Lc:
            if (r3 >= r0) goto L2e
            r4 = r10[r3]
            if (r4 == 0) goto L26
            r4 = r9[r3]     // Catch: java.lang.Exception -> L21
            r1.add(r4)     // Catch: java.lang.Exception -> L21
            r4 = r9[r3]     // Catch: java.lang.Exception -> L21
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L21
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r4, r5)     // Catch: java.lang.Exception -> L21
            goto L25
        L21:
            r4 = move-exception
            r4.printStackTrace()
        L25:
            goto L2b
        L26:
            r4 = r9[r3]
            r2.add(r4)
        L2b:
            int r3 = r3 + 1
            goto Lc
        L2e:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r3 = r7.callback
            if (r3 == 0) goto L58
            int r3 = r1.size()
            if (r3 <= 0) goto L53
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r3 = r7.callback
            java.lang.Object[] r4 = r1.toArray()
            java.lang.String r4 = java.util.Arrays.toString(r4)
            r3.onDeny(r8, r4)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r3 = r7.callback
            java.lang.Object[] r4 = r2.toArray()
            java.lang.String r4 = java.util.Arrays.toString(r4)
            r3.onAllow(r8, r4)
            goto L58
        L53:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r3 = r7.callback
            r3.onAllowAll(r8)
        L58:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissionResultCallback r3 = r7.resultCallback
            if (r3 == 0) goto L5f
            r3.onRequestPermissionsResult(r8, r9, r10)
        L5f:
            return
    }

    public boolean requestPermissions(int r9) {
            r8 = this;
            java.util.List<java.lang.String> r0 = r8.manifestPermission
            int r0 = r0.size()
            r1 = 0
            if (r0 != 0) goto L13
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r8.callback
            if (r0 == 0) goto L13
            java.lang.String r2 = "manifest中没有配置权限"
            r0.onDeny(r9, r2)
            return r1
        L13:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            r3 = 1
            if (r0 >= r2) goto L22
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r8.callback
            if (r0 == 0) goto L22
            r0.onAllowAll(r9)
            return r3
        L22:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Set<java.lang.String> r4 = r8.set
            java.util.Iterator r4 = r4.iterator()
        L32:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L4a
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            android.app.Activity r6 = r8.activity
            boolean r6 = check(r5, r6)
            if (r6 != 0) goto L49
            r0.add(r5)
        L49:
            goto L32
        L4a:
            int r4 = r0.size()
            if (r4 != 0) goto L58
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r4 = r8.callback
            if (r4 == 0) goto L58
            r4.onAllowAll(r9)
            return r3
        L58:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r8.lists = r4
            java.util.Iterator r4 = r0.iterator()
        L63:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L9c
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            java.util.List<java.lang.String> r6 = r8.manifestPermission
            boolean r6 = r6.contains(r5)
            if (r6 == 0) goto L87
            boolean r6 = r8.check48Hours(r5)
            if (r6 == 0) goto L83
            java.util.List<java.lang.String> r6 = r8.lists
            r6.add(r5)
            goto L9b
        L83:
            r2.add(r5)
            goto L9b
        L87:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r5)
            java.lang.String r7 = "-->当前权限不在manifest中"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.e(r6)
        L9b:
            goto L63
        L9c:
            java.util.List<java.lang.String> r4 = r8.lists
            int r4 = r4.size()
            if (r4 <= 0) goto Lc4
            int r3 = r2.size()
            if (r3 <= 0) goto Lb9
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r3 = r8.callback
            if (r3 == 0) goto Lb9
            java.lang.Object[] r4 = r2.toArray()
            java.lang.String r4 = java.util.Arrays.toString(r4)
            r3.onDenyIn48Hours(r9, r4)
        Lb9:
            android.app.Activity r3 = r8.activity
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$1 r4 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$1
            r4.<init>(r8, r9)
            r3.runOnUiThread(r4)
            return r1
        Lc4:
            int r1 = r2.size()
            if (r1 <= 0) goto Ld9
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r1 = r8.callback
            if (r1 == 0) goto Ld9
            java.lang.Object[] r4 = r2.toArray()
            java.lang.String r4 = java.util.Arrays.toString(r4)
            r1.onDenyIn48Hours(r9, r4)
        Ld9:
            return r3
    }

    public com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils setCallback(com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback r1) {
            r0 = this;
            r0.callback = r1
            return r0
    }

    public com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils setCallback(com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissionResultCallback r1) {
            r0 = this;
            r0.resultCallback = r1
            return r0
    }

    public com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils setPermissions(java.lang.String r2) {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.set
            r0.add(r2)
            return r1
    }

    public com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils setPermissions(java.util.List<java.lang.String> r2) {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.set
            r0.addAll(r2)
            return r1
    }

    public com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils setPermissions(java.lang.String[] r3) {
            r2 = this;
            java.util.Set<java.lang.String> r0 = r2.set
            java.util.List r1 = java.util.Arrays.asList(r3)
            r0.addAll(r1)
            return r2
    }
}
