package com.kwad.sdk.utils;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;

public final class ay {
    private static String TAG = "plugin.signature";

    private static Signature[] cV(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 64);
            if (packageInfo != null) {
                return packageInfo.signatures;
            }
            return null;
        } catch (PackageManager.NameNotFoundException e) {
            com.kwad.sdk.core.e.c.w(TAG, "Can not get signature, error = " + e.getLocalizedMessage());
            com.kwad.sdk.core.e.c.w(TAG, e);
            return null;
        }
    }

    public static String cW(Context context) {
        try {
            Signature[] signatureArrCV = cV(context);
            if (signatureArrCV != null && signatureArrCV.length > 0) {
                return ad.l(signatureArrCV[0].toByteArray());
            }
            return "";
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w(TAG, e);
            return "";
        }
    }
}
