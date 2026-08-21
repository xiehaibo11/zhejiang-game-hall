package com.bianfeng.ymnsdk.utilslib.permission;

import android.app.Activity;
import android.app.FragmentManager;
import android.app.FragmentTransaction;
import android.content.Context;
import android.content.pm.PackageManager;
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

    public BfDataPermissionUtils setCallback(PermissCallback callback) {
        this.callback = callback;
        return this;
    }

    public BfDataPermissionUtils setCallback(PermissionResultCallback callback) {
        this.resultCallback = callback;
        return this;
    }

    private BfDataPermissionUtils(Activity activity) {
        this.activity = activity;
        if (this.manifestPermission.size() == 0) {
            PackageManager packageManager = activity.getPackageManager();
            String packageName = activity.getPackageName();
            try {
                String[] strings = packageManager.getPackageInfo(packageName, 4096).requestedPermissions;
                this.manifestPermission.addAll(Arrays.asList(strings));
            } catch (Exception e) {
            }
        }
    }

    public static BfDataPermissionUtils newInstance(Activity activity) {
        return new BfDataPermissionUtils(activity);
    }

    public static boolean check(String name, Context context) {
        return Build.VERSION.SDK_INT < 23 || context.checkSelfPermission(name) == 0;
    }

    public BfDataPermissionUtils setPermissions(String s) {
        this.set.add(s);
        return this;
    }

    public BfDataPermissionUtils setPermissions(String[] s) {
        this.set.addAll(Arrays.asList(s));
        return this;
    }

    public BfDataPermissionUtils setPermissions(List<String> s) {
        this.set.addAll(s);
        return this;
    }

    public boolean requestPermissions(final int code) {
        PermissCallback permissCallback;
        PermissCallback permissCallback2;
        PermissCallback permissCallback3;
        PermissCallback permissCallback4;
        PermissCallback permissCallback5;
        if (this.manifestPermission.size() == 0 && (permissCallback5 = this.callback) != null) {
            permissCallback5.onDeny(code, "manifest中没有配置权限");
            return false;
        }
        if (Build.VERSION.SDK_INT < 23 && (permissCallback4 = this.callback) != null) {
            permissCallback4.onAllowAll(code);
            return true;
        }
        List<String> temLists = new ArrayList<>();
        List<String> in48Lists = new ArrayList<>();
        for (String s : this.set) {
            if (!check(s, this.activity)) {
                temLists.add(s);
            }
        }
        if (temLists.size() == 0 && (permissCallback3 = this.callback) != null) {
            permissCallback3.onAllowAll(code);
            return true;
        }
        this.lists = new ArrayList();
        for (String per : temLists) {
            if (!this.manifestPermission.contains(per)) {
                UtilsLogger.e(per + "-->当前权限不在manifest中");
            } else if (check48Hours(per)) {
                this.lists.add(per);
            } else {
                in48Lists.add(per);
            }
        }
        if (this.lists.size() > 0) {
            if (in48Lists.size() > 0 && (permissCallback2 = this.callback) != null) {
                permissCallback2.onDenyIn48Hours(code, Arrays.toString(in48Lists.toArray()));
            }
            this.activity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    BfDataPermissionUtils.this.request(code);
                }
            });
            return false;
        }
        if (in48Lists.size() > 0 && (permissCallback = this.callback) != null) {
            permissCallback.onDenyIn48Hours(code, Arrays.toString(in48Lists.toArray()));
        }
        return true;
    }

    private boolean check48Hours(String per) {
        boolean isInitiative = SharedPreferencesUtils.getBoolean("isInitiative");
        if (isInitiative) {
            try {
                SharedPreferencesUtils.put("isInitiative", false);
            } catch (Exception e) {
                e.printStackTrace();
            }
            return true;
        }
        long time = SharedPreferencesUtils.getLong(per);
        long currentTime = System.currentTimeMillis();
        return currentTime - time >= TIME_48;
    }

    private void request(int code) {
        if (Build.VERSION.SDK_INT >= 23) {
            String[] strings = new String[this.lists.size()];
            this.lists.toArray(strings);
            FragmentManager fm = this.activity.getFragmentManager();
            PermissionFragment fragment = (PermissionFragment) fm.findFragmentByTag(this.TAG_PERMISSION);
            if (fragment == null) {
                PermissionFragment fragment2 = new PermissionFragment();
                fragment2.setCallback(new RequestPermissionsResultCallbackImpl());
                FragmentTransaction ft = fm.beginTransaction();
                ft.add(fragment2, this.TAG_PERMISSION);
                ft.commit();
                fm.executePendingTransactions();
                fragment2.requestPermissions(strings, code);
                return;
            }
            fragment.setCallback(new RequestPermissionsResultCallbackImpl());
            fragment.requestPermissions(strings, code);
        }
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        int size = grantResults.length;
        List<String> denyList = new ArrayList<>();
        List<String> allowList = new ArrayList<>();
        for (int i = 0; i < size; i++) {
            if (grantResults[i] != 0) {
                try {
                    denyList.add(permissions[i]);
                    SharedPreferencesUtils.put(permissions[i], System.currentTimeMillis());
                } catch (Exception e) {
                    e.printStackTrace();
                }
            } else {
                allowList.add(permissions[i]);
            }
        }
        if (this.callback != null) {
            if (denyList.size() > 0) {
                this.callback.onDeny(requestCode, Arrays.toString(denyList.toArray()));
                this.callback.onAllow(requestCode, Arrays.toString(allowList.toArray()));
            } else {
                this.callback.onAllowAll(requestCode);
            }
        }
        PermissionResultCallback permissionResultCallback = this.resultCallback;
        if (permissionResultCallback != null) {
            permissionResultCallback.onRequestPermissionsResult(requestCode, permissions, grantResults);
        }
    }

    protected class RequestPermissionsResultCallbackImpl implements RequestPermissionsResultCallback {
        protected RequestPermissionsResultCallbackImpl() {
        }

        @Override
        public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
            BfDataPermissionUtils.this.onRequestPermissionsResult(requestCode, permissions, grantResults);
        }
    }
}
