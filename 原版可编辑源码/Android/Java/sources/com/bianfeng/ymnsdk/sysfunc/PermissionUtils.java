package com.bianfeng.ymnsdk.sysfunc;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.widget.Toast;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.kuaishou.weapon.p0.g;
import java.util.ArrayList;
import java.util.List;

public class PermissionUtils {
    static final boolean $assertionsDisabled = false;

    public interface OnRequestPermissionsResultCallbacks {
        void onPermissionsDenied(int i, List<String> list, boolean z);

        void onPermissionsGranted(int i, List<String> list, boolean z);
    }

    private static boolean needCheckPermission() {
        return Build.VERSION.SDK_INT >= 23;
    }

    public static boolean getEmulatorPermissions(Activity activity, int i, BfDataPermissionUtils.PermissCallback permissCallback) {
        return requestPerssions(activity, i, permissCallback, "android.permission.READ_PHONE_STATE", "android.permission.READ_SMS");
    }

    public static boolean getLocationPermissions(Activity activity, int i, BfDataPermissionUtils.PermissCallback permissCallback) {
        return requestPerssions(activity, i, permissCallback, g.h, g.g);
    }

    public static boolean getDownLoadPermissions(Activity activity, int i, BfDataPermissionUtils.PermissCallback permissCallback) {
        return requestPerssions(activity, i, permissCallback, "android.permission.WRITE_EXTERNAL_STORAGE", g.i);
    }

    public static boolean getScreenShotPermissions(Activity activity, int i, BfDataPermissionUtils.PermissCallback permissCallback) {
        return requestPerssions(activity, i, permissCallback, "android.permission.WRITE_EXTERNAL_STORAGE", g.i);
    }

    private static List<String> getDeniedPermissions(Activity activity, String... strArr) {
        if (!needCheckPermission()) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : strArr) {
            if (activity.checkSelfPermission(str) != 0) {
                arrayList.add(str);
            }
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        return arrayList;
    }

    private static boolean hasPermissons(Activity activity, String... strArr) {
        if (!needCheckPermission()) {
            return true;
        }
        for (String str : strArr) {
            if (activity.checkSelfPermission(str) != 0) {
                return false;
            }
        }
        return true;
    }

    public static boolean deniedRequestAgain(Activity activity, String... strArr) {
        if (!needCheckPermission()) {
            return false;
        }
        for (String str : getDeniedPermissions(activity, strArr)) {
            if (activity.checkSelfPermission(str) != -1 && !activity.shouldShowRequestPermissionRationale(str)) {
                return true;
            }
        }
        return false;
    }

    public static void startApplicationDetailsSettings(Activity activity, int i) {
        Toast.makeText(activity, "点击权限，并打开全部权限", 0).show();
        Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
        intent.setData(Uri.fromParts("package", activity.getPackageName(), null));
        activity.startActivityForResult(intent, i);
    }

    public static boolean requestPerssions(Activity activity, int i, BfDataPermissionUtils.PermissCallback permissCallback, String... strArr) {
        if (!needCheckPermission() || getDeniedPermissions(activity, strArr) == null) {
            return true;
        }
        BfDataPermissionUtils.newInstance(activity).setCallback(permissCallback).setPermissions(strArr).requestPermissions(i);
        return false;
    }

    public static void onRequestPermissionsResult(int i, String[] strArr, int[] iArr, OnRequestPermissionsResultCallbacks onRequestPermissionsResultCallbacks) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (int i2 = 0; i2 < strArr.length; i2++) {
            String str = strArr[i2];
            if (iArr[i2] == 0) {
                arrayList.add(str);
            } else {
                arrayList2.add(str);
            }
        }
        if (onRequestPermissionsResultCallbacks != null) {
            if (!arrayList.isEmpty()) {
                onRequestPermissionsResultCallbacks.onPermissionsGranted(i, arrayList, arrayList2.isEmpty());
            }
            if (arrayList2.isEmpty()) {
                return;
            }
            onRequestPermissionsResultCallbacks.onPermissionsDenied(i, arrayList2, arrayList.isEmpty());
        }
    }
}
