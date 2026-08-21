package com.meizu.cloud.pushsdk.platform.b;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.platform.PlatformMessageSender;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus;
import java.util.concurrent.ScheduledExecutorService;

/* JADX INFO: loaded from: classes3.dex */
public class g extends c<UnRegisterStatus> {
    public g(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, null, null, aVar, scheduledExecutorService);
    }

    public g(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService, boolean z) {
        this(context, aVar, scheduledExecutorService);
        this.g = z;
    }

    public g(Context context, String str, String str2, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        super(context, str, str2, aVar, scheduledExecutorService);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    public void a(UnRegisterStatus unRegisterStatus) {
        PlatformMessageSender.a(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), unRegisterStatus);
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected boolean a() {
        return (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c)) ? false : true;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected Intent c() {
        Intent intent = new Intent();
        intent.putExtra("app_id", this.b);
        intent.putExtra("app_key", this.c);
        intent.putExtra("strategy_package_name", this.f4636a.getPackageName());
        intent.putExtra("strategy_type", g());
        return intent;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected int g() {
        return 32;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: h, reason: merged with bridge method [inline-methods] */
    public UnRegisterStatus b() {
        String str;
        UnRegisterStatus unRegisterStatus = new UnRegisterStatus();
        unRegisterStatus.setCode("20001");
        if (!TextUtils.isEmpty(this.b)) {
            str = TextUtils.isEmpty(this.c) ? "appKey not empty" : "appId not empty";
            return unRegisterStatus;
        }
        unRegisterStatus.setMessage(str);
        return unRegisterStatus;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public UnRegisterStatus e() {
        UnRegisterStatus unRegisterStatus = new UnRegisterStatus();
        if (TextUtils.isEmpty(com.meizu.cloud.pushsdk.util.b.a(this.f4636a, this.d))) {
            unRegisterStatus.setCode(BasicPushStatus.SUCCESS_CODE);
            unRegisterStatus.setMessage("already unRegister PushId,don't unRegister frequently");
            unRegisterStatus.setIsUnRegisterSuccess(true);
        } else {
            com.meizu.cloud.pushsdk.c.a.c cVarB = this.e.b(this.b, this.c, com.meizu.cloud.pushsdk.b.c.a(this.f4636a));
            if (cVarB.b()) {
                unRegisterStatus = new UnRegisterStatus((String) cVarB.a());
                DebugLogger.e("Strategy", "network unRegisterStatus " + unRegisterStatus);
                if (BasicPushStatus.SUCCESS_CODE.equals(unRegisterStatus.getCode())) {
                    com.meizu.cloud.pushsdk.util.b.g(this.f4636a, "", this.d);
                }
            } else {
                com.meizu.cloud.pushsdk.c.b.a aVarC = cVarB.c();
                if (aVarC.a() != null) {
                    DebugLogger.e("Strategy", "status code=" + aVarC.b() + " data=" + aVarC.a());
                }
                unRegisterStatus.setCode(String.valueOf(aVarC.b()));
                unRegisterStatus.setMessage(aVarC.c());
                DebugLogger.e("Strategy", "unRegisterStatus " + unRegisterStatus);
            }
        }
        return unRegisterStatus;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: j, reason: merged with bridge method [inline-methods] */
    public UnRegisterStatus f() {
        return null;
    }
}
