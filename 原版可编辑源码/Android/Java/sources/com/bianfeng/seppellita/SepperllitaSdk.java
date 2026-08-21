package com.bianfeng.seppellita;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.util.Log;
import com.bianfeng.netlibsdk.BasicNetwork;
import com.bianfeng.netlibsdk.HurlStack;
import com.bianfeng.netlibsdk.NetworkResponse;
import com.bianfeng.netlibsdk.Response;
import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.netlibsdk.utils.NetLogger;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.bianfeng.seppellita.bean.InitBean;
import com.bianfeng.seppellita.bean.PostDataBean;
import com.bianfeng.seppellita.db.DBManager;
import com.bianfeng.seppellita.event.EventManager;
import com.bianfeng.seppellita.manager.EventBeanManager;
import com.bianfeng.seppellita.manager.IPolicysManager;
import com.bianfeng.seppellita.manager.PolicysManager;
import com.bianfeng.seppellita.net.NetManager;
import com.bianfeng.seppellita.net.PostRequest;
import com.bianfeng.seppellita.net.UrlManager;
import com.bianfeng.seppellita.utils.CheckKeyUtils;
import com.bianfeng.seppellita.utils.ConfigUtils;
import com.bianfeng.seppellita.utils.DeviceUtils;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.tencent.open.SocialConstants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

public class SepperllitaSdk {
    private static volatile SepperllitaSdk sdk;
    private ConfigUtils configUtils;
    private DBManager dbManager;
    private EventBeanManager eventBeanManager;
    private InitCallback initCallback;
    private String mSiteID;
    private NetManager netManager;
    private IPolicysManager policysManager;
    private volatile boolean isPostImmediately = false;
    private volatile Context context = null;
    private SepperllitaCallback callback = new SepperllitaCallback() {
        @Override
        public void onSelectSuc(List<String> list) {
            SeppellitaLogger.i("onSelectSuc---->" + list.size());
            ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            for (int i = 0; i < list.size(); i++) {
                String str = list.get(i);
                if (str.contains("P1182")) {
                    arrayList2.add(str);
                } else {
                    arrayList.add(str);
                }
            }
            if (!SepperllitaSdk.this.isPostImmediately && arrayList.size() > 0) {
                SepperllitaSdk.this.post(arrayList);
            } else {
                SepperllitaSdk sepperllitaSdk = SepperllitaSdk.this;
                sepperllitaSdk.postImmediately(sepperllitaSdk.context, arrayList, SepperllitaSdk.this.mSiteID);
            }
            if (arrayList2.size() > 0) {
                SepperllitaSdk sepperllitaSdk2 = SepperllitaSdk.this;
                sepperllitaSdk2.postImmediately(sepperllitaSdk2.context, arrayList2, "S011");
            }
            SepperllitaSdk.this.isPostImmediately = false;
        }

        @Override
        public void onPostSuc(List<String> list) {
            SeppellitaLogger.i("onPostSuc--->" + SeppellitaGsonUtils.toJson(list));
            SepperllitaSdk.this.dbManager.del(list);
        }

        @Override
        public void onPostFail(String str) {
            SeppellitaLogger.i("onPostFail---->" + str);
            if (SepperllitaSdk.this.configUtils != null) {
                SepperllitaSdk.this.configUtils.setTimer();
            }
        }

        @Override
        public void onInitSuc(InitBean.DataBean dataBean) {
            SeppellitaLogger.i("onInitSuc--->");
            UrlManager.getInstance().setUrls(dataBean.getSevrer_list());
            if (SepperllitaSdk.this.configUtils != null) {
                SepperllitaSdk.this.configUtils.onInit(dataBean);
            }
            if (SepperllitaSdk.this.policysManager != null) {
                SepperllitaSdk.this.policysManager.setPolicysBean(dataBean);
            }
            if (SepperllitaSdk.this.initCallback != null) {
                SepperllitaSdk.this.initCallback.onSuc();
            }
        }

        @Override
        public void onInitFail(String str) {
            SeppellitaLogger.i("onInitFail--->" + str);
            if (SepperllitaSdk.this.configUtils != null) {
                SepperllitaSdk.this.configUtils.onInit(null);
            }
            if (SepperllitaSdk.this.initCallback != null) {
                SepperllitaSdk.this.initCallback.onFail(str);
            }
        }

        @Override
        public void callTime() {
            SeppellitaLogger.i("callTime---->定时操作");
            SepperllitaSdk.this.select();
        }

        @Override
        public void onInsertSuccess() {
            if (SepperllitaSdk.this.configUtils != null) {
                SepperllitaSdk.this.configUtils.setTimer();
            }
        }

        @Override
        public void onDel() {
            if (SepperllitaSdk.this.configUtils != null) {
                SepperllitaSdk.this.configUtils.setTimer();
            }
        }
    };

