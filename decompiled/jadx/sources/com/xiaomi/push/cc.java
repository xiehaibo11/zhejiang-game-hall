package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.cj;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes4.dex */
public class cc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f8075a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private WeakReference<Context> f174a;

    public cc(String str, WeakReference<Context> weakReference) {
        this.f8075a = str;
        this.f174a = weakReference;
    }

    @Override // java.lang.Runnable
    public void run() {
        Context context;
        WeakReference<Context> weakReference = this.f174a;
        if (weakReference == null || (context = weakReference.get()) == null) {
            return;
        }
        if (cp.a(this.f8075a) <= cb.f172a) {
            com.xiaomi.channel.commonutils.logger.b.b("=====> do not need clean db");
            return;
        }
        cf cfVarA = cf.a(this.f8075a);
        ce ceVarA = ce.a(this.f8075a);
        cfVarA.a(ceVarA);
        ceVarA.a(cd.a(context, this.f8075a, 1000));
        cj.a(context).a((cj.a) cfVarA);
    }
}
