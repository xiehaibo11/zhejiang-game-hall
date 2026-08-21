package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.kuaishou.weapon.p0.g;

@Deprecated
public class PermissionUtils {
    private static PermissionUtils utils;
    private PermissionCallback callback;
    private BfDataPermissionUtils permissionUtils;
    private boolean isFirst = false;
    private String[] permissions = {"android.permission.WRITE_EXTERNAL_STORAGE", g.i};

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

    @Deprecated
    public boolean requestPermission(Activity activity) {
        Log.i("ymnsdk: ", "初始化 requestPermission");
        this.permissionUtils = BfDataPermissionUtils.newInstance(activity).setPermissions(this.permissions).setCallback(new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllowAll(int i) {
                if (PermissionUtils.this.callback != null && !PermissionUtils.this.isFirst && i == 1024) {
                    PermissionUtils.this.isFirst = true;
                    PermissionUtils.this.callback.onCall();
                }
            }

            @Override
            public void onAllow(int i, String s) {
                if (PermissionUtils.this.callback != null && !PermissionUtils.this.isFirst && i == 1024) {
                    PermissionUtils.this.isFirst = true;
                    PermissionUtils.this.callback.onCall();
                }
            }

            @Override
            public void onDeny(int i, String s) {
                if (PermissionUtils.this.callback != null && !PermissionUtils.this.isFirst && i == 1024) {
                    PermissionUtils.this.isFirst = true;
                    PermissionUtils.this.callback.onCall();
                }
            }

            @Override
            public void onDenyIn48Hours(int i, String s) {
                if (PermissionUtils.this.callback != null && !PermissionUtils.this.isFirst && i == 1024) {
                    PermissionUtils.this.isFirst = true;
                    PermissionUtils.this.callback.onCall();
                }
            }
        });
        return this.permissionUtils.requestPermissions(1024);
    }

    public boolean requestPermission(Activity activity, BfDataPermissionUtils.PermissCallback callback) {
        Log.i("ymnsdk: ", "初始化 requestPermission");
        this.permissionUtils = BfDataPermissionUtils.newInstance(activity).setCallback(callback).setPermissions(this.permissions);
        return this.permissionUtils.requestPermissions(1024);
    }

    public PermissionUtils setCallback(PermissionCallback callback) {
        this.callback = callback;
        return this;
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        PermissionCallback permissionCallback = this.callback;
        if (permissionCallback != null && !this.isFirst && requestCode == 1024) {
            this.isFirst = true;
            permissionCallback.onCall();
        }
    }
}
