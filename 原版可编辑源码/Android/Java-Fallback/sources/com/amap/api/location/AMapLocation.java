package com.amap.api.location;

public class AMapLocation extends android.location.Location implements android.os.Parcelable, java.lang.Cloneable {
    public static final java.lang.String COORD_TYPE_GCJ02 = "GCJ02";
    public static final java.lang.String COORD_TYPE_WGS84 = "WGS84";
    public static final android.os.Parcelable.Creator<com.amap.api.location.AMapLocation> CREATOR = null;
    public static final int ERROR_CODE_AIRPLANEMODE_WIFIOFF = 18;
    public static final int ERROR_CODE_FAILURE_AUTH = 7;
    public static final int ERROR_CODE_FAILURE_CELL = 11;
    public static final int ERROR_CODE_FAILURE_COARSE_LOCATION = 20;
    public static final int ERROR_CODE_FAILURE_CONNECTION = 4;
    public static final int ERROR_CODE_FAILURE_INIT = 9;
    public static final int ERROR_CODE_FAILURE_LOCATION = 6;
    public static final int ERROR_CODE_FAILURE_LOCATION_PARAMETER = 3;
    public static final int ERROR_CODE_FAILURE_LOCATION_PERMISSION = 12;
    public static final int ERROR_CODE_FAILURE_NOENOUGHSATELLITES = 14;
    public static final int ERROR_CODE_FAILURE_NOWIFIANDAP = 13;
    public static final int ERROR_CODE_FAILURE_PARSER = 5;
    public static final int ERROR_CODE_FAILURE_SIMULATION_LOCATION = 15;
    public static final int ERROR_CODE_FAILURE_WIFI_INFO = 2;
    public static final int ERROR_CODE_INVALID_PARAMETER = 1;
    public static final int ERROR_CODE_NOCGI_WIFIOFF = 19;
    public static final int ERROR_CODE_NO_COMPENSATION_CACHE = 33;
    public static final int ERROR_CODE_SERVICE_FAIL = 10;
    public static final int ERROR_CODE_UNKNOWN = 8;
    public static final int GPS_ACCURACY_BAD = 0;
    public static final int GPS_ACCURACY_GOOD = 1;
    public static final int GPS_ACCURACY_UNKNOWN = -1;
    public static final int LOCATION_COMPENSATION = 10;
    public static final int LOCATION_SUCCESS = 0;
    public static final int LOCATION_TYPE_AMAP = 7;
    public static final int LOCATION_TYPE_CELL = 6;
    public static final int LOCATION_TYPE_COARSE_LOCATION = 11;
    public static final int LOCATION_TYPE_FAST = 3;
    public static final int LOCATION_TYPE_FIX_CACHE = 4;
    public static final int LOCATION_TYPE_GPS = 1;
    public static final int LOCATION_TYPE_LAST_LOCATION_CACHE = 9;
    public static final int LOCATION_TYPE_OFFLINE = 8;
    public static final int LOCATION_TYPE_SAME_REQ = 2;
    public static final int LOCATION_TYPE_WIFI = 5;
    public static final int TRUSTED_LEVEL_BAD = 4;
    public static final int TRUSTED_LEVEL_HIGH = 1;
    public static final int TRUSTED_LEVEL_LOW = 3;
    public static final int TRUSTED_LEVEL_NORMAL = 2;
    private int A;
    private java.lang.String B;
    private int C;
    private boolean D;
    private java.lang.String E;
    private boolean F;
    private java.lang.String G;
    private int H;
    private int I;
    protected java.lang.String a;
    protected java.lang.String b;
    com.amap.api.location.AMapLocationQualityReport c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private boolean o;
    private int p;
    private java.lang.String q;
    private java.lang.String r;
    private int s;
    private double t;
    private double u;
    private double v;
    private float w;
    private float x;
    private android.os.Bundle y;
    private java.lang.String z;


