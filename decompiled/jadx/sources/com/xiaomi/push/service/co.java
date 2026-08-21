package com.xiaomi.push.service;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;

/* JADX INFO: loaded from: classes4.dex */
class co extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8366a;

    co(XMPushService xMPushService) {
        this.f8366a = xMPushService;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        super.handleMessage(message);
        if (message != null) {
            try {
                int i = message.what;
                if (i != 17) {
                    if (i == 18) {
                        Message messageObtain = Message.obtain((Handler) null, 0);
                        messageObtain.what = 18;
                        Bundle bundle = new Bundle();
                        bundle.putString("xmsf_region", this.f8366a.f871a);
                        messageObtain.setData(bundle);
                        message.replyTo.send(messageObtain);
                    }
                } else if (message.obj != null) {
                    this.f8366a.onStart((Intent) message.obj, 1);
                }
            } catch (Throwable unused) {
            }
        }
    }
}
