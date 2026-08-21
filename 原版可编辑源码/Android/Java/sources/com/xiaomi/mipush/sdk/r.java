package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.dm;
import com.xiaomi.push.hj;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;

public class r implements dm {
    private Context a;

    public r(Context context) {
        this.a = context;
    }

    @Override
    public String a() {
        return b.a(this.a).d();
    }

    @Override
    public void a(ii iiVar, hj hjVar, hw hwVar) {
        ao.a(this.a).a(iiVar, hjVar, hwVar);
    }
}
