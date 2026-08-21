package com.bianfeng.ymnsdk.utilslib.permission;

import android.app.Activity;
import android.app.FragmentManager;
import android.app.FragmentTransaction;
import android.content.Context;
import android.os.Build;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class BfDataPermissionUtils {
    private static final long TIME_48 = 172800000;
    private Activity activity;
    private PermissCallback callback;
    private List<String> lists;
    private PermissionResultCallback resultCallback;
    private Set<String> set = new HashSet();
    private String TAG_PERMISSION = "YMNSDK_PERMISSION_TAG";
    private List<String> manifestPermission = new ArrayList();

    public interface PermissCallback {
        void onAllow(int i, String str);

        void onAllowAll(int i);

        void onDeny(int i, String str);

        void onDenyIn48Hours(int i, String str);
    }

    public interface PermissionResultCallback {
        void onRequestPermissionsResult(int i, String[] strArr, int[] iArr);
    }

    public interface RequestPermissionsResultCallback {
        void onRequestPermissionsResult(int i, String[] strArr, int[] iArr);
    }

    public BfDataPermissionUtils setCallback(PermissCallback permissCallback) {
        this.callback = permissCallback;
        return this;
    }

    public BfDataPermissionUtils setCallback(PermissionResultCallback permissionResultCallback) {
        this.resultCallback = permissionResultCallback;
        return this;
    }

    private BfDataPermissionUtils(Activity activity) {
        this.activity = activity;
        if (this.manifestPermission.size() == 0) {
            try {
                this.manifestPermission.addAll(Arrays.asList(activity.getPackageManager().getPackageInfo(activity.getPackageName(), 4096).requestedPermissions));
            } catch (Exception unused) {
            }
        }
    }

    public static BfDataPermissionUtils newInstance(Activity activity) {
        return new BfDataPermissionUtils(activity);
    }

    public static boolean check(String str, Context context) {
        return Build.VERSION.SDK_INT < 23 || context.checkSelfPermission(str) == 0;
    }

    public BfDataPermissionUtils setPermissions(String str) {
        this.set.add(str);
        return this;
    }

    public BfDataPermissionUtils setPermissions(String[] strArr) {
        this.set.addAll(Arrays.asList(strArr));
        return this;
    }

    public BfDataPermissionUtils setPermissions(List<String> list) {
        this.set.addAll(list);
        return this;
    }

    public boolean requestPermissions(final int i) {
        PermissCallback permissCallback;
        PermissCallback permissCallback2;
        PermissCallback permissCallback3;
        PermissCallback permissCallback4;
        PermissCallback permissCallback5;
        if (this.manifestPermission.size() == 0 && (permissCallback5 = this.callback) != null) {
            permissCallback5.onDeny(i, "manifest中没有配置权限");
            return false;
        }
        if (Build.VERSION.SDK_INT < 23 && (permissCallback4 = this.callback) != null) {
            permissCallback4.onAllowAll(i);
            return true;
        }
        ArrayList<String> arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (String str : this.set) {
            if (!check(str, this.activity)) {
                arrayList.add(str);
            }
        }
        if (arrayList.size() == 0 && (permissCallback3 = this.callback) != null) {
            permissCallback3.onAllowAll(i);
            return true;
        }
        this.lists = new ArrayList();
        for (String str2 : arrayList) {
            if (!this.manifestPermission.contains(str2)) {
                UtilsLogger.e(str2 + "-->当前权限不在manifest中");
            } else if (check48Hours(str2)) {
                this.lists.add(str2);
            } else {
                arrayList2.add(str2);
            }
        }
        if (this.lists.size() > 0) {
            if (arrayList2.size() > 0 && (permissCallback2 = this.callback) != null) {
                permissCallback2.onDenyIn48Hours(i, Arrays.toString(arrayList2.toArray()));
            }
            this.activity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    BfDataPermissionUtils.this.request(i);
                }
            });
            return false;
        }
        if (arrayList2.size() > 0 && (permissCallback = this.callback) != null) {
            permissCallback.onDenyIn48Hours(i, Arrays.toString(arrayList2.toArray()));
        }
        return true;
    }

    private boolean check48Hours(String str) {
        if (!SharedPreferencesUtils.getBoolean("isInitiative")) {
            return System.currentTimeMillis() - SharedPreferencesUtils.getLong(str) >= TIME_48;
        }
        try {
            SharedPreferencesUtils.put("isInitiative", false);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return true;
    }

    private void request(int i) {
        if (Build.VERSION.SDK_INT >= 23) {
            String[] strArr = new String[this.lists.size()];
            this.lists.toArray(strArr);
            FragmentManager fragmentManager = this.activity.getFragmentManager();
            PermissionFragment permissionFragment = (PermissionFragment) fragmentManager.findFragmentByTag(this.TAG_PERMISSION);
            if (permissionFragment == null) {
                PermissionFragment permissionFragment2 = new PermissionFragment();
                permissionFragment2.setCallback(new RequestPermissionsResultCallbackImpl());
                FragmentTransaction fragmentTransactionBeginTransaction = fragmentManager.beginTransaction();
                fragmentTransactionBeginTransaction.add(permissionFragment2, this.TAG_PERMISSION);
                fragmentTransactionBeginTransaction.commit();
                fragmentManager.executePendingTransactions();
                permissionFragment2.requestPermissions(strArr, i);
                return;
            }
            permissionFragment.setCallback(new RequestPermissionsResultCallbackImpl());
            permissionFragment.requestPermissions(strArr, i);
        }
    }

    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        int length = iArr.length;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (int i2 = 0; i2 < length; i2++) {
            if (iArr[i2] != 0) {
                try {
                    arrayList.add(strArr[i2]);
                    SharedPreferencesUtils.put(strArr[i2], System.currentTimeMillis());
                } catch (Exception e) {
                    e.printStackTrace();
                }
            } else {
                arrayList2.add(strArr[i2]);
            }
        }
        if (this.callback != null) {
            if (arrayList.size() > 0) {
                this.callback.onDeny(i, Arrays.toString(arrayList.toArray()));
                this.callback.onAllow(i, Arrays.toString(arrayList2.toArray()));
            } else {
                this.callback.onAllowAll(i);
            }
        }
        PermissionResultCallback permissionResultCallback = this.resultCallback;
        if (permissionResultCallback != null) {
            permissionResultCallback.onRequestPermissionsResult(i, strArr, iArr);
        }
    }

    protected class RequestPermissionsResultCallbackImpl implements RequestPermissionsResultCallback {
        protected RequestPermissionsResultCallbackImpl() {
        }

        @Override
        public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
            BfDataPermissionUtils.this.onRequestPermissionsResult(i, strArr, iArr);
        }
    }
}
