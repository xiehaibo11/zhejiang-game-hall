package com.bianfeng.ymnsdk.ymndatalib.bean.base;

import com.bianfeng.ymnsdk.ymndatalib.a;
import com.bianfeng.ymnsdk.ymndatalib.b;
import com.bianfeng.ymnsdk.ymndatalib.c;
import com.bianfeng.ymnsdk.ymndatalib.d;
import com.bianfeng.ymnsdk.ymndatalib.e;
import com.bianfeng.ymnsdk.ymndatalib.utils.LoginSignUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.SequenceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatafunGsonUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo;
import com.tkay.expressad.foundation.g.a.f;

public class BaseEvent {
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
    public String order_no;
    public String origin_trace;
    public String perfix_uid;
    public Integer platform_id;
    public Integer rst_code;
    public int rst_cost;
    public String rst_msg;
    public String sdk_base_ver;
    public String sdk_datafun_ver;
    public String sdk_package_ver;
    public String sdk_plugin_ver;
    public String sdk_third_ver;
    public String server_name;
    public String sign;
    public int sub_rst_code;
    public String sub_rst_msg;
    public String third_uid;
    public String time;
    public String trace;

    public BaseEvent(int i, String str) {
        this.event = 0;
        this.cli_os = "android";
        this.cli_platform = f.a;
        this.event = Integer.valueOf(i);
        this.func_name = str;
        this.event_sequence = SequenceUtils.get();
        this.origin_trace = TraceUtils.getInstance().getOriginTrace();
        this.app_id = Integer.valueOf(PlatformUtils.getInstance().getApp_id());
        this.identify_id = Integer.valueOf(PlatformUtils.getInstance().getIdentify_id());
        this.cli_device = YmndataDeviceInfo.getDeviceId();
        this.net_env = YmndataDeviceInfo.getNetChannelStr();
        this.net_ip = YmndataDeviceInfo.getClientIp();
        this.cli_available_ram_memory = YmndataDeviceInfo.getRamAvailMem();
        this.app_memory = YmndataDeviceInfo.getAppMemory();
        this.app_use_memory = YmndataDeviceInfo.getAppUsedMemory();
        this.cli_ver = YmndataDeviceInfo.getOsVersion();
        this.cli_model = YmndataDeviceInfo.getDeviceModel();
        this.cli_hardware = YmndataDeviceInfo.getManufactory();
        this.sdk_datafun_ver = PlatformUtils.getInstance().getDatafun_ver();
        this.sdk_package_ver = PlatformUtils.getInstance().getApk_ver();
        this.sdk_base_ver = PlatformUtils.getInstance().getYmnsdk_ver();
        this.cli_android_id = YmndataDeviceInfo.getAndroidId();
        this.cli_imei = YmndataDeviceInfo.getImei();
        this.cli_mac_address = YmndataDeviceInfo.getMac();
        this.cli_available_rom_memory = YmndataDeviceInfo.getRomAvailMem();
        this.cli_total_ram_memory = YmndataDeviceInfo.getTotalRamMemory();
        this.cli_total_rom_memory = YmndataDeviceInfo.getTotalRomMemory();
    }

    private void setResponseData(ResponseDataUtils responseDataUtils) {
        if (responseDataUtils == null) {
            return;
        }
        this.rst_code = Integer.valueOf(responseDataUtils.getRst_code());
        this.rst_msg = responseDataUtils.getRst_msg();
        this.rst_cost = responseDataUtils.getRst_cost();
        this.sub_rst_code = responseDataUtils.getSub_rst_code();
        this.sub_rst_msg = responseDataUtils.getSub_rst_msg();
        this.time = responseDataUtils.getTime();
    }

    public String toString() {
        this.sign = LoginSignUtils.sign(this);
        return YmnDatafunGsonUtils.toJson(this);
    }

    public BaseEvent(d dVar, int i, String str) {
        this(i, str);
        this.trace = TraceUtils.getInstance().getPayTrace();
        this.platform_id = Integer.valueOf(PlatformUtils.getInstance().getPay_platform_id());
        this.sdk_plugin_ver = PlatformUtils.getInstance().getPay_Sdk_plugin_ver();
        this.sdk_third_ver = PlatformUtils.getInstance().getPay_sdk_third_ver();
        this.server_name = dVar.d();
        this.msg = dVar.b();
        this.order_no = dVar.c();
        setResponseData(dVar.a());
    }

    public BaseEvent(c cVar, int i, String str) {
        this(i, str);
        this.time = cVar.b();
        this.msg = cVar.a();
        this.trace = TraceUtils.getInstance().getOriginTrace();
    }

    public BaseEvent(e eVar, int i, String str) {
        this(i, str);
        this.msg = eVar.b();
        this.trace = eVar.c();
        setResponseData(eVar.a());
    }

    public BaseEvent(b bVar, int i, String str) {
        this(i, str);
        this.trace = TraceUtils.getInstance().getLoginTrace();
        this.platform_id = Integer.valueOf(PlatformUtils.getInstance().getLogin_platform_id());
        this.sdk_plugin_ver = PlatformUtils.getInstance().getLogin_Sdk_plugin_ver();
        this.sdk_third_ver = PlatformUtils.getInstance().getLogin_sdk_third_ver();
        this.server_name = bVar.d();
        this.msg = bVar.b();
        this.third_uid = bVar.e();
        this.perfix_uid = bVar.c();
        setResponseData(bVar.a());
    }

    public BaseEvent(a aVar, int i, String str) {
        this(i, str);
        this.time = aVar.c();
        this.rst_code = Integer.valueOf(aVar.a());
        this.msg = aVar.b();
        this.trace = TraceUtils.getInstance().getOriginTrace();
    }
}
