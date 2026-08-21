package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.provider.Settings;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClientOption;
import com.amap.api.location.DPoint;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.List;

public final class g {
    public static volatile AMapLocation a = null;
    private static String b = "CoarseLocation";
    private static long q;
    private static boolean r;
    private static boolean s;
    private static boolean t;
    private static boolean u;
    private ev f;
    private Handler j;
    private Context k;
    private LocationManager n;
    private AMapLocationClientOption o;
    private long c = 0;
    private boolean d = false;
    private int e = 0;
    private int g = PsExtractor.VIDEO_STREAM_MASK;
    private int h = 80;
    private int i = 0;
    private long l = 0;
    private int m = 0;
    private Object p = new Object();
    private boolean v = true;
    private AMapLocationClientOption.GeoLanguage w = AMapLocationClientOption.GeoLanguage.DEFAULT;
    private LocationListener x = null;

    static class a implements LocationListener {
        private g a;

        a(g gVar) {
            this.a = gVar;
        }

        final void a() {
            this.a = null;
        }

        @Override
        public final void onLocationChanged(Location location) {
            try {
                if (this.a != null) {
                    this.a.a(location);
                }
            } catch (Throwable unused) {
            }
        }

        @Override
        public final void onProviderDisabled(String str) {
            try {
                if (this.a != null) {
                    this.a.g();
                }
            } catch (Throwable unused) {
            }
        }

        @Override
        public final void onProviderEnabled(String str) {
            if ("gps".equalsIgnoreCase(str)) {
                Object[] objArr = new Object[1];
                ft.a();
            }
        }

        @Override
        public final void onStatusChanged(String str, int i, Bundle bundle) {
            try {
                if (this.a != null) {
                    this.a.a(i);
                }
            } catch (Throwable unused) {
            }
        }
    }

    public g(Context context, Handler handler) {
        this.f = null;
        this.k = context;
        this.j = handler;
        try {
            this.n = (LocationManager) context.getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
        } catch (Throwable th) {
            fr.a(th, b, "<init>");
        }
        this.f = new ev();
    }

    private static ew a(int i, String str) {
        ew ewVar = new ew("");
        ewVar.setErrorCode(i);
        ewVar.setLocationDetail(str);
        return ewVar;
    }

    private void a(int i) {
        if (i == 0) {
            try {
                Object[] objArr = new Object[1];
                ft.a();
                this.i = 0;
            } catch (Throwable unused) {
            }
        }
    }

    private void a(int i, String str, long j) {
        try {
            if (this.j != null) {
                Message messageObtain = Message.obtain();
                AMapLocation aMapLocation = new AMapLocation("");
                aMapLocation.setErrorCode(20);
                aMapLocation.setLocationDetail(str);
                aMapLocation.setLocationType(11);
                messageObtain.obj = aMapLocation;
                messageObtain.what = i;
                this.j.sendMessageDelayed(messageObtain, j);
            }
        } catch (Throwable unused) {
            ft.b();
        }
    }

    private void a(Location location) {
        Handler handler = this.j;
        if (handler != null) {
            handler.removeMessages(100);
        }
        if (location == null) {
            return;
        }
        try {
            AMapLocation aMapLocation = new AMapLocation(location);
            if (fz.a(aMapLocation)) {
                aMapLocation.setProvider("gps".equals(location.getProvider()) ? "gps_coarse" : "network_coarse");
                aMapLocation.setLocationType(11);
                if (!this.d && fz.a(aMapLocation)) {
                    fx.b(this.k, fz.b() - this.c, fr.a(aMapLocation.getLatitude(), aMapLocation.getLongitude()));
                    this.d = true;
                }
                Boolean bool = Boolean.FALSE;
                if (Build.VERSION.SDK_INT >= 18) {
                    try {
                        Boolean bool2 = (Boolean) fv.a(location, "isFromMockProvider", new Object[0]);
                        try {
                            Object[] objArr = new Object[1];
                            "CoarseLocation | isFromMock=".concat(String.valueOf(bool2));
                            ft.a();
                        } catch (Throwable unused) {
                        }
                        bool = bool2;
                    } catch (Throwable unused2) {
                    }
                }
                if (bool.booleanValue()) {
                    aMapLocation.setMock(true);
                    aMapLocation.setTrustedLevel(4);
                    if (!this.o.isMockEnable()) {
                        if (this.m <= 3) {
                            this.m++;
                            return;
                        }
                        fx.a((String) null, 2152);
                        aMapLocation.setErrorCode(15);
                        aMapLocation.setLocationDetail("CoarseLocation has been mocked!#2007");
                        aMapLocation.setLatitude(0.0d);
                        aMapLocation.setLongitude(0.0d);
                        aMapLocation.setAltitude(0.0d);
                        aMapLocation.setSpeed(0.0f);
                        aMapLocation.setAccuracy(0.0f);
                        aMapLocation.setBearing(0.0f);
                        aMapLocation.setExtras(null);
                        c(aMapLocation);
                        return;
                    }
                } else {
                    this.m = 0;
                }
                int iB = b(location);
                this.i = iB;
                aMapLocation.setSatellites(iB);
                e(aMapLocation);
                g(aMapLocation);
                AMapLocation aMapLocationF = f(aMapLocation);
                a(aMapLocationF);
                b(aMapLocationF);
                synchronized (this.p) {
                    a(aMapLocationF, a);
                }
                c(aMapLocationF);
            }
        } catch (Throwable th) {
            fr.a(th, "CoarseLocation", "onLocationChanged");
        }
    }

