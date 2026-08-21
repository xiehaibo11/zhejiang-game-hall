package com.igexin.push.extension.mod;

import android.util.Log;
import com.igexin.a.g;
import com.igexin.b.a.c.a.f;
import com.igexin.b.a.c.b;
import com.igexin.sdk.PushConsts;

/* JADX INFO: loaded from: classes2.dex */
final class a implements g {
    a() {
    }

    @Override // com.igexin.a.g
    public void a() {
        b.a(SecurityUtils.f2641a + "|load so by new success ^_^", new Object[0]);
        SecurityUtils.b = true;
        SecurityUtils.c = "";
        f.a().a("load so by relinker success");
    }

    @Override // com.igexin.a.g
    public void a(Throwable th) {
        Log.e(PushConsts.KEY_CLIENT_ID, "load so error = " + th.getMessage());
        b.a(SecurityUtils.f2641a + "|load so by new error = " + th.getMessage(), new Object[0]);
        f.a().a("load so error = " + th.getMessage());
        SecurityUtils.b = false;
        SecurityUtils.c += th.toString() + " + " + th.getMessage();
    }
}
