package com.meizu.cloud.pushsdk.handler.a.e;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus;

public class f extends com.meizu.cloud.pushsdk.handler.a.a<UnRegisterStatus> {
    public f(Context context, com.meizu.cloud.pushsdk.handler.a aVar) {
        super(context, aVar);
    }

    @Override
    public int a() {
        return 1024;
    }

    @Override
    protected void a(UnRegisterStatus unRegisterStatus, com.meizu.cloud.pushsdk.notification.c cVar) {
        if (c() == null || unRegisterStatus == null) {
            return;
        }
        c().a(d(), unRegisterStatus);
    }

    @Override
    public boolean a(Intent intent) {
        DebugLogger.i("AbstractMessageHandler", "start UnRegisterStatusHandler match");
        return PushConstants.MZ_PUSH_ON_MESSAGE_ACTION.equals(intent.getAction()) && PushConstants.MZ_PUSH_MESSAGE_METHOD_ACTION_UNREGISTER_STATUS.equals(k(intent));
    }

    @Override
    protected UnRegisterStatus c(Intent intent) {
        String stringExtra = intent.getStringExtra(PushConstants.MZ_MESSAGE_VALUE);
        UnRegisterStatus unRegisterStatusB = !TextUtils.isEmpty(stringExtra) ? com.meizu.cloud.pushsdk.platform.message.a.b(stringExtra) : (UnRegisterStatus) intent.getSerializableExtra(PushConstants.EXTRA_APP_PUSH_UNREGISTER_STATUS);
        if (unRegisterStatusB.isUnRegisterSuccess()) {
            com.meizu.cloud.pushsdk.util.b.g(d(), "", d().getPackageName());
        }
        return unRegisterStatusB;
    }
}
