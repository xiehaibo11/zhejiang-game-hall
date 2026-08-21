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

/* JADX INFO: loaded from: classes2.dex */
class a extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f2417a;
    final /* synthetic */ HmsPushManager b;

    a(HmsPushManager hmsPushManager, Context context) {
        this.b = hmsPushManager;
        this.f2417a = context;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            synchronized (this.b.c) {
                if (TextUtils.isEmpty(this.b.f2416a)) {
                    this.b.f2416a = AGConnectServicesConfig.fromContext(this.f2417a).getString("client/app_id");
                }
            }
            this.b.b = HmsInstanceId.getInstance(this.f2417a).getToken(this.b.f2416a, HmsMessaging.DEFAULT_TOKEN_SCOPE);
            Log.i("Assist_HW", "get hms token:" + this.b.b);
            if (TextUtils.isEmpty(this.b.b)) {
                return;
            }
            MessageManger.getInstance().addMessage(new MessageBean(this.f2417a, "token", AssistPushConsts.HW_PREFIX + this.b.b));
        } catch (Throwable th) {
            Log.e("Assist_HW", "get hms token failed:" + th.getMessage());
        }
    }
}
