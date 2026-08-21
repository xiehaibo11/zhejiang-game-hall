package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.ao;
import java.util.ArrayList;

final class hc extends ao.b {
    final Context a;

    hc(Context context) {
        this.a = context;
    }

    @Override
    public void b() {
        ArrayList arrayList;
        synchronized (hb.a) {
            arrayList = new ArrayList(hb.a);
            hb.a.clear();
        }
        hb.b(this.a, arrayList);
    }
}
