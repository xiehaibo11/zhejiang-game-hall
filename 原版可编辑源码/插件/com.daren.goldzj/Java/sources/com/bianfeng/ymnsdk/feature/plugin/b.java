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
import java.util.HashMap;

public class b {
    private static YmnPluginWrapper a;
    private static YmnCallbackInterceptor b;
    public static IUserFeature.UserInfo c;
    private static String d;

    class a extends ActionObserver {
        final d a;
        final YmnPluginWrapper b;
        final RequestRetryUtils c;

        a(d dVar, YmnPluginWrapper ymnPluginWrapper, RequestRetryUtils requestRetryUtils) {
            this.a = dVar;
            this.b = ymnPluginWrapper;
            this.c = requestRetryUtils;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            if (!responseResult.isOk()) {
                if (this.c.retryRequest(this.a)) {
                    this.a.onEndAttachment();
                    YmnDataFunUtils.getInstance().loginOldResponseEvent(105, responseResult.messageFail());
                    b.b.dispatchNext(105, responseResult.messageFail());
                    return;
                }
                return;
            }
            this.a.onEndAttachment();
            YmnDataFunUtils.getInstance().loginOldResponseEvent(102, responseResult.data.toString());
            b.c = (IUserFeature.UserInfo) responseResult.processedResult;
            com.bianfeng.ymnsdk.feature.c.a(responseResult.processedResultAsMap(), this.b.getPluginName());
            b.e();
            b.b.dispatchNext(102, responseResult.dataAsString());
        }
    }

    class b extends ActionObserverV3 {
        final RequestRetryUtils a;
        final com.bianfeng.ymnsdk.actionv2.a b;

        b(RequestRetryUtils requestRetryUtils, com.bianfeng.ymnsdk.actionv2.a aVar) {
            this.a = requestRetryUtils;
            this.b = aVar;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override
        public void onActionResult(ActionSupportV3.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                b.c = (IUserFeature.UserInfo) responseResult.processedResult;
                com.bianfeng.ymnsdk.feature.c.a(responseResult.processedResultAsMap(), b.a.getPluginName());
                YmnDataFunUtils.getInstance().loginNewResponseEvent(118, responseResult.dataAsString());
                b.b.dispatchNext(118, responseResult.dataAsString());
                return;
            }
            if (this.a.retryRequest(this.b)) {
                b.b.dispatchNext(119, responseResult.messageFail());
                YmnDataFunUtils.getInstance().loginNewResponseEvent(119, responseResult.messageFail());
            }
        }
    }

    class c extends ActionObserver {
        c() {
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                UrlConfig urlConfig = (UrlConfig) responseResult.processedResult;
                if (urlConfig.isEnable()) {
                    e.a(b.a.getContext(), urlConfig);
                    return;
                }
                Logger.e("illegal remote url config " + responseResult.dataAsString());
            }
        }
    }

    protected static void d() {
        if (a == null) {
            Logger.i("pluginWrapper is null");
            b.dispatchNext(119, "pluginWrapper is null");
            return;
        }
        RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.actionv2.a aVar = (com.bianfeng.ymnsdk.actionv2.a) com.bianfeng.ymnsdk.feature.d.a(new com.bianfeng.ymnsdk.actionv2.a(a.getContext()));
        aVar.putReqData(a, d);
        aVar.addObserver(new b(requestRetryUtils, aVar));
        aVar.actionStart();
    }

    private static void e() {
        h hVar = new h(a.getContext());
        hVar.putReqData(a, c.getYmnUserIdInt(), c.getPlatformUserId());
        hVar.addObserver(new c());
        hVar.actionStart();
    }

    public static void a(String str, YmnPluginWrapper ymnPluginWrapper, YmnCallbackInterceptor ymnCallbackInterceptor) {
        Object objB;
        Object obj;
        a = ymnPluginWrapper;
        b = ymnCallbackInterceptor;
        if (YmnCallback.a.b(str)) {
            YmnCallback.a aVarA = YmnCallback.a.a(str);
            Object objA = aVarA.a();
            objB = aVarA.b();
            obj = objA;
        } else {
            objB = null;
            obj = str;
        }
        if (YmnsdkTypeUtils.isNewLogin()) {
            a(obj);
        } else {
            a(ymnPluginWrapper, obj, objB);
        }
    }

    private static void a(YmnPluginWrapper ymnPluginWrapper, Object obj, Object obj2) {
        RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        d dVar = (d) com.bianfeng.ymnsdk.feature.d.a(new d(ymnPluginWrapper.getContext()));
        dVar.putReqData(ymnPluginWrapper, obj, obj2);
        dVar.addObserver(new a(dVar, ymnPluginWrapper, requestRetryUtils));
        dVar.onStartAttachment();
        dVar.actionStart();
    }

    private static void a(Object obj) {
        try {
            d = new LoginEntity(YmnAppContext.getAppId(), YmnAppContext.getConfigId(), Integer.parseInt(a.getPluginId()), obj.toString()).toString();
            b.dispatchNext(102, new LoginDataEntity(d).toString());
            if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo()) {
                d();
            } else {
                com.bianfeng.ymnsdk.feature.c.a(new HashMap(), a.getPluginName());
            }
        } catch (Exception e) {
            b.dispatchNext(105, e.getMessage());
        }
    }
}
