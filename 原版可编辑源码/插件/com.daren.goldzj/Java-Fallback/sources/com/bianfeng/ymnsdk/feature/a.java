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
import java.util.Iterator;
import java.util.Set;

public class a {
    public static void a(Context r2, HashMap<String, YmnPluginWrapper> r3) {
        Iterator<YmnPluginWrapper> r32 = r3.values().iterator();
    L4:
        if (r32.hasNext() == false) goto L12;
        YmnPluginWrapper r0 = r32.next();
        if (r0.isInjected() == true) goto L11;
        if ((r2 instanceof Activity) == false) goto L11;
        a((Activity) r2, r0);
    L11:
        r0.updateContext(r2);
        goto L4
    L12:
        a();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static void a(Activity r2, YmnPluginWrapper r3) {
        if ((r3 instanceof IUserFeature) == false) goto L6;
        Logger.d("registUserFeatureWrapper " + r3);
        YmnSdkUserWrapper.registUserFeatureWrapper(new UserFeatureWrapper((IUserFeature) r3));
        r3.setInjected(true);
    L6:
        if ((r3 instanceof IPaymentFeature) == false) goto L9;
        Logger.d("registPaymentFeatureWrapper " + r3);
        YmnSdkPaymentWrapper.registPaymentFeatureWrapper(new PaymentFeatureWrapper((IPaymentFeature) r3));
        r3.setInjected(true);
        return;
    }

    private static void a() {
        Set<UserFeatureWrapper> r0 = YmnSdkUserWrapper.getUserWrappers();
        if (r0 != null) goto L5;
    L14:
        Set<PaymentFeatureWrapper> r02 = YmnSdkPaymentWrapper.getPaymentWrappers();
        if (r02 != null) goto L17;
        return;
    L17:
        if (r02.size() <= 1) goto L36;
        Iterator<PaymentFeatureWrapper> r1 = r02.iterator();
    L20:
        if (r1.hasNext() == false) goto L37;
        PaymentFeatureWrapper r2 = r1.next();
        if (a(r2) == true) goto L25;
        if (a(r2.a()) == false) goto L20;
    L25:
        r02.remove(r2);
        return;
    L37:
        return;
    L36:
        return;
    L5:
        if (r0.size() <= 1) goto L14;
        Iterator<UserFeatureWrapper> r22 = r0.iterator();
    L8:
        if (r22.hasNext() == false) goto L14;
        UserFeatureWrapper r3 = r22.next();
        if (a(r3) == true) goto L13;
        if (a(r3.a()) == false) goto L8;
    L13:
        r0.remove(r3);
        goto L14
    }

    private static boolean a(YmnPluginWrapper r1) {
        if ((r1 instanceof FixExcutorInterface) == true) goto L5;
        return false;
    L5:
        return !((FixExcutorInterface) r1).available();
    }

    private static boolean a(UserFeatureWrapper r1) {
        return "template".equals(r1.a().getPluginName());
    L5:
        e = move-exception;
        e.printStackTrace();
        return false;
    }

    private static boolean a(PaymentFeatureWrapper r1) {
        return "template".equals(r1.a().getPluginName());
    L5:
        e = move-exception;
        e.printStackTrace();
        return false;
    }
}
