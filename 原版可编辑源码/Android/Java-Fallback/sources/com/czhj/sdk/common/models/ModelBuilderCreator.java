package com.czhj.sdk.common.models;

public class ModelBuilderCreator {
    public ModelBuilderCreator() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.czhj.sdk.common.models.AdSlot.Builder createAdSlot() {
            com.czhj.sdk.common.models.AdSlot$Builder r0 = new com.czhj.sdk.common.models.AdSlot$Builder
            r0.<init>()
            return r0
    }

    public static com.czhj.sdk.common.models.App.Builder createApp() {
            com.czhj.sdk.common.models.App$Builder r0 = new com.czhj.sdk.common.models.App$Builder
            r0.<init>()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = r1.getAppPackageName()     // Catch: java.lang.Throwable -> L7d
            if (r1 == 0) goto L1a
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = r1.getAppPackageName()     // Catch: java.lang.Throwable -> L7d
            r0.app_package(r1)     // Catch: java.lang.Throwable -> L7d
        L1a:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L7d
            java.lang.Integer r1 = r1.getOrientationInt()     // Catch: java.lang.Throwable -> L7d
            r0.orientation(r1)     // Catch: java.lang.Throwable -> L7d
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = r1.getAppName()     // Catch: java.lang.Throwable -> L7d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L7d
            if (r2 != 0) goto L36
            r0.name(r1)     // Catch: java.lang.Throwable -> L7d
        L36:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7d
            r2 = 23
            if (r1 < r2) goto L4b
            android.security.NetworkSecurityPolicy r1 = android.security.NetworkSecurityPolicy.getInstance()     // Catch: java.lang.Throwable -> L7d
            boolean r1 = r1.isCleartextTrafficPermitted()     // Catch: java.lang.Throwable -> L7d
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L7d
        L48:
            r0.support_http = r1     // Catch: java.lang.Throwable -> L7d
            goto L51
        L4b:
            r1 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L7d
            goto L48
        L51:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = r1.getAppVersion()     // Catch: java.lang.Throwable -> L7d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L7d
            if (r2 != 0) goto L6d
            com.czhj.sdk.common.models.Version$Builder r2 = createVersion(r1)     // Catch: java.lang.Throwable -> L7d
            r2.version_str(r1)     // Catch: java.lang.Throwable -> L7d
            com.czhj.sdk.common.models.Version r1 = r2.build()     // Catch: java.lang.Throwable -> L7d
            r0.app_version(r1)     // Catch: java.lang.Throwable -> L7d
        L6d:
            java.lang.String r1 = "android"
            r0.idfv(r1)     // Catch: java.lang.Throwable -> L7d
            java.util.List<java.lang.Integer> r1 = r0.sdk_ext_cap     // Catch: java.lang.Throwable -> L7d
            r2 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L7d
            r1.add(r2)     // Catch: java.lang.Throwable -> L7d
            goto L83
        L7d:
            r1 = move-exception
            java.lang.String r2 = "App Builder failed"
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)
        L83:
            return r0
    }

    public static com.czhj.sdk.common.models.Device.Builder createDevice() {
            com.czhj.sdk.common.models.Device$Builder r0 = new com.czhj.sdk.common.models.Device$Builder
            r0.<init>()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            boolean r1 = r1.isTablet()
            if (r1 == 0) goto L11
            r1 = 5
            goto L12
        L11:
            r1 = 4
        L12:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.device_type(r1)
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.os_type(r1)
            com.czhj.sdk.common.models.Size$Builder r1 = new com.czhj.sdk.common.models.Size$Builder     // Catch: java.lang.Throwable -> L186
            r1.<init>()     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            android.util.DisplayMetrics r2 = r2.getRealMetrics()     // Catch: java.lang.Throwable -> L186
            int r2 = r2.heightPixels     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L186
            r1.height = r2     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            android.util.DisplayMetrics r2 = r2.getRealMetrics()     // Catch: java.lang.Throwable -> L186
            int r2 = r2.widthPixels     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L186
            r1.width = r2     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Size r1 = r1.build()     // Catch: java.lang.Throwable -> L186
            r0.resolution(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.Float r1 = r1.getBatteryLevel()     // Catch: java.lang.Throwable -> L186
            r0.battery_level(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r1 = r1.getBatteryState()     // Catch: java.lang.Throwable -> L186
            r0.battery_state(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.Boolean r1 = r1.getBatterySaveEnable()     // Catch: java.lang.Throwable -> L186
            r0.battery_save_enabled(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            int r1 = r1.getDensityDpi()     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L186
            r0.dpi(r1)     // Catch: java.lang.Throwable -> L186
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.getDeviceOsVersion()     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Version$Builder r1 = createVersion(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Version r1 = r1.build()     // Catch: java.lang.Throwable -> L186
            r0.os_version(r1)     // Catch: java.lang.Throwable -> L186
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.getDeviceManufacturer()     // Catch: java.lang.Throwable -> L186
            r0.vendor(r1)     // Catch: java.lang.Throwable -> L186
            boolean r1 = com.czhj.sdk.common.ClientMetadata.isRoot()     // Catch: java.lang.Throwable -> L186
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L186
            r0.is_root(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Size$Builder r1 = new com.czhj.sdk.common.models.Size$Builder     // Catch: java.lang.Throwable -> L186
            r1.<init>()     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r2 = r2.getDeviceScreenHeightDip()     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Size$Builder r1 = r1.height(r2)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r2 = r2.getDeviceScreenWidthDip()     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Size$Builder r1 = r1.width(r2)     // Catch: java.lang.Throwable -> L186
            java.lang.String r2 = com.czhj.sdk.common.ClientMetadata.getDeviceModel()     // Catch: java.lang.Throwable -> L186
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L186
            if (r2 != 0) goto Lcc
            java.lang.String r2 = com.czhj.sdk.common.ClientMetadata.getDeviceModel()     // Catch: java.lang.Throwable -> L186
            r0.model(r2)     // Catch: java.lang.Throwable -> L186
        Lcc:
            com.czhj.sdk.common.models.Size r1 = r1.build()     // Catch: java.lang.Throwable -> L186
            r0.screen_size(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Geo$Builder r1 = createGeo()     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.models.Geo r1 = r1.build()     // Catch: java.lang.Throwable -> L186
            r0.geo(r1)     // Catch: java.lang.Throwable -> L186
            java.io.File r1 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L186
            long r1 = r1.getTotalSpace()     // Catch: java.lang.Throwable -> L186
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L186
            r0.disk_size(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.String r1 = r1.getDeviceName()     // Catch: java.lang.Throwable -> L186
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L186
            if (r2 != 0) goto Lfe
            r0.device_name(r1)     // Catch: java.lang.Throwable -> L186
        Lfe:
            java.lang.Long r1 = com.czhj.sdk.common.ClientMetadata.getBootSystemTime()     // Catch: java.lang.Throwable -> L186
            r0.start_timestamp(r1)     // Catch: java.lang.Throwable -> L186
            java.lang.Integer r1 = com.czhj.sdk.common.ClientMetadata.getDeviceOSLevel()     // Catch: java.lang.Throwable -> L186
            r0.android_api_level(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.Long r1 = r1.getSystemTotalMemorySize()     // Catch: java.lang.Throwable -> L186
            r0.mem_size(r1)     // Catch: java.lang.Throwable -> L186
            java.io.File r1 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L186
            long r1 = r1.getTotalSpace()     // Catch: java.lang.Throwable -> L186
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L186
            r0.total_disk_size(r1)     // Catch: java.lang.Throwable -> L186
            java.io.File r1 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L186
            long r1 = r1.getFreeSpace()     // Catch: java.lang.Throwable -> L186
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L186
            r0.free_disk_size(r1)     // Catch: java.lang.Throwable -> L186
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.String r1 = r1.getSDCardPath()     // Catch: java.lang.Throwable -> L186
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L186
            if (r2 != 0) goto L163
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L186
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L186
            long r2 = r2.getTotalSpace()     // Catch: java.lang.Throwable -> L186
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L186
            r0.sd_total_disk_size(r2)     // Catch: java.lang.Throwable -> L186
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L186
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L186
            long r1 = r2.getFreeSpace()     // Catch: java.lang.Throwable -> L186
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L186
            r0.sd_free_disk_size(r1)     // Catch: java.lang.Throwable -> L186
        L163:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.String r1 = r1.getBootId()     // Catch: java.lang.Throwable -> L186
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L186
            if (r2 != 0) goto L174
            r0.boot_mark(r1)     // Catch: java.lang.Throwable -> L186
        L174:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L186
            java.lang.String r1 = r1.getUpdateId()     // Catch: java.lang.Throwable -> L186
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L186
            if (r2 != 0) goto L18c
            r0.update_mark(r1)     // Catch: java.lang.Throwable -> L186
            goto L18c
        L186:
            r1 = move-exception
            java.lang.String r2 = "Device Builder failed"
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)
        L18c:
            return r0
    }

    public static com.czhj.sdk.common.models.DeviceId.Builder createDeviceId() {
            com.czhj.sdk.common.models.DeviceId$Builder r0 = new com.czhj.sdk.common.models.DeviceId$Builder
            r0.<init>()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getAndroidId()     // Catch: java.lang.Throwable -> L14d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r2 != 0) goto L19
            r0.android_id(r1)     // Catch: java.lang.Throwable -> L14d
            r0.udid(r1)     // Catch: java.lang.Throwable -> L14d
        L19:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getAdvertisingId()     // Catch: java.lang.Throwable -> L14d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r2 != 0) goto L2a
            r0.gaid(r1)     // Catch: java.lang.Throwable -> L14d
        L2a:
            com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.getUid()     // Catch: java.lang.Throwable -> L14d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r2 != 0) goto L3a
            r0.uid(r1)     // Catch: java.lang.Throwable -> L14d
        L3a:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getDeviceId()     // Catch: java.lang.Throwable -> L14d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r2 != 0) goto L4b
            r0.imei(r1)     // Catch: java.lang.Throwable -> L14d
        L4b:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getDeviceSerial()     // Catch: java.lang.Throwable -> L14d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r2 != 0) goto L5c
            r0.android_uuid(r1)     // Catch: java.lang.Throwable -> L14d
        L5c:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getIMSI()     // Catch: java.lang.Throwable -> L14d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r2 != 0) goto L6d
            r0.imsi(r1)     // Catch: java.lang.Throwable -> L14d
        L6d:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            r2 = 0
            java.lang.String r1 = r1.getDeviceId(r2)     // Catch: java.lang.Throwable -> L14d
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r3 != 0) goto L7f
            r0.imei1(r1)     // Catch: java.lang.Throwable -> L14d
        L7f:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            r3 = 1
            java.lang.String r1 = r1.getDeviceId(r3)     // Catch: java.lang.Throwable -> L14d
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r4 != 0) goto L91
            r0.imei2(r1)     // Catch: java.lang.Throwable -> L14d
        L91:
            com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.getDeviceBrand()     // Catch: java.lang.Throwable -> L14d
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L14d
            if (r4 != 0) goto La1
            r0.brand(r1)     // Catch: java.lang.Throwable -> L14d
        La1:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r1 = r1.getOAID()     // Catch: java.lang.Throwable -> Lb3
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lb3
            if (r4 != 0) goto Lcc
            r0.oaid(r1)     // Catch: java.lang.Throwable -> Lb3
            goto Lcc
        Lb3:
            r1 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14d
            r4.<init>()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r5 = "getOAID "
            r4.append(r5)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L14d
            r4.append(r1)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L14d
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L14d
        Lcc:
            com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.getVAID()     // Catch: java.lang.Throwable -> Ldd
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Ldd
            if (r4 != 0) goto Lf6
            r0.vaid(r1)     // Catch: java.lang.Throwable -> Ldd
            goto Lf6
        Ldd:
            r1 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14d
            r4.<init>()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r5 = "getVAID "
            r4.append(r5)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L14d
            r4.append(r1)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L14d
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L14d
        Lf6:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L133
            com.czhj.sdk.common.CustomController r1 = r1.getCustomController()     // Catch: java.lang.Throwable -> L133
            if (r1 == 0) goto L153
            boolean r4 = r1.isCanUsePhoneState()     // Catch: java.lang.Throwable -> L133
            if (r4 != 0) goto L108
            r4 = r3
            goto L109
        L108:
            r4 = r2
        L109:
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L133
            r0.is_custom_imei(r4)     // Catch: java.lang.Throwable -> L133
            java.lang.String r4 = r1.getDevOaid()     // Catch: java.lang.Throwable -> L133
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L133
            if (r4 != 0) goto L11c
            r4 = r3
            goto L11d
        L11c:
            r4 = r2
        L11d:
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L133
            r0.is_custom_oaid(r4)     // Catch: java.lang.Throwable -> L133
            boolean r1 = r1.isCanUseAndroidId()     // Catch: java.lang.Throwable -> L133
            if (r1 != 0) goto L12b
            r2 = r3
        L12b:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> L133
            r0.is_custom_android_id(r1)     // Catch: java.lang.Throwable -> L133
            goto L153
        L133:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14d
            r2.<init>()     // Catch: java.lang.Throwable -> L14d
            java.lang.String r3 = "getCustomController "
            r2.append(r3)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L14d
            r2.append(r1)     // Catch: java.lang.Throwable -> L14d
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L14d
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L14d
            goto L153
        L14d:
            r1 = move-exception
            java.lang.String r2 = "DeviceId Builder failed"
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)
        L153:
            return r0
    }

    public static com.czhj.sdk.common.models.Geo.Builder createGeo() {
            com.czhj.sdk.common.models.Geo$Builder r0 = new com.czhj.sdk.common.models.Geo$Builder
            r0.<init>()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L72
            java.util.Locale r1 = r1.getDeviceLocale()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.getCountry()     // Catch: java.lang.Throwable -> L72
            r0.country(r1)     // Catch: java.lang.Throwable -> L72
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L72
            java.util.Locale r1 = r1.getDeviceLocale()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.getLanguage()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.toUpperCase()     // Catch: java.lang.Throwable -> L72
            r0.language(r1)     // Catch: java.lang.Throwable -> L72
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L72
            android.location.Location r1 = r1.getLocation()     // Catch: java.lang.Throwable -> L72
            if (r1 == 0) goto L66
            double r2 = r1.getLatitude()     // Catch: java.lang.Throwable -> L72
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L72
            java.lang.Float r2 = java.lang.Float.valueOf(r2)     // Catch: java.lang.Throwable -> L72
            r0.lat(r2)     // Catch: java.lang.Throwable -> L72
            double r2 = r1.getLongitude()     // Catch: java.lang.Throwable -> L72
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L72
            java.lang.Float r2 = java.lang.Float.valueOf(r2)     // Catch: java.lang.Throwable -> L72
            r0.lon(r2)     // Catch: java.lang.Throwable -> L72
            boolean r2 = r1.hasAccuracy()     // Catch: java.lang.Throwable -> L72
            if (r2 == 0) goto L5c
            float r1 = r1.getAccuracy()     // Catch: java.lang.Throwable -> L72
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L72
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Throwable -> L72
        L58:
            r0.accuracy(r1)     // Catch: java.lang.Throwable -> L72
            goto L66
        L5c:
            r1 = 4647503709213818880(0x407f400000000000, double:500.0)
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Throwable -> L72
            goto L58
        L66:
            java.util.TimeZone r1 = java.util.TimeZone.getDefault()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.getID()     // Catch: java.lang.Throwable -> L72
            r0.timeZone(r1)     // Catch: java.lang.Throwable -> L72
            goto L78
        L72:
            r1 = move-exception
            java.lang.String r2 = "Geo Builder failed"
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)
        L78:
            return r0
    }

    public static com.czhj.sdk.common.models.Network.Builder createNetwork() {
            com.czhj.sdk.common.models.Network$Builder r0 = new com.czhj.sdk.common.models.Network$Builder
            r0.<init>()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            int r1 = r1.getActiveNetworkType()     // Catch: java.lang.Throwable -> L85
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L85
            r0.connection_type(r1)     // Catch: java.lang.Throwable -> L85
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = r1.getNetworkOperatorForUrl()     // Catch: java.lang.Throwable -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L85
            if (r2 != 0) goto L25
            r0.operator(r1)     // Catch: java.lang.Throwable -> L85
        L25:
            java.lang.String r1 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L85
            if (r2 != 0) goto L32
            r0.ua(r1)     // Catch: java.lang.Throwable -> L85
        L32:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            int r1 = r1.getActiveNetworkType()     // Catch: java.lang.Throwable -> L85
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L85
            r0.connection_type(r1)     // Catch: java.lang.Throwable -> L85
            com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.getMacAddress()     // Catch: java.lang.Throwable -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L85
            if (r2 != 0) goto L51
            r0.mac(r1)     // Catch: java.lang.Throwable -> L85
        L51:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = r1.getWifimac()     // Catch: java.lang.Throwable -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L85
            if (r2 != 0) goto L62
            r0.wifi_mac(r1)     // Catch: java.lang.Throwable -> L85
        L62:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = r1.getWifiName()     // Catch: java.lang.Throwable -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L85
            if (r2 != 0) goto L73
            r0.wifi_id(r1)     // Catch: java.lang.Throwable -> L85
        L73:
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = r1.getNetworkOperatorName()     // Catch: java.lang.Throwable -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L85
            if (r2 != 0) goto L8b
            r0.carrier_name(r1)     // Catch: java.lang.Throwable -> L85
            goto L8b
        L85:
            r1 = move-exception
            java.lang.String r2 = "Network Builder failed"
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)
        L8b:
            return r0
    }

    private static com.czhj.sdk.common.models.Version.Builder createVersion(int r1, int r2, int r3) {
            com.czhj.sdk.common.models.Version$Builder r0 = new com.czhj.sdk.common.models.Version$Builder
            r0.<init>()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.major(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            r0.micro(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            r0.minor(r1)
            return r0
    }

    public static com.czhj.sdk.common.models.Version.Builder createVersion(java.lang.String r4) {
            java.lang.String r0 = "\\."
            java.lang.String[] r4 = r4.split(r0)
            r0 = 0
            int r1 = r4.length     // Catch: java.lang.Throwable -> L3f
            r2 = 2
            r3 = 1
            if (r1 <= r2) goto L1f
            r1 = r4[r0]     // Catch: java.lang.Throwable -> L3f
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L3f
            r3 = r4[r3]     // Catch: java.lang.Throwable -> L3f
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L3f
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L3f
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L3f
            goto L30
        L1f:
            int r1 = r4.length     // Catch: java.lang.Throwable -> L3f
            if (r1 <= r3) goto L32
            r1 = r4[r0]     // Catch: java.lang.Throwable -> L3f
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L3f
            r4 = r4[r3]     // Catch: java.lang.Throwable -> L3f
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L3f
            r3 = r4
            r4 = r0
        L30:
            r0 = r1
            goto L41
        L32:
            int r1 = r4.length     // Catch: java.lang.Throwable -> L3f
            if (r1 <= 0) goto L3f
            r4 = r4[r0]     // Catch: java.lang.Throwable -> L3f
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L3f
            r3 = r0
            r0 = r4
            r4 = r3
            goto L41
        L3f:
            r4 = r0
            r3 = r4
        L41:
            com.czhj.sdk.common.models.Version$Builder r4 = createVersion(r0, r4, r3)
            return r4
    }

    public static com.czhj.sdk.common.models.WXProgramReq.Builder createWXProgramReq() {
            com.czhj.sdk.common.models.WXProgramReq$Builder r0 = new com.czhj.sdk.common.models.WXProgramReq$Builder
            r0.<init>()
            java.lang.String r1 = "com.tencent.mm.opensdk.openapi.WXAPIFactory"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = "createWXAPI"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L9b
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L9b
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L9b
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L9b
            r2.setAccessible(r7)     // Catch: java.lang.Throwable -> L9b
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L9b
            com.czhj.sdk.common.ClientMetadata r4 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L9b
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Throwable -> L9b
            r3[r6] = r4     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = ""
            r3[r7] = r4     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = "isWXAppInstalled"
            java.lang.Class[] r4 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L9b
            java.lang.reflect.Method r2 = r2.getMethod(r3, r4)     // Catch: java.lang.Throwable -> L9b
            r2.setAccessible(r7)     // Catch: java.lang.Throwable -> L9b
            java.lang.Object[] r3 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r2 = r2.invoke(r1, r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Throwable -> L9b
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Throwable -> L9b
            java.lang.Class r3 = r1.getClass()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = "getWXAppSupportAPI"
            java.lang.Class[] r5 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L9b
            java.lang.reflect.Method r3 = r3.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L9b
            r3.setAccessible(r7)     // Catch: java.lang.Throwable -> L9b
            java.lang.Object[] r4 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r1 = r3.invoke(r1, r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L9b
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = "com.tencent.mm.opensdk.constants.Build"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = "SDK_INT"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L9b
            r3.setAccessible(r7)     // Catch: java.lang.Throwable -> L9b
            r4 = 0
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L9b
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L9b
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> L9b
            r0.wx_installed(r2)     // Catch: java.lang.Throwable -> L9b
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L9b
            r0.wx_api_ver(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L9b
            r0.opensdk_ver(r1)     // Catch: java.lang.Throwable -> L9b
            goto L9f
        L9b:
            r1 = move-exception
            r1.printStackTrace()
        L9f:
            return r0
    }
}
