package com.czhj.sdk.common.mta;

public abstract class PointEntityCommon extends com.czhj.sdk.common.mta.PointEntitySuper {
    public PointEntityCommon() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBattery_level() {
            r3 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Float r1 = r1.getBatteryLevel()
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "%.2f"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }

    public java.lang.String getBattery_save_enabled() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Boolean r0 = r0.getBatterySaveEnable()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getBattery_state() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getBatteryState()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getBrand() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getDeviceBrand()
            return r0
    }

    public java.lang.String getBrowser() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.getUserAgent()
            return r0
    }

    public java.lang.String getCheight() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getDeviceScreenHeightDip()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getClientpixel() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.widthPixels
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.heightPixels
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "%sx%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }

    public java.lang.String getClienttype() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getDeviceModel()
            return r0
    }

    public java.lang.String getCwidth() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getDeviceScreenWidthDip()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getDevice_type() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            boolean r0 = r0.isTablet()
            if (r0 == 0) goto Ld
            java.lang.String r0 = "5"
            goto Lf
        Ld:
            java.lang.String r0 = "4"
        Lf:
            return r0
    }

    public java.lang.String getDheight() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getDeviceScreenRealHeightDip()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getDwidth() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getDeviceScreenRealWidthDip()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getIsEmulator() {
            r1 = this;
            boolean r0 = com.czhj.sdk.common.ClientMetadata.isEmulator()
            if (r0 == 0) goto L9
            java.lang.String r0 = "1"
            goto Lb
        L9:
            java.lang.String r0 = "0"
        Lb:
            return r0
    }

    public java.lang.String getLat() {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.location.Location r0 = r0.getLocation()
            if (r0 == 0) goto L13
            double r0 = r0.getLatitude()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.lang.String getLng() {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.location.Location r0 = r0.getLocation()
            if (r0 == 0) goto L13
            double r0 = r0.getLongitude()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.lang.String getPkgname() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAppPackageName()
            return r0
    }

    public java.lang.String getResolution() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r1 = r1.getRealMetrics()
            int r1 = r1.widthPixels
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r1 = r1.getRealMetrics()
            int r1 = r1.heightPixels
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "%sx%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }

    public java.lang.String getScreenangle() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getOrientationInt()
            int r0 = r0.intValue()
            int r0 = r0 + (-1)
            int r0 = java.lang.Math.abs(r0)
            int r0 = r0 * 90
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getScreendensity() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r0 = r0.getDensityDpi()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getTargetSdkVersion() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getTargetSdkVersion()
            return r0
    }

    public java.lang.String getUdid() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAndroidId()
            return r0
    }

    public java.lang.String getVender() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getDeviceManufacturer()
            return r0
    }

    public java.lang.String getWifi_id() {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getWifiName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lf
            return r0
        Lf:
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getWifiName()
            byte[] r0 = r0.getBytes()
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)
            return r0
    }

    public java.lang.String getWifi_mac() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getWifimac()
            return r0
    }
}
