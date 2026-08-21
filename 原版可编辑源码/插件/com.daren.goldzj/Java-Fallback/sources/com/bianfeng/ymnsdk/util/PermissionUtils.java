package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;

@Deprecated
public class PermissionUtils {
    private static PermissionUtils utils;
    private PermissionCallback callback;
    private boolean isFirst;
    private BfDataPermissionUtils permissionUtils;
    private String[] permissions;

    public interface PermissionCallback {
        void onCall();
    }

    private PermissionUtils() {
        this.isFirst = false;
        this.permissions = new String[]{"android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_EXTERNAL_STORAGE"};
    }

    static PermissionCallback access$000(PermissionUtils r0) {
        return r0.callback;
    }

    static boolean access$100(PermissionUtils r0) {
        return r0.isFirst;
    }

    static boolean access$102(PermissionUtils r0, boolean r1) {
        r0.isFirst = r1;
        return r1;
    }

    public static PermissionUtils getInstance() {
        if (utils != null) goto L15;
        monitor-enter(PermissionUtils.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (utils != null) goto L9;
        utils = new PermissionUtils();     // Catch: Throwable -> L11
    L9:
        monitor-exit(PermissionUtils.class);     // Catch: Throwable -> L11
    L15:
        return utils;
    }

    public void onRequestPermissionsResult(int r1, String[] r2, int[] r3) {
        PermissionCallback r22 = this.callback;
        if (r22 != null) goto L5;
        return;
    L5:
        if (this.isFirst == false) goto L7;
        return;
    L7:
        if (r1 != 1024) goto L12;
        this.isFirst = true;
        r22.onCall();
        return;
    }

    @Deprecated
    public boolean requestPermission(Activity r3) {
        Log.i("ymnsdk: ", "初始化 requestPermission");
        this.permissionUtils = BfDataPermissionUtils.newInstance(r3).setPermissions(this.permissions).setCallback(new 1(this));
        return this.permissionUtils.requestPermissions(1024);
    }

    public PermissionUtils setCallback(PermissionCallback r1) {
        this.callback = r1;
        return this;
    }

    public boolean requestPermission(Activity r3, BfDataPermissionUtils.PermissCallback r4) {
        Log.i("ymnsdk: ", "初始化 requestPermission");
        this.permissionUtils = BfDataPermissionUtils.newInstance(r3).setCallback(r4).setPermissions(this.permissions);
        return this.permissionUtils.requestPermissions(1024);
    }
}
