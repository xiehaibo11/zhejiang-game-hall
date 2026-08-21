package com.igexin.assist.control.huawei;

import android.content.Context;
import android.util.Log;
import com.huawei.agconnect.config.AGConnectServicesConfig;
import com.huawei.hms.aaid.HmsInstanceId;
import com.huawei.hms.common.ApiException;
import com.huawei.hms.push.HmsMessaging;

class b extends Thread {
    final Context a;
    final HmsPushManager b;

    b(HmsPushManager hmsPushManager, Context context) {
        this.b = hmsPushManager;
        this.a = context;
    }

    @Override
    public void run() {
        try {
            HmsInstanceId.getInstance(this.a).deleteToken(AGConnectServicesConfig.fromContext(this.a).getString("client/app_id"), HmsMessaging.DEFAULT_TOKEN_SCOPE);
            Log.i("Assist_HW", "deleteToken success.");
        } catch (ApiException e) {
            Log.e("Assist_HW", "deleteToken failed." + e);
        }
    }
}
