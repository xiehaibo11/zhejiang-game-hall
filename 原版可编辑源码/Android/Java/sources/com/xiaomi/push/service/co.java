package com.xiaomi.push.service;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;

class co extends Handler {
    final XMPushService a;

    co(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    @Override
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
                        bundle.putString("xmsf_region", this.a.a);
                        messageObtain.setData(bundle);
                        message.replyTo.send(messageObtain);
                    }
                } else if (message.obj != null) {
                    this.a.onStart((Intent) message.obj, 1);
                }
            } catch (Throwable unused) {
            }
        }
    }
}
