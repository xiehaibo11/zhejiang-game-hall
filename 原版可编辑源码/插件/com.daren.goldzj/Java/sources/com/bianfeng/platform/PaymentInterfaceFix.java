package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import java.util.Map;

@Deprecated
public class PaymentInterfaceFix extends PaymentInterface {
    protected static PlatformSdkListener listener = new PlatformSdkListener() {
        @Override
        public void onCallBack(int i, String str) {
            YmnSdkWrapper.dispatchMessage(i, str);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public Object getExt() {
        return null;
    }

    @Override
    public String getOrderId() {
        return null;
    }

    @Override
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override
    public void pay(Map<String, String> map) {
    }

    @Override
    public void payForProduct(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, String str12) {
    }

    @Override
    public void payForProduct(Map<String, String> map) {
    }

    @Override
    public void release() {
    }

    @Override
    public void resetPayState() {
    }

    @Override
    public void thirdPay(Map<String, String> map, PlatformSdkListener platformSdkListener) {
    }
}
