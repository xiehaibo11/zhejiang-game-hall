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
import java.util.Iterator;
import java.util.List;
import java.util.Set;

public class BfDataPermissionUtils {
    private static final long TIME_48 = 172800000;
    private String TAG_PERMISSION;
    private Activity activity;
    private PermissCallback callback;
    private List<String> lists;
    private List<String> manifestPermission;
    private PermissionResultCallback resultCallback;
    private Set<String> set;

    public interface PermissCallback {
        void onAllow(int r1, String r2);

        void onAllowAll(int r1);

        void onDeny(int r1, String r2);

        void onDenyIn48Hours(int r1, String r2);
    }

    public interface PermissionResultCallback {
        void onRequestPermissionsResult(int r1, String[] r2, int[] r3);
    }

    public interface RequestPermissionsResultCallback {
        void onRequestPermissionsResult(int r1, String[] r2, int[] r3);
    }

    protected class RequestPermissionsResultCallbackImpl implements RequestPermissionsResultCallback {
        final BfDataPermissionUtils this$0;

        protected RequestPermissionsResultCallbackImpl(BfDataPermissionUtils r1) {
            this.this$0 = r1;
        }

        @Override
        public void onRequestPermissionsResult(int r2, String[] r3, int[] r4) {
            this.this$0.onRequestPermissionsResult(r2, r3, r4);
        }
    }

    static void access$000(BfDataPermissionUtils r0, int r1) {
        r0.request(r1);
    }

    public BfDataPermissionUtils setCallback(PermissCallback r1) {
        this.callback = r1;
        return this;
    }

    public BfDataPermissionUtils setCallback(PermissionResultCallback r1) {
        this.resultCallback = r1;
        return this;
    }

    private BfDataPermissionUtils(Activity r3) {
        this.set = new HashSet();
        this.TAG_PERMISSION = "YMNSDK_PERMISSION_TAG";
        this.manifestPermission = new ArrayList();
        this.activity = r3;
        if (this.manifestPermission.size() == 0) goto L8;
        return;
    L8:
        String[] r32 = r3.getPackageManager().getPackageInfo(r3.getPackageName(), 4096).requestedPermissions;     // Catch: Exception -> L7
        this.manifestPermission.addAll(Arrays.asList(r32));     // Catch: Exception -> L7
        return;
    }

    public static BfDataPermissionUtils newInstance(Activity r1) {
        return new BfDataPermissionUtils(r1);
    }

