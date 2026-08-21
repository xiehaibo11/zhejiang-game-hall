package com.huawei.hms.api;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.KeyEvent;
import com.huawei.hms.activity.IBridgeActivityDelegate;
import com.huawei.hms.activity.internal.BusResponseCallback;
import com.huawei.hms.activity.internal.ForegroundBusResponseMgr;
import com.huawei.hms.adapter.internal.CommonCode;
import com.huawei.hms.support.log.HMSLog;
import java.lang.ref.WeakReference;

public class ResolutionDelegate implements IBridgeActivityDelegate {
    public static final String CALLBACK_METHOD = "CALLBACK_METHOD";
    private WeakReference<Activity> a;

    private void a() {
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing()) {
            return;
        }
        activityB.finish();
    }

    private Activity b() {
        WeakReference<Activity> weakReference = this.a;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    @Override
    public int getRequestCode() {
        return 1002;
    }

    @Override
    public void onBridgeActivityCreate(Activity activity) {
        this.a = new WeakReference<>(activity);
        Bundle extras = activity.getIntent().getExtras();
        if (extras != null) {
            activity.startActivityForResult((Intent) extras.getParcelable(CommonCode.MapKey.HAS_RESOLUTION), 1002);
        }
    }

    @Override
    public void onBridgeActivityDestroy() {
        this.a = null;
    }

    @Override
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        if (i != getRequestCode()) {
            return false;
        }
        BusResponseCallback busResponseCallbackA = a(CALLBACK_METHOD);
        int iIsHuaweiMobileServicesAvailable = HuaweiApiAvailability.getInstance().isHuaweiMobileServicesAvailable(this.a.get(), 30000000);
        if (i2 == -1 && iIsHuaweiMobileServicesAvailable == 0) {
            HMSLog.i("ResolutionDelegate", "Make service available success.");
        } else {
            busResponseCallbackA.innerError(this.a.get(), i2, "Make service available failed.");
        }
        a();
        return true;
    }

    @Override
    public void onBridgeConfigurationChanged() {
    }

    @Override
    public void onKeyUp(int i, KeyEvent keyEvent) {
    }

    private BusResponseCallback a(String str) {
        return ForegroundBusResponseMgr.getInstance().get(str);
    }
}