    static {
            com.amap.api.location.AMapLocation$1 r0 = new com.amap.api.location.AMapLocation$1
            r0.<init>()
            com.amap.api.location.AMapLocation.CREATOR = r0
            return
    }

    public AMapLocation(android.location.Location r6) {
            r5 = this;
            r5.<init>(r6)
            java.lang.String r0 = ""
            r5.d = r0
            r5.e = r0
            r5.f = r0
            r5.g = r0
            r5.h = r0
            r5.i = r0
            r5.j = r0
            r5.k = r0
            r5.l = r0
            r5.m = r0
            r5.n = r0
            r1 = 1
            r5.o = r1
            r2 = 0
            r5.p = r2
            java.lang.String r3 = "success"
            r5.q = r3
            r5.r = r0
            r5.s = r2
            r3 = 0
            r5.t = r3
            r5.u = r3
            r5.v = r3
            r3 = 0
            r5.w = r3
            r5.x = r3
            r3 = 0
            r5.y = r3
            r5.A = r2
            r5.B = r0
            r4 = -1
            r5.C = r4
            r5.D = r2
            r5.E = r0
            r5.F = r2
            r5.a = r0
            r5.b = r0
            com.amap.api.location.AMapLocationQualityReport r0 = new com.amap.api.location.AMapLocationQualityReport
            r0.<init>()
            r5.c = r0
            java.lang.String r0 = "GCJ02"
            r5.G = r0
            r5.H = r1
            double r0 = r6.getLatitude()
            r5.t = r0
            double r0 = r6.getLongitude()
            r5.u = r0
            double r0 = r6.getAltitude()
            r5.v = r0
            float r0 = r6.getBearing()
            r5.x = r0
            float r0 = r6.getSpeed()
            r5.w = r0
            java.lang.String r0 = r6.getProvider()
            r5.z = r0
            android.os.Bundle r0 = r6.getExtras()
            if (r0 != 0) goto L82
            goto L8b
        L82:
            android.os.Bundle r3 = new android.os.Bundle
            android.os.Bundle r6 = r6.getExtras()
            r3.<init>(r6)
        L8b:
            r5.y = r3
            return
    }

    public AMapLocation(java.lang.String r6) {
            r5 = this;
            r5.<init>(r6)
            java.lang.String r0 = ""
            r5.d = r0
            r5.e = r0
            r5.f = r0
            r5.g = r0
            r5.h = r0
            r5.i = r0
            r5.j = r0
            r5.k = r0
            r5.l = r0
            r5.m = r0
            r5.n = r0
            r1 = 1
            r5.o = r1
            r2 = 0
            r5.p = r2
            java.lang.String r3 = "success"
            r5.q = r3
            r5.r = r0
            r5.s = r2
            r3 = 0
            r5.t = r3
            r5.u = r3
            r5.v = r3
            r3 = 0
            r5.w = r3
            r5.x = r3
            r3 = 0
            r5.y = r3
            r5.A = r2
            r5.B = r0
            r3 = -1
            r5.C = r3
            r5.D = r2
            r5.E = r0
            r5.F = r2
            r5.a = r0
            r5.b = r0
            com.amap.api.location.AMapLocationQualityReport r0 = new com.amap.api.location.AMapLocationQualityReport
            r0.<init>()
            r5.c = r0
            java.lang.String r0 = "GCJ02"
            r5.G = r0
            r5.H = r1
            r5.z = r6
            return
    }

    static double a(com.amap.api.location.AMapLocation r0, double r1) {
            r0.t = r1
            return r1
    }

    static int a(com.amap.api.location.AMapLocation r0, int r1) {
            r0.p = r1
            return r1
    }

    static java.lang.String a(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.h = r1
            return r1
    }

    static boolean a(com.amap.api.location.AMapLocation r0, boolean r1) {
            r0.F = r1
            return r1
    }

