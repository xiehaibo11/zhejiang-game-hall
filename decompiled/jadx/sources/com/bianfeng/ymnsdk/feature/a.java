package com.bianfeng.ymnsdk.feature;

import android.app.Activity;
import android.content.Context;
import com.bianfeng.ymnsdk.YmnSdkPaymentWrapper;
import com.bianfeng.ymnsdk.YmnSdkUserWrapper;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface;
import com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper;
import com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import java.util.HashMap;
import java.util.Set;

/* JADX INFO: compiled from: YmnPluginInjector.java */
/* JADX INFO: loaded from: classes.dex */
public class a {
    public static void a(Context context, HashMap<String, YmnPluginWrapper> plugins) {
        for (YmnPluginWrapper plugin : plugins.values()) {
            if (!plugin.isInjected() && (context instanceof Activity)) {
                a((Activity) context, plugin);
            }
            if (YmnsdkTypeUtils.isInitAlone()) {
                if (!(context instanceof Activity)) {
                    plugin.updateContext(context);
                }
            } else {
                plugin.updateContext(context);
            }
        }
        a();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static void a(Activity activity, YmnPluginWrapper ymnPluginWrapper) {
        if (ymnPluginWrapper instanceof IUserFeature) {
            Logger.d("registUserFeatureWrapper " + ymnPluginWrapper);
            UserFeatureWrapper wrapper = new UserFeatureWrapper((IUserFeature) ymnPluginWrapper);
            YmnSdkUserWrapper.registUserFeatureWrapper(wrapper);
            ymnPluginWrapper.setInjected(true);
        }
        if (ymnPluginWrapper instanceof IPaymentFeature) {
            Logger.d("registPaymentFeatureWrapper " + ymnPluginWrapper);
            PaymentFeatureWrapper wrapper2 = new PaymentFeatureWrapper((IPaymentFeature) ymnPluginWrapper);
            YmnSdkPaymentWrapper.registPaymentFeatureWrapper(wrapper2);
            ymnPluginWrapper.setInjected(true);
        }
        if (!(ymnPluginWrapper instanceof IUserFeature) && !(ymnPluginWrapper instanceof IPaymentFeature)) {
            YmnSdkWrapper.registPluginFeatureWrapper(ymnPluginWrapper);
            ymnPluginWrapper.setInjected(true);
        }
    }

    private static void a() {
        Set<UserFeatureWrapper> userSet = YmnSdkUserWrapper.getUserWrappers();
        if (userSet != null && userSet.size() > 1) {
            for (UserFeatureWrapper item : userSet) {
                if (a(item) || a(item.a())) {
                    userSet.remove(item);
                    break;
                }
            }
        }
        Set<PaymentFeatureWrapper> paymentSet = YmnSdkPaymentWrapper.getPaymentWrappers();
        if (paymentSet != null && paymentSet.size() > 1) {
            for (PaymentFeatureWrapper item2 : paymentSet) {
                if (a(item2) || a(item2.a())) {
                    paymentSet.remove(item2);
                    return;
                }
            }
        }
    }

    private static boolean a(YmnPluginWrapper wrapper) {
        if (wrapper instanceof FixExcutorInterface) {
            return !((FixExcutorInterface) wrapper).available();
        }
        return false;
    }

    private static boolean a(UserFeatureWrapper wrapper) {
        try {
            return "template".equals(wrapper.a().getPluginName());
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private static boolean a(PaymentFeatureWrapper wrapper) {
        try {
            return "template".equals(wrapper.a().getPluginName());
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
