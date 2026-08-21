package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.qihoo360.replugin.RePlugin;
import com.xiaomi.push.al;
import com.xiaomi.push.hj;
import com.xiaomi.push.hp;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.ib;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.ba;
import com.xiaomi.push.service.bb;

/* JADX INFO: loaded from: classes4.dex */
public class ae extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f7989a;

    public ae(Context context) {
        this.f7989a = context;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "2";
    }

    @Override // java.lang.Runnable
    public void run() {
        ba baVarA = ba.a(this.f7989a);
        ib ibVar = new ib();
        ibVar.a(bb.a(baVarA, hp.MISC_CONFIG));
        ibVar.b(bb.a(baVarA, hp.PLUGIN_CONFIG));
        ii iiVar = new ii(RePlugin.PROCESS_UI, false);
        iiVar.c(ht.DailyCheckClientConfig.f519a);
        iiVar.a(it.a(ibVar));
        ao.a(this.f7989a).a(iiVar, hj.Notification, (hw) null);
    }
}
