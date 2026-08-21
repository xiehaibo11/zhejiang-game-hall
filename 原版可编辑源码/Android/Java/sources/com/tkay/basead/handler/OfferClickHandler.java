package com.tkay.basead.handler;

import android.content.Context;
import com.tkay.basead.a.b;
import com.tkay.basead.c.d;
import com.tkay.core.api.IOfferClickHandler;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

public class OfferClickHandler extends IOfferClickHandler {
    private static d a(h hVar) {
        return com.tkay.basead.a.d.a().a(hVar.d(), hVar.p());
    }

    @Override
    public boolean startDownloadApp(Context context, h hVar, i iVar, String str) {
        return b.a(context, iVar, hVar, com.tkay.basead.a.d.a().a(hVar.d(), hVar.p()), str, new com.tkay.basead.a.i());
    }
}
