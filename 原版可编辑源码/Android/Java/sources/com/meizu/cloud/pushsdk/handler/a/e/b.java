package com.meizu.cloud.pushsdk.handler.a.e;

import android.content.Context;
import android.content.Intent;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;

public class b extends com.meizu.cloud.pushsdk.handler.a.a<String> {
    public b(Context context, com.meizu.cloud.pushsdk.handler.a aVar) {
        super(context, aVar);
    }

    @Override
    public int a() {
        return 16384;
    }

    @Override
    protected void a(String str, com.meizu.cloud.pushsdk.notification.c cVar) {
        if (c() == null || str == null) {
            return;
        }
        c().c(d(), str);
    }

    @Override
    public boolean a(Intent intent) {
        DebugLogger.i("AbstractMessageHandler", "start ReceiveNotifyMessageHandler match");
        return PushConstants.MZ_PUSH_ON_MESSAGE_ACTION.equals(intent.getAction()) && PushConstants.MZ_PUSH_MESSAGE_METHOD_ACTION_RESPONSE_NOTIFICATION_MESSAGE.equals(k(intent));
    }

    @Override
    protected String c(Intent intent) {
        return intent.getStringExtra(PushConstants.EXTRA_APP_PUSH_RESPONSE_NOTIFICATION_MESSAGE);
    }
}
