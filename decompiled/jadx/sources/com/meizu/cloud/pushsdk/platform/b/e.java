package com.meizu.cloud.pushsdk.platform.b;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.platform.PlatformMessageSender;
import com.meizu.cloud.pushsdk.platform.message.SubTagsStatus;
import java.util.concurrent.ScheduledExecutorService;

/* JADX INFO: loaded from: classes3.dex */
public class e extends c<SubTagsStatus> {
    private String h;
    private int i;
    private String j;

    public e(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, null, null, null, aVar, scheduledExecutorService);
    }

    public e(Context context, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService, boolean z) {
        this(context, aVar, scheduledExecutorService);
        this.g = z;
    }

    public e(Context context, String str, String str2, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        super(context, str, str2, aVar, scheduledExecutorService);
        this.i = 3;
    }

    public e(Context context, String str, String str2, String str3, com.meizu.cloud.pushsdk.platform.a.a aVar, ScheduledExecutorService scheduledExecutorService) {
        this(context, str, str2, aVar, scheduledExecutorService);
        this.h = str3;
    }

    public void a(int i) {
        this.i = i;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    public void a(SubTagsStatus subTagsStatus) {
        PlatformMessageSender.a(this.f4636a, !TextUtils.isEmpty(this.d) ? this.d : this.f4636a.getPackageName(), subTagsStatus);
    }

    public void a(String str) {
        this.j = str;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected boolean a() {
        return (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.h)) ? false : true;
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
        intent.putExtra("strategy_params", this.j);
        return intent;
    }

    public void e(String str) {
        this.h = str;
    }

    @Override // com.meizu.cloud.pushsdk.platform.b.c
    protected int g() {
        return 4;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: h, reason: merged with bridge method [inline-methods] */
    public SubTagsStatus b() {
        String str;
        SubTagsStatus subTagsStatus = new SubTagsStatus();
        subTagsStatus.setCode("20001");
        if (TextUtils.isEmpty(this.b)) {
            str = "appId not empty";
        } else {
            if (!TextUtils.isEmpty(this.c)) {
                if (TextUtils.isEmpty(this.h)) {
                    str = "pushId not empty";
                }
                return subTagsStatus;
            }
            str = "appKey not empty";
        }
        subTagsStatus.setMessage(str);
        return subTagsStatus;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public SubTagsStatus e() {
        StringBuilder sb;
        String str;
        SubTagsStatus subTagsStatus = new SubTagsStatus();
        int i = this.i;
        com.meizu.cloud.pushsdk.c.a.c cVarE = i != 0 ? i != 1 ? i != 2 ? i != 3 ? null : this.e.e(this.b, this.c, this.h) : this.e.d(this.b, this.c, this.h) : this.e.b(this.b, this.c, this.h, this.j) : this.e.a(this.b, this.c, this.h, this.j);
        if (cVarE == null) {
            DebugLogger.e("Strategy", "network anResponse is null");
            return null;
        }
        if (cVarE.b()) {
            subTagsStatus = new SubTagsStatus((String) cVarE.a());
            sb = new StringBuilder();
            str = "network subTagsStatus ";
        } else {
            com.meizu.cloud.pushsdk.c.b.a aVarC = cVarE.c();
            if (aVarC.a() != null) {
                DebugLogger.e("Strategy", "status code=" + aVarC.b() + " data=" + aVarC.a());
            }
            subTagsStatus.setCode(String.valueOf(aVarC.b()));
            subTagsStatus.setMessage(aVarC.c());
            sb = new StringBuilder();
            str = "subTagsStatus ";
        }
        sb.append(str);
        sb.append(subTagsStatus);
        DebugLogger.e("Strategy", sb.toString());
        return subTagsStatus;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.meizu.cloud.pushsdk.platform.b.c
    /* JADX INFO: renamed from: j, reason: merged with bridge method [inline-methods] */
    public SubTagsStatus f() {
        return null;
    }
}
