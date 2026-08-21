package com.sigmob.sdk.base.services;

import android.location.Criteria;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.services.j;

public class e implements j.a {
    private static LocationManager b;
    private k d = k.b;
    private static final LocationListener a = new LocationListener() {
        @Override
        public void onLocationChanged(Location location) {
            if (ClientMetadata.getInstance() == null) {
                return;
            }
            ClientMetadata.getInstance().setLocation(location);
        }

        @Override
        public void onProviderDisabled(String str) {
        }

        @Override
        public void onProviderEnabled(String str) {
        }

        @Override
        public void onStatusChanged(String str, int i, Bundle bundle) {
        }
    };
    private static String c = PointCategory.NETWORK;

    e() {
        LocationManager locationManagerA;
        if (ClientMetadata.getInstance() == null || (locationManagerA = a()) == null) {
            return;
        }
        Criteria criteria = new Criteria();
        criteria.setAccuracy(2);
        criteria.setAltitudeRequired(false);
        criteria.setBearingRequired(false);
        criteria.setCostAllowed(false);
        criteria.setPowerRequirement(1);
        c = locationManagerA.getBestProvider(criteria, false);
    }

    static LocationManager a() {
        if (b == null) {
            synchronized (e.class) {
                if (b == null) {
                    b = ClientMetadata.getInstance().getLocationManager();
                }
            }
        }
        return b;
    }

    private void f() {
        try {
            if (b != null) {
                b.removeUpdates(a);
            }
            b = null;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    private void g() {
        try {
            LocationManager locationManagerA = a();
            if (locationManagerA == null || c == null || !locationManagerA.isProviderEnabled(c)) {
                return;
            }
            SigmobLog.d("private :use_location ");
            locationManagerA.requestLocationUpdates(c, com.heytap.mcssdk.constant.a.q, 10.0f, a);
            this.d = k.a;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    @Override
    public boolean b() {
        if (this.d == k.a) {
            return false;
        }
        g();
        return true;
    }

    @Override
    public k c() {
        return this.d;
    }

    @Override
    public void d() {
        if (this.d == k.a) {
            f();
            this.d = k.b;
        }
    }

    @Override
    public Error e() {
        return null;
    }
}
