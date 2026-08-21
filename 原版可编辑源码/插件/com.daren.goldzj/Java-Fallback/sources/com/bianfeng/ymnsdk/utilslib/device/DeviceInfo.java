package com.bianfeng.ymnsdk.utilslib.device;

import android.content.Context;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.util.Enumeration;
import java.util.UUID;

public class DeviceInfo {
    private static volatile DeviceInfo deviceInfo;
    private int appMemory;
    private int appUsedMemory;
    private int availRamMemory;
    private int availRomMemory;
    private String carrier;
    private String clientIp;
    private String devcieid;
    private DeviceID deviceID;
    private String devicePixel;
    private Context mContext;
    private UtilsMemoryInfo memoryInfo;
    private int totalRamMemory;
    private int totalRomMemory;

    public String getDevcieidWithH() {
        return "";
    }

    public String getDeviceOS() {
        return "android";
    }

    public String getImei() {
        return null;
    }

    public String getMac() {
        return null;
    }

    private DeviceInfo() {
        this.devcieid = null;
    }

    public static DeviceInfo getInstance() {
        if (deviceInfo != null) goto L15;
        monitor-enter(DeviceInfo.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (deviceInfo != null) goto L9;
        deviceInfo = new DeviceInfo();     // Catch: Throwable -> L11
    L9:
        monitor-exit(DeviceInfo.class);     // Catch: Throwable -> L11
    L15:
        return deviceInfo;
    }

    public String getManufactory() {
        return Build.MANUFACTURER;
    }

    public String getOsVersion() {
        return "Android+" + Build.VERSION.RELEASE;
    }

    public String getDeviceVersionCode() {
        return String.valueOf(Build.VERSION.SDK_INT);
    }

    public String getDeviceModel() {
        return Build.MODEL;
    }

    public String getCarrier() {
        return this.carrier;
    }

    public String getDevicePixel() {
        return this.devicePixel;
    }

    public String getClientIp() {
        if (TextUtils.isEmpty(this.clientIp) == false) goto L6;
        initClientIp();
    L6:
        return this.clientIp;
    }

    public String getDeviceId() {
        initDevcieId();
        return this.devcieid;
    }

    public String getAndroidId() {
        DeviceID r0 = this.deviceID;
        if (r0 != null) goto L5;
        this.deviceID = new DeviceID(this.mContext);
        return this.deviceID.getAndroidId();
    L5:
        return r0.getAndroidId();
    }

    public void init(Context r2) {
        this.mContext = r2;
        this.deviceID = new DeviceID(r2);
        this.memoryInfo = new UtilsMemoryInfo(r2);
        this.totalRamMemory = this.memoryInfo.getRamTotalMem();
        this.totalRomMemory = this.memoryInfo.getRomTotalMem();
        this.availRamMemory = this.memoryInfo.getRamAvailMem();
        this.availRomMemory = this.memoryInfo.getRomAvailMem();
        this.appMemory = this.memoryInfo.getAppMem();
        this.appUsedMemory = this.memoryInfo.getAppUsedMem();
        initDevicePixel(r2);
        initCarrier(r2);
    }

    public void initDevcieId() {
        if (this.deviceID != null) goto L5;
        return;
    L5:
        if (TextUtils.isEmpty(this.devcieid) == false) goto L9;
        this.devcieid = this.deviceID.getDevcieId();
        return;
    }

    public String getNetChannelStr() {
        return IntenetUtil.getNetworkState(this.mContext);
    L4:
        return "";
    }

    private void initClientIp() {
        if (SharedPreferencesUtils.isAgreeprivacy() == true) goto L23;
        this.clientIp = EnvironmentCompat.MEDIA_UNKNOWN;
        return;
    L23:
        Enumeration<NetworkInterface> r0 = NetworkInterface.getNetworkInterfaces();     // Catch: SocketException -> L20
        if (r0 != null) goto L11;
        this.clientIp = EnvironmentCompat.MEDIA_UNKNOWN;     // Catch: SocketException -> L20
        return;
    L11:
        if (r0.hasMoreElements() == false) goto L31;
        Enumeration<InetAddress> r2 = r0.nextElement().getInetAddresses();     // Catch: SocketException -> L20
    L14:
        if (r2.hasMoreElements() == false) goto L11;
        InetAddress r3 = r2.nextElement();     // Catch: SocketException -> L20
        if (r3.isLoopbackAddress() == true) goto L14;
        this.clientIp = r3.getHostAddress();     // Catch: SocketException -> L20
        goto L14
    L31:
        return;
    L20:
        e = move-exception;
        e.printStackTrace();
        this.clientIp = EnvironmentCompat.MEDIA_UNKNOWN;
    }

    private String initCarrier(Context r2) {
        this.carrier = ((TelephonyManager) r2.getSystemService("phone")).getNetworkOperatorName();     // Catch: Exception -> L4
    L6:
        return this.carrier;
    L4:
        this.carrier = EnvironmentCompat.MEDIA_UNKNOWN;
        goto L6
    }

    public void initDevicePixel(Context r4) {
        DisplayMetrics r42 = r4.getResources().getDisplayMetrics();
        this.devicePixel = r42.widthPixels + "*" + r42.heightPixels + "*" + r42.densityDpi;
    }

    public int getRamAvailMem() {
        UtilsMemoryInfo r0 = this.memoryInfo;
        if (r0 != null) goto L5;
        this.memoryInfo = new UtilsMemoryInfo(this.mContext);
        return this.memoryInfo.getRamAvailMem();
    L5:
        return r0.getRamAvailMem();
    }

    public int getRomAvailMem() {
        UtilsMemoryInfo r0 = this.memoryInfo;
        if (r0 != null) goto L5;
        this.memoryInfo = new UtilsMemoryInfo(this.mContext);
        return this.memoryInfo.getRomAvailMem();
    L5:
        return r0.getRomAvailMem();
    }

    public int getTotalRamMemory() {
        return this.totalRamMemory;
    }

    public int getTotalRomMemory() {
        return this.totalRomMemory;
    }

    public int getAppMemory() {
        return this.appMemory;
    }

    public int getAppUsedMemory() {
        return this.appUsedMemory;
    }

    public String getDeviceName() {
        return Build.DEVICE;
    }

    public String getManufacturer() {
        return Build.MANUFACTURER;
    }

    public String getUuid() {
        return UUID.randomUUID().toString().replaceAll("-", "");
    }
}
