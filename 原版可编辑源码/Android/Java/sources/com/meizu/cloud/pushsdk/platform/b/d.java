package com.meizu.cloud.pushsdk.platform.b;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.platform.PlatformMessageSender;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import com.meizu.cloud.pushsdk.platform.message.SubAliasStatus;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ScheduledExecutorService;

public class d extends c<SubAliasStatus> {
    private String h;
    private int i;
    private String j;
    private final Map<String, Boolean> k;

    public d(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, null, null, null, aVar, scheduledExecutorService);
    }

    public d(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService, boolean z) {
        this(context, aVar, scheduledExecutorService);
        this.g = z;
    }

    public d(Context context, String str, String str2, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        super(context, str, str2, aVar, scheduledExecutorService);
        this.k = new HashMap();
    }

    public d(Context context, String str, String str2, String str3, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, str, str2, aVar, scheduledExecutorService);
        this.h = str3;
    }

    private void b(boolean z) {
        this.k.put(this.d + "_" + this.i, Boolean.valueOf(z));
    }

    private void f(String str) {
        com.meizu.cloud.pushsdk.util.b.h(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), str);
    }

    private String o() {
        return com.meizu.cloud.pushsdk.util.b.g(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName());
    }

    private boolean p() {
        Boolean bool = this.k.get(this.d + "_" + this.i);
        return bool == null || bool.booleanValue();
    }

    private boolean q() {
        return !this.f && "com.meizu.cloud".equals(this.d);
    }

    public void a(int i) {
        this.i = i;
    }

    @Override
    protected void a(SubAliasStatus subAliasStatus) {
        PlatformMessageSender.a(this.a, !TextUtils.isEmpty(this.d) ? this.d : this.a.getPackageName(), subAliasStatus);
    }

    public void a(String str) {
        this.j = str;
    }

    @Override
    protected boolean a() {
        return (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.h)) ? false : true;
    }

    @Override
    protected Intent c() {
        if (this.i == 2) {
            return null;
        }
        Intent intent = new Intent();
        intent.putExtra("app_id", this.b);
        intent.putExtra("app_key", this.c);
        intent.putExtra("strategy_package_name", this.a.getPackageName());
        intent.putExtra(PushConstants.REGISTER_STATUS_PUSH_ID, this.h);
        intent.putExtra("strategy_type", g());
        intent.putExtra("strategy_child_type", this.i);
        intent.putExtra("strategy_params", this.j);
        return intent;
    }

    public void e(String str) {
        this.h = str;
    }

    @Override
    protected int g() {
        return 8;
    }

    @Override
    protected SubAliasStatus b() {
        String str;
        SubAliasStatus subAliasStatus = new SubAliasStatus();
        subAliasStatus.setCode("20001");
        if (TextUtils.isEmpty(this.b)) {
            str = "appId not empty";
        } else {
            if (!TextUtils.isEmpty(this.c)) {
                if (TextUtils.isEmpty(this.h)) {
                    str = "pushId not empty";
                }
                return subAliasStatus;
            }
            str = "appKey not empty";
        }
        subAliasStatus.setMessage(str);
        return subAliasStatus;
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x0090  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected SubAliasStatus e() {
        com.meizu.cloud.pushsdk.c.a.c cVarC;
        SubAliasStatus subAliasStatus = new SubAliasStatus();
        subAliasStatus.setPushId(this.h);
        String str = "";
        subAliasStatus.setMessage("");
        int i = this.i;
        if (i != 0) {
            if (i != 1) {
                if (i == 2) {
                    subAliasStatus.setAlias(o());
                    subAliasStatus.setCode(BasicPushStatus.SUCCESS_CODE);
                }
            } else {
                if (!TextUtils.isEmpty(o()) || p()) {
                    b(true);
                    if (q()) {
                        f("");
                    }
                    cVarC = this.e.d(this.b, this.c, this.h, this.j);
                    if (cVarC != null) {
                        if (cVarC.b()) {
                            subAliasStatus = new SubAliasStatus((String) cVarC.a());
                            DebugLogger.e("Strategy", "network subAliasStatus " + subAliasStatus);
                            if (BasicPushStatus.SUCCESS_CODE.equals(subAliasStatus.getCode())) {
                                b(false);
                            }
                        } else {
                            com.meizu.cloud.pushsdk.c.b.a aVarC = cVarC.c();
                            if (aVarC.a() != null) {
                                DebugLogger.e("Strategy", "status code=" + aVarC.b() + " data=" + aVarC.a());
                            }
                            subAliasStatus.setCode(String.valueOf(aVarC.b()));
                            subAliasStatus.setMessage(aVarC.c());
                            DebugLogger.e("Strategy", "subAliasStatus " + subAliasStatus);
                        }
                    }
                    return subAliasStatus;
                }
                subAliasStatus.setCode(BasicPushStatus.SUCCESS_CODE);
                subAliasStatus.setAlias(str);
            }
        } else {
            if (!this.j.equals(o()) || p()) {
                b(true);
                if (q()) {
                    f(this.j);
                }
                cVarC = this.e.c(this.b, this.c, this.h, this.j);
                if (cVarC != null) {
                }
                return subAliasStatus;
            }
            subAliasStatus.setCode(BasicPushStatus.SUCCESS_CODE);
            str = this.j;
            subAliasStatus.setAlias(str);
        }
        cVarC = null;
        if (cVarC != null) {
        }
        return subAliasStatus;
    }

    @Override
    protected SubAliasStatus f() {
        if (this.i != 2) {
            return null;
        }
        SubAliasStatus subAliasStatus = new SubAliasStatus();
        subAliasStatus.setCode(BasicPushStatus.SUCCESS_CODE);
        subAliasStatus.setPushId(this.h);
        subAliasStatus.setAlias(o());
        subAliasStatus.setMessage("check alias success");
        return subAliasStatus;
    }
}
