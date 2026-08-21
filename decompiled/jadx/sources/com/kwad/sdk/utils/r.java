package com.kwad.sdk.utils;

import android.content.Context;
import android.location.Location;
import android.location.LocationManager;
import android.support.v4.content.ContextCompat;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.kwad.sdk.service.ServiceProvider;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes2.dex */
public final class r {
    private static boolean aIB;
    private static Location aIC;

    private static Location a(Context context, LocationManager locationManager) {
        try {
            if (ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) != 0) {
                return null;
            }
            Location lastKnownLocation = locationManager.getLastKnownLocation("gps");
            if (lastKnownLocation == null) {
                aIB = true;
            }
            return lastKnownLocation;
        } catch (Exception e) {
            aIB = true;
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return null;
        }
    }

    private static Location b(Context context, LocationManager locationManager) {
        try {
            if (ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) != 0 && ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.h) != 0) {
                return null;
            }
            Location lastKnownLocation = locationManager.getLastKnownLocation(PointCategory.NETWORK);
            if (lastKnownLocation == null) {
                aIB = true;
            }
            return lastKnownLocation;
        } catch (Exception e) {
            aIB = true;
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return null;
        }
    }

    public static Location bU(Context context) {
        if (at.IW() && at.IX() != null) {
            return at.IX();
        }
        if (aIB || aIC != null || context == null) {
            return aIC;
        }
        if (!at.IW() && !((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(64L)) {
            try {
                LocationManager locationManager = (LocationManager) context.getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
                if (locationManager.isProviderEnabled("gps")) {
                    aIC = a(context, locationManager);
                }
                if (aIC == null && locationManager.isProviderEnabled(PointCategory.NETWORK)) {
                    aIC = b(context, locationManager);
                }
                if (aIC == null && locationManager.isProviderEnabled("passive")) {
                    aIC = c(context, locationManager);
                }
                return aIC;
            } catch (Exception e) {
                aIB = true;
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
        }
        return null;
    }

    private static Location c(Context context, LocationManager locationManager) {
        try {
            if (ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.h) != 0) {
                return null;
            }
            Location lastKnownLocation = locationManager.getLastKnownLocation("passive");
            if (lastKnownLocation == null) {
                aIB = true;
            }
            return lastKnownLocation;
        } catch (Exception e) {
            aIB = true;
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return null;
        }
    }
}
