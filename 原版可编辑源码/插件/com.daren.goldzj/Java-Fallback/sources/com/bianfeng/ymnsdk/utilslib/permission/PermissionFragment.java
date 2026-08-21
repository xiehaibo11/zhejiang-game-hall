package com.bianfeng.ymnsdk.utilslib.permission;

import android.app.Fragment;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;

public class PermissionFragment extends Fragment {
    private BfDataPermissionUtils.RequestPermissionsResultCallback callback;

    public PermissionFragment() {
    }

    public void setCallback(BfDataPermissionUtils.RequestPermissionsResultCallback r1) {
        this.callback = r1;
    }

    @Override
    public void onRequestPermissionsResult(int r2, String[] r3, int[] r4) {
        super.onRequestPermissionsResult(r2, r3, r4);
        BfDataPermissionUtils.RequestPermissionsResultCallback r0 = this.callback;
        if (r0 == null) goto L6;
        r0.onRequestPermissionsResult(r2, r3, r4);
        return;
    }
}
