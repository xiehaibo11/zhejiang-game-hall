package com.ymnsdk.replugin.datafun;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import com.bianfeng.datafunsdk.PostDatalib;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.net.ResponseHeaders;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.bianfeng.seppellita.SepperllitaSdk;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.SystemUtils;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.qihoo360.replugin.RePlugin;
import com.tencent.open.SocialConstants;
import com.tkay.basead.b.a;
import com.tkay.china.activity.TransparentActivity;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import java.util.LinkedHashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PostdataLib {
    private static Handler handler = new Handler(Looper.getMainLooper());
    private static volatile PostdataLib postdataLib;
    private static volatile String trace;
    private String url = "https://sluice.imeete.com/api/data/receiver";
    private ResponseHeaders responseHeaders = new ResponseHeaders("X-Error-Code", 0);

    public static PostdataLib getInstance() {
        if (postdataLib == null) {
            synchronized (PostdataLib.class) {
                if (postdataLib == null) {
                    postdataLib = new PostdataLib();
                }
            }
        }
        return postdataLib;
    }

    private PostdataLib() {
    }

    public void init(Context context) {
        PostDatalib.getInstance().init(context);
        trace = SystemUtils.createTransactionId();
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setRepluginTrace(trace);
        SepperllitaSdk.getInstance().onInit(context, "", new SepperllitaSdk.InitCallback() {
            @Override
            public void onSuc() {
                Log.e(HostConstant.ymn, "SepperllitaSdk 初始化成功");
            }

            @Override
            public void onFail(String str) {
                Log.e(HostConstant.ymn, "SepperllitaSdk 初始化失败|" + str);
            }
        });
    }

    public void postEvent(final BaseEvent baseEvent) {
        try {
            handler.post(new Runnable() {
                @Override
                public void run() {
                    PostDatalib.getInstance().postByteData(new DataFunBean(PostdataLib.this.url, baseEvent.toString(), null, null, PostdataLib.this.responseHeaders.toString(), null));
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void postToSeperllita(SepperllitaEvent sepperllitaEvent) {
        SepperllitaSdk.getInstance().post(UtilsSdk.getGsonUtils().toJson(sepperllitaEvent));
    }

    public void postTest() {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(SocialConstants.PARAM_ACT, "push");
        linkedHashMap.put("pg", "P1069");
        linkedHashMap.put("eid", "139000");
        linkedHashMap.put("et", "" + System.currentTimeMillis());
        linkedHashMap.put("uid ", "u5454");
        linkedHashMap.put("did", "d08d776b2b5d0b45");
        linkedHashMap.put("adb ", "2.0.4");
        linkedHashMap.put("st", "S011");
        linkedHashMap.put("rv", "1.0.0");
        linkedHashMap.put("dur", "580");
        linkedHashMap.put("an", "测试");
        linkedHashMap.put(a.a.A, "com.test");
        linkedHashMap.put("blk", "BHF001");
        linkedHashMap.put("bl", "宿主包启动");
        linkedHashMap.put(TTDownloadField.TT_LABEL, "请求宿主配置信息");
        LinkedHashMap linkedHashMap2 = new LinkedHashMap();
        linkedHashMap2.put("trace", "c3773a61916fd165ddd37d7307d0bdf3");
        linkedHashMap2.put("android_id", "8efd3095a50cdc00");
        linkedHashMap2.put(TransparentActivity.b, RePlugin.PROCESS_UI);
        linkedHashMap2.put("request_msg", "还未获取插件Patch信息");
        linkedHashMap2.put(IPaymentFeature.ARG_PLUGIN_ID, "61c550c2-3d61-4375-86bd-4dc5a9a4d558");
        linkedHashMap2.put("host_app_info", "{\"uaalType\":\"shuangkou\",\"deviceID\":\"8efd3095a50cdc00\",\"userID\":\"SWXr788810\",\"numID\":\"112913999\",\"areaID\":10,\"userID_Old\":\"bf70772191\",\"numID_Old\":70772191,\"areaID_Old\":5007,\"sessionID\":\"{44F6F630-0109-F246-8F94-DB9A5B5371FB}\",\"paychannel\":10002,\"cpsID\":10002,\"sessionTime_Old\":\"1653275762965\",\"aliPay\":\"alipayopen_pay\",\"wechatPay\":\"weixin_pay\",\"hostPackageName\":\"com.bf.BFShuangKou\",\"hostActivity\":\"com.cocos.game.AppActivity\"}");
        linkedHashMap2.put("restart_num", "2");
        linkedHashMap2.put("request_server_type", "1");
        linkedHashMap.put("cust", UtilsSdk.getGsonUtils().toJson(linkedHashMap2));
        SepperllitaSdk.getInstance().post(UtilsSdk.getGsonUtils().toJson(linkedHashMap));
    }
}