    static double b(com.amap.api.location.AMapLocation r0, double r1) {
            r0.u = r1
            return r1
    }

    static int b(com.amap.api.location.AMapLocation r0, int r1) {
            r0.s = r1
            return r1
    }

    static java.lang.String b(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.i = r1
            return r1
    }

    static boolean b(com.amap.api.location.AMapLocation r0, boolean r1) {
            r0.o = r1
            return r1
    }

    static int c(com.amap.api.location.AMapLocation r0, int r1) {
            r0.A = r1
            return r1
    }

    static java.lang.String c(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.B = r1
            return r1
    }

    static boolean c(com.amap.api.location.AMapLocation r0, boolean r1) {
            r0.D = r1
            return r1
    }

    static int d(com.amap.api.location.AMapLocation r0, int r1) {
            r0.C = r1
            return r1
    }

    static java.lang.String d(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.e = r1
            return r1
    }

    static int e(com.amap.api.location.AMapLocation r0, int r1) {
            r0.H = r1
            return r1
    }

    static java.lang.String e(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.g = r1
            return r1
    }

    static int f(com.amap.api.location.AMapLocation r0, int r1) {
            r0.I = r1
            return r1
    }

    static java.lang.String f(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.k = r1
            return r1
    }

    static java.lang.String g(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.f = r1
            return r1
    }

