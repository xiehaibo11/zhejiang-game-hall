package com.meizu.cloud.pushsdk.platform.b;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.platform.PlatformMessageSender;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ScheduledExecutorService;

public class f extends c<PushSwitchStatus> {
    private String h;
    private int i;
    private boolean j;
    private final Map<String, Boolean> k;

    public f(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, null, null, null, aVar, scheduledExecutorService);
    }

    public f(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService, boolean z) {
        this(context, aVar, scheduledExecutorService);
        this.g = z;
    }

    public f(Context context, String str, String str2, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        super(context, str, str2, aVar, scheduledExecutorService);
        this.i = 0;
        this.k = new HashMap();
    }

    public f(Context context, String str, String str2, String str3, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, str, str2, aVar, scheduledExecutorService);
        this.h = str3;
    }

    private com.meizu.cloud.pushsdk.c.a.c<String> b(PushSwitchStatus pushSwitchStatus) {
        boolean zP;
        boolean zR;
        boolean zP2;
        int i = this.i;
        if (i != 0) {
            if (i == 1) {
                pushSwitchStatus.setMessage("SWITCH_THROUGH_MESSAGE");
                if (r() != this.j || t()) {
                    f(true);
                    d(this.j);
                    return this.e.a(this.b, this.c, this.h, this.i, this.j);
                }
                zP2 = p();
            } else {
                if (i != 2) {
                    if (i == 3) {
                        pushSwitchStatus.setMessage("SWITCH_ALL");
                        if (p() != this.j || r() != this.j || t()) {
                            f(true);
                            e(this.j);
                            return this.e.a(this.b, this.c, this.h, this.j);
                        }
                        zP2 = this.j;
                    }
                    return null;
                }
                pushSwitchStatus.setMessage("CHECK_PUSH");
                if (!q() || !s() || t()) {
                    f(true);
                    return this.e.c(this.b, this.c, this.h);
                }
                zP = p();
                pushSwitchStatus.setSwitchNotificationMessage(zP);
                zR = r();
            }
            pushSwitchStatus.setSwitchNotificationMessage(zP2);
            zR = this.j;
        } else {
            pushSwitchStatus.setMessage("SWITCH_NOTIFICATION");
            if (p() != this.j || t()) {
                f(true);
                c(this.j);
                return this.e.a(this.b, this.c, this.h, this.i, this.j);
            }
            zP = this.j;
            pushSwitchStatus.setSwitchNotificationMessage(zP);
            zR = r();
        }
        pushSwitchStatus.setSwitchThroughMessage(zR);
        return null;
    }

    private void c(boolean z) {
        com.meizu.cloud.pushsdk.util.b.a(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), z);
    }

    private void d(boolean z) {
        com.meizu.cloud.pushsdk.util.b.b(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), z);
    }

    private void e(boolean z) {
        com.meizu.cloud.pushsdk.util.b.a(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), z);
        com.meizu.cloud.pushsdk.util.b.b(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), z);
    }

    private void f(boolean z) {
        this.k.put(this.d + "_" + this.i, Boolean.valueOf(z));
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0018  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void o() {
        Context context;
        int i;
        int i2 = this.i;
        if (i2 != 0) {
            i = 1;
            if (i2 == 1) {
                context = this.a;
                i = this.i;
            } else {
                if (i2 != 3) {
                    return;
                }
                PlatformMessageSender.a(this.a, 0, this.j, this.d);
                context = this.a;
            }
        }
        PlatformMessageSender.a(context, i, this.j, this.d);
    }

    private boolean p() {
        return com.meizu.cloud.pushsdk.util.b.e(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName());
    }

    private boolean q() {
        return com.meizu.cloud.pushsdk.util.b.f(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName());
    }

    private boolean r() {
        return com.meizu.cloud.pushsdk.util.b.h(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName());
    }

    private boolean s() {
        return com.meizu.cloud.pushsdk.util.b.i(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName());
    }

    private boolean t() {
        Boolean bool = this.k.get(this.d + "_" + this.i);
        boolean z = bool == null || bool.booleanValue();
        DebugLogger.e("Strategy", "isSyncPushStatus " + this.d + " switch type->" + this.i + " flag->" + z);
        return z;
    }

    public void a(int i) {
        this.i = i;
    }

    @Override
    protected void a(PushSwitchStatus pushSwitchStatus) {
        PlatformMessageSender.a(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), pushSwitchStatus);
    }

    public void a(String str) {
        this.h = str;
    }

    @Override
    protected boolean a() {
        return (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.h)) ? false : true;
    }

    public void b(boolean z) {
        this.j = z;
    }

    @Override
    protected Intent c() {
        Intent intent = new Intent();
        intent.putExtra("app_id", this.b);
        intent.putExtra("app_key", this.c);
        intent.putExtra("strategy_package_name", this.a.getPackageName());
        intent.putExtra(PushConstants.REGISTER_STATUS_PUSH_ID, this.h);
        intent.putExtra("strategy_type", g());
        intent.putExtra("strategy_child_type", this.i);
        intent.putExtra("strategy_params", this.j ? "1" : "0");
        return intent;
    }

    @Override
    protected int g() {
        return 16;
    }

    @Override
    protected PushSwitchStatus b() {
        String str;
        PushSwitchStatus pushSwitchStatus = new PushSwitchStatus();
        pushSwitchStatus.setCode("20001");
        if (TextUtils.isEmpty(this.b)) {
            str = "appId not empty";
        } else {
            if (!TextUtils.isEmpty(this.c)) {
                if (TextUtils.isEmpty(this.h)) {
                    str = "pushId not empty";
                }
                return pushSwitchStatus;
            }
            str = "appKey not empty";
        }
        pushSwitchStatus.setMessage(str);
        return pushSwitchStatus;
    }

    @Override
    protected PushSwitchStatus e() {
        PushSwitchStatus pushSwitchStatus = new PushSwitchStatus();
        pushSwitchStatus.setPushId(this.h);
        pushSwitchStatus.setCode(BasicPushStatus.SUCCESS_CODE);
        com.meizu.cloud.pushsdk.c.a.c<String> cVarB = b(pushSwitchStatus);
        if (cVarB != null) {
            if (cVarB.b()) {
                PushSwitchStatus pushSwitchStatus2 = new PushSwitchStatus(cVarB.a());
                DebugLogger.e("Strategy", "network pushSwitchStatus " + pushSwitchStatus2);
                if (BasicPushStatus.SUCCESS_CODE.equals(pushSwitchStatus.getCode())) {
                    f(false);
                    DebugLogger.e("Strategy", "update local switch preference");
                    pushSwitchStatus.setSwitchNotificationMessage(pushSwitchStatus2.isSwitchNotificationMessage());
                    pushSwitchStatus.setSwitchThroughMessage(pushSwitchStatus2.isSwitchThroughMessage());
                    c(pushSwitchStatus2.isSwitchNotificationMessage());
                    d(pushSwitchStatus2.isSwitchThroughMessage());
                }
            } else {
                com.meizu.cloud.pushsdk.c.b.a aVarC = cVarB.c();
                if (aVarC.a() != null) {
                    DebugLogger.e("Strategy", "status code=" + aVarC.b() + " data=" + aVarC.a());
                }
                pushSwitchStatus.setCode(String.valueOf(aVarC.b()));
                pushSwitchStatus.setMessage(aVarC.c());
                DebugLogger.e("Strategy", "pushSwitchStatus " + pushSwitchStatus);
            }
        }
        DebugLogger.e("Strategy", "enableRpc " + this.g + " isSupportRemoteInvoke " + this.f);
        if (this.g && !this.f) {
            o();
        }
        return pushSwitchStatus;
    }

    @Override
    protected PushSwitchStatus f() {
        int i = this.i;
        if (i == 0) {
            c(this.j);
            return null;
        }
        if (i == 1) {
            d(this.j);
            return null;
        }
        if (i != 2 && i != 3) {
            return null;
        }
        e(this.j);
        return null;
    }
}
