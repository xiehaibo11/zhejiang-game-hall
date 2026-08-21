package com.czhj.sdk.common.models;

import android.content.Context;
import android.location.Location;
import android.os.Build;
import android.os.Environment;
import android.security.NetworkSecurityPolicy;
import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.CustomController;
import com.czhj.sdk.common.models.AdSlot;
import com.czhj.sdk.common.models.App;
import com.czhj.sdk.common.models.Device;
import com.czhj.sdk.common.models.DeviceId;
import com.czhj.sdk.common.models.Geo;
import com.czhj.sdk.common.models.Network;
import com.czhj.sdk.common.models.Size;
import com.czhj.sdk.common.models.Version;
import com.czhj.sdk.common.models.WXProgramReq;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.logger.SigmobLog;
import java.io.File;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes.dex */
public class ModelBuilderCreator {
    public static AdSlot.Builder createAdSlot() {
        return new AdSlot.Builder();
    }

    public static App.Builder createApp() {
        App.Builder builder = new App.Builder();
        try {
            if (ClientMetadata.getInstance().getAppPackageName() != null) {
                builder.app_package(ClientMetadata.getInstance().getAppPackageName());
            }
            builder.orientation(ClientMetadata.getInstance().getOrientationInt());
            String appName = ClientMetadata.getInstance().getAppName();
            if (!TextUtils.isEmpty(appName)) {
                builder.name(appName);
            }
            builder.support_http = Build.VERSION.SDK_INT >= 23 ? Boolean.valueOf(NetworkSecurityPolicy.getInstance().isCleartextTrafficPermitted()) : true;
            String appVersion = ClientMetadata.getInstance().getAppVersion();
            if (!TextUtils.isEmpty(appVersion)) {
                Version.Builder builderCreateVersion = createVersion(appVersion);
                builderCreateVersion.version_str(appVersion);
                builder.app_version(builderCreateVersion.build());
            }
            builder.idfv("android");
            builder.sdk_ext_cap.add(3);
        } catch (Throwable th) {
            SigmobLog.e("App Builder failed", th);
        }
        return builder;
    }

    public static Device.Builder createDevice() {
        Device.Builder builder = new Device.Builder();
        builder.device_type(Integer.valueOf(ClientMetadata.getInstance().isTablet() ? 5 : 4));
        builder.os_type(2);
        try {
            Size.Builder builder2 = new Size.Builder();
            builder2.height = Integer.valueOf(ClientMetadata.getInstance().getRealMetrics().heightPixels);
            builder2.width = Integer.valueOf(ClientMetadata.getInstance().getRealMetrics().widthPixels);
            builder.resolution(builder2.build());
            builder.battery_level(ClientMetadata.getInstance().getBatteryLevel());
            builder.battery_state(ClientMetadata.getInstance().getBatteryState());
            builder.battery_save_enabled(ClientMetadata.getInstance().getBatterySaveEnable());
            builder.dpi(Integer.valueOf(ClientMetadata.getInstance().getDensityDpi()));
            builder.os_version(createVersion(ClientMetadata.getDeviceOsVersion()).build());
            builder.vendor(ClientMetadata.getDeviceManufacturer());
            builder.is_root(Boolean.valueOf(ClientMetadata.isRoot()));
            Size.Builder builderWidth = new Size.Builder().height(ClientMetadata.getInstance().getDeviceScreenHeightDip()).width(ClientMetadata.getInstance().getDeviceScreenWidthDip());
            if (!TextUtils.isEmpty(ClientMetadata.getDeviceModel())) {
                builder.model(ClientMetadata.getDeviceModel());
            }
            builder.screen_size(builderWidth.build());
            builder.geo(createGeo().build());
            builder.disk_size(Long.valueOf(Environment.getDataDirectory().getTotalSpace()));
            String deviceName = ClientMetadata.getInstance().getDeviceName();
            if (!TextUtils.isEmpty(deviceName)) {
                builder.device_name(deviceName);
            }
            builder.start_timestamp(ClientMetadata.getBootSystemTime());
            builder.android_api_level(ClientMetadata.getDeviceOSLevel());
            builder.mem_size(ClientMetadata.getInstance().getSystemTotalMemorySize());
            builder.total_disk_size(Long.valueOf(Environment.getDataDirectory().getTotalSpace()));
            builder.free_disk_size(Long.valueOf(Environment.getDataDirectory().getFreeSpace()));
            String sDCardPath = ClientMetadata.getInstance().getSDCardPath();
            if (!TextUtils.isEmpty(sDCardPath)) {
                builder.sd_total_disk_size(Long.valueOf(new File(sDCardPath).getTotalSpace()));
                builder.sd_free_disk_size(Long.valueOf(new File(sDCardPath).getFreeSpace()));
            }
            String bootId = ClientMetadata.getInstance().getBootId();
            if (!TextUtils.isEmpty(bootId)) {
                builder.boot_mark(bootId);
            }
            String updateId = ClientMetadata.getInstance().getUpdateId();
            if (!TextUtils.isEmpty(updateId)) {
                builder.update_mark(updateId);
            }
        } catch (Throwable th) {
            SigmobLog.e("Device Builder failed", th);
        }
        return builder;
    }

