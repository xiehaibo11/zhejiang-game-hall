package com.loc;

import android.content.Context;
import android.text.TextUtils;
import com.amap.api.location.AMapLocation;
import com.bianfeng.platform.UserInterface;
import java.util.List;
import org.json.JSONObject;

public final class j {
    static fi b;
    static az e;
    static long g;
    String a = null;
    fi c = null;
    fi d = null;
    long f = 0;
    boolean h = false;
    private Context i;

    public j(Context context) {
        this.i = context.getApplicationContext();
    }

    private void e() {
        if (b == null || fz.b() - g > 180000) {
            fi fiVarF = f();
            g = fz.b();
            if (fiVarF == null || !fz.a(fiVarF.a())) {
                return;
            }
            b = fiVarF;
        }
    }

    private fi f() {
        Throwable th;
        fi fiVar;
        byte[] bArrB;
        byte[] bArrB2;
        String str = null;
        if (this.i == null) {
            return null;
        }
        a();
        try {
        } catch (Throwable th2) {
            th = th2;
            fiVar = null;
        }
        if (e == null) {
            return null;
        }
        List listA = e.a("_id=1", fi.class);
        if (listA == null || listA.size() <= 0) {
            fiVar = null;
        } else {
            fiVar = (fi) listA.get(0);
            try {
                byte[] bArrB3 = p.b(fiVar.c());
                String str2 = (bArrB3 == null || bArrB3.length <= 0 || (bArrB2 = fg.b(bArrB3, this.a)) == null || bArrB2.length <= 0) ? null : new String(bArrB2, "UTF-8");
                byte[] bArrB4 = p.b(fiVar.b());
                if (bArrB4 != null && bArrB4.length > 0 && (bArrB = fg.b(bArrB4, this.a)) != null && bArrB.length > 0) {
                    str = new String(bArrB, "UTF-8");
                }
                fiVar.a(str);
                str = str2;
            } catch (Throwable th3) {
                th = th3;
                fr.a(th, "LastLocationManager", "readLastFix");
            }
        }
        if (!TextUtils.isEmpty(str)) {
            AMapLocation aMapLocation = new AMapLocation("");
            fr.a(aMapLocation, new JSONObject(str));
            if (fz.b(aMapLocation)) {
                fiVar.a(aMapLocation);
            }
        }
        return fiVar;
        fr.a(th, "LastLocationManager", "readLastFix");
        return fiVar;
    }

    public final AMapLocation a(AMapLocation aMapLocation, String str, long j) {
        if (aMapLocation == null || aMapLocation.getErrorCode() == 0 || aMapLocation.getLocationType() == 1 || aMapLocation.getErrorCode() == 7) {
            return aMapLocation;
        }
        try {
            e();
        } catch (Throwable th) {
            th = th;
        }
        if (b != null && b.a() != null) {
            boolean zA = false;
            if (TextUtils.isEmpty(str)) {
                long jB = fz.b() - b.d();
                if (jB >= 0 && jB <= j) {
                    zA = true;
                }
                aMapLocation.setTrustedLevel(3);
            } else {
                zA = fz.a(b.b(), str);
                aMapLocation.setTrustedLevel(2);
            }
            if (!zA) {
                return aMapLocation;
            }
            AMapLocation aMapLocationA = b.a();
            try {
                aMapLocationA.setLocationType(9);
                aMapLocationA.setFixLastLocation(true);
                aMapLocationA.setLocationDetail(aMapLocation.getLocationDetail());
                return aMapLocationA;
            } catch (Throwable th2) {
                th = th2;
                aMapLocation = aMapLocationA;
            }
            fr.a(th, "LastLocationManager", "fixLastLocation");
            return aMapLocation;
        }
        return aMapLocation;
    }

    public final void a() {
        if (this.h) {
            return;
        }
        try {
            if (this.a == null) {
                this.a = fg.a("MD5", o.k());
            }
            if (e == null) {
                e = new az(this.i, az.a((Class<? extends ay>) fj.class));
            }
        } catch (Throwable th) {
            fr.a(th, "LastLocationManager", "<init>:DBOperation");
        }
        this.h = true;
    }

    public final boolean a(AMapLocation aMapLocation, String str) {
        if (this.i != null && aMapLocation != null && fz.a(aMapLocation) && aMapLocation.getLocationType() != 2 && !aMapLocation.isMock() && !aMapLocation.isFixLastLocation()) {
            fi fiVar = new fi();
            fiVar.a(aMapLocation);
            if (aMapLocation.getLocationType() == 1) {
                fiVar.a((String) null);
            } else {
                fiVar.a(str);
            }
            try {
                b = fiVar;
                g = fz.b();
                this.c = fiVar;
                if (this.d != null && fz.a(this.d.a(), fiVar.a()) <= 500.0f) {
                    return false;
                }
                if (fz.b() - this.f > 30000) {
                    return true;
                }
            } catch (Throwable th) {
                fr.a(th, "LastLocationManager", "setLastFix");
            }
        }
        return false;
    }

    public final AMapLocation b() {
        e();
        fi fiVar = b;
        if (fiVar != null && fz.a(fiVar.a())) {
            return b.a();
        }
        return null;
    }

    public final void c() {
        try {
            d();
            this.f = 0L;
            this.h = false;
            this.c = null;
            this.d = null;
        } catch (Throwable th) {
            fr.a(th, "LastLocationManager", UserInterface.FUNCTION_DESTROY);
        }
    }

    public final void d() {
        String strB;
        try {
            a();
            if (this.c != null && fz.a(this.c.a()) && e != null && this.c != this.d && this.c.d() == 0) {
                String str = this.c.a().toStr();
                String strB2 = this.c.b();
                this.d = this.c;
                if (TextUtils.isEmpty(str)) {
                    strB = null;
                } else {
                    String strB3 = p.b(fg.a(str.getBytes("UTF-8"), this.a));
                    strB = TextUtils.isEmpty(strB2) ? null : p.b(fg.a(strB2.getBytes("UTF-8"), this.a));
                    str = strB3;
                }
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                fi fiVar = new fi();
                fiVar.b(str);
                fiVar.a(fz.b());
                fiVar.a(strB);
                e.a(fiVar, "_id=1");
                this.f = fz.b();
                if (b != null) {
                    b.a(fz.b());
                }
            }
        } catch (Throwable th) {
            fr.a(th, "LastLocationManager", "saveLastFix");
        }
    }
}
