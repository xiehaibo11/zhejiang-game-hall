package com.xiaomi.push;

import android.content.Context;
import com.tencent.connect.common.Constants;

/* JADX INFO: loaded from: classes4.dex */
public class du extends dt {
    public du(Context context, int i) {
        super(context, i);
    }

    @Override // com.xiaomi.push.dt
    public hl a() {
        return hl.Storage;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return Constants.VIA_REPORT_TYPE_SHARE_TO_TROOPBAR;
    }

    @Override // com.xiaomi.push.dt
    public String b() {
        return "ram:" + j.m547a() + com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP + "rom:" + j.m550b() + "|ramOriginal:" + j.m552c() + com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP + "romOriginal:" + j.d();
    }
}
