package com.alipay.sdk.authjs;

import com.alipay.sdk.authjs.a;
import org.json.JSONException;

class e implements Runnable {
    final a a;
    final d b;

    e(d dVar, a aVar) {
        this.b = dVar;
        this.a = aVar;
    }

    @Override
    public void run() {
        a.a aVarB = this.b.b(this.a);
        if (aVarB != a.a.a) {
            try {
                this.b.a(this.a.b(), aVarB, true);
            } catch (JSONException unused) {
            }
        }
    }
}
