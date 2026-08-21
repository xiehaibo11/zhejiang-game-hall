package com.ymnsdk.replugin.datafun;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PostdataLib {
    private static android.os.Handler handler;
    private static volatile com.ymnsdk.replugin.datafun.PostdataLib postdataLib;
    private static volatile java.lang.String trace;
    private com.bianfeng.datafunsdk.net.ResponseHeaders responseHeaders;
    private java.lang.String url;



    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.ymnsdk.replugin.datafun.PostdataLib.handler = r0
            return
    }

    private PostdataLib() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "https://sluice.imeete.com/api/data/receiver"
            r3.url = r0
            com.bianfeng.datafunsdk.net.ResponseHeaders r0 = new com.bianfeng.datafunsdk.net.ResponseHeaders
            java.lang.String r1 = "X-Error-Code"
            r2 = 0
            r0.<init>(r1, r2)
            r3.responseHeaders = r0
            return
    }

    static java.lang.String access$000(com.ymnsdk.replugin.datafun.PostdataLib r0) {
            java.lang.String r0 = r0.url
            return r0
    }

    static com.bianfeng.datafunsdk.net.ResponseHeaders access$100(com.ymnsdk.replugin.datafun.PostdataLib r0) {
            com.bianfeng.datafunsdk.net.ResponseHeaders r0 = r0.responseHeaders
            return r0
    }

    public static com.ymnsdk.replugin.datafun.PostdataLib getInstance() {
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.postdataLib
            if (r0 != 0) goto L17
            java.lang.Class<com.ymnsdk.replugin.datafun.PostdataLib> r0 = com.ymnsdk.replugin.datafun.PostdataLib.class
            monitor-enter(r0)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.postdataLib     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ymnsdk.replugin.datafun.PostdataLib r1 = new com.ymnsdk.replugin.datafun.PostdataLib     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ymnsdk.replugin.datafun.PostdataLib.postdataLib = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.postdataLib
            return r0
    }

    public void init(android.content.Context r4) {
            r3 = this;
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.getInstance()
            r0.init(r4)
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.SystemUtils.createTransactionId()
            com.ymnsdk.replugin.datafun.PostdataLib.trace = r0
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r0 = com.ymnsdk.replugin.datafun.PostdataLib.trace
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setRepluginTrace(r0)
            com.bianfeng.seppellita.SepperllitaSdk r0 = com.bianfeng.seppellita.SepperllitaSdk.getInstance()
            com.ymnsdk.replugin.datafun.PostdataLib$1 r1 = new com.ymnsdk.replugin.datafun.PostdataLib$1
            r1.<init>(r3)
            java.lang.String r2 = ""
            r0.onInit(r4, r2, r1)
            return
    }

    public void postEvent(com.ymnsdk.replugin.event.base.BaseEvent r3) {
            r2 = this;
            android.os.Handler r0 = com.ymnsdk.replugin.datafun.PostdataLib.handler     // Catch: java.lang.Exception -> Lb
            com.ymnsdk.replugin.datafun.PostdataLib$2 r1 = new com.ymnsdk.replugin.datafun.PostdataLib$2     // Catch: java.lang.Exception -> Lb
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lb
            r0.post(r1)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            return
    }

    public void postTest() {
            r4 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "act"
            java.lang.String r2 = "push"
            r0.put(r1, r2)
            java.lang.String r1 = "pg"
            java.lang.String r2 = "P1069"
            r0.put(r1, r2)
            java.lang.String r1 = "eid"
            java.lang.String r2 = "139000"
            r0.put(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "et"
            r0.put(r2, r1)
            java.lang.String r1 = "uid "
            java.lang.String r2 = "u5454"
            r0.put(r1, r2)
            java.lang.String r1 = "did"
            java.lang.String r2 = "d08d776b2b5d0b45"
            r0.put(r1, r2)
            java.lang.String r1 = "adb "
            java.lang.String r2 = "2.0.4"
            r0.put(r1, r2)
            java.lang.String r1 = "st"
            java.lang.String r2 = "S011"
            r0.put(r1, r2)
            java.lang.String r1 = "rv"
            java.lang.String r2 = "1.0.0"
            r0.put(r1, r2)
            java.lang.String r1 = "dur"
            java.lang.String r2 = "580"
            r0.put(r1, r2)
            java.lang.String r1 = "an"
            java.lang.String r2 = "测试"
            r0.put(r1, r2)
            java.lang.String r1 = "pkg"
            java.lang.String r2 = "com.test"
            r0.put(r1, r2)
            java.lang.String r1 = "blk"
            java.lang.String r2 = "BHF001"
            r0.put(r1, r2)
            java.lang.String r1 = "bl"
            java.lang.String r2 = "宿主包启动"
            r0.put(r1, r2)
            java.lang.String r1 = "label"
            java.lang.String r2 = "请求宿主配置信息"
            r0.put(r1, r2)
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "trace"
            java.lang.String r3 = "c3773a61916fd165ddd37d7307d0bdf3"
            r1.put(r2, r3)
            java.lang.String r2 = "android_id"
            java.lang.String r3 = "8efd3095a50cdc00"
            r1.put(r2, r3)
            java.lang.String r2 = "request_code"
            java.lang.String r3 = "-1"
            r1.put(r2, r3)
            java.lang.String r2 = "request_msg"
            java.lang.String r3 = "还未获取插件Patch信息"
            r1.put(r2, r3)
            java.lang.String r2 = "plugin_id"
            java.lang.String r3 = "61c550c2-3d61-4375-86bd-4dc5a9a4d558"
            r1.put(r2, r3)
            java.lang.String r2 = "host_app_info"
            java.lang.String r3 = "{\"uaalType\":\"shuangkou\",\"deviceID\":\"8efd3095a50cdc00\",\"userID\":\"SWXr788810\",\"numID\":\"112913999\",\"areaID\":10,\"userID_Old\":\"bf70772191\",\"numID_Old\":70772191,\"areaID_Old\":5007,\"sessionID\":\"{44F6F630-0109-F246-8F94-DB9A5B5371FB}\",\"paychannel\":10002,\"cpsID\":10002,\"sessionTime_Old\":\"1653275762965\",\"aliPay\":\"alipayopen_pay\",\"wechatPay\":\"weixin_pay\",\"hostPackageName\":\"com.bf.BFShuangKou\",\"hostActivity\":\"com.cocos.game.AppActivity\"}"
            r1.put(r2, r3)
            java.lang.String r2 = "restart_num"
            java.lang.String r3 = "2"
            r1.put(r2, r3)
            java.lang.String r2 = "request_server_type"
            java.lang.String r3 = "1"
            r1.put(r2, r3)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r1 = r2.toJson(r1)
            java.lang.String r2 = "cust"
            r0.put(r2, r1)
            com.bianfeng.seppellita.SepperllitaSdk r1 = com.bianfeng.seppellita.SepperllitaSdk.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r0 = r2.toJson(r0)
            r1.post(r0)
            return
    }

    public void postToSeperllita(com.ymnsdk.replugin.event.base.SepperllitaEvent r3) {
            r2 = this;
            com.bianfeng.seppellita.SepperllitaSdk r0 = com.bianfeng.seppellita.SepperllitaSdk.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r3 = r1.toJson(r3)
            r0.post(r3)
            return
    }
}
