package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.al;
import com.xiaomi.push.hj;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;

/* JADX INFO: loaded from: classes4.dex */
final class p extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8018a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ ii f98a;

    p(ii iiVar, Context context) {
        this.f98a = iiVar;
        this.f8018a = context;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return com.tencent.connect.common.Constants.VIA_REPORT_TYPE_DATALINE;
    }

    @Override // java.lang.Runnable
    public void run() {
        ii iiVar = this.f98a;
        if (iiVar != null) {
            iiVar.a(bd.a());
            ao.a(this.f8018a.getApplicationContext()).a(this.f98a, hj.Notification, true, (hw) null, true);
        }
    }
}
