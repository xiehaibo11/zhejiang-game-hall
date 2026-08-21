package com.xiaomi.push;

import android.content.Context;
import com.tencent.connect.common.Constants;

public class du extends dt {
    public du(Context context, int i) {
        super(context, i);
    }

    @Override
    public hl a() {
        return hl.w;
    }

    @Override
    public String a() {
        return Constants.VIA_REPORT_TYPE_SHARE_TO_TROOPBAR;
    }

    @Override
    public String b() {
        return "ram:" + j.a() + com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP + "rom:" + j.b() + "|ramOriginal:" + j.c() + com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP + "romOriginal:" + j.d();
    }
}
