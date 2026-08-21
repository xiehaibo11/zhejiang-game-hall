package com.meizu.cloud.pushsdk.handler.a.e;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.platform.message.RegisterStatus;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;

public class c extends com.meizu.cloud.pushsdk.handler.a.a<RegisterStatus> {
    public c(Context context, com.meizu.cloud.pushsdk.handler.a aVar) {
        super(context, aVar);
    }

    private void e() {
        String mzPushServicePackageName = MzSystemUtils.getMzPushServicePackageName(d());
        if (com.meizu.cloud.pushsdk.util.b.l(d(), mzPushServicePackageName)) {
            com.meizu.cloud.pushsdk.util.b.c(d(), mzPushServicePackageName, false);
            if (TextUtils.isEmpty(com.meizu.cloud.pushsdk.util.b.k(d(), mzPushServicePackageName))) {
                String strB = b();
                if (TextUtils.isEmpty(strB)) {
                    return;
                }
                com.meizu.cloud.pushsdk.util.b.k(d(), mzPushServicePackageName, strB);
            }
        }
    }

    @Override
    public int a() {
        return 512;
    }

    @Override
    protected void c(RegisterStatus registerStatus) {
        com.meizu.cloud.pushsdk.b.c.a.a().execute(new Runnable() {
            @Override
            public void run() {
                c.this.e();
            }
        });
    }

    @Override
    protected void a(RegisterStatus registerStatus, com.meizu.cloud.pushsdk.notification.c cVar) {
        if (c() == null || registerStatus == null) {
            return;
        }
        c().a(d(), registerStatus);
    }

    @Override
    public boolean a(Intent intent) {
        DebugLogger.i("AbstractMessageHandler", "start RegisterStatusHandler match");
        return PushConstants.MZ_PUSH_ON_MESSAGE_ACTION.equals(intent.getAction()) && PushConstants.MZ_PUSH_MESSAGE_METHOD_ACTION_REGISTER_STATUS.equals(k(intent));
    }

    @Override
    protected RegisterStatus c(Intent intent) {
        String stringExtra = intent.getStringExtra(PushConstants.MZ_MESSAGE_VALUE);
        RegisterStatus registerStatusA = !TextUtils.isEmpty(stringExtra) ? com.meizu.cloud.pushsdk.platform.message.a.a(stringExtra) : (RegisterStatus) intent.getSerializableExtra(PushConstants.EXTRA_APP_PUSH_REGISTER_STATUS);
        if (!TextUtils.isEmpty(registerStatusA.getPushId())) {
            com.meizu.cloud.pushsdk.util.b.g(d(), registerStatusA.getPushId(), d().getPackageName());
            com.meizu.cloud.pushsdk.util.b.a(d(), (int) ((System.currentTimeMillis() / 1000) + ((long) registerStatusA.getExpireTime())), d().getPackageName());
        }
        return registerStatusA;
    }
}
