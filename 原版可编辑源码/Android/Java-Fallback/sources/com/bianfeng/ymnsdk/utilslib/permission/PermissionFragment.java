package com.bianfeng.ymnsdk.utilslib.permission;

public class PermissionFragment extends android.app.Fragment {
    private com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.RequestPermissionsResultCallback callback;

    public PermissionFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            super.onRequestPermissionsResult(r2, r3, r4)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils$RequestPermissionsResultCallback r0 = r1.callback
            if (r0 == 0) goto La
            r0.onRequestPermissionsResult(r2, r3, r4)
        La:
            return
    }

    public void setCallback(com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.RequestPermissionsResultCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }
}
