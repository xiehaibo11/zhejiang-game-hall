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

public class ae extends al.a {
    private Context a;

    public ae(Context context) {
        this.a = context;
    }

    @Override
    public String a() {
        return "2";
    }

    @Override
    public void run() {
        ba baVarA = ba.a(this.a);
        ib ibVar = new ib();
        ibVar.a(bb.a(baVarA, hp.a));
        ibVar.b(bb.a(baVarA, hp.b));
        ii iiVar = new ii(RePlugin.PROCESS_UI, false);
        iiVar.c(ht.p.a);
        iiVar.a(it.a(ibVar));
        ao.a(this.a).a(iiVar, hj.i, (hw) null);
    }
}
