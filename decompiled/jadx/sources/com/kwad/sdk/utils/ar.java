package com.kwad.sdk.utils;

import android.content.Context;
import android.content.res.Resources;
import com.kwad.sdk.service.ServiceProvider;

/* JADX INFO: loaded from: classes2.dex */
public final class ar {
    public static int ar(Context context, String str) {
        Resources resourcesCt = ct(context);
        if (resourcesCt == null) {
            resourcesCt = context.getResources();
        }
        return resourcesCt.getIdentifier(str, com.tkay.expressad.foundation.h.i.c, context.getPackageName());
    }

    public static Resources ct(Context context) {
        if (context == null) {
            return null;
        }
        return ServiceProvider.HD().getResources();
    }
}
