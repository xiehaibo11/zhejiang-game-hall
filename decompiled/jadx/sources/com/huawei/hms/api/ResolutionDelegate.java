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

/* JADX INFO: loaded from: classes.dex */
public class ResolutionDelegate implements IBridgeActivityDelegate {
    public static final String CALLBACK_METHOD = "CALLBACK_METHOD";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private WeakReference<Activity> f2011a;

    private void a() {
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing()) {
            return;
        }
        activityB.finish();
    }

    private Activity b() {
        WeakReference<Activity> weakReference = this.f2011a;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public int getRequestCode() {
        return 1002;
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeActivityCreate(Activity activity) {
        this.f2011a = new WeakReference<>(activity);
        Bundle extras = activity.getIntent().getExtras();
        if (extras != null) {
            activity.startActivityForResult((Intent) extras.getParcelable(CommonCode.MapKey.HAS_RESOLUTION), 1002);
        }
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeActivityDestroy() {
        this.f2011a = null;
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        if (i != getRequestCode()) {
            return false;
        }
        BusResponseCallback busResponseCallbackA = a(CALLBACK_METHOD);
        int iIsHuaweiMobileServicesAvailable = HuaweiApiAvailability.getInstance().isHuaweiMobileServicesAvailable(this.f2011a.get(), 30000000);
        if (i2 == -1 && iIsHuaweiMobileServicesAvailable == 0) {
            HMSLog.i("ResolutionDelegate", "Make service available success.");
        } else {
            busResponseCallbackA.innerError(this.f2011a.get(), i2, "Make service available failed.");
        }
        a();
        return true;
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeConfigurationChanged() {
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public void onKeyUp(int i, KeyEvent keyEvent) {
    }

    private BusResponseCallback a(String str) {
        return ForegroundBusResponseMgr.getInstance().get(str);
    }
}
