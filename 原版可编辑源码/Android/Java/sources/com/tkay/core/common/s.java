package com.tkay.core.common;

import android.content.Context;
import java.lang.reflect.Method;
import org.json.JSONArray;

public class s {
    public static final int a = 35;
    public static final String b = "isDefaultOffer";
    private static volatile s g;
    Method c;
    Method d;
    Method e;
    Method f;

    private s() {
        try {
            Class<?> cls = Class.forName("com.tkay.network.myoffer.MyOfferAPI");
            this.c = cls.getDeclaredMethod("preloadTYOffer", Context.class, com.tkay.core.common.f.s.class);
            this.d = cls.getDeclaredMethod("getOutOfCapOfferIds", Context.class);
            this.e = cls.getDeclaredMethod("getDefaultOfferId", Context.class, String.class);
            this.f = cls.getDeclaredMethod("checkOffersOutOfCap", Context.class, String.class);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static s a() {
        if (g == null) {
            synchronized (s.class) {
                if (g == null) {
                    g = new s();
                }
            }
        }
        return g;
    }

    public final void a(Context context, String str) {
        try {
            if (this.c != null) {
                com.tkay.core.common.f.s sVar = new com.tkay.core.common.f.s();
                sVar.a = str;
                this.c.invoke(null, context, sVar);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final JSONArray a(Context context) {
        try {
            if (this.d != null) {
                return new JSONArray(this.d.invoke(null, context).toString());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return new JSONArray();
    }

    public final String b(Context context, String str) {
        try {
            return this.e != null ? this.e.invoke(null, context, str).toString() : "";
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public final boolean c(Context context, String str) {
        try {
            if (this.f != null) {
                return ((Boolean) this.f.invoke(null, context, str)).booleanValue();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }
}
