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

/* JADX INFO: loaded from: classes3.dex */
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
        com.meizu.cloud.pushsdk.util.b.a(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), z);
    }

    private void d(boolean z) {
        com.meizu.cloud.pushsdk.util.b.b(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), z);
    }

    private void e(boolean z) {
        com.meizu.cloud.pushsdk.util.b.a(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), z);
        com.meizu.cloud.pushsdk.util.b.b(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), z);
    }

    private void f(boolean z) {
        this.k.put(this.d + "_" + this.i, Boolean.valueOf(z));
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0018  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void o() {
        /*
            r5 = this;
            int r0 = r5.i
            if (r0 == 0) goto L18
            r1 = 1
            if (r0 == r1) goto L18
            r2 = 3
            if (r0 == r2) goto Lb
            goto L23
        Lb:
            android.content.Context r0 = r5.f4636a
            r2 = 0
            boolean r3 = r5.j
            java.lang.String r4 = r5.d
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender.a(r0, r2, r3, r4)
            android.content.Context r0 = r5.f4636a
            goto L1c
        L18:
            android.content.Context r0 = r5.f4636a
            int r1 = r5.i
        L1c:
            boolean r2 = r5.j
            java.lang.String r3 = r5.d
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender.a(r0, r1, r2, r3)
        L23:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.meizu.cloud.pushsdk.platform.b.f.o():void");
    }

    private boolean p() {
        return com.meizu.cloud.pushsdk.util.b.e(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName());
    }

    private boolean q() {
        return com.meizu.cloud.pushsdk.util.b.f(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName());
    }

    private boolean r() {
        return com.meizu.cloud.pushsdk.util.b.h(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName());
    }

    private boolean s() {
        return com.meizu.cloud.pushsdk.util.b.i(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName());
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

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    public void a(PushSwitchStatus pushSwitchStatus) {
        PlatformMessageSender.a(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), pushSwitchStatus);
    }

    public void a(String str) {
        this.h = str;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected boolean a() {
        return (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.h)) ? false : true;
    }

    public void b(boolean z) {
        this.j = z;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected Intent c() {
        Intent intent = new Intent();
        intent.putExtra("app_id", this.b);
        intent.putExtra("app_key", this.c);
        intent.putExtra("strategy_package_name", this.f4636a.getPackageName());
        intent.putExtra(PushConstants.REGISTER_STATUS_PUSH_ID, this.h);
        intent.putExtra("strategy_type", g());
        intent.putExtra("strategy_child_type", this.i);
        intent.putExtra("strategy_params", this.j ? "1" : "0");
        return intent;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected int g() {
        return 16;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: h, reason: merged with bridge method [inline-methods] */
    public PushSwitchStatus b() {
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

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public PushSwitchStatus e() {
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

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: j, reason: merged with bridge method [inline-methods] */
    public PushSwitchStatus f() {
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