    static java.lang.String h(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    static java.lang.String i(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.r = r1
            return r1
    }

    static java.lang.String j(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.n = r1
            return r1
    }

    static java.lang.String k(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.j = r1
            return r1
    }

    static java.lang.String l(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.d = r1
            return r1
    }

    static java.lang.String m(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.l = r1
            return r1
    }

    static java.lang.String n(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.m = r1
            return r1
    }

    static java.lang.String o(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.E = r1
            return r1
    }

    static java.lang.String p(com.amap.api.location.AMapLocation r0, java.lang.String r1) {
            r0.G = r1
            return r1
    }

    public com.amap.api.location.AMapLocation clone() {
            r4 = this;
            super.clone()     // Catch: java.lang.Throwable -> L3
        L3:
            com.amap.api.location.AMapLocation r0 = new com.amap.api.location.AMapLocation
            r0.<init>(r4)
            double r1 = r4.t     // Catch: java.lang.Throwable -> Lae
            r0.setLatitude(r1)     // Catch: java.lang.Throwable -> Lae
            double r1 = r4.u     // Catch: java.lang.Throwable -> Lae
            r0.setLongitude(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.h     // Catch: java.lang.Throwable -> Lae
            r0.setAdCode(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.i     // Catch: java.lang.Throwable -> Lae
            r0.setAddress(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.B     // Catch: java.lang.Throwable -> Lae
            r0.setAoiName(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.a     // Catch: java.lang.Throwable -> Lae
            r0.setBuildingId(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> Lae
            r0.setCity(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.g     // Catch: java.lang.Throwable -> Lae
            r0.setCityCode(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.k     // Catch: java.lang.Throwable -> Lae
            r0.setCountry(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.f     // Catch: java.lang.Throwable -> Lae
            r0.setDistrict(r1)     // Catch: java.lang.Throwable -> Lae
            int r1 = r4.p     // Catch: java.lang.Throwable -> Lae
            r0.setErrorCode(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.q     // Catch: java.lang.Throwable -> Lae
            r0.setErrorInfo(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.b     // Catch: java.lang.Throwable -> Lae
            r0.setFloor(r1)     // Catch: java.lang.Throwable -> Lae
            boolean r1 = r4.F     // Catch: java.lang.Throwable -> Lae
            r0.setFixLastLocation(r1)     // Catch: java.lang.Throwable -> Lae
            boolean r1 = r4.o     // Catch: java.lang.Throwable -> Lae
            r0.setOffset(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.r     // Catch: java.lang.Throwable -> Lae
            r0.setLocationDetail(r1)     // Catch: java.lang.Throwable -> Lae
            int r1 = r4.s     // Catch: java.lang.Throwable -> Lae
            r0.setLocationType(r1)     // Catch: java.lang.Throwable -> Lae
            boolean r1 = r4.D     // Catch: java.lang.Throwable -> Lae
            r0.setMock(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.n     // Catch: java.lang.Throwable -> Lae
            r0.setNumber(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.j     // Catch: java.lang.Throwable -> Lae
            r0.setPoiName(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.d     // Catch: java.lang.Throwable -> Lae
            r0.setProvince(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.l     // Catch: java.lang.Throwable -> Lae
            r0.setRoad(r1)     // Catch: java.lang.Throwable -> Lae
            int r1 = r4.A     // Catch: java.lang.Throwable -> Lae
            r0.setSatellites(r1)     // Catch: java.lang.Throwable -> Lae
            int r1 = r4.C     // Catch: java.lang.Throwable -> Lae
            r0.setGpsAccuracyStatus(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.m     // Catch: java.lang.Throwable -> Lae
            r0.setStreet(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = r4.E     // Catch: java.lang.Throwable -> Lae
            r0.setDescription(r1)     // Catch: java.lang.Throwable -> Lae
            android.os.Bundle r1 = r4.getExtras()     // Catch: java.lang.Throwable -> Lae
            r0.setExtras(r1)     // Catch: java.lang.Throwable -> Lae
            com.amap.api.location.AMapLocationQualityReport r1 = r4.c     // Catch: java.lang.Throwable -> Lae
            if (r1 == 0) goto L9e
            com.amap.api.location.AMapLocationQualityReport r1 = r4.c     // Catch: java.lang.Throwable -> Lae
            com.amap.api.location.AMapLocationQualityReport r1 = r1.clone()     // Catch: java.lang.Throwable -> Lae
            r0.setLocationQualityReport(r1)     // Catch: java.lang.Throwable -> Lae
        L9e:
            java.lang.String r1 = r4.G     // Catch: java.lang.Throwable -> Lae
            r0.setCoordType(r1)     // Catch: java.lang.Throwable -> Lae
            int r1 = r4.H     // Catch: java.lang.Throwable -> Lae
            r0.setTrustedLevel(r1)     // Catch: java.lang.Throwable -> Lae
            int r1 = r4.I     // Catch: java.lang.Throwable -> Lae
            r0.setConScenario(r1)     // Catch: java.lang.Throwable -> Lae
            goto Lb6
        Lae:
            r1 = move-exception
            java.lang.String r2 = "AMapLocation"
            java.lang.String r3 = "clone"
            com.loc.fr.a(r1, r2, r3)
        Lb6:
            return r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.amap.api.location.AMapLocation r0 = r1.clone()
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public float getAccuracy() {
            r1 = this;
            float r0 = super.getAccuracy()
            return r0
    }

    public java.lang.String getAdCode() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public java.lang.String getAddress() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    @Override
    public double getAltitude() {
            r2 = this;
            double r0 = r2.v
            return r0
    }

    public java.lang.String getAoiName() {
            r1 = this;
            java.lang.String r0 = r1.B
            return r0
    }

    @Override
    public float getBearing() {
            r1 = this;
            float r0 = r1.x
            return r0
    }

    public java.lang.String getBuildingId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getCity() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public java.lang.String getCityCode() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public int getConScenario() {
            r1 = this;
            int r0 = r1.I
            return r0
    }

    public java.lang.String getCoordType() {
            r1 = this;
            java.lang.String r0 = r1.G
            return r0
    }

    public java.lang.String getCountry() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public java.lang.String getDescription() {
            r1 = this;
            java.lang.String r0 = r1.E
            return r0
    }

    public java.lang.String getDistrict() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public java.lang.String getErrorInfo() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.q
            r0.append(r1)
            int r1 = r3.p
            if (r1 == 0) goto L26
            java.lang.String r1 = " 请到http://lbs.amap.com/api/android-location-sdk/guide/utilities/errorcode/查看错误码说明"
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = ",错误详细信息:"
            r1.<init>(r2)
            java.lang.String r2 = r3.r
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L26:
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public android.os.Bundle getExtras() {
            r1 = this;
            android.os.Bundle r0 = r1.y
            return r0
    }

    public java.lang.String getFloor() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public int getGpsAccuracyStatus() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    @Override
    public double getLatitude() {
            r2 = this;
            double r0 = r2.t
            return r0
    }

    public java.lang.String getLocationDetail() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    public com.amap.api.location.AMapLocationQualityReport getLocationQualityReport() {
            r1 = this;
            com.amap.api.location.AMapLocationQualityReport r0 = r1.c
            return r0
    }

    public int getLocationType() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    @Override
    public double getLongitude() {
            r2 = this;
            double r0 = r2.u
            return r0
    }

    public java.lang.String getPoiName() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    @Override
    public java.lang.String getProvider() {
            r1 = this;
            java.lang.String r0 = r1.z
            return r0
    }

    public java.lang.String getProvince() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String getRoad() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public int getSatellites() {
            r1 = this;
            int r0 = r1.A
            return r0
    }

    @Override
    public float getSpeed() {
            r1 = this;
            float r0 = r1.w
            return r0
    }

    public java.lang.String getStreet() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public java.lang.String getStreetNum() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public int getTrustedLevel() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    public boolean isFixLastLocation() {
            r1 = this;
            boolean r0 = r1.F
            return r0
    }

    @Override
    public boolean isMock() {
            r1 = this;
            boolean r0 = r1.D
            return r0
    }

    public boolean isOffset() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    public void setAdCode(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setAddress(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public void setAltitude(double r1) {
            r0 = this;
            super.setAltitude(r1)
            r0.v = r1
            return
    }

    public void setAoiName(java.lang.String r1) {
            r0 = this;
            r0.B = r1
            return
    }

    @Override
    public void setBearing(float r3) {
            r2 = this;
            super.setBearing(r3)
        L3:
            r0 = 0
            r1 = 1135869952(0x43b40000, float:360.0)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto Lc
            float r3 = r3 + r1
            goto L3
        Lc:
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 < 0) goto L12
            float r3 = r3 - r1
            goto Lc
        L12:
            r2.x = r3
            return
    }

    public void setBuildingId(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setCity(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setCityCode(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setConScenario(int r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public void setCoordType(java.lang.String r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public void setCountry(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setDescription(java.lang.String r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public void setDistrict(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setErrorCode(int r2) {
            r1 = this;
            int r0 = r1.p
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = com.loc.fz.a(r2)
            r1.q = r0
            r1.p = r2
            return
    }

    public void setErrorInfo(java.lang.String r1) {
            r0 = this;
            r0.q = r1
            return
    }

    @Override
    public void setExtras(android.os.Bundle r2) {
            r1 = this;
            super.setExtras(r2)
            if (r2 != 0) goto L7
            r2 = 0
            goto Ld
        L7:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>(r2)
            r2 = r0
        Ld:
            r1.y = r2
            return
    }

    public void setFixLastLocation(boolean r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public void setFloor(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1c
            java.lang.String r0 = "F"
            java.lang.String r1 = ""
            java.lang.String r4 = r4.replace(r0, r1)
            java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L12
            goto L1c
        L12:
            r4 = move-exception
            r0 = 0
            java.lang.String r1 = "AmapLoc"
            java.lang.String r2 = "setFloor"
            com.loc.fr.a(r4, r1, r2)
            r4 = r0
        L1c:
            r3.b = r4
            return
    }

    public void setGpsAccuracyStatus(int r1) {
            r0 = this;
            r0.C = r1
            return
    }

    @Override
    public void setLatitude(double r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public void setLocationDetail(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void setLocationQualityReport(com.amap.api.location.AMapLocationQualityReport r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.c = r1
            return
    }

    public void setLocationType(int r1) {
            r0 = this;
            r0.s = r1
            return
    }

    @Override
    public void setLongitude(double r1) {
            r0 = this;
            r0.u = r1
            return
    }

    @Override
    public void setMock(boolean r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public void setNumber(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void setOffset(boolean r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setPoiName(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    @Override
    public void setProvider(java.lang.String r1) {
            r0 = this;
            super.setProvider(r1)
            r0.z = r1
            return
    }

    public void setProvince(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setRoad(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setSatellites(int r1) {
            r0 = this;
            r0.A = r1
            return
    }

    @Override
    public void setSpeed(float r1) {
            r0 = this;
            super.setSpeed(r1)
            r0.w = r1
            return
    }

    public void setStreet(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setTrustedLevel(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public org.json.JSONObject toJson(int r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf6
            r0.<init>()     // Catch: java.lang.Throwable -> Lf6
            r1 = 1
            if (r4 == r1) goto L10
            r1 = 2
            if (r4 == r1) goto Lb2
            r1 = 3
            if (r4 == r1) goto Lbb
            goto Lff
        L10:
            java.lang.String r4 = "altitude"
            double r1 = r3.getAltitude()     // Catch: java.lang.Throwable -> L2d
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r4 = "speed"
            float r1 = r3.getSpeed()     // Catch: java.lang.Throwable -> L2d
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L2d
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r4 = "bearing"
            float r1 = r3.getBearing()     // Catch: java.lang.Throwable -> L2d
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L2d
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> L2d
        L2d:
            java.lang.String r4 = "citycode"
            java.lang.String r1 = r3.g     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "adcode"
            java.lang.String r1 = r3.h     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "country"
            java.lang.String r1 = r3.k     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "province"
            java.lang.String r1 = r3.d     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "city"
            java.lang.String r1 = r3.e     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "district"
            java.lang.String r1 = r3.f     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "road"
            java.lang.String r1 = r3.l     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "street"
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "number"
            java.lang.String r1 = r3.n     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "poiname"
            java.lang.String r1 = r3.j     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "errorCode"
            int r1 = r3.p     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "errorInfo"
            java.lang.String r1 = r3.q     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "locationType"
            int r1 = r3.s     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "locationDetail"
            java.lang.String r1 = r3.r     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "aoiname"
            java.lang.String r1 = r3.B     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "address"
            java.lang.String r1 = r3.i     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "poiid"
            java.lang.String r1 = r3.a     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "floor"
            java.lang.String r1 = r3.b     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "description"
            java.lang.String r1 = r3.E     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
        Lb2:
            java.lang.String r4 = "time"
            long r1 = r3.getTime()     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
        Lbb:
            java.lang.String r4 = "provider"
            java.lang.String r1 = r3.getProvider()     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "lon"
            double r1 = r3.getLongitude()     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "lat"
            double r1 = r3.getLatitude()     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "accuracy"
            float r1 = r3.getAccuracy()     // Catch: java.lang.Throwable -> Lf6
            double r1 = (double) r1     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "isOffset"
            boolean r1 = r3.o     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "isFixLastLocation"
            boolean r1 = r3.F     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = "coordType"
            java.lang.String r1 = r3.G     // Catch: java.lang.Throwable -> Lf6
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lf6
            goto Lff
        Lf6:
            r4 = move-exception
            r0 = 0
            java.lang.String r1 = "AmapLoc"
            java.lang.String r2 = "toStr"
            com.loc.fr.a(r4, r1, r2)
        Lff:
            return r0
    }

    public java.lang.String toStr() {
            r1 = this;
            r0 = 1
            java.lang.String r0 = r1.toStr(r0)
            return r0
    }

    public java.lang.String toStr(int r4) {
            r3 = this;
            r0 = 0
            org.json.JSONObject r4 = r3.toJson(r4)     // Catch: java.lang.Throwable -> L6
            goto Lf
        L6:
            r4 = move-exception
            java.lang.String r1 = "AMapLocation"
            java.lang.String r2 = "toStr part2"
            com.loc.fr.a(r4, r1, r2)
            r4 = r0
        Lf:
            if (r4 != 0) goto L12
            return r0
        L12:
            java.lang.String r4 = r4.toString()
            return r4
    }

    @Override
    public java.lang.String toString() {
            r5 = this;
            java.lang.String r0 = "#"
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "latitude="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            double r3 = r5.t     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "longitude="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            double r3 = r5.u     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "province="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.d     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "coordType="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.G     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "city="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.e     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "district="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.f     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "cityCode="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.g     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "adCode="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.h     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "address="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.i     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "country="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.k     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "road="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.l     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "poiName="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "street="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.m     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "streetNum="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.n     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "aoiName="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.B     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "poiid="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.a     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "floor="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "errorCode="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            int r3 = r5.p     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "errorInfo="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.q     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "locationDetail="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.r     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "description="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = r5.E     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r3 = "locationType="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1fe
            int r3 = r5.s     // Catch: java.lang.Throwable -> L1fe
            r2.append(r3)     // Catch: java.lang.Throwable -> L1fe
            r2.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r0)     // Catch: java.lang.Throwable -> L1fe
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r2 = "conScenario="
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1fe
            int r2 = r5.I     // Catch: java.lang.Throwable -> L1fe
            r0.append(r2)     // Catch: java.lang.Throwable -> L1fe
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1fe
            r1.append(r0)     // Catch: java.lang.Throwable -> L1fe
        L1fe:
            java.lang.String r0 = r1.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            super.writeToParcel(r5, r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.h     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.i     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.B     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.a     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.e     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.g     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.k     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.f     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            int r6 = r4.p     // Catch: java.lang.Throwable -> La5
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.q     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.b     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            boolean r6 = r4.F     // Catch: java.lang.Throwable -> La5
            r0 = 1
            r1 = 0
            if (r6 == 0) goto L42
            r6 = 1
            goto L43
        L42:
            r6 = 0
        L43:
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            boolean r6 = r4.o     // Catch: java.lang.Throwable -> La5
            if (r6 == 0) goto L4c
            r6 = 1
            goto L4d
        L4c:
            r6 = 0
        L4d:
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            double r2 = r4.t     // Catch: java.lang.Throwable -> La5
            r5.writeDouble(r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.r     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            int r6 = r4.s     // Catch: java.lang.Throwable -> La5
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            double r2 = r4.u     // Catch: java.lang.Throwable -> La5
            r5.writeDouble(r2)     // Catch: java.lang.Throwable -> La5
            boolean r6 = r4.D     // Catch: java.lang.Throwable -> La5
            if (r6 == 0) goto L69
            goto L6a
        L69:
            r0 = 0
        L6a:
            r5.writeInt(r0)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.n     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.j     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.d     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.l     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            int r6 = r4.A     // Catch: java.lang.Throwable -> La5
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            int r6 = r4.C     // Catch: java.lang.Throwable -> La5
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.m     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.E     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            java.lang.String r6 = r4.G     // Catch: java.lang.Throwable -> La5
            r5.writeString(r6)     // Catch: java.lang.Throwable -> La5
            int r6 = r4.H     // Catch: java.lang.Throwable -> La5
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            int r6 = r4.I     // Catch: java.lang.Throwable -> La5
            r5.writeInt(r6)     // Catch: java.lang.Throwable -> La5
            return
        La5:
            r5 = move-exception
            java.lang.String r6 = "AMapLocation"
            java.lang.String r0 = "writeToParcel"
            com.loc.fr.a(r5, r6, r0)
            return
    }
}