    private void a(AMapLocation aMapLocation) {
        if (fz.a(aMapLocation)) {
            this.e++;
        }
    }

    private void a(AMapLocation aMapLocation, AMapLocation aMapLocation2) {
        if (aMapLocation2 == null || !this.o.isNeedAddress() || fz.a(aMapLocation, aMapLocation2) >= this.g) {
            return;
        }
        fr.a(aMapLocation, aMapLocation2);
    }

    private static boolean a(LocationManager locationManager) {
        try {
            if (r) {
                return s;
            }
            List<String> allProviders = locationManager.getAllProviders();
            if (allProviders == null || allProviders.size() <= 0) {
                s = false;
            } else {
                s = allProviders.contains("gps");
            }
            r = true;
            return s;
        } catch (Throwable th) {
            Object[] objArr = new Object[1];
            th.getMessage();
            ft.a();
            return s;
        }
    }

    private static int b(Location location) {
        Bundle extras = location.getExtras();
        int i = extras != null ? extras.getInt("satellites") : 0;
        ft.b();
        return i;
    }

    private void b(AMapLocation aMapLocation) {
        if (fz.a(aMapLocation) && this.j != null) {
            long jB = fz.b();
            if (this.o.getInterval() <= 8000 || jB - this.l > this.o.getInterval() - 8000) {
                Bundle bundle = new Bundle();
                bundle.putDouble("lat", aMapLocation.getLatitude());
                bundle.putDouble(com.tkay.core.common.h.c.C, aMapLocation.getLongitude());
                bundle.putFloat("radius", aMapLocation.getAccuracy());
                bundle.putLong("time", aMapLocation.getTime());
                Message messageObtain = Message.obtain();
                messageObtain.setData(bundle);
                messageObtain.what = 102;
                synchronized (this.p) {
                    if (a == null || fz.a(aMapLocation, a) > this.h) {
                        Handler handler = this.j;
                        handler.sendMessage(messageObtain);
                    }
                }
            }
        }
    }

    private static boolean b(LocationManager locationManager) {
        try {
            if (t) {
                return u;
            }
            boolean zIsProviderEnabled = locationManager.isProviderEnabled(PointCategory.NETWORK);
            u = zIsProviderEnabled;
            t = true;
            return zIsProviderEnabled;
        } catch (Throwable th) {
            Object[] objArr = new Object[1];
            th.getMessage();
            ft.a();
            return u;
        }
    }

    private void c(AMapLocation aMapLocation) {
        if (this.o.getLocationMode().equals(AMapLocationClientOption.AMapLocationMode.Device_Sensors) && this.o.getDeviceModeDistanceFilter() > 0.0f) {
            d(aMapLocation);
        } else if (fz.b() - this.l >= this.o.getInterval() - 200) {
            this.l = fz.b();
            d(aMapLocation);
        }
    }

