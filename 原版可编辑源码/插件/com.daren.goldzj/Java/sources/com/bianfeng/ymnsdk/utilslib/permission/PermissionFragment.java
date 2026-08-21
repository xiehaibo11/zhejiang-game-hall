package com.bianfeng.ymnsdk.utilslib.permission;

import android.app.Fragment;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;

public class PermissionFragment extends Fragment {
    private BfDataPermissionUtils.RequestPermissionsResultCallback callback;

    public void setCallback(BfDataPermissionUtils.RequestPermissionsResultCallback requestPermissionsResultCallback) {
        this.callback = requestPermissionsResultCallback;
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        BfDataPermissionUtils.RequestPermissionsResultCallback requestPermissionsResultCallback = this.callback;
        if (requestPermissionsResultCallback != null) {
            requestPermissionsResultCallback.onRequestPermissionsResult(i, strArr, iArr);
        }
    }
}
