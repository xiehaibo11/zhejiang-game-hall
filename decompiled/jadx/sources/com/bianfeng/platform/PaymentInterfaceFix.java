package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class PaymentInterfaceFix extends PaymentInterface {
    protected static PlatformSdkListener listener = new PlatformSdkListener() { // from class: com.bianfeng.platform.PaymentInterfaceFix.1
        @Override // com.bianfeng.platform.PlatformSdkListener
        public void onCallBack(int code, String msg) {
            YmnSdkWrapper.dispatchMessage(code, msg);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public void payForProduct(String orderId, String productId, String productName, String productPrice, String productCount, String roleId, String roleName, String roleGrade, String roleBalance, String serverId, String notifyUrl, String ext) {
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public void payForProduct(Map<String, String> orders) {
    }

    @Override // com.bianfeng.platform.PaymentInterface, com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public void pay(Map<String, String> orders) {
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public void thirdPay(Map<String, String> orders, PlatformSdkListener listener2) {
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public Object getExt() {
        return null;
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public void resetPayState() {
    }

    @Override // com.bianfeng.platform.PaymentInterface
    public void release() {
    }

    @Override // com.bianfeng.platform.PaymentInterface, com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public String getOrderId() {
        return null;
    }
}
