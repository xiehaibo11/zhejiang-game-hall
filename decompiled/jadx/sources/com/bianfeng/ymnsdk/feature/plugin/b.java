package com.bianfeng.ymnsdk.feature.plugin;

import com.bianfeng.ymnsdk.action.ActionObserver;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.action.d;
import com.bianfeng.ymnsdk.action.h;
import com.bianfeng.ymnsdk.actionv2.ActionObserverV3;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import com.bianfeng.ymnsdk.entity.LoginDataEntity;
import com.bianfeng.ymnsdk.entity.LoginEntity;
import com.bianfeng.ymnsdk.entity.UrlConfig;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.e;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.RequestRetryUtils;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import java.util.HashMap;

/* JADX INFO: compiled from: UserFeatureFactory.java */
/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static YmnPluginWrapper f1465a;
    private static YmnCallbackInterceptor b;
    public static IUserFeature.UserInfo c;
    private static String d;

    public static void a(String msg, YmnPluginWrapper pluginWrapper, YmnCallbackInterceptor interceptor) {
        f1465a = pluginWrapper;
        b = interceptor;
        Object data = msg;
        Object ext = null;
        if (YmnCallback.a.b(msg)) {
            YmnCallback.a messageObj = YmnCallback.a.a(msg);
            data = messageObj.a();
            ext = messageObj.b();
        }
        if (YmnsdkTypeUtils.isNewLogin()) {
            a(data);
        } else {
            a(pluginWrapper, data, ext);
        }
    }

    private static void a(YmnPluginWrapper pluginWrapper, Object data, Object ext) {
        RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
        d dVar = new d(pluginWrapper.getContext());
        com.bianfeng.ymnsdk.feature.d.a(dVar);
        d action = dVar;
        action.putReqData(pluginWrapper, data, ext);
        action.addObserver(new a(action, pluginWrapper, retryUtils));
        action.onStartAttachment();
        action.actionStart();
    }

    /* JADX INFO: compiled from: UserFeatureFactory.java */
    static class a extends ActionObserver {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ d f1466a;
        final /* synthetic */ YmnPluginWrapper b;
        final /* synthetic */ RequestRetryUtils c;

        a(d dVar, YmnPluginWrapper ymnPluginWrapper, RequestRetryUtils requestRetryUtils) {
            this.f1466a = dVar;
            this.b = ymnPluginWrapper;
            this.c = requestRetryUtils;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // com.bianfeng.ymnsdk.action.ActionObserver
        public void onActionResult(ActionSupport.ResponseResult result) {
            if (result.isOk()) {
                this.f1466a.onEndAttachment();
                YmnDataFunUtils.getInstance().loginOldResponseEvent(102, result.data.toString());
                b.c = (IUserFeature.UserInfo) result.processedResult;
                com.bianfeng.ymnsdk.feature.c.a(result.processedResultAsMap(), this.b.getPluginName());
                b.e();
                b.b.dispatchNext(102, result.dataAsString());
                return;
            }
            boolean isNotNeedRetry = this.c.retryRequest(this.f1466a);
            if (isNotNeedRetry) {
                this.f1466a.onEndAttachment();
                YmnDataFunUtils.getInstance().loginOldResponseEvent(105, result.messageFail());
                b.b.dispatchNext(105, result.messageFail());
            }
        }
    }

    private static void a(Object msg) {
        try {
            String data = msg.toString();
            int app_id = YmnAppContext.getAppId();
            int package_id = YmnAppContext.getConfigId();
            int platform_id = Integer.parseInt(f1465a.getPluginId());
            LoginEntity entity = new LoginEntity(app_id, package_id, platform_id, data);
            d = entity.toString();
            String dataLoginStr = new LoginDataEntity(d).toString();
            b.dispatchNext(102, dataLoginStr);
            SharedPreferencesUtils.put("ymn_login_data", d);
            Logger.e("传入的session是:" + dataLoginStr);
            if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo()) {
                d();
            } else {
                com.bianfeng.ymnsdk.feature.c.a(new HashMap(), f1465a.getPluginName());
            }
        } catch (Exception e) {
            b.dispatchNext(105, e.getMessage());
        }
    }

    protected static void d() {
        if (f1465a == null) {
            Logger.i("pluginWrapper is null");
            b.dispatchNext(119, "pluginWrapper is null");
            return;
        }
        RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.actionv2.a aVar = new com.bianfeng.ymnsdk.actionv2.a(f1465a.getContext());
        com.bianfeng.ymnsdk.feature.d.a(aVar);
        com.bianfeng.ymnsdk.actionv2.a action = aVar;
        action.putReqData(f1465a, d);
        action.addObserver(new C0045b(retryUtils, action));
        action.actionStart();
    }

    /* JADX INFO: renamed from: com.bianfeng.ymnsdk.feature.plugin.b$b, reason: collision with other inner class name */
    /* JADX INFO: compiled from: UserFeatureFactory.java */
    static class C0045b extends ActionObserverV3 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ RequestRetryUtils f1467a;
        final /* synthetic */ com.bianfeng.ymnsdk.actionv2.a b;

        C0045b(RequestRetryUtils requestRetryUtils, com.bianfeng.ymnsdk.actionv2.a aVar) {
            this.f1467a = requestRetryUtils;
            this.b = aVar;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // com.bianfeng.ymnsdk.actionv2.ActionObserverV3
        public void onActionResult(ActionSupportV3.ResponseResult result) {
            if (result.isOk()) {
                b.c = (IUserFeature.UserInfo) result.processedResult;
                com.bianfeng.ymnsdk.feature.c.a(result.processedResultAsMap(), b.f1465a.getPluginName());
                YmnDataFunUtils.getInstance().loginNewResponseEvent(118, result.dataAsString());
                b.b.dispatchNext(118, result.dataAsString());
                return;
            }
            boolean isNotRetry = this.f1467a.retryRequest(this.b);
            if (isNotRetry) {
                b.b.dispatchNext(119, result.messageFail());
                YmnDataFunUtils.getInstance().loginNewResponseEvent(119, result.messageFail());
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void e() {
        h action = new h(f1465a.getContext());
        action.putReqData(f1465a, c.getYmnUserIdInt(), c.getPlatformUserId());
        action.addObserver(new c());
        action.actionStart();
    }

    /* JADX INFO: compiled from: UserFeatureFactory.java */
    static class c extends ActionObserver {
        c() {
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // com.bianfeng.ymnsdk.action.ActionObserver
        public void onActionResult(ActionSupport.ResponseResult result) {
            if (result.isOk()) {
                UrlConfig config = (UrlConfig) result.processedResult;
                if (config.isEnable()) {
                    e.a(b.f1465a.getContext(), config);
                    return;
                }
                Logger.e("illegal remote url config " + result.dataAsString());
            }
        }
    }
}
