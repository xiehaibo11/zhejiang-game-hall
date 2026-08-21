package com.tkay.network.myoffer;

import android.content.Context;
import com.tkay.basead.f.a.a;
import com.tkay.basead.f.a.b;
import com.tkay.core.common.f.s;

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferAPI {
    public static void preloadTYOffer(Context context, s sVar) {
        a.a(context).a(sVar.f6164a);
    }

    public static String getOutOfCapOfferIds(Context context) {
        return b.a(context).a();
    }

    public static String getDefaultOfferId(Context context, String str) {
        return a.a(context).b(str);
    }

    public static boolean checkOffersOutOfCap(Context context, String str) {
        return b.a(context).a(str);
    }
}