    public static DeviceId.Builder createDeviceId() {
        DeviceId.Builder builder = new DeviceId.Builder();
        try {
            String androidId = ClientMetadata.getInstance().getAndroidId();
            if (!TextUtils.isEmpty(androidId)) {
                builder.android_id(androidId);
                builder.udid(androidId);
            }
            String advertisingId = ClientMetadata.getInstance().getAdvertisingId();
            if (!TextUtils.isEmpty(advertisingId)) {
                builder.gaid(advertisingId);
            }
            ClientMetadata.getInstance();
            String uid = ClientMetadata.getUid();
            if (!TextUtils.isEmpty(uid)) {
                builder.uid(uid);
            }
            String deviceId = ClientMetadata.getInstance().getDeviceId();
            if (!TextUtils.isEmpty(deviceId)) {
                builder.imei(deviceId);
            }
            String deviceSerial = ClientMetadata.getInstance().getDeviceSerial();
            if (!TextUtils.isEmpty(deviceSerial)) {
                builder.android_uuid(deviceSerial);
            }
            String imsi = ClientMetadata.getInstance().getIMSI();
            if (!TextUtils.isEmpty(imsi)) {
                builder.imsi(imsi);
            }
            String deviceId2 = ClientMetadata.getInstance().getDeviceId(0);
            if (!TextUtils.isEmpty(deviceId2)) {
                builder.imei1(deviceId2);
            }
            String deviceId3 = ClientMetadata.getInstance().getDeviceId(1);
            if (!TextUtils.isEmpty(deviceId3)) {
                builder.imei2(deviceId3);
            }
            ClientMetadata.getInstance();
            String deviceBrand = ClientMetadata.getDeviceBrand();
            if (!TextUtils.isEmpty(deviceBrand)) {
                builder.brand(deviceBrand);
            }
            try {
                String oaid = ClientMetadata.getInstance().getOAID();
                if (!TextUtils.isEmpty(oaid)) {
                    builder.oaid(oaid);
                }
            } catch (Throwable th) {
                SigmobLog.e("getOAID " + th.getMessage());
            }
            try {
                ClientMetadata.getInstance();
                String vaid = ClientMetadata.getVAID();
                if (!TextUtils.isEmpty(vaid)) {
                    builder.vaid(vaid);
                }
            } catch (Throwable th2) {
                SigmobLog.e("getVAID " + th2.getMessage());
            }
            try {
                CustomController customController = ClientMetadata.getInstance().getCustomController();
                if (customController != null) {
                    builder.is_custom_imei(Boolean.valueOf(!customController.isCanUsePhoneState()));
                    builder.is_custom_oaid(Boolean.valueOf(!TextUtils.isEmpty(customController.getDevOaid())));
                    builder.is_custom_android_id(Boolean.valueOf(customController.isCanUseAndroidId() ? false : true));
                }
            } catch (Throwable th3) {
                SigmobLog.e("getCustomController " + th3.getMessage());
            }
        } catch (Throwable th4) {
            SigmobLog.e("DeviceId Builder failed", th4);
        }
        return builder;
    }

    public static Geo.Builder createGeo() {
        Geo.Builder builder = new Geo.Builder();
        try {
            builder.country(ClientMetadata.getInstance().getDeviceLocale().getCountry());
            builder.language(ClientMetadata.getInstance().getDeviceLocale().getLanguage().toUpperCase());
            Location location = ClientMetadata.getInstance().getLocation();
            if (location != null) {
                builder.lat(Float.valueOf((float) location.getLatitude()));
                builder.lon(Float.valueOf((float) location.getLongitude()));
                builder.accuracy(location.hasAccuracy() ? Double.valueOf(location.getAccuracy()) : Double.valueOf(500.0d));
            }
            builder.timeZone(TimeZone.getDefault().getID());
        } catch (Throwable th) {
            SigmobLog.e("Geo Builder failed", th);
        }
        return builder;
    }

