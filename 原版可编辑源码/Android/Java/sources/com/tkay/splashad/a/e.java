package com.tkay.splashad.a;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.h;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;

public final class e extends h {
    int T;

    protected e(Context context) {
        super(context);
    }

    private void d(int i) {
        this.T = i;
    }

    @Override
    protected final void a(String str, com.tkay.core.common.m.a aVar) {
        super.a(str, aVar);
    }

    @Override
    public final void h() {
        super.h();
    }

    @Override
    public final void a(AdError adError) {
        super.a(adError);
    }

    @Override
    public final void a(TYBaseAdAdapter tYBaseAdAdapter) {
        if (tYBaseAdAdapter instanceof CustomSplashAdapter) {
            ((CustomSplashAdapter) tYBaseAdAdapter).setFetchAdTimeout(this.T);
        }
    }

    @Override
    public final void g() {
        if (this.j != null) {
            this.j.f = null;
        }
        super.g();
    }

    public final void j() {
        g();
        a();
    }
}
