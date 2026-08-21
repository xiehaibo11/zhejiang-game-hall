package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import java.util.Map;

@Deprecated
public class PaymentInterfaceFix extends PaymentInterface {
    protected static PlatformSdkListener listener = new PlatformSdkListener() {
        @Override
        public void onCallBack(int code, String msg) {
            YmnSdkWrapper.dispatchMessage(code, msg);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override
    public void payForProduct(String orderId, String productId, String productName, String productPrice, String productCount, String roleId, String roleName, String roleGrade, String roleBalance, String serverId, String notifyUrl, String ext) {
    }

    @Override
    public void payForProduct(Map<String, String> orders) {
    }

    @Override
    public void pay(Map<String, String> orders) {
    }

    @Override
    public void thirdPay(Map<String, String> orders, PlatformSdkListener listener2) {
    }

    @Override
    public Object getExt() {
        return null;
    }

    @Override
    public void resetPayState() {
    }

    @Override
    public void release() {
    }

    @Override
    public String getOrderId() {
        return null;
    }
}