    public static Network.Builder createNetwork() {
        Network.Builder builder = new Network.Builder();
        try {
            builder.connection_type(Integer.valueOf(ClientMetadata.getInstance().getActiveNetworkType()));
            String networkOperatorForUrl = ClientMetadata.getInstance().getNetworkOperatorForUrl();
            if (!TextUtils.isEmpty(networkOperatorForUrl)) {
                builder.operator(networkOperatorForUrl);
            }
            String userAgent = Networking.getUserAgent();
            if (!TextUtils.isEmpty(userAgent)) {
                builder.ua(userAgent);
            }
            builder.connection_type(Integer.valueOf(ClientMetadata.getInstance().getActiveNetworkType()));
            ClientMetadata.getInstance();
            String macAddress = ClientMetadata.getMacAddress();
            if (!TextUtils.isEmpty(macAddress)) {
                builder.mac(macAddress);
            }
            String wifimac = ClientMetadata.getInstance().getWifimac();
            if (!TextUtils.isEmpty(wifimac)) {
                builder.wifi_mac(wifimac);
            }
            String wifiName = ClientMetadata.getInstance().getWifiName();
            if (!TextUtils.isEmpty(wifiName)) {
                builder.wifi_id(wifiName);
            }
            String networkOperatorName = ClientMetadata.getInstance().getNetworkOperatorName();
            if (!TextUtils.isEmpty(networkOperatorName)) {
                builder.carrier_name(networkOperatorName);
            }
        } catch (Throwable th) {
            SigmobLog.e("Network Builder failed", th);
        }
        return builder;
    }

    private static Version.Builder createVersion(int i, int i2, int i3) {
        Version.Builder builder = new Version.Builder();
        builder.major(Integer.valueOf(i));
        builder.micro(Integer.valueOf(i2));
        builder.minor(Integer.valueOf(i3));
        return builder;
    }

    public static Version.Builder createVersion(String str) {
        int i;
        int i2;
        int i3;
        String[] strArrSplit = str.split("\\.");
        int i4 = 0;
        if (strArrSplit.length > 2) {
            i3 = Integer.parseInt(strArrSplit[0]);
            i2 = Integer.parseInt(strArrSplit[1]);
            i = Integer.parseInt(strArrSplit[2]);
        } else {
            if (strArrSplit.length <= 1) {
                if (strArrSplit.length > 0) {
                    i2 = 0;
                    i4 = Integer.parseInt(strArrSplit[0]);
                    i = 0;
                } else {
                    i = 0;
                    i2 = 0;
                }
                return createVersion(i4, i, i2);
            }
            i3 = Integer.parseInt(strArrSplit[0]);
            i2 = Integer.parseInt(strArrSplit[1]);
            i = 0;
        }
        i4 = i3;
        return createVersion(i4, i, i2);
    }

    public static WXProgramReq.Builder createWXProgramReq() {
        WXProgramReq.Builder builder = new WXProgramReq.Builder();
        try {
            Class<?> cls = Class.forName("com.tencent.mm.opensdk.openapi.WXAPIFactory");
            Method method = cls.getMethod("createWXAPI", Context.class, String.class);
            method.setAccessible(true);
            Object objInvoke = method.invoke(cls, ClientMetadata.getInstance().getContext(), "");
            Method method2 = objInvoke.getClass().getMethod("isWXAppInstalled", new Class[0]);
            method2.setAccessible(true);
            boolean zBooleanValue = ((Boolean) method2.invoke(objInvoke, new Object[0])).booleanValue();
            Method method3 = objInvoke.getClass().getMethod("getWXAppSupportAPI", new Class[0]);
            method3.setAccessible(true);
            int iIntValue = ((Integer) method3.invoke(objInvoke, new Object[0])).intValue();
            Field declaredField = Class.forName("com.tencent.mm.opensdk.constants.Build").getDeclaredField("SDK_INT");
            declaredField.setAccessible(true);
            int iIntValue2 = ((Integer) declaredField.get(null)).intValue();
            builder.wx_installed(Boolean.valueOf(zBooleanValue));
            builder.wx_api_ver(Integer.valueOf(iIntValue));
            builder.opensdk_ver(String.valueOf(iIntValue2));
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return builder;
    }
}
