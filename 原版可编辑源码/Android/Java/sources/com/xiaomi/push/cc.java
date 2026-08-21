package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.cj;
import java.lang.ref.WeakReference;

public class cc implements Runnable {
    private String a;
    private WeakReference<Context> a;

    public cc(String str, WeakReference<Context> weakReference) {
        this.a = str;
        this.a = weakReference;
    }

    @Override
    public void run() {
        Context context;
        WeakReference<Context> weakReference = this.a;
        if (weakReference == null || (context = weakReference.get()) == null) {
            return;
        }
        if (cp.a(this.a) <= cb.a) {
            com.xiaomi.channel.commonutils.logger.b.b("=====> do not need clean db");
            return;
        }
        cf cfVarA = cf.a(this.a);
        ce ceVarA = ce.a(this.a);
        cfVarA.a(ceVarA);
        ceVarA.a(cd.a(context, this.a, 1000));
        cj.a(context).a((cj.a) cfVarA);
    }
}
