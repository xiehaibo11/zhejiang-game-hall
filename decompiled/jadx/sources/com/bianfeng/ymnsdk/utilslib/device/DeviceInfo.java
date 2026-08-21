package com.bianfeng.ymnsdk.utilslib.device;

import android.content.Context;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.xiaomi.mipush.sdk.Constants;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.util.Enumeration;
import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class DeviceInfo {
    private static volatile DeviceInfo deviceInfo;
    private int appMemory;
    private int appUsedMemory;
    private int availRamMemory;
    private int availRomMemory;
    private String carrier;
    private String clientIp;
    private String devcieid = null;
    private DeviceID deviceID;
    private String devicePixel;
    private Context mContext;
    private UtilsMemoryInfo memoryInfo;
    private int totalRamMemory;
    private int totalRomMemory;

    private DeviceInfo() {
    }

    public static DeviceInfo getInstance() {
        if (deviceInfo == null) {
            synchronized (DeviceInfo.class) {
                if (deviceInfo == null) {
                    deviceInfo = new DeviceInfo();
                }
            }
        }
        return deviceInfo;
    }

    public void setContext(Context context) {
        this.mContext = context;
    }

    public String getManufactory() {
        return Build.MANUFACTURER;
    }

    public String getOsVersion() {
        SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_os_version, "Android+" + Build.VERSION.RELEASE);
        return "Android+" + Build.VERSION.RELEASE;
    }

    public String getDeviceVersionCode() {
        return String.valueOf(Build.VERSION.SDK_INT);
    }

    public String getDeviceModel() {
        SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_model, Build.MODEL);
        return Build.MODEL;
    }

    public String getCarrier() {
        return this.carrier;
    }

    public String getDevicePixel() {
        return this.devicePixel;
    }

    public String getClientIp() {
        if (TextUtils.isEmpty(this.clientIp)) {
            initClientIp();
        }
        return this.clientIp;
    }

    public String getDeviceId() {
        initDevcieId();
        return this.devcieid;
    }

    public String getAndroidId() {
        DeviceID deviceID = this.deviceID;
        if (deviceID != null) {
            return deviceID.getAndroidId();
        }
        this.deviceID = new DeviceID(this.mContext);
        return this.deviceID.getAndroidId();
    }

    public String getImei() {
        return null;
    }

    public String getMac() {
        return null;
    }

    public void init(Context context) {
        this.mContext = context;
        this.deviceID = new DeviceID(context);
        this.memoryInfo = new UtilsMemoryInfo(context);
        this.totalRamMemory = this.memoryInfo.getRamTotalMem();
        this.totalRomMemory = this.memoryInfo.getRomTotalMem();
        this.availRamMemory = this.memoryInfo.getRamAvailMem();
        this.availRomMemory = this.memoryInfo.getRomAvailMem();
        this.appMemory = this.memoryInfo.getAppMem();
        this.appUsedMemory = this.memoryInfo.getAppUsedMem();
        initDevicePixel(context);
        initCarrier(context);
    }

    public void initDevcieId() {
        if (this.deviceID != null && TextUtils.isEmpty(this.devcieid)) {
            this.devcieid = this.deviceID.getDevcieId();
        }
    }

    public String getNetChannelStr() {
        try {
            return IntenetUtil.getNetworkState(this.mContext);
        } catch (Exception e) {
            return "";
        }
    }

    private void initClientIp() {
        if (!SharedPreferencesUtils.isAgreeprivacy()) {
            this.clientIp = EnvironmentCompat.MEDIA_UNKNOWN;
            return;
        }
        try {
            Enumeration<NetworkInterface> en = NetworkInterface.getNetworkInterfaces();
            if (en == null) {
                this.clientIp = EnvironmentCompat.MEDIA_UNKNOWN;
                return;
            }
            while (en.hasMoreElements()) {
                NetworkInterface netIface = en.nextElement();
                Enumeration<InetAddress> ipAddrs = netIface.getInetAddresses();
                while (ipAddrs.hasMoreElements()) {
                    InetAddress ip = ipAddrs.nextElement();
                    if (!ip.isLoopbackAddress()) {
                        this.clientIp = ip.getHostAddress();
                        SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_ip, this.clientIp);
                    }
                }
            }
        } catch (SocketException ex) {
            ex.printStackTrace();
            this.clientIp = EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    private String initCarrier(Context mContext) {
        try {
            TelephonyManager sTelManager = (TelephonyManager) mContext.getSystemService("phone");
            this.carrier = sTelManager.getNetworkOperatorName();
            if (this.carrier != null) {
                SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_isp, this.carrier);
            }
        } catch (Exception e) {
            this.carrier = EnvironmentCompat.MEDIA_UNKNOWN;
        }
        return this.carrier;
    }

    public void initDevicePixel(Context mContext) {
        DisplayMetrics display = mContext.getResources().getDisplayMetrics();
        this.devicePixel = display.widthPixels + "*" + display.heightPixels + "*" + display.densityDpi;
    }

    public String getDeviceOS() {
        return "android";
    }

    public String getDevcieidWithH() {
        return "";
    }

    public int getRamAvailMem() {
        UtilsMemoryInfo utilsMemoryInfo = this.memoryInfo;
        if (utilsMemoryInfo != null) {
            return utilsMemoryInfo.getRamAvailMem();
        }
        this.memoryInfo = new UtilsMemoryInfo(this.mContext);
        return this.memoryInfo.getRamAvailMem();
    }

    public int getRomAvailMem() {
        UtilsMemoryInfo utilsMemoryInfo = this.memoryInfo;
        if (utilsMemoryInfo != null) {
            return utilsMemoryInfo.getRomAvailMem();
        }
        this.memoryInfo = new UtilsMemoryInfo(this.mContext);
        return this.memoryInfo.getRomAvailMem();
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
        return UUID.randomUUID().toString().replaceAll(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
    }

    public String getUuidFormSP() {
        String uuid = SharedPreferencesUtils.getString("ymnutils_uuid");
        if ("" == uuid) {
            String uuid2 = UUID.randomUUID().toString().replaceAll(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
            try {
                SharedPreferencesUtils.put("ymnutils_uuid", uuid2);
                return uuid2;
            } catch (YmnException e) {
                throw new RuntimeException(e);
            }
        }
        return uuid;
    }
}