    private boolean c() {
        boolean zBooleanValue;
        try {
            if (fz.c() >= 28) {
                if (this.n == null) {
                    this.n = (LocationManager) this.k.getApplicationContext().getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
                }
                zBooleanValue = ((Boolean) fv.a(this.n, "isLocationEnabled", new Object[0])).booleanValue();
            } else {
                zBooleanValue = true;
            }
        } catch (Throwable unused) {
            zBooleanValue = true;
        }
        try {
            if (fz.c() >= 24 && fz.c() < 28) {
                if (Settings.Secure.getInt(this.k.getContentResolver(), "location_mode", 0) == 0) {
                    return false;
                }
            }
        } catch (Throwable unused2) {
            Object[] objArr = new Object[1];
            ft.a();
        }
        return zBooleanValue;
    }

    private void d() {
        c(a(12, "定位服务没有开启，请在设置中打开定位服务开关#1206"));
    }

    private void d(AMapLocation aMapLocation) {
        if (this.j != null) {
            Object[] objArr = new Object[1];
            ft.a();
            Message messageObtain = Message.obtain();
            messageObtain.obj = aMapLocation;
            messageObtain.what = 101;
            this.j.sendMessage(messageObtain);
        }
    }

    private void e() {
        c(a(20, "模糊权限下不支持连续定位#2006"));
    }

    private void e(AMapLocation aMapLocation) {
        try {
            if (!fr.a(aMapLocation.getLatitude(), aMapLocation.getLongitude()) || !this.o.isOffset()) {
                aMapLocation.setOffset(false);
                aMapLocation.setCoordType(AMapLocation.COORD_TYPE_WGS84);
                return;
            }
            DPoint dPointA = fu.a(this.k, new DPoint(aMapLocation.getLatitude(), aMapLocation.getLongitude()));
            aMapLocation.setLatitude(dPointA.getLatitude());
            aMapLocation.setLongitude(dPointA.getLongitude());
            aMapLocation.setOffset(this.o.isOffset());
            aMapLocation.setCoordType(AMapLocation.COORD_TYPE_GCJ02);
        } catch (Throwable th) {
            aMapLocation.setOffset(false);
            aMapLocation.setCoordType(AMapLocation.COORD_TYPE_WGS84);
            Object[] objArr = new Object[1];
            th.getMessage();
            ft.a();
        }
    }

    private AMapLocation f(AMapLocation aMapLocation) {
        if (!fz.a(aMapLocation) || this.e < 3) {
            return aMapLocation;
        }
        if (aMapLocation.getAccuracy() < 0.0f || aMapLocation.getAccuracy() == Float.MAX_VALUE) {
            aMapLocation.setAccuracy(0.0f);
        }
        if (aMapLocation.getSpeed() < 0.0f || aMapLocation.getSpeed() == Float.MAX_VALUE) {
            aMapLocation.setSpeed(0.0f);
        }
        return this.f.a(aMapLocation);
    }

    private void f() {
        if (this.n == null) {
            return;
        }
        try {
            this.v = true;
            Looper looperMyLooper = Looper.myLooper();
            if (looperMyLooper == null) {
                looperMyLooper = this.k.getMainLooper();
            }
            this.c = fz.b();
            if (b(this.n)) {
                if (this.x == null) {
                    this.x = new a(this);
                }
                this.n.requestLocationUpdates(PointCategory.NETWORK, this.o.getInterval(), this.o.getDeviceModeDistanceFilter(), this.x, looperMyLooper);
            }
            if (a(this.n)) {
                try {
                    if (fz.a() - q >= 259200000) {
                        if (fz.c(this.k, "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw==")) {
                            this.n.sendExtraCommand("gps", "force_xtra_injection", null);
                            q = fz.a();
                            SharedPreferences.Editor editorA = fy.a(this.k, "pref");
                            fy.a(editorA, "lagt", q);
                            fy.a(editorA);
                            Object[] objArr = new Object[1];
                            ft.a();
                        } else {
                            fr.a(new Exception("n_alec"), "OPENSDK_CL", "rlu_n_alec");
                        }
                    }
                } catch (Throwable th) {
                    Object[] objArr2 = new Object[1];
                    th.getMessage();
                    ft.a();
                }
                if (this.x == null) {
                    this.x = new a(this);
                }
                this.n.requestLocationUpdates("gps", this.o.getInterval(), this.o.getDeviceModeDistanceFilter(), this.x, looperMyLooper);
                Object[] objArr3 = new Object[1];
                ft.a();
            }
            if (s || u) {
                a(100, "系统返回定位结果超时#2002", this.o.getHttpTimeOut());
            }
            if (s || u) {
                return;
            }
            Object[] objArr4 = new Object[1];
            ft.a();
            a(100, "系统定位当前不可用#2003", 0L);
        } catch (SecurityException e) {
            Object[] objArr5 = new Object[1];
            ft.a();
            this.v = false;
            fx.a((String) null, 2121);
            a(101, e.getMessage() + "#2004", 0L);
        } catch (Throwable th2) {
            Object[] objArr6 = new Object[1];
            th2.getMessage();
            ft.a();
            fr.a(th2, "CoarseLocation", "requestLocationUpdates part2");
        }
    }

