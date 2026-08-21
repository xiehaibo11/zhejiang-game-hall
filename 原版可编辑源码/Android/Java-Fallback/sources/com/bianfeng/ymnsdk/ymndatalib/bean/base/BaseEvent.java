package com.bianfeng.ymnsdk.ymndatalib.bean.base;

public class BaseEvent {
    public java.lang.Integer app_id;
    public int app_memory;
    public int app_use_memory;
    public java.lang.String cli_android_id;
    public int cli_available_ram_memory;
    public int cli_available_rom_memory;
    public java.lang.String cli_device;
    public java.lang.String cli_hardware;
    public java.lang.String cli_imei;
    public java.lang.String cli_mac_address;
    public java.lang.String cli_model;
    public java.lang.String cli_os;
    public java.lang.String cli_platform;
    public int cli_total_ram_memory;
    public int cli_total_rom_memory;
    public java.lang.String cli_ver;
    public java.lang.Integer event;
    public long event_sequence;
    public java.lang.String func_name;
    public java.lang.Integer identify_id;
    public java.lang.String msg;
    public java.lang.String net_env;
    public java.lang.String net_ip;
    public java.lang.String order_no;
    public java.lang.String origin_trace;
    public java.lang.String perfix_uid;
    public java.lang.Integer platform_id;
    public java.lang.Integer rst_code;
    public int rst_cost;
    public java.lang.String rst_msg;
    public java.lang.String sdk_base_ver;
    public java.lang.String sdk_datafun_ver;
    public java.lang.String sdk_package_ver;
    public java.lang.String sdk_plugin_ver;
    public java.lang.String sdk_third_ver;
    public java.lang.String server_name;
    public java.lang.String sign;
    public int sub_rst_code;
    public java.lang.String sub_rst_msg;
    public java.lang.String third_uid;
    public java.lang.String time;
    public java.lang.String trace;

    public BaseEvent(int r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1.event = r0
            java.lang.String r0 = "android"
            r1.cli_os = r0
            java.lang.String r0 = "native"
            r1.cli_platform = r0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.event = r2
            r1.func_name = r3
            long r2 = com.bianfeng.ymnsdk.ymndatalib.utils.SequenceUtils.get()
            r1.event_sequence = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r2 = r2.getOriginTrace()
            r1.origin_trace = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            int r2 = r2.getApp_id()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.app_id = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            int r2 = r2.getIdentify_id()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.identify_id = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getDeviceId()
            r1.cli_device = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getNetChannelStr()
            r1.net_env = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getClientIp()
            r1.net_ip = r2
            int r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getRamAvailMem()
            r1.cli_available_ram_memory = r2
            int r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getAppMemory()
            r1.app_memory = r2
            int r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getAppUsedMemory()
            r1.app_use_memory = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getOsVersion()
            r1.cli_ver = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getDeviceModel()
            r1.cli_model = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getManufactory()
            r1.cli_hardware = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getDatafun_ver()
            r1.sdk_datafun_ver = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getApk_ver()
            r1.sdk_package_ver = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getYmnsdk_ver()
            r1.sdk_base_ver = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getAndroidId()
            r1.cli_android_id = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getImei()
            r1.cli_imei = r2
            java.lang.String r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getMac()
            r1.cli_mac_address = r2
            int r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getRomAvailMem()
            r1.cli_available_rom_memory = r2
            int r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getTotalRamMemory()
            r1.cli_total_ram_memory = r2
            int r2 = com.bianfeng.ymnsdk.ymndatalib.utils.YmndataDeviceInfo.getTotalRomMemory()
            r1.cli_total_rom_memory = r2
            return
    }

    public BaseEvent(com.bianfeng.ymnsdk.ymndatalib.a r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2, r3)
            java.lang.String r2 = r1.c()
            r0.time = r2
            int r2 = r1.a()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.rst_code = r2
            java.lang.String r1 = r1.b()
            r0.msg = r1
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r1 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r1 = r1.getOriginTrace()
            r0.trace = r1
            return
    }

    public BaseEvent(com.bianfeng.ymnsdk.ymndatalib.b r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2, r3)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r2 = r2.getLoginTrace()
            r0.trace = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            int r2 = r2.getLogin_platform_id()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.platform_id = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getLogin_Sdk_plugin_ver()
            r0.sdk_plugin_ver = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getLogin_sdk_third_ver()
            r0.sdk_third_ver = r2
            java.lang.String r2 = r1.d()
            r0.server_name = r2
            java.lang.String r2 = r1.b()
            r0.msg = r2
            java.lang.String r2 = r1.e()
            r0.third_uid = r2
            java.lang.String r2 = r1.c()
            r0.perfix_uid = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r1 = r1.a()
            r0.setResponseData(r1)
            return
    }

    public BaseEvent(com.bianfeng.ymnsdk.ymndatalib.c r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2, r3)
            java.lang.String r2 = r1.b()
            r0.time = r2
            java.lang.String r1 = r1.a()
            r0.msg = r1
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r1 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r1 = r1.getOriginTrace()
            r0.trace = r1
            return
    }

    public BaseEvent(com.bianfeng.ymnsdk.ymndatalib.d r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2, r3)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r2 = r2.getPayTrace()
            r0.trace = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            int r2 = r2.getPay_platform_id()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.platform_id = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getPay_Sdk_plugin_ver()
            r0.sdk_plugin_ver = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r2 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            java.lang.String r2 = r2.getPay_sdk_third_ver()
            r0.sdk_third_ver = r2
            java.lang.String r2 = r1.d()
            r0.server_name = r2
            java.lang.String r2 = r1.b()
            r0.msg = r2
            java.lang.String r2 = r1.c()
            r0.order_no = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r1 = r1.a()
            r0.setResponseData(r1)
            return
    }

    public BaseEvent(com.bianfeng.ymnsdk.ymndatalib.e r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2, r3)
            java.lang.String r2 = r1.b()
            r0.msg = r2
            java.lang.String r2 = r1.c()
            r0.trace = r2
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r1 = r1.a()
            r0.setResponseData(r1)
            return
    }

    private void setResponseData(com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = r2.getRst_code()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1.rst_code = r0
            java.lang.String r0 = r2.getRst_msg()
            r1.rst_msg = r0
            int r0 = r2.getRst_cost()
            r1.rst_cost = r0
            int r0 = r2.getSub_rst_code()
            r1.sub_rst_code = r0
            java.lang.String r0 = r2.getSub_rst_msg()
            r1.sub_rst_msg = r0
            java.lang.String r2 = r2.getTime()
            r1.time = r2
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.ymndatalib.utils.LoginSignUtils.sign(r1)
            r1.sign = r0
            java.lang.String r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatafunGsonUtils.toJson(r1)
            return r0
    }
}
