package com.amap.api.location;

import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.app.NotificationCompat;
import com.loc.fr;

/* JADX INFO: loaded from: classes.dex */
public class AMapLocationClientOption implements Parcelable, Cloneable {
    private static int d = 0;
    private static int e = 1;
    private static int f = 2;
    private static int g = 4;
    private boolean A;
    private int B;
    private int C;
    private boolean D;
    private boolean E;
    private float F;
    private AMapLocationPurpose G;
    boolean b;
    String c;
    private long h;
    private long i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private AMapLocationMode o;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private boolean u;
    private boolean v;
    private boolean w;
    private long x;
    private long y;
    private GeoLanguage z;
    private static AMapLocationProtocol p = AMapLocationProtocol.HTTP;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static String f1371a = "";
    public static final Parcelable.Creator<AMapLocationClientOption> CREATOR = new Parcelable.Creator<AMapLocationClientOption>() { // from class: com.amap.api.location.AMapLocationClientOption.1
        private static AMapLocationClientOption a(Parcel parcel) {
            return new AMapLocationClientOption(parcel);
        }

        private static AMapLocationClientOption[] a(int i) {
            return new AMapLocationClientOption[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ AMapLocationClientOption createFromParcel(Parcel parcel) {
            return a(parcel);
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ AMapLocationClientOption[] newArray(int i) {
            return a(i);
        }
    };
    public static boolean OPEN_ALWAYS_SCAN_WIFI = true;
    public static long SCAN_WIFI_INTERVAL = 30000;

    /* JADX INFO: renamed from: com.amap.api.location.AMapLocationClientOption$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f1372a;

        static {
            int[] iArr = new int[AMapLocationPurpose.values().length];
            f1372a = iArr;
            try {
                iArr[AMapLocationPurpose.SignIn.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f1372a[AMapLocationPurpose.Transport.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f1372a[AMapLocationPurpose.Sport.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public enum AMapLocationMode {
        Battery_Saving,
        Device_Sensors,
        Hight_Accuracy
    }

    public enum AMapLocationProtocol {
        HTTP(0),
        HTTPS(1);


        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f1374a;

        AMapLocationProtocol(int i) {
            this.f1374a = i;
        }

        public final int getValue() {
            return this.f1374a;
        }
    }

    public enum AMapLocationPurpose {
        SignIn,
        Transport,
        Sport
    }

    public enum GeoLanguage {
        DEFAULT,
        ZH,
        EN
    }

    public AMapLocationClientOption() {
        this.h = 2000L;
        this.i = fr.i;
        this.j = false;
        this.k = true;
        this.l = true;
        this.m = true;
        this.n = true;
        this.o = AMapLocationMode.Hight_Accuracy;
        this.q = false;
        this.r = false;
        this.s = true;
        this.t = true;
        this.u = false;
        this.v = false;
        this.w = true;
        this.x = 30000L;
        this.y = 30000L;
        this.z = GeoLanguage.DEFAULT;
        this.A = false;
        this.B = 1500;
        this.C = 21600000;
        this.D = false;
        this.E = true;
        this.F = 0.0f;
        this.G = null;
        this.b = false;
        this.c = null;
    }

    protected AMapLocationClientOption(Parcel parcel) {
        this.h = 2000L;
        this.i = fr.i;
        this.j = false;
        this.k = true;
        this.l = true;
        this.m = true;
        this.n = true;
        this.o = AMapLocationMode.Hight_Accuracy;
        this.q = false;
        this.r = false;
        this.s = true;
        this.t = true;
        this.u = false;
        this.v = false;
        this.w = true;
        this.x = 30000L;
        this.y = 30000L;
        this.z = GeoLanguage.DEFAULT;
        this.A = false;
        this.B = 1500;
        this.C = 21600000;
        this.D = false;
        this.E = true;
        this.F = 0.0f;
        this.G = null;
        this.b = false;
        this.c = null;
        this.h = parcel.readLong();
        this.i = parcel.readLong();
        this.j = parcel.readByte() != 0;
        this.k = parcel.readByte() != 0;
        this.l = parcel.readByte() != 0;
        this.m = parcel.readByte() != 0;
        this.n = parcel.readByte() != 0;
        int i = parcel.readInt();
        this.o = i == -1 ? AMapLocationMode.Hight_Accuracy : AMapLocationMode.values()[i];
        this.q = parcel.readByte() != 0;
        this.r = parcel.readByte() != 0;
        this.D = parcel.readByte() != 0;
        this.E = parcel.readByte() != 0;
        this.s = parcel.readByte() != 0;
        this.t = parcel.readByte() != 0;
        this.u = parcel.readByte() != 0;
        this.v = parcel.readByte() != 0;
        this.w = parcel.readByte() != 0;
        this.x = parcel.readLong();
        int i2 = parcel.readInt();
        p = i2 == -1 ? AMapLocationProtocol.HTTP : AMapLocationProtocol.values()[i2];
        int i3 = parcel.readInt();
        this.z = i3 == -1 ? GeoLanguage.DEFAULT : GeoLanguage.values()[i3];
        this.F = parcel.readFloat();
        int i4 = parcel.readInt();
        this.G = i4 != -1 ? AMapLocationPurpose.values()[i4] : null;
        OPEN_ALWAYS_SCAN_WIFI = parcel.readByte() != 0;
        this.y = parcel.readLong();
    }

    private AMapLocationClientOption a(AMapLocationClientOption aMapLocationClientOption) {
        this.h = aMapLocationClientOption.h;
        this.j = aMapLocationClientOption.j;
        this.o = aMapLocationClientOption.o;
        this.k = aMapLocationClientOption.k;
        this.q = aMapLocationClientOption.q;
        this.r = aMapLocationClientOption.r;
        this.D = aMapLocationClientOption.D;
        this.l = aMapLocationClientOption.l;
        this.m = aMapLocationClientOption.m;
        this.i = aMapLocationClientOption.i;
        this.s = aMapLocationClientOption.s;
        this.t = aMapLocationClientOption.t;
        this.u = aMapLocationClientOption.u;
        this.v = aMapLocationClientOption.isSensorEnable();
        this.w = aMapLocationClientOption.isWifiScan();
        this.x = aMapLocationClientOption.x;
        setLocationProtocol(aMapLocationClientOption.getLocationProtocol());
        this.z = aMapLocationClientOption.z;
        setDownloadCoordinateConvertLibrary(isDownloadCoordinateConvertLibrary());
        this.F = aMapLocationClientOption.F;
        this.G = aMapLocationClientOption.G;
        setOpenAlwaysScanWifi(isOpenAlwaysScanWifi());
        setScanWifiInterval(aMapLocationClientOption.getScanWifiInterval());
        this.y = aMapLocationClientOption.y;
        this.C = aMapLocationClientOption.getCacheTimeOut();
        this.A = aMapLocationClientOption.getCacheCallBack();
        this.B = aMapLocationClientOption.getCacheCallBackTime();
        this.E = aMapLocationClientOption.isSelfStartServiceEnable();
        return this;
    }

    public static String getAPIKEY() {
        return f1371a;
    }

    public static boolean isDownloadCoordinateConvertLibrary() {
        return false;
    }

    public static boolean isOpenAlwaysScanWifi() {
        return OPEN_ALWAYS_SCAN_WIFI;
    }

    public static void setDownloadCoordinateConvertLibrary(boolean z) {
    }

    public static void setLocationProtocol(AMapLocationProtocol aMapLocationProtocol) {
        p = aMapLocationProtocol;
    }

    public static void setOpenAlwaysScanWifi(boolean z) {
        OPEN_ALWAYS_SCAN_WIFI = z;
    }

    public static void setScanWifiInterval(long j) {
        SCAN_WIFI_INTERVAL = j;
    }

    /* JADX INFO: renamed from: clone, reason: merged with bridge method [inline-methods] */
    public AMapLocationClientOption m8clone() {
        try {
            super.clone();
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return new AMapLocationClientOption().a(this);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean getCacheCallBack() {
        return this.A;
    }

    public int getCacheCallBackTime() {
        return this.B;
    }

    public int getCacheTimeOut() {
        return this.C;
    }

    public float getDeviceModeDistanceFilter() {
        return this.F;
    }

    public GeoLanguage getGeoLanguage() {
        return this.z;
    }

    public long getGpsFirstTimeout() {
        return this.y;
    }

    public long getHttpTimeOut() {
        return this.i;
    }

    public long getInterval() {
        return this.h;
    }

    public long getLastLocationLifeCycle() {
        return this.x;
    }

    public AMapLocationMode getLocationMode() {
        return this.o;
    }

    public AMapLocationProtocol getLocationProtocol() {
        return p;
    }

    public AMapLocationPurpose getLocationPurpose() {
        return this.G;
    }

    public long getScanWifiInterval() {
        return SCAN_WIFI_INTERVAL;
    }

    public boolean isBeidouFirst() {
        return this.D;
    }

    public boolean isGpsFirst() {
        return this.r;
    }

    public boolean isKillProcess() {
        return this.q;
    }

    public boolean isLocationCacheEnable() {
        return this.t;
    }

    public boolean isMockEnable() {
        return this.k;
    }

    public boolean isNeedAddress() {
        return this.l;
    }

    public boolean isOffset() {
        return this.s;
    }

    public boolean isOnceLocation() {
        return this.j;
    }

    public boolean isOnceLocationLatest() {
        return this.u;
    }

    public boolean isSelfStartServiceEnable() {
        return this.E;
    }

    public boolean isSensorEnable() {
        return this.v;
    }

    public boolean isWifiActiveScan() {
        return this.m;
    }

    public boolean isWifiScan() {
        return this.w;
    }

    public AMapLocationClientOption setBeidouFirst(boolean z) {
        this.D = z;
        return this;
    }

    public void setCacheCallBack(boolean z) {
        this.A = z;
    }

    public void setCacheCallBackTime(int i) {
        this.B = i;
    }

    public void setCacheTimeOut(int i) {
        this.C = i;
    }

    public AMapLocationClientOption setDeviceModeDistanceFilter(float f2) {
        if (f2 < 0.0f) {
            f2 = 0.0f;
        }
        this.F = f2;
        return this;
    }

    public AMapLocationClientOption setGeoLanguage(GeoLanguage geoLanguage) {
        this.z = geoLanguage;
        return this;
    }

    public AMapLocationClientOption setGpsFirst(boolean z) {
        this.r = z;
        return this;
    }

    public AMapLocationClientOption setGpsFirstTimeout(long j) {
        if (j < 5000) {
            j = 5000;
        }
        if (j > 30000) {
            j = 30000;
        }
        this.y = j;
        return this;
    }

    public AMapLocationClientOption setHttpTimeOut(long j) {
        this.i = j;
        return this;
    }

    public AMapLocationClientOption setInterval(long j) {
        if (j <= 800) {
            j = 800;
        }
        this.h = j;
        return this;
    }

    public AMapLocationClientOption setKillProcess(boolean z) {
        this.q = z;
        return this;
    }

    public AMapLocationClientOption setLastLocationLifeCycle(long j) {
        this.x = j;
        return this;
    }

    public AMapLocationClientOption setLocationCacheEnable(boolean z) {
        this.t = z;
        return this;
    }

    public AMapLocationClientOption setLocationMode(AMapLocationMode aMapLocationMode) {
        this.o = aMapLocationMode;
        return this;
    }

    public AMapLocationClientOption setLocationPurpose(AMapLocationPurpose aMapLocationPurpose) {
        String str;
        this.G = aMapLocationPurpose;
        if (aMapLocationPurpose != null) {
            int i = AnonymousClass2.f1372a[aMapLocationPurpose.ordinal()];
            if (i == 1) {
                this.o = AMapLocationMode.Hight_Accuracy;
                this.j = true;
                this.u = true;
                this.r = false;
                this.D = false;
                this.k = false;
                this.w = true;
                this.E = true;
                int i2 = d;
                int i3 = e;
                if ((i2 & i3) == 0) {
                    this.b = true;
                    d = i2 | i3;
                    this.c = "signin";
                }
            } else if (i == 2) {
                int i4 = d;
                int i5 = f;
                if ((i4 & i5) == 0) {
                    this.b = true;
                    d = i4 | i5;
                    str = NotificationCompat.CATEGORY_TRANSPORT;
                    this.c = str;
                }
                this.o = AMapLocationMode.Hight_Accuracy;
                this.j = false;
                this.u = false;
                this.r = true;
                this.D = false;
                this.E = true;
                this.k = false;
                this.w = true;
            } else if (i == 3) {
                int i6 = d;
                int i7 = g;
                if ((i6 & i7) == 0) {
                    this.b = true;
                    d = i6 | i7;
                    str = "sport";
                    this.c = str;
                }
                this.o = AMapLocationMode.Hight_Accuracy;
                this.j = false;
                this.u = false;
                this.r = true;
                this.D = false;
                this.E = true;
                this.k = false;
                this.w = true;
            }
        }
        return this;
    }

    public AMapLocationClientOption setMockEnable(boolean z) {
        this.k = z;
        return this;
    }

    public AMapLocationClientOption setNeedAddress(boolean z) {
        this.l = z;
        return this;
    }

    public AMapLocationClientOption setOffset(boolean z) {
        this.s = z;
        return this;
    }

    public AMapLocationClientOption setOnceLocation(boolean z) {
        this.j = z;
        return this;
    }

    public AMapLocationClientOption setOnceLocationLatest(boolean z) {
        this.u = z;
        return this;
    }

    public void setSelfStartServiceEnable(boolean z) {
        this.E = z;
    }

    public AMapLocationClientOption setSensorEnable(boolean z) {
        this.v = z;
        return this;
    }

    public AMapLocationClientOption setWifiActiveScan(boolean z) {
        this.m = z;
        this.n = z;
        return this;
    }

    public AMapLocationClientOption setWifiScan(boolean z) {
        this.w = z;
        this.m = z ? this.n : false;
        return this;
    }

    public String toString() {
        return "interval:" + String.valueOf(this.h) + "#isOnceLocation:" + String.valueOf(this.j) + "#locationMode:" + String.valueOf(this.o) + "#locationProtocol:" + String.valueOf(p) + "#isMockEnable:" + String.valueOf(this.k) + "#isKillProcess:" + String.valueOf(this.q) + "#isGpsFirst:" + String.valueOf(this.r) + "#isBeidouFirst:" + String.valueOf(this.D) + "#isSelfStartServiceEnable:" + String.valueOf(this.E) + "#isNeedAddress:" + String.valueOf(this.l) + "#isWifiActiveScan:" + String.valueOf(this.m) + "#wifiScan:" + String.valueOf(this.w) + "#httpTimeOut:" + String.valueOf(this.i) + "#isLocationCacheEnable:" + String.valueOf(this.t) + "#isOnceLocationLatest:" + String.valueOf(this.u) + "#sensorEnable:" + String.valueOf(this.v) + "#geoLanguage:" + String.valueOf(this.z) + "#locationPurpose:" + String.valueOf(this.G) + "#callback:" + String.valueOf(this.A) + "#time:" + String.valueOf(this.B) + "#";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeLong(this.h);
        parcel.writeLong(this.i);
        parcel.writeByte(this.j ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.k ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.l ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.m ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.n ? (byte) 1 : (byte) 0);
        AMapLocationMode aMapLocationMode = this.o;
        parcel.writeInt(aMapLocationMode == null ? -1 : aMapLocationMode.ordinal());
        parcel.writeByte(this.q ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.r ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.D ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.E ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.s ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.t ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.u ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.v ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.w ? (byte) 1 : (byte) 0);
        parcel.writeLong(this.x);
        parcel.writeInt(p == null ? -1 : getLocationProtocol().ordinal());
        GeoLanguage geoLanguage = this.z;
        parcel.writeInt(geoLanguage == null ? -1 : geoLanguage.ordinal());
        parcel.writeFloat(this.F);
        AMapLocationPurpose aMapLocationPurpose = this.G;
        parcel.writeInt(aMapLocationPurpose != null ? aMapLocationPurpose.ordinal() : -1);
        parcel.writeInt(OPEN_ALWAYS_SCAN_WIFI ? 1 : 0);
        parcel.writeLong(this.y);
    }
}
