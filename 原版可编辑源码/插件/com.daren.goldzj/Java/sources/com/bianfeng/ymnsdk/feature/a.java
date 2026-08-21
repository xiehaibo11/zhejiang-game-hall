package com.bianfeng.ymnsdk.feature;

import android.app.Activity;
import android.content.Context;
import com.bianfeng.ymnsdk.YmnSdkPaymentWrapper;
import com.bianfeng.ymnsdk.YmnSdkUserWrapper;
import com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface;
import com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper;
import com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.HashMap;
import java.util.Set;

public class a {
    public static void a(Context context, HashMap<String, YmnPluginWrapper> map) {
        for (YmnPluginWrapper ymnPluginWrapper : map.values()) {
            if (!ymnPluginWrapper.isInjected() && (context instanceof Activity)) {
                a((Activity) context, ymnPluginWrapper);
            }
            ymnPluginWrapper.updateContext(context);
        }
        a();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static void a(Activity activity, YmnPluginWrapper ymnPluginWrapper) {
        if (ymnPluginWrapper instanceof IUserFeature) {
            Logger.d("registUserFeatureWrapper " + ymnPluginWrapper);
            YmnSdkUserWrapper.registUserFeatureWrapper(new UserFeatureWrapper((IUserFeature) ymnPluginWrapper));
            ymnPluginWrapper.setInjected(true);
        }
        if (ymnPluginWrapper instanceof IPaymentFeature) {
            Logger.d("registPaymentFeatureWrapper " + ymnPluginWrapper);
            YmnSdkPaymentWrapper.registPaymentFeatureWrapper(new PaymentFeatureWrapper((IPaymentFeature) ymnPluginWrapper));
            ymnPluginWrapper.setInjected(true);
        }
    }

    private static void a() {
        Set<UserFeatureWrapper> userWrappers = YmnSdkUserWrapper.getUserWrappers();
        if (userWrappers != null && userWrappers.size() > 1) {
            for (UserFeatureWrapper userFeatureWrapper : userWrappers) {
                if (a(userFeatureWrapper) || a(userFeatureWrapper.a())) {
                    userWrappers.remove(userFeatureWrapper);
                    break;
                }
            }
        }
        Set<PaymentFeatureWrapper> paymentWrappers = YmnSdkPaymentWrapper.getPaymentWrappers();
        if (paymentWrappers == null || paymentWrappers.size() <= 1) {
            return;
        }
        for (PaymentFeatureWrapper paymentFeatureWrapper : paymentWrappers) {
            if (a(paymentFeatureWrapper) || a(paymentFeatureWrapper.a())) {
                paymentWrappers.remove(paymentFeatureWrapper);
                return;
            }
        }
    }

    private static boolean a(YmnPluginWrapper ymnPluginWrapper) {
        if (ymnPluginWrapper instanceof FixExcutorInterface) {
            return !((FixExcutorInterface) ymnPluginWrapper).available();
        }
        return false;
    }

    private static boolean a(UserFeatureWrapper userFeatureWrapper) {
        try {
            return "template".equals(userFeatureWrapper.a().getPluginName());
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private static boolean a(PaymentFeatureWrapper paymentFeatureWrapper) {
        try {
            return "template".equals(paymentFeatureWrapper.a().getPluginName());
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
