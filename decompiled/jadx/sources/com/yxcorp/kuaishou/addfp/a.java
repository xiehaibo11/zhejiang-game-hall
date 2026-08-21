package com.yxcorp.kuaishou.addfp;

import android.content.Context;
import android.os.Build;
import com.yxcorp.kuaishou.addfp.android.a.c;
import com.yxcorp.kuaishou.addfp.android.b.f;

/* JADX INFO: loaded from: classes4.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ KWEGIDDFP f8402a;

    a(KWEGIDDFP kwegiddfp) {
        this.f8402a = kwegiddfp;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            if (this.f8402a.mParamContext == null) {
                this.f8402a.mCallBack.onFailed(-3, "parameter error");
                return;
            }
            Context unused = this.f8402a.mParamContext;
            int i = f.c;
            if (Build.VERSION.SDK_INT >= 28) {
                f.a();
            }
            KWEGIDDFP kwegiddfp = this.f8402a;
            kwegiddfp.mPkgName = kwegiddfp.mParamContext.getPackageName();
            c.c().b(this.f8402a.mPkgName);
            KWEGIDDFP kwegiddfp2 = this.f8402a;
            kwegiddfp2.getEGid(kwegiddfp2.mCallBack);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
