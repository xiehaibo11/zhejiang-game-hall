package com.cmic.gen.sdk.view;

import android.content.Context;
import android.content.res.Resources;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: compiled from: ResourceUtil.java */
/* JADX INFO: loaded from: classes.dex */
public class c {
    public static int a(Context context, String str, String str2) {
        return context.getResources().getIdentifier(str, str2, context.getPackageName());
    }

    public static int a(Context context, String str) {
        int iA = a(context, str, "id");
        if (iA != 0) {
            return iA;
        }
        throw new Resources.NotFoundException(str);
    }

    public static int b(Context context, String str) {
        int iA = a(context, str, i.c);
        if (iA != 0) {
            return iA;
        }
        throw new Resources.NotFoundException(str);
    }

    public static int c(Context context, String str) {
        int iA = a(context, str, i.f);
        if (iA != 0) {
            return iA;
        }
        throw new Resources.NotFoundException(str);
    }
}
