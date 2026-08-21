package com.meizu.cloud.pushsdk.handler.a;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;

public class d extends a<String> {
    public d(Context context, com.meizu.cloud.pushsdk.handler.a aVar) {
        super(context, aVar);
    }

    @Override
    public int a() {
        return 16;
    }

    @Override
    protected void a(String str, com.meizu.cloud.pushsdk.notification.c cVar) {
        if (c() != null) {
            c().a(d(), str);
        }
    }

    @Override
    public boolean a(Intent intent) {
        DebugLogger.i("AbstractMessageHandler", "start RegisterMessageHandler match");
        return PushConstants.MZ_PUSH_ON_REGISTER_ACTION.equals(intent.getAction()) || (PushConstants.REGISTRATION_CALLBACK_INTENT.equals(intent.getAction()) && !TextUtils.isEmpty(intent.getStringExtra("registration_id")));
    }

    @Override
    protected String c(Intent intent) {
        String stringExtra = intent.getStringExtra("registration_id");
        com.meizu.cloud.pushsdk.util.b.g(d(), stringExtra, d().getPackageName());
        com.meizu.cloud.pushsdk.util.b.a(d(), 0, d().getPackageName());
        return stringExtra;
    }
}
