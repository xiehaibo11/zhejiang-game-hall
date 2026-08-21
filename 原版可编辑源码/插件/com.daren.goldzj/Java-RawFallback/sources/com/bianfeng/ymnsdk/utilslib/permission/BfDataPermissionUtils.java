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

    private BfDataPermissionUtils(android.app.Activity r3) {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.set = r0
            java.lang.String r0 = "YMNSDK_PERMISSION_TAG"
            r2.TAG_PERMISSION = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.manifestPermission = r0
            r2.activity = r3
            java.util.List<java.lang.String> r0 = r2.manifestPermission
            int r0 = r0.size()
            if (r0 != 0) goto L38
            android.content.pm.PackageManager r0 = r3.getPackageManager()
            java.lang.String r3 = r3.getPackageName()
            r1 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r1)     // Catch: java.lang.Exception -> L38
            java.lang.String[] r3 = r3.requestedPermissions     // Catch: java.lang.Exception -> L38
            java.util.List<java.lang.String> r0 = r2.manifestPermission     // Catch: java.lang.Exception -> L38
            java.util.List r3 = java.util.Arrays.asList(r3)     // Catch: java.lang.Exception -> L38
            r0.addAll(r3)     // Catch: java.lang.Exception -> L38
        L38:
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
            if (r0 < r2) goto Lf
            int r3 = r4.checkSelfPermission(r3)
            if (r3 != 0) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    private boolean check48Hours(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "isInitiative"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L13
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r3)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r7 = move-exception
            r7.printStackTrace()
        L12:
            return r2
        L13:
            long r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getLong(r7)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r0
            r0 = 172800000(0xa4cb800, double:8.53745436E-316)
            int r7 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r7 < 0) goto L24
            return r2
        L24:
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
            if (r0 < r1) goto L4e
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
            if (r2 != 0) goto L43
            com.bianfeng.ymnsdk.utilslib.permission.PermissionFragment r2 = new com.bianfeng.ymnsdk.utilslib.permission.PermissionFragment
            r2.<init>()
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl r3 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl
            r3.<init>(r5)
            r2.setCallback(r3)
            android.app.FragmentTransaction r3 = r1.beginTransaction()
            java.lang.String r4 = r5.TAG_PERMISSION
            r3.add(r2, r4)
            r3.commit()
            r1.executePendingTransactions()
            r2.requestPermissions(r0, r6)
            goto L4e
        L43:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl r1 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallbackImpl
            r1.<init>(r5)
            r2.setCallback(r1)
            r2.requestPermissions(r0, r6)
        L4e:
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
            goto L2b
        L21:
            r4 = move-exception
            r4.printStackTrace()
            goto L2b
        L26:
            r4 = r9[r3]
            r2.add(r4)
        L2b:
            int r3 = r3 + 1
            goto Lc
        L2e:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            if (r0 == 0) goto L58
            int r0 = r1.size()
            if (r0 <= 0) goto L53
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            java.lang.Object[] r1 = r1.toArray()
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.onDeny(r8, r1)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            java.lang.Object[] r1 = r2.toArray()
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.onAllow(r8, r1)
            goto L58
        L53:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            r0.onAllowAll(r8)
        L58:
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissionResultCallback r0 = r7.resultCallback
            if (r0 == 0) goto L5f
            r0.onRequestPermissionsResult(r8, r9, r10)
        L5f:
            return
    }

    public boolean requestPermissions(int r8) {
            r7 = this;
            java.util.List<java.lang.String> r0 = r7.manifestPermission
            int r0 = r0.size()
            r1 = 0
            if (r0 != 0) goto L13
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            if (r0 == 0) goto L13
            java.lang.String r2 = "manifest中没有配置权限"
            r0.onDeny(r8, r2)
            return r1
        L13:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            r3 = 1
            if (r0 >= r2) goto L22
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            if (r0 == 0) goto L22
            r0.onAllowAll(r8)
            return r3
        L22:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Set<java.lang.String> r4 = r7.set
            java.util.Iterator r4 = r4.iterator()
        L32:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L4a
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            android.app.Activity r6 = r7.activity
            boolean r6 = check(r5, r6)
            if (r6 != 0) goto L32
            r0.add(r5)
            goto L32
        L4a:
            int r4 = r0.size()
            if (r4 != 0) goto L58
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r4 = r7.callback
            if (r4 == 0) goto L58
            r4.onAllowAll(r8)
            return r3
        L58:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r7.lists = r4
            java.util.Iterator r0 = r0.iterator()
        L63:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L9c
            java.lang.Object r4 = r0.next()
            java.lang.String r4 = (java.lang.String) r4
            java.util.List<java.lang.String> r5 = r7.manifestPermission
            boolean r5 = r5.contains(r4)
            if (r5 == 0) goto L87
            boolean r5 = r7.check48Hours(r4)
            if (r5 == 0) goto L83
            java.util.List<java.lang.String> r5 = r7.lists
            r5.add(r4)
            goto L63
        L83:
            r2.add(r4)
            goto L63
        L87:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            java.lang.String r4 = "-->当前权限不在manifest中"
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.e(r4)
            goto L63
        L9c:
            java.util.List<java.lang.String> r0 = r7.lists
            int r0 = r0.size()
            if (r0 <= 0) goto Lc4
            int r0 = r2.size()
            if (r0 <= 0) goto Lb9
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            if (r0 == 0) goto Lb9
            java.lang.Object[] r2 = r2.toArray()
            java.lang.String r2 = java.util.Arrays.toString(r2)
            r0.onDenyIn48Hours(r8, r2)
        Lb9:
            android.app.Activity r0 = r7.activity
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$1 r2 = new com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$1
            r2.<init>(r7, r8)
            r0.runOnUiThread(r2)
            return r1
        Lc4:
            int r0 = r2.size()
            if (r0 <= 0) goto Ld9
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$PermissCallback r0 = r7.callback
            if (r0 == 0) goto Ld9
            java.lang.Object[] r1 = r2.toArray()
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.onDenyIn48Hours(r8, r1)
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

    public com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils setPermissions(java.lang.String[] r2) {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.set
            java.util.List r2 = java.util.Arrays.asList(r2)
            r0.addAll(r2)
            return r1
    }
}
