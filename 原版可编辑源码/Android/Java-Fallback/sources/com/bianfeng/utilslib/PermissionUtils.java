package com.bianfeng.utilslib;

public class PermissionUtils {
    private static final int dataFunCode = 100024;
    private com.bianfeng.utilslib.PermissionUtils.PermissionCallback callback;
    private android.app.Activity context;
    private java.util.List<java.lang.String> lists;
    private java.util.Set<java.lang.String> set;

    public interface PermissionCallback {
        void onPermission(int r1, java.lang.String[] r2, int[] r3);
    }

    protected PermissionUtils(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.set = r0
            r1.context = r2
            return
    }

    private void requestPermission() {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.lists
            int r0 = r0.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.util.List<java.lang.String> r1 = r3.lists
            r1.toArray(r0)
            android.app.Activity r1 = r3.context
            r2 = 100024(0x186b8, float:1.40163E-40)
            r1.requestPermissions(r0, r2)
            return
    }

    private boolean rquestPermissions() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.lists = r0
            java.util.Set<java.lang.String> r0 = r3.set
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            android.app.Activity r2 = r3.context
            int r2 = r2.checkSelfPermission(r1)
            if (r2 == 0) goto Ld
            java.util.List<java.lang.String> r2 = r3.lists
            r2.add(r1)
            goto Ld
        L27:
            java.util.List<java.lang.String> r0 = r3.lists
            int r0 = r0.size()
            if (r0 <= 0) goto L34
            r3.requestPermission()
            r0 = 0
            return r0
        L34:
            r0 = 1
            return r0
    }

    public com.bianfeng.utilslib.PermissionUtils addPermissionStr(java.lang.String r2) {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.set
            r0.add(r2)
            return r1
    }

    public boolean check() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            boolean r0 = r2.rquestPermissions()
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    public boolean checkReadStorage() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            int r0 = r0.checkSelfPermission(r1)
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean checkWriteStorage() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "android.permission.WRITE_EXTERNAL_STORAGE"
            int r0 = r0.checkSelfPermission(r1)
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            r0 = 100024(0x186b8, float:1.40163E-40)
            if (r2 != r0) goto Lc
            com.bianfeng.utilslib.PermissionUtils$PermissionCallback r0 = r1.callback
            if (r0 == 0) goto Lc
            r0.onPermission(r2, r3, r4)
        Lc:
            return
    }

    public com.bianfeng.utilslib.PermissionUtils setCallback(com.bianfeng.utilslib.PermissionUtils.PermissionCallback r1) {
            r0 = this;
            r0.callback = r1
            return r0
    }

    public com.bianfeng.utilslib.PermissionUtils setDefaultPermission() {
            r2 = this;
            java.util.Set<java.lang.String> r0 = r2.set
            java.lang.String r1 = "android.permission.READ_PHONE_STATE"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = r2.set
            java.lang.String r1 = "android.permission.WRITE_EXTERNAL_STORAGE"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = r2.set
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            r0.add(r1)
            return r2
    }
}
