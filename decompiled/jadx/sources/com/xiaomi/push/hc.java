package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.ao;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
final class hc extends ao.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8200a;

    hc(Context context) {
        this.f8200a = context;
    }

    @Override // com.xiaomi.push.ao.b
    public void b() {
        ArrayList arrayList;
        synchronized (hb.f469a) {
            arrayList = new ArrayList(hb.f471a);
            hb.f471a.clear();
        }
        hb.b(this.f8200a, arrayList);
    }
}
