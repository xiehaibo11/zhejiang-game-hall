package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.al;
import com.xiaomi.push.hj;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;

final class p extends al.a {
    final Context a;
    final ii a;

    p(ii iiVar, Context context) {
        this.a = iiVar;
        this.a = context;
    }

    @Override
    public String a() {
        return com.tencent.connect.common.Constants.VIA_REPORT_TYPE_DATALINE;
    }

    @Override
    public void run() {
        ii iiVar = this.a;
        if (iiVar != null) {
            iiVar.a(bd.a());
            ao.a(this.a.getApplicationContext()).a(this.a, hj.i, true, (hw) null, true);
        }
    }
}
