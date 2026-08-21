package com.igexin.assist.control.huawei;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.huawei.agconnect.config.AGConnectServicesConfig;
import com.huawei.hms.aaid.HmsInstanceId;
import com.huawei.hms.push.HmsMessaging;
import com.igexin.assist.MessageBean;
import com.igexin.assist.action.MessageManger;
import com.igexin.assist.sdk.AssistPushConsts;

class a extends Thread {
    final Context a;
    final HmsPushManager b;

    a(HmsPushManager hmsPushManager, Context context) {
        this.b = hmsPushManager;
        this.a = context;
    }

    @Override
    public void run() {
        try {
            synchronized (this.b.c) {
                if (TextUtils.isEmpty(this.b.a)) {
                    this.b.a = AGConnectServicesConfig.fromContext(this.a).getString("client/app_id");
                }
            }
            this.b.b = HmsInstanceId.getInstance(this.a).getToken(this.b.a, HmsMessaging.DEFAULT_TOKEN_SCOPE);
            Log.i("Assist_HW", "get hms token:" + this.b.b);
            if (TextUtils.isEmpty(this.b.b)) {
                return;
            }
            MessageManger.getInstance().addMessage(new MessageBean(this.a, "token", AssistPushConsts.HW_PREFIX + this.b.b));
        } catch (Throwable th) {
            Log.e("Assist_HW", "get hms token failed:" + th.getMessage());
        }
    }
}
