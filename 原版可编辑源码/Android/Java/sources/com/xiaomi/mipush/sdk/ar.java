package com.xiaomi.mipush.sdk;

import android.database.ContentObserver;
import android.os.Handler;
import com.xiaomi.push.bj;
import com.xiaomi.push.service.bn;

class ar extends ContentObserver {
    final ao a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ar(ao aoVar, Handler handler) {
        super(handler);
        this.a = aoVar;
    }

    @Override
    public void onChange(boolean z) {
        ao aoVar = this.a;
        aoVar.a = Integer.valueOf(bn.a(aoVar.a).a());
        if (this.a.a.intValue() != 0) {
            this.a.a.getContentResolver().unregisterContentObserver(this);
            if (bj.b(this.a.a)) {
                this.a.c();
            }
        }
    }
}
