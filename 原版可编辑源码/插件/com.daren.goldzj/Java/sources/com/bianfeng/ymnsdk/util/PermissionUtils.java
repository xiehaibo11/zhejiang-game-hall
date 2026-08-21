package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;

@Deprecated
public class PermissionUtils {
    private static PermissionUtils utils;
    private PermissionCallback callback;
    private BfDataPermissionUtils permissionUtils;
    private boolean isFirst = false;
    private String[] permissions = {"android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_EXTERNAL_STORAGE"};

    public interface PermissionCallback {
        void onCall();
    }

    private PermissionUtils() {
    }

    public static PermissionUtils getInstance() {
        if (utils == null) {
            synchronized (PermissionUtils.class) {
                if (utils == null) {
                    utils = new PermissionUtils();
                }
            }
        }
        return utils;
    }

    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        PermissionCallback permissionCallback = this.callback;
        if (permissionCallback == null || this.isFirst || i != 1024) {
            return;
        }
        this.isFirst = true;
        permissionCallback.onCall();
    }

    @Deprecated
    public boolean requestPermission(Activity activity) {
        Log.i("ymnsdk: ", "初始化 requestPermission");
        this.permissionUtils = BfDataPermissionUtils.newInstance(activity).setPermissions(this.permissions).setCallback(new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str) {
                if (PermissionUtils.this.callback == null || PermissionUtils.this.isFirst || i != 1024) {
                    return;
                }
                PermissionUtils.this.isFirst = true;
                PermissionUtils.this.callback.onCall();
            }

            @Override
            public void onAllowAll(int i) {
                if (PermissionUtils.this.callback == null || PermissionUtils.this.isFirst || i != 1024) {
                    return;
                }
                PermissionUtils.this.isFirst = true;
                PermissionUtils.this.callback.onCall();
            }

            @Override
            public void onDeny(int i, String str) {
                if (PermissionUtils.this.callback == null || PermissionUtils.this.isFirst || i != 1024) {
                    return;
                }
                PermissionUtils.this.isFirst = true;
                PermissionUtils.this.callback.onCall();
            }

            @Override
            public void onDenyIn48Hours(int i, String str) {
                if (PermissionUtils.this.callback == null || PermissionUtils.this.isFirst || i != 1024) {
                    return;
                }
                PermissionUtils.this.isFirst = true;
                PermissionUtils.this.callback.onCall();
            }
        });
        return this.permissionUtils.requestPermissions(1024);
    }

    public PermissionUtils setCallback(PermissionCallback permissionCallback) {
        this.callback = permissionCallback;
        return this;
    }

    public boolean requestPermission(Activity activity, BfDataPermissionUtils.PermissCallback permissCallback) {
        Log.i("ymnsdk: ", "初始化 requestPermission");
        this.permissionUtils = BfDataPermissionUtils.newInstance(activity).setCallback(permissCallback).setPermissions(this.permissions);
        return this.permissionUtils.requestPermissions(1024);
    }
}
