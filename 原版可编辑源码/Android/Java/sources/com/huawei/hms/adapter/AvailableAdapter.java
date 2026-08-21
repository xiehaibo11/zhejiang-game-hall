package com.huawei.hms.adapter;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import com.huawei.hms.activity.BridgeActivity;
import com.huawei.hms.adapter.internal.CommonCode;
import com.huawei.hms.adapter.sysobs.SystemManager;
import com.huawei.hms.adapter.sysobs.SystemObserver;
import com.huawei.hms.adapter.ui.UpdateAdapter;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.update.note.AppSpoofResolution;
import com.huawei.hms.utils.Checker;
import com.huawei.hms.utils.HMSPackageManager;
import com.huawei.hms.utils.PackageManagerHelper;
import com.huawei.hms.utils.UIUtil;

public class AvailableAdapter {
    public final int a;
    public AvailableCallBack b;
    public SystemObserver c = new a();

    public interface AvailableCallBack {
        void onComplete(int i);
    }

    public class a implements SystemObserver {
        public a() {
        }

        @Override
        public boolean onNoticeResult(int i) {
            AvailableCallBack availableCallBackA = AvailableAdapter.this.a();
            if (availableCallBackA == null) {
                HMSLog.e("AvailableAdapter", "onNoticeResult baseCallBack null");
                return true;
            }
            availableCallBackA.onComplete(i);
            return true;
        }

        @Override
        public boolean onSolutionResult(Intent intent, String str) {
            return false;
        }

        @Override
        public boolean onUpdateResult(int i) {
            AvailableCallBack availableCallBackA = AvailableAdapter.this.a();
            if (availableCallBackA == null) {
                HMSLog.e("AvailableAdapter", "onUpdateResult baseCallBack null");
                return true;
            }
            availableCallBackA.onComplete(i);
            return true;
        }
    }

    public AvailableAdapter(int i) {
        this.a = i;
    }

    public int isHuaweiMobileServicesAvailable(Context context) {
        Checker.checkNonNull(context, "context must not be null.");
        if (Build.VERSION.SDK_INT < 16) {
            HMSLog.i("AvailableAdapter", "HMS can not be supported under android 4.1");
            return 21;
        }
        HMSPackageManager hMSPackageManager = HMSPackageManager.getInstance(context);
        PackageManagerHelper.PackageStates hMSPackageStates = hMSPackageManager.getHMSPackageStates();
        if (PackageManagerHelper.PackageStates.NOT_INSTALLED.equals(hMSPackageStates)) {
            HMSLog.i("AvailableAdapter", "HMS is not installed");
            return 1;
        }
        if (PackageManagerHelper.PackageStates.SPOOF.equals(hMSPackageStates)) {
            HMSLog.i("AvailableAdapter", "HMS is spoofed");
            return 29;
        }
        if (PackageManagerHelper.PackageStates.DISABLED.equals(hMSPackageStates)) {
            HMSLog.i("AvailableAdapter", "HMS is disabled");
            return 3;
        }
        if (!hMSPackageManager.isApkUpdateNecessary(this.a)) {
            return 0;
        }
        HMSLog.i("AvailableAdapter", "The current version does not meet the minimum version requirements");
        return 2;
    }

    public boolean isUserNoticeError(int i) {
        return i == 29;
    }

    public boolean isUserResolvableError(int i) {
        return i == 1 || i == 2;
    }

    public void startNotice(Activity activity, AvailableCallBack availableCallBack) {
        if (activity == null || availableCallBack == null) {
            return;
        }
        if (UIUtil.isBackground(activity)) {
            HMSLog.i("AvailableAdapter", "current app is in Background");
            availableCallBack.onComplete(28);
        } else {
            HMSLog.i("AvailableAdapter", "startNotice");
            this.b = availableCallBack;
            SystemManager.getSystemNotifier().registerObserver(this.c);
            activity.startActivity(BridgeActivity.getIntentStartBridgeActivity(activity, AppSpoofResolution.class.getName()));
        }
    }

    public void startResolution(Activity activity, AvailableCallBack availableCallBack) {
        if (activity == null || availableCallBack == null) {
            return;
        }
        if (UIUtil.isBackground(activity)) {
            HMSLog.i("AvailableAdapter", "current app is in Background");
            availableCallBack.onComplete(28);
            return;
        }
        HMSLog.i("AvailableAdapter", "startResolution");
        this.b = availableCallBack;
        SystemManager.getSystemNotifier().registerObserver(this.c);
        Intent intentStartBridgeActivity = BridgeActivity.getIntentStartBridgeActivity(activity, UpdateAdapter.class.getName());
        intentStartBridgeActivity.putExtra("update_version", this.a);
        intentStartBridgeActivity.putExtra(CommonCode.MapKey.NEW_UPDATE, a(activity));
        activity.startActivity(intentStartBridgeActivity);
    }

    public final boolean a(Activity activity) {
        if (HMSPackageManager.getInstance(activity).getHmsVersionCode() < 40000000) {
            return false;
        }
        HMSLog.i("AvailableAdapter", "enter 4.0 HmsCore upgrade process");
        return true;
    }

    public final AvailableCallBack a() {
        return this.b;
    }
}
