package com.bianfeng.ymnsdk.ymndatalib.bean.base;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.bianfeng.ymnsdk.ymndatalib.c;
import com.bianfeng.ymnsdk.ymndatalib.utils.FileUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.LoginSignUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.SequenceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatafunGsonUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo;
import com.tkay.expressad.foundation.g.a.f;

public class InitEvent {
    public Integer app_id;
    public int app_memory;
    public int app_use_memory;
    public String cli_android_id;
    public int cli_available_ram_memory;
    public int cli_available_rom_memory;
    public String cli_device;
    public String cli_hardware;
    public String cli_imei;
    public String cli_mac_address;
    public String cli_model;
    public String cli_os;
    public String cli_platform;
    public int cli_total_ram_memory;
    public int cli_total_rom_memory;
    public String cli_ver;
    public Integer event;
    public long event_sequence;
    public String func_name;
    public Integer identify_id;
    public String msg;
    public String net_env;
    public String net_ip;
    public String origin_trace;
    public String sdk_base_ver;
    public String sdk_datafun_ver;
    public String sdk_package_ver;
    public String sign;
    public String time;
    public String trace;

    public InitEvent(int i, String str) {
        this.event = 0;
        this.cli_os = "android";
        this.cli_platform = f.a;
        UtilsLogger.i("这是在启动初始化中");
        this.event = Integer.valueOf(i);
        this.func_name = str;
        this.origin_trace = TraceUtils.getInstance().getOriginTrace();
        this.app_id = Integer.valueOf(PlatformUtils.getInstance().getApp_id());
        this.identify_id = Integer.valueOf(PlatformUtils.getInstance().getIdentify_id());
        this.cli_ver = YmndataDeviceInfo.getOsVersion();
        this.cli_model = YmndataDeviceInfo.getDeviceModel();
        this.cli_hardware = YmndataDeviceInfo.getManufactory();
        this.cli_device = YmndataDeviceInfo.getDeviceId();
        this.net_env = YmndataDeviceInfo.getNetChannelStr();
        this.net_ip = YmndataDeviceInfo.getClientIp();
        this.sdk_datafun_ver = PlatformUtils.getInstance().getDatafun_ver();
        this.sdk_package_ver = PlatformUtils.getInstance().getApk_ver();
        this.sdk_base_ver = PlatformUtils.getInstance().getYmnsdk_ver();
        this.cli_android_id = YmndataDeviceInfo.getAndroidId();
        this.cli_imei = YmndataDeviceInfo.getImei();
        this.cli_mac_address = YmndataDeviceInfo.getMac();
        this.cli_available_ram_memory = YmndataDeviceInfo.getRamAvailMem();
        this.cli_available_rom_memory = YmndataDeviceInfo.getRomAvailMem();
        this.cli_total_ram_memory = YmndataDeviceInfo.getTotalRamMemory();
        this.cli_total_rom_memory = YmndataDeviceInfo.getTotalRomMemory();
        this.app_memory = YmndataDeviceInfo.getAppMemory();
        this.app_use_memory = YmndataDeviceInfo.getAppUsedMemory();
        this.event_sequence = SequenceUtils.get();
    }

    public String toString() {
        this.sign = LoginSignUtils.sign(this);
        return YmnDatafunGsonUtils.toJson(this);
    }

    public InitEvent(c cVar, int i, String str) {
        this(i, str);
        this.time = cVar.b();
        this.trace = TraceUtils.getInstance().getOriginTrace();
    }

    public InitEvent(c cVar, int i, String str, Context context) {
        this(i, str);
        this.time = cVar.b();
        this.trace = TraceUtils.getInstance().getOriginTrace();
        String ymnPackageInfo = FileUtils.getYmnPackageInfo(context);
        this.msg = ymnPackageInfo;
        Log.e("ymnPackageInfo", ymnPackageInfo);
    }
}