    private void g() {
        try {
            Object[] objArr = new Object[1];
            ft.a();
            this.i = 0;
        } catch (Throwable unused) {
        }
    }

    private static void g(AMapLocation aMapLocation) {
        if (fz.a(aMapLocation) && fq.s()) {
            long time = aMapLocation.getTime();
            long jCurrentTimeMillis = System.currentTimeMillis();
            long jA = fs.a(time, jCurrentTimeMillis, fq.t());
            if (jA != time) {
                aMapLocation.setTime(jA);
                fx.a(time, jCurrentTimeMillis);
            }
        }
    }

    public final void a() {
        Object[] objArr = new Object[1];
        ft.a();
        LocationManager locationManager = this.n;
        if (locationManager == null) {
            return;
        }
        try {
            if (this.x != null) {
                locationManager.removeUpdates(this.x);
                ((a) this.x).a();
                this.x = null;
                Object[] objArr2 = new Object[1];
                ft.a();
            }
        } catch (Throwable th) {
            Object[] objArr3 = new Object[1];
            th.getMessage();
            ft.a();
        }
        try {
            if (this.j != null) {
                this.j.removeMessages(100);
            }
        } catch (Throwable unused) {
        }
        this.i = 0;
        this.c = 0L;
        this.l = 0L;
        this.e = 0;
        this.m = 0;
        this.f.a();
    }

    public final void a(Bundle bundle) {
        if (bundle != null) {
            try {
                bundle.setClassLoader(AMapLocation.class.getClassLoader());
                this.g = bundle.getInt("I_MAX_GEO_DIS");
                this.h = bundle.getInt("I_MIN_GEO_DIS");
                AMapLocation aMapLocation = (AMapLocation) bundle.getParcelable("loc");
                if (TextUtils.isEmpty(aMapLocation.getAdCode())) {
                    return;
                }
                synchronized (this.p) {
                    a = aMapLocation;
                }
            } catch (Throwable th) {
                fr.a(th, "CoarseLocation", "setLastGeoLocation");
            }
        }
    }

    public final void a(AMapLocationClientOption aMapLocationClientOption) {
        this.o = aMapLocationClientOption;
        if (aMapLocationClientOption == null) {
            this.o = new AMapLocationClientOption();
        }
        Object[] objArr = new Object[2];
        this.o.toString();
        ft.a();
        if (!this.o.isOnceLocation()) {
            e();
        } else if (!c()) {
            d();
        } else {
            try {
                q = fy.a(this.k, "pref", "lagt", q);
            } catch (Throwable unused) {
            }
            f();
        }
    }

    public final int b() {
        LocationManager locationManager = this.n;
        if (locationManager == null || !a(locationManager)) {
            return 1;
        }
        if (Build.VERSION.SDK_INT >= 19) {
            int i = Settings.Secure.getInt(this.k.getContentResolver(), "location_mode", 0);
            if (i == 0) {
                return 2;
            }
            if (i == 2) {
                return 3;
            }
        } else if (!this.n.isProviderEnabled("gps")) {
            return 2;
        }
        return !this.v ? 4 : 0;
    }

    public final void b(AMapLocationClientOption aMapLocationClientOption) {
        if (aMapLocationClientOption == null) {
            aMapLocationClientOption = new AMapLocationClientOption();
        }
        this.o = aMapLocationClientOption;
        Object[] objArr = new Object[2];
        aMapLocationClientOption.toString();
        ft.a();
        this.j.removeMessages(100);
        if (this.w != this.o.getGeoLanguage()) {
            synchronized (this.p) {
                a = null;
            }
        }
        this.w = this.o.getGeoLanguage();
    }
}
