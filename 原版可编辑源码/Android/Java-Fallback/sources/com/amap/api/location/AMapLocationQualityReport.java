package com.amap.api.location;

public class AMapLocationQualityReport implements java.lang.Cloneable {
    public static final int GPS_STATUS_MODE_SAVING = 3;
    public static final int GPS_STATUS_NOGPSPERMISSION = 4;
    public static final int GPS_STATUS_NOGPSPROVIDER = 1;
    public static final int GPS_STATUS_OFF = 2;
    public static final int GPS_STATUS_OK = 0;
    com.amap.api.location.AMapLocationClientOption.AMapLocationMode a;
    private boolean b;
    private int c;
    private int d;
    private java.lang.String e;
    private long f;
    private boolean g;

    public AMapLocationQualityReport() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.b = r0
            r1 = 2
            r3.c = r1
            r3.d = r0
            java.lang.String r1 = "UNKNOWN"
            r3.e = r1
            r1 = 0
            r3.f = r1
            r3.g = r0
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r3.a = r0
            return
    }

    protected com.amap.api.location.AMapLocationQualityReport clone() {
            r4 = this;
            com.amap.api.location.AMapLocationQualityReport r0 = new com.amap.api.location.AMapLocationQualityReport
            r0.<init>()
            super.clone()     // Catch: java.lang.Throwable -> L8
        L8:
            int r1 = r4.c     // Catch: java.lang.Throwable -> L2c
            r0.setGpsStatus(r1)     // Catch: java.lang.Throwable -> L2c
            int r1 = r4.d     // Catch: java.lang.Throwable -> L2c
            r0.setGPSSatellites(r1)     // Catch: java.lang.Throwable -> L2c
            boolean r1 = r4.b     // Catch: java.lang.Throwable -> L2c
            r0.setWifiAble(r1)     // Catch: java.lang.Throwable -> L2c
            long r1 = r4.f     // Catch: java.lang.Throwable -> L2c
            r0.setNetUseTime(r1)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> L2c
            r0.setNetworkType(r1)     // Catch: java.lang.Throwable -> L2c
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r4.a     // Catch: java.lang.Throwable -> L2c
            r0.setLocationMode(r1)     // Catch: java.lang.Throwable -> L2c
            boolean r1 = r4.g     // Catch: java.lang.Throwable -> L2c
            r0.setInstallHighDangerMockApp(r1)     // Catch: java.lang.Throwable -> L2c
            goto L34
        L2c:
            r1 = move-exception
            java.lang.String r2 = "AMapLocationQualityReport"
            java.lang.String r3 = "clone"
            com.loc.fr.a(r1, r2, r3)
        L34:
            return r0
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.amap.api.location.AMapLocationQualityReport r0 = r1.clone()
            return r0
    }

    public java.lang.String getAdviseMessage() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r4.a
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving
            if (r1 == r2) goto L38
            int r1 = r4.c
            r2 = 4
            if (r1 == 0) goto L2b
            r3 = 1
            if (r1 == r3) goto L25
            r3 = 2
            if (r1 == r3) goto L22
            r3 = 3
            if (r1 == r3) goto L1f
            if (r1 == r2) goto L1c
            goto L38
        L1c:
            java.lang.String r1 = "您的设置禁用了GPS定位权限，开启GPS定位权限有助于提高定位的精确度\n"
            goto L27
        L1f:
            java.lang.String r1 = "您的设备当前设置的定位模式不包含GPS定位，选择包含GPS模式的定位模式有助于提高定位的精确度\n"
            goto L27
        L22:
            java.lang.String r1 = "您的设备关闭了GPS定位功能，开启GPS定位功能有助于提高定位的精确度\n"
            goto L27
        L25:
            java.lang.String r1 = "您的设备没有GPS模块或者GPS模块异常，无法进行GPS定位\n"
        L27:
            r0.append(r1)
            goto L38
        L2b:
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r4.a
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r3 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            if (r1 != r3) goto L38
            int r1 = r4.d
            if (r1 >= r2) goto L38
            java.lang.String r1 = "当前GPS信号弱，位置更新可能会延迟\n"
            goto L27
        L38:
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r4.a
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            if (r1 == r2) goto L64
            java.lang.String r1 = r4.e
            java.lang.String r2 = "DISCONNECTED"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L4e
            java.lang.String r1 = "您的设备未连接到网络，无法进行网络定位\n"
        L4a:
            r0.append(r1)
            goto L5b
        L4e:
            java.lang.String r1 = r4.e
            java.lang.String r2 = "2G"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L5b
            java.lang.String r1 = "您的设备网络状态不太好，网络定位可能会有延迟\n"
            goto L4a
        L5b:
            boolean r1 = r4.b
            if (r1 != 0) goto L64
            java.lang.String r1 = "您的设备WIFI开关已关闭，打开WIFI开关有助于提高定位的成功率\n"
            r0.append(r1)
        L64:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public int getGPSSatellites() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public int getGPSStatus() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public long getNetUseTime() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public java.lang.String getNetworkType() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public boolean isInstalledHighDangerMockApp() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public boolean isWifiAble() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public void setGPSSatellites(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setGpsStatus(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setInstallHighDangerMockApp(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setLocationMode(com.amap.api.location.AMapLocationClientOption.AMapLocationMode r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setNetUseTime(long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setNetworkType(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setWifiAble(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
