package com.loc;

import android.text.TextUtils;
import com.amap.api.location.AMapLocation;

public final class ev {
    ew a = null;
    long b = 0;
    long c = 0;
    private boolean h = true;
    int d = 0;
    long e = 0;
    AMapLocation f = null;
    long g = 0;

    private ew b(ew ewVar) {
        int i;
        if (fz.a(ewVar)) {
            if (!this.h || !fq.a(ewVar.getTime())) {
                i = this.d;
            } else if (ewVar.getLocationType() == 5 || ewVar.getLocationType() == 6) {
                i = 4;
            }
            ewVar.setLocationType(i);
        }
        return ewVar;
    }

    public final AMapLocation a(AMapLocation aMapLocation) {
        if (!fz.a(aMapLocation)) {
            return aMapLocation;
        }
        long jB = fz.b() - this.g;
        this.g = fz.b();
        if (jB > 5000) {
            return aMapLocation;
        }
        AMapLocation aMapLocation2 = this.f;
        if (aMapLocation2 == null) {
            this.f = aMapLocation;
            return aMapLocation;
        }
        if (1 != aMapLocation2.getLocationType() && !"gps".equalsIgnoreCase(this.f.getProvider())) {
            this.f = aMapLocation;
            return aMapLocation;
        }
        if (this.f.getAltitude() == aMapLocation.getAltitude() && this.f.getLongitude() == aMapLocation.getLongitude()) {
            this.f = aMapLocation;
            return aMapLocation;
        }
        long jAbs = Math.abs(aMapLocation.getTime() - this.f.getTime());
        if (30000 < jAbs) {
            this.f = aMapLocation;
            return aMapLocation;
        }
        if (fz.a(aMapLocation, this.f) > (((this.f.getSpeed() + aMapLocation.getSpeed()) * jAbs) / 2000.0f) + ((this.f.getAccuracy() + aMapLocation.getAccuracy()) * 2.0f) + 3000.0f) {
            return this.f;
        }
        this.f = aMapLocation;
        return aMapLocation;
    }

    public final ew a(ew ewVar) {
        if (fz.b() - this.e > 30000) {
            this.a = ewVar;
            this.e = fz.b();
            return this.a;
        }
        this.e = fz.b();
        if (!fz.a(this.a) || !fz.a(ewVar)) {
            this.b = fz.b();
            this.a = ewVar;
            return ewVar;
        }
        if (ewVar.getTime() == this.a.getTime() && ewVar.getAccuracy() < 300.0f) {
            return ewVar;
        }
        if ("gps".equals(ewVar.getProvider())) {
            this.b = fz.b();
            this.a = ewVar;
            return ewVar;
        }
        if (ewVar.c() != this.a.c()) {
            this.b = fz.b();
            this.a = ewVar;
            return ewVar;
        }
        if (ewVar.getBuildingId() != null && !ewVar.getBuildingId().equals(this.a.getBuildingId()) && !TextUtils.isEmpty(ewVar.getBuildingId())) {
            this.b = fz.b();
            this.a = ewVar;
            return ewVar;
        }
        this.d = ewVar.getLocationType();
        float fA = fz.a(ewVar, this.a);
        float accuracy = this.a.getAccuracy();
        float accuracy2 = ewVar.getAccuracy();
        float f = accuracy2 - accuracy;
        long jB = fz.b();
        long j = jB - this.b;
        boolean z = accuracy <= 100.0f && accuracy2 > 299.0f;
        boolean z2 = accuracy > 299.0f && accuracy2 > 299.0f;
        if (z || z2) {
            long j2 = this.c;
            if (j2 == 0) {
                this.c = jB;
            } else if (jB - j2 > 30000) {
                this.b = jB;
                this.a = ewVar;
                this.c = 0L;
                return ewVar;
            }
            ew ewVarB = b(this.a);
            this.a = ewVarB;
            return ewVarB;
        }
        if (accuracy2 < 100.0f && accuracy > 299.0f) {
            this.b = jB;
            this.a = ewVar;
            this.c = 0L;
            return ewVar;
        }
        if (accuracy2 <= 299.0f) {
            this.c = 0L;
        }
        if (fA >= 10.0f || fA <= 0.1d || accuracy2 <= 5.0f) {
            if (f < 300.0f) {
                this.b = fz.b();
                this.a = ewVar;
                return ewVar;
            }
            if (j >= 30000) {
                this.b = fz.b();
                this.a = ewVar;
                return ewVar;
            }
            ew ewVarB2 = b(this.a);
            this.a = ewVarB2;
            return ewVarB2;
        }
        if (f >= -300.0f) {
            ew ewVarB3 = b(this.a);
            this.a = ewVarB3;
            return ewVarB3;
        }
        if (accuracy / accuracy2 >= 2.0f) {
            this.b = jB;
            this.a = ewVar;
            return ewVar;
        }
        ew ewVarB4 = b(this.a);
        this.a = ewVarB4;
        return ewVarB4;
    }

    public final void a() {
        this.a = null;
        this.b = 0L;
        this.c = 0L;
        this.f = null;
        this.g = 0L;
    }

    public final void a(boolean z) {
        this.h = z;
    }
}
