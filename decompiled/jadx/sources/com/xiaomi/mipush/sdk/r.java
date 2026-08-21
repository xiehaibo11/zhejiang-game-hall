package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.dm;
import com.xiaomi.push.hj;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;

/* JADX INFO: loaded from: classes4.dex */
public class r implements dm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8020a;

    public r(Context context) {
        this.f8020a = context;
    }

    @Override // com.xiaomi.push.dm
    public String a() {
        return b.m85a(this.f8020a).d();
    }

    @Override // com.xiaomi.push.dm
    public void a(ii iiVar, hj hjVar, hw hwVar) {
        ao.a(this.f8020a).a(iiVar, hjVar, hwVar);
    }
}
