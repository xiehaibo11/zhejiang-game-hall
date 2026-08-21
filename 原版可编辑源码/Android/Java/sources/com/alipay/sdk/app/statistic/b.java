package com.alipay.sdk.app.statistic;

import android.content.Context;
import android.text.TextUtils;
import com.alipay.sdk.packet.impl.d;
import com.alipay.sdk.util.j;
import java.io.IOException;

final class b implements Runnable {
    final Context a;
    final String b;

    b(Context context, String str) {
        this.a = context;
        this.b = str;
    }

    @Override
    public void run() {
        d dVar = new d();
        try {
            String strB = j.b(this.a, "alipay_cashier_statistic_record", null);
            if (!TextUtils.isEmpty(strB) && dVar.a(this.a, strB) != null) {
                j.b(this.a, "alipay_cashier_statistic_record");
            }
        } catch (Throwable unused) {
        }
        try {
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            dVar.a(this.a, this.b);
        } catch (IOException unused2) {
            j.a(this.a, "alipay_cashier_statistic_record", this.b);
        } catch (Throwable unused3) {
        }
    }
}
