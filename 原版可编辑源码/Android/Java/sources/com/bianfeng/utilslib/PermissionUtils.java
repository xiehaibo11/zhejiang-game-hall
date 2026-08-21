package com.bianfeng.utilslib;

import android.app.Activity;
import android.os.Build;
import com.kuaishou.weapon.p0.g;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class PermissionUtils {
    private static final int dataFunCode = 100024;
    private PermissionCallback callback;
    private Activity context;
    private List<String> lists;
    private Set<String> set = new HashSet();

    public interface PermissionCallback {
        void onPermission(int i, String[] strArr, int[] iArr);
    }

    public PermissionUtils setCallback(PermissionCallback permissionCallback) {
        this.callback = permissionCallback;
        return this;
    }

    protected PermissionUtils(Activity activity) {
        this.context = activity;
    }

    public PermissionUtils addPermissionStr(String str) {
        this.set.add(str);
        return this;
    }

    public PermissionUtils setDefaultPermission() {
        this.set.add("android.permission.READ_PHONE_STATE");
        this.set.add("android.permission.WRITE_EXTERNAL_STORAGE");
        this.set.add(g.i);
        return this;
    }

    public boolean check() {
        if (Build.VERSION.SDK_INT >= 23) {
            return rquestPermissions();
        }
        return true;
    }

    private boolean rquestPermissions() {
        this.lists = new ArrayList();
        for (String str : this.set) {
            if (this.context.checkSelfPermission(str) != 0) {
                this.lists.add(str);
            }
        }
        if (this.lists.size() <= 0) {
            return true;
        }
        requestPermission();
        return false;
    }

    private void requestPermission() {
        String[] strArr = new String[this.lists.size()];
        this.lists.toArray(strArr);
        this.context.requestPermissions(strArr, dataFunCode);
    }

    public boolean checkWriteStorage() {
        return this.context.checkSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE") == 0;
    }

    public boolean checkReadStorage() {
        return this.context.checkSelfPermission(g.i) == 0;
    }

    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        PermissionCallback permissionCallback;
        if (i != dataFunCode || (permissionCallback = this.callback) == null) {
            return;
        }
        permissionCallback.onPermission(i, strArr, iArr);
    }
}
