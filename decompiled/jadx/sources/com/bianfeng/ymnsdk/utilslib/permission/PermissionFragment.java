package com.bianfeng.ymnsdk.utilslib.permission;

import android.app.Fragment;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;

/* JADX INFO: loaded from: classes.dex */
public class PermissionFragment extends Fragment {
    private BfDataPermissionUtils.RequestPermissionsResultCallback callback;

    public void setCallback(BfDataPermissionUtils.RequestPermissionsResultCallback callback) {
        this.callback = callback;
    }

    @Override // android.app.Fragment
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        BfDataPermissionUtils.RequestPermissionsResultCallback requestPermissionsResultCallback = this.callback;
        if (requestPermissionsResultCallback != null) {
            requestPermissionsResultCallback.onRequestPermissionsResult(requestCode, permissions, grantResults);
        }
    }
}