    public interface InitCallback {
        void onFail(String str);

        void onSuc();
    }

    public String getVersion() {
        return "1.0.3";
    }

    private void post(List<String> list) {
        try {
            this.netManager.postData(this.eventBeanManager.creatEventBean(list), this.callback);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void postImmediately(Context context, List<String> list, String str) {
        try {
            if (list.size() == 0) {
                return;
            }
            BasicNetwork basicNetwork = new BasicNetwork(new HurlStack());
            List<PostDataBean> listCreatEventBean = this.eventBeanManager.creatEventBean(list, str);
            for (int i = 0; i < listCreatEventBean.size(); i++) {
                PostDataBean postDataBean = listCreatEventBean.get(i);
                postDataBean.setSite(str);
                PostRequest postRequest = new PostRequest(postDataBean);
                postRequest.setCallback(this.callback);
                try {
                    postRequest.addMarker("network-queue-take");
                } catch (NetException e) {
                    e.printStackTrace();
                } catch (Exception e2) {
                    NetLogger.e("测试  Unhandled exception %s" + e2.toString());
                    new NetException(e2);
                }
                if (postRequest.isCanceled()) {
                    return;
                }
                NetworkResponse networkResponsePerformRequest = basicNetwork.performRequest(postRequest);
                postRequest.addMarker("network-http-complete");
                if (networkResponsePerformRequest.notModified && postRequest.hasHadResponseDelivered()) {
                    return;
                }
                Response<String> networkResponse = postRequest.parseNetworkResponse(networkResponsePerformRequest);
                postRequest.addMarker("network-parse-complete");
                postRequest.markDelivered();
                if (networkResponse.isSuccess()) {
                    this.dbManager.del(postDataBean.getIdList());
                }
            }
        } catch (Exception e3) {
            e3.printStackTrace();
        }
    }

    private SepperllitaSdk() {
    }

    public static SepperllitaSdk getInstance() {
        if (sdk == null) {
            synchronized (UrlManager.class) {
                if (sdk == null) {
                    sdk = new SepperllitaSdk();
                }
            }
        }
        return sdk;
    }

    private void select() {
        ConfigUtils configUtils;
        DBManager dBManager = this.dbManager;
        if (dBManager == null || (configUtils = this.configUtils) == null) {
            return;
        }
        dBManager.selectDbLastMonthByteData(configUtils.getLastTime(), this.configUtils.getCurrentTimeFormat());
    }

    public void onInit(Context context, String str, String str2, InitCallback initCallback) {
        try {
            UtilsSdk.initContext(context);
            SharedPreferencesUtils.setYmnagreeprivacy();
            this.mSiteID = str2;
            this.configUtils = new ConfigUtils(this.callback);
            this.initCallback = initCallback;
            this.eventBeanManager = new EventBeanManager(context, this.configUtils);
            this.netManager = new NetManager(this.eventBeanManager.getGetParameters());
            DBManager dBManager = new DBManager();
            this.dbManager = dBManager;
            dBManager.setCallback(this.callback);
            this.netManager.postInit(str, this.callback);
            this.dbManager.delBeforeOneMouthData(this.configUtils.getLastTime());
            this.policysManager = new PolicysManager();
        } catch (Exception unused) {
            Log.e(HostConstant.ymn, "初始化时异常");
        }
    }

    public void onInit(Context context, String str, InitCallback initCallback) {
        try {
            UtilsSdk.initContext(context);
            SharedPreferencesUtils.setYmnagreeprivacy();
            String metaData = getMetaData(context, "sl_site");
            this.mSiteID = metaData;
            Log.e("ymn-site", metaData);
            this.configUtils = new ConfigUtils(this.callback);
            this.initCallback = initCallback;
            this.eventBeanManager = new EventBeanManager(context, this.configUtils);
            this.netManager = new NetManager(this.eventBeanManager.getGetParameters());
            DBManager dBManager = new DBManager();
            this.dbManager = dBManager;
            dBManager.setCallback(this.callback);
            this.netManager.postInit(str, this.callback);
            this.dbManager.delBeforeOneMouthData(this.configUtils.getLastTime());
            this.policysManager = new PolicysManager();
        } catch (Exception unused) {
            Log.e(HostConstant.ymn, "初始化时异常");
        }
    }

    public void onInitOnlyPostId(Context context, InitCallback initCallback) {
        this.initCallback = initCallback;
        this.context = context;
        if (this.configUtils == null) {
            this.configUtils = new ConfigUtils(this.callback);
        }
        if (this.eventBeanManager == null) {
            this.eventBeanManager = new EventBeanManager(context, this.configUtils, false);
        }
        if (this.netManager == null) {
            this.netManager = new NetManager(this.eventBeanManager.getGetParameters());
        }
        if (this.dbManager == null) {
            this.dbManager = new DBManager();
        }
        FileUtils.init(context);
        UrlManager.getInstance().setUrlBean(getMetaData(context, "sl_url_main"), getMetaData(context, "sl_url_alternate"));
        this.dbManager.setCallback(this.callback);
        this.netManager.postInit("", this.callback);
        this.dbManager.delBeforeOneMouthData(this.configUtils.getLastTime());
        if (this.policysManager == null) {
            this.policysManager = new PolicysManager();
        }
    }

    public void postBeforeInit(String str) {
        getInstance().post(str);
        this.isPostImmediately = true;
        select();
    }

    public void postYmnId(String str) {
        SeppellitaLogger.i("postYmnId");
        HashMap map = new HashMap();
        map.put(SocialConstants.PARAM_ACT, "push");
        map.put("pg", "P1109");
        map.put("blk", "BHF001");
        map.put("bl", "获取唯一码");
        map.put(TTDownloadField.TT_LABEL, "同意");
        String strCreateYmnDeviceId = DeviceUtils.createYmnDeviceId();
        HashMap map2 = new HashMap();
        map2.put("ymn_user_id", strCreateYmnDeviceId);
        SharedPreferencesUtils.init(this.context);
        try {
            SharedPreferencesUtils.put("ymn_user_id", strCreateYmnDeviceId);
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (str == null) {
            str = "";
        }
        map2.put(IPaymentFeature.ARG_CHANNEL_ID, str);
        map.put("cust", SeppellitaGsonUtils.toJson(map2));
        HashMap map3 = new HashMap();
        map3.put("id", "2089");
        map.put("extended", SeppellitaGsonUtils.toJson(map3));
        getInstance().post(SeppellitaGsonUtils.toJson(map));
        new ArrayList().add(SeppellitaGsonUtils.toJson(map));
        this.isPostImmediately = true;
        select();
    }

    public void post(String str) {
        if (!CheckKeyUtils.check(str)) {
            SeppellitaLogger.e("数据不全，或数据错误,缺失act或pg");
            return;
        }
        SeppellitaLogger.i("post---->" + str);
        synchronized (SepperllitaSdk.class) {
            if (this.policysManager != null) {
                str = this.policysManager.getPolicys(str);
            }
            if (this.dbManager != null) {
                boolean z = true;
                boolean z2 = this.eventBeanManager != null;
                if (this.configUtils == null) {
                    z = false;
                }
                if (z2 & z) {
                    this.dbManager.add(this.eventBeanManager.buildDataBean(str));
                }
            }
        }
    }

    public void postPrivacy(String str) {
        try {
            LinkedHashMap linkedHashMap = (LinkedHashMap) GsonUtils.getInstance().fromJson(str, LinkedHashMap.class);
            linkedHashMap.put("pg", "P1182");
            linkedHashMap.put("bl", "BHO001");
            linkedHashMap.put(SocialConstants.PARAM_ACT, "push");
            String json = GsonUtils.getInstance().toJson(linkedHashMap);
            SeppellitaLogger.i("post---->" + json);
            synchronized (SepperllitaSdk.class) {
                if (this.policysManager != null) {
                    json = this.policysManager.getPolicys(json);
                }
                if (this.dbManager != null) {
                    boolean z = true;
                    boolean z2 = this.eventBeanManager != null;
                    if (this.configUtils == null) {
                        z = false;
                    }
                    if (z2 & z) {
                        this.dbManager.add(this.eventBeanManager.buildDataBean(json));
                    }
                }
            }
        } catch (YmnException e) {
            e.printStackTrace();
            Log.e("Ymnsdk", "上抛隐私数据异常");
        }
    }

    public void onResume() {
        ConfigUtils configUtils = this.configUtils;
        if (configUtils != null) {
            configUtils.onResume();
        }
    }

    public void onPause() {
        ConfigUtils configUtils = this.configUtils;
        if (configUtils != null) {
            configUtils.onPause();
            EventManager.onPause(this.configUtils.getOnLineTime());
        }
    }

    public String getPolicys(String str, String str2) {
        IPolicysManager iPolicysManager = this.policysManager;
        return iPolicysManager != null ? iPolicysManager.getPolicys(str, str2) : "";
    }

    public static String getMetaData(Context context, String str) {
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            return applicationInfo.metaData.get(str) != null ? (String) applicationInfo.metaData.get(str) : "";
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
