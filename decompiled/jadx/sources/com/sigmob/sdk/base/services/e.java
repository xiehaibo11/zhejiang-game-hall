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

/* JADX INFO: loaded from: classes3.dex */
public class e implements j.a {
    private static LocationManager b;
    private k d = k.STOP;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final LocationListener f4929a = new LocationListener() { // from class: com.sigmob.sdk.base.services.e.1
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            if (ClientMetadata.getInstance() == null) {
                return;
            }
            ClientMetadata.getInstance().setLocation(location);
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
        }

        @Override // android.location.LocationListener
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
                b.removeUpdates(f4929a);
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
            locationManagerA.requestLocationUpdates(c, com.heytap.mcssdk.constant.a.q, 10.0f, f4929a);
            this.d = k.RUNNING;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public boolean b() {
        if (this.d == k.RUNNING) {
            return false;
        }
        g();
        return true;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public k c() {
        return this.d;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public void d() {
        if (this.d == k.RUNNING) {
            f();
            this.d = k.STOP;
        }
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public Error e() {
        return null;
    }
}
