package com.alipay.sdk.app.statistic;

import android.content.Context;
import android.text.TextUtils;
import com.alipay.sdk.packet.impl.d;
import com.alipay.sdk.util.j;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
final class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f1116a;
    final /* synthetic */ String b;

    b(Context context, String str) {
        this.f1116a = context;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        d dVar = new d();
        try {
            String strB = j.b(this.f1116a, "alipay_cashier_statistic_record", null);
            if (!TextUtils.isEmpty(strB) && dVar.a(this.f1116a, strB) != null) {
                j.b(this.f1116a, "alipay_cashier_statistic_record");
            }
        } catch (Throwable unused) {
        }
        try {
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            dVar.a(this.f1116a, this.b);
        } catch (IOException unused2) {
            j.a(this.f1116a, "alipay_cashier_statistic_record", this.b);
        } catch (Throwable unused3) {
        }
    }
}
