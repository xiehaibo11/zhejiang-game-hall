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

        a(d r1, YmnPluginWrapper r2, RequestRetryUtils r3) {
            this.a = r1;
            this.b = r2;
            this.c = r3;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override
        public void onActionResult(ActionSupport.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            this.a.onEndAttachment();
            YmnDataFunUtils.getInstance().loginOldResponseEvent(102, r4.data.toString());
            b.c = (IUserFeature.UserInfo) r4.processedResult;
            com.bianfeng.ymnsdk.feature.c.a(r4.processedResultAsMap(), this.b.getPluginName());
            b.a();
            b.b().dispatchNext(102, r4.dataAsString());
            return;
        L6:
            if (this.c.retryRequest(this.a) == false) goto L10;
            this.a.onEndAttachment();
            YmnDataFunUtils.getInstance().loginOldResponseEvent(105, r4.messageFail());
            b.b().dispatchNext(105, r4.messageFail());
            return;
        }
    }

    class b extends ActionObserverV3 {
        final RequestRetryUtils a;
        final com.bianfeng.ymnsdk.actionv2.a b;

        b(RequestRetryUtils r1, com.bianfeng.ymnsdk.actionv2.a r2) {
            this.a = r1;
            this.b = r2;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override
        public void onActionResult(ActionSupportV3.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            b.c = (IUserFeature.UserInfo) r4.processedResult;
            com.bianfeng.ymnsdk.feature.c.a(r4.processedResultAsMap(), b.c().getPluginName());
            YmnDataFunUtils.getInstance().loginNewResponseEvent(118, r4.dataAsString());
            b.b().dispatchNext(118, r4.dataAsString());
            return;
        L6:
            if (this.a.retryRequest(this.b) == false) goto L10;
            b.b().dispatchNext(119, r4.messageFail());
            YmnDataFunUtils.getInstance().loginNewResponseEvent(119, r4.messageFail());
            return;
        }
    }

    class c extends ActionObserver {
        c() {
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override
        public void onActionResult(ActionSupport.ResponseResult r3) {
            if (r3.isOk() == false) goto L9;
            UrlConfig r0 = (UrlConfig) r3.processedResult;
            if (r0.isEnable() == false) goto L7;
            e.a(b.c().getContext(), r0);
            return;
        L7:
            Logger.e("illegal remote url config " + r3.dataAsString());
            return;
        }
    }

    static void a() {
        e();
    }

    static YmnCallbackInterceptor b() {
        return b;
    }

    static YmnPluginWrapper c() {
        return a;
    }

    protected static void d() {
        if (a != null) goto L6;
        Logger.i("pluginWrapper is null");
        b.dispatchNext(119, "pluginWrapper is null");
        return;
    L6:
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.actionv2.a r1 = (com.bianfeng.ymnsdk.actionv2.a) com.bianfeng.ymnsdk.feature.d.a(new com.bianfeng.ymnsdk.actionv2.a(a.getContext()));
        r1.putReqData(a, new Object[]{d});
        r1.addObserver(new b(r0, r1));
        r1.actionStart();
    }

    private static void e() {
        h r0 = new h(a.getContext());
        r0.putReqData(a, new Object[]{c.getYmnUserIdInt(), c.getPlatformUserId()});
        r0.addObserver(new c());
        r0.actionStart();
    }

    public static void a(String r2, YmnPluginWrapper r3, YmnCallbackInterceptor r4) {
        a = r3;
        b = r4;
        if (YmnCallback.a.b(r2) == false) goto L5;
        YmnCallback.a r22 = YmnCallback.a.a(r2);
        Object r42 = r22.a();
        Object r43 = r22.b();
        Object r23 = r42;
    L7:
        if (YmnsdkTypeUtils.isNewLogin() == false) goto L9;
        a(r23);
        return;
    L9:
        a(r3, r23, r43);
        return;
    L5:
        r43 = null;
        r23 = r2;
        goto L7
    }

    private static void a(YmnPluginWrapper r4, Object r5, Object r6) {
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();
        d r1 = (d) com.bianfeng.ymnsdk.feature.d.a(new d(r4.getContext()));
        r1.putReqData(r4, new Object[]{r5, r6});
        r1.addObserver(new a(r1, r4, r0));
        r1.onStartAttachment();
        r1.actionStart();
    }

    private static void a(Object r4) {
        String r42 = r4.toString();     // Catch: Exception -> L7
        d = new LoginEntity(YmnAppContext.getAppId(), YmnAppContext.getConfigId(), Integer.parseInt(a.getPluginId()), r42).toString();     // Catch: Exception -> L7
        String r43 = new LoginDataEntity(d).toString();     // Catch: Exception -> L7
        b.dispatchNext(102, r43);     // Catch: Exception -> L7
        if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo() == false) goto L5;
        d();     // Catch: Exception -> L7
    L10:
        return;
    L5:
        com.bianfeng.ymnsdk.feature.c.a(new HashMap(), a.getPluginName());     // Catch: Exception -> L7
    L7:
        e = move-exception;
        b.dispatchNext(105, e.getMessage());
    }
}
