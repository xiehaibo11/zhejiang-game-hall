package com.alipay.sdk.authjs;

import com.alipay.sdk.authjs.a;
import org.json.JSONException;

/* JADX INFO: loaded from: classes.dex */
class e implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f1135a;
    final /* synthetic */ d b;

    e(d dVar, a aVar) {
        this.b = dVar;
        this.f1135a = aVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        a.EnumC0005a enumC0005aB = this.b.b(this.f1135a);
        if (enumC0005aB != a.EnumC0005a.NONE_ERROR) {
            try {
                this.b.a(this.f1135a.b(), enumC0005aB, true);
            } catch (JSONException unused) {
            }
        }
    }
}
