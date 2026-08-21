package com.igexin.assist.control.huawei;

import android.content.Context;
import android.util.Log;
import com.huawei.agconnect.config.AGConnectServicesConfig;
import com.huawei.hms.aaid.HmsInstanceId;
import com.huawei.hms.common.ApiException;
import com.huawei.hms.push.HmsMessaging;

/* JADX INFO: loaded from: classes2.dex */
class b extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f2418a;
    final /* synthetic */ HmsPushManager b;

    b(HmsPushManager hmsPushManager, Context context) {
        this.b = hmsPushManager;
        this.f2418a = context;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            HmsInstanceId.getInstance(this.f2418a).deleteToken(AGConnectServicesConfig.fromContext(this.f2418a).getString("client/app_id"), HmsMessaging.DEFAULT_TOKEN_SCOPE);
            Log.i("Assist_HW", "deleteToken success.");
        } catch (ApiException e) {
            Log.e("Assist_HW", "deleteToken failed." + e);
        }
    }
}