    public static boolean check(String r3, Context r4) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return true;
    L5:
        if (r4.checkSelfPermission(r3) == 0) goto L10;
        return false;
    L10:
        return true;
    }

    public BfDataPermissionUtils setPermissions(String r2) {
        this.set.add(r2);
        return this;
    }

    public BfDataPermissionUtils setPermissions(String[] r2) {
        this.set.addAll(Arrays.asList(r2));
        return this;
    }

    public BfDataPermissionUtils setPermissions(List<String> r2) {
        this.set.addAll(r2);
        return this;
    }

    public boolean requestPermissions(final int r8) {
        if (this.manifestPermission.size() != 0) goto L9;
        PermissCallback r0 = this.callback;
        if (r0 == null) goto L9;
        r0.onDeny(r8, "manifest中没有配置权限");
        return false;
    L9:
        if (Build.VERSION.SDK_INT >= 23) goto L14;
        PermissCallback r02 = this.callback;
        if (r02 == null) goto L14;
        r02.onAllowAll(r8);
        return true;
    L14:
        ArrayList r03 = new ArrayList();
        ArrayList r2 = new ArrayList();
        Iterator<String> r4 = this.set.iterator();
    L16:
        if (r4.hasNext() == false) goto L21;
        String r5 = r4.next();
        if (check(r5, this.activity) == true) goto L16;
        r03.add(r5);
        goto L16
    L21:
        if (r03.size() != 0) goto L26;
        PermissCallback r42 = this.callback;
        if (r42 == null) goto L26;
        r42.onAllowAll(r8);
        return true;
    L26:
        this.lists = new ArrayList();
        Iterator r04 = r03.iterator();
    L28:
        if (r04.hasNext() == false) goto L37;
        String r43 = (String) r04.next();
        if (this.manifestPermission.contains(r43) == true) goto L32;
        UtilsLogger.e(r43 + "-->当前权限不在manifest中");
        goto L28
    L32:
        if (check48Hours(r43) == true) goto L33;
        r2.add(r43);
        goto L28
    L33:
        this.lists.add(r43);
        goto L28
    L37:
        if (this.lists.size() <= 0) goto L46;
        if (r2.size() <= 0) goto L43;
        PermissCallback r05 = this.callback;
        if (r05 == null) goto L43;
        r05.onDenyIn48Hours(r8, Arrays.toString(r2.toArray()));
    L43:
        this.activity.runOnUiThread(new 1(this, r8));
        return false;
    L46:
        if (r2.size() <= 0) goto L50;
        PermissCallback r06 = this.callback;
        if (r06 == null) goto L50;
        r06.onDenyIn48Hours(r8, Arrays.toString(r2.toArray()));
    L50:
        return true;
    }

    private boolean check48Hours(String r7) {
        if (SharedPreferencesUtils.getBoolean("isInitiative") == true) goto L13;
        long r0 = SharedPreferencesUtils.getLong(r7);
        if ((System.currentTimeMillis() - r0) < TIME_48) goto L12;
        return true;
    L12:
        return false;
    L13:
        SharedPreferencesUtils.put("isInitiative", false);     // Catch: Exception -> L6
    L8:
        return true;
    L6:
        e = move-exception;
        e.printStackTrace();
        goto L8
    }

    private void request(int r6) {
        if (Build.VERSION.SDK_INT < 23) goto L9;
        String[] r0 = new String[this.lists.size()];
        this.lists.toArray(r0);
        FragmentManager r1 = this.activity.getFragmentManager();
        PermissionFragment r2 = (PermissionFragment) r1.findFragmentByTag(this.TAG_PERMISSION);
        if (r2 != null) goto L7;
        PermissionFragment r22 = new PermissionFragment();
        r22.setCallback(new RequestPermissionsResultCallbackImpl(this));
        FragmentTransaction r3 = r1.beginTransaction();
        r3.add(r22, this.TAG_PERMISSION);
        r3.commit();
        r1.executePendingTransactions();
        r22.requestPermissions(r0, r6);
        return;
    L7:
        r2.setCallback(new RequestPermissionsResultCallbackImpl(this));
        r2.requestPermissions(r0, r6);
        return;
    }

    public void onRequestPermissionsResult(int r8, String[] r9, int[] r10) {
        int r0 = r10.length;
        ArrayList r1 = new ArrayList();
        ArrayList r2 = new ArrayList();
        int r3 = 0;
    L3:
        if (r3 >= r0) goto L13;
        if (r10[r3] != 0) goto L22;
        r2.add(r9[r3]);
    L11:
        r3 = r3 + 1;
        goto L3
    L22:
        r1.add(r9[r3]);     // Catch: Exception -> L8
        SharedPreferencesUtils.put(r9[r3], System.currentTimeMillis());     // Catch: Exception -> L8
    L8:
        e = move-exception;
        e.printStackTrace();
        goto L11
    L13:
        if (this.callback != null) goto L15;
    L18:
        PermissionResultCallback r02 = this.resultCallback;
        if (r02 == null) goto L28;
        r02.onRequestPermissionsResult(r8, r9, r10);
        return;
    L28:
        return;
    L15:
        if (r1.size() <= 0) goto L17;
        this.callback.onDeny(r8, Arrays.toString(r1.toArray()));
        this.callback.onAllow(r8, Arrays.toString(r2.toArray()));
        goto L18
    L17:
        this.callback.onAllowAll(r8);
        goto L18
    }
}
