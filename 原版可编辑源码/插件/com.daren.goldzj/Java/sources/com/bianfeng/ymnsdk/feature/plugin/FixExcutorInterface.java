package com.bianfeng.ymnsdk.feature.plugin;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import com.bianfeng.platform.PaymentInterface;
import com.bianfeng.platform.PlatformSdk;
import com.bianfeng.platform.PlatformSdkListener;
import com.bianfeng.platform.UserInterface;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;

@Deprecated
public class FixExcutorInterface extends YmnPluginWrapper implements IUserFeature, IPaymentFeature {
    private static final String TEXT = "waiting";
    private PaymentInterface paymentInterface;
    private PlatformSdk platformSdk;
    private UserInterface userInterface;

    class a implements PlatformSdkListener {
        a() {
        }

        @Override
        public void onCallBack(int i, String str) {
            FixExcutorInterface.this.sendResult(i, str);
        }
    }

    class b implements PlatformSdkListener {
        b() {
        }

        @Override
        public void onCallBack(int i, String str) {
            FixExcutorInterface.this.sendResult(i, str);
        }
    }

    public boolean available() {
        return this.platformSdk != null;
    }

    @Override
    public void callFunction(String str, String... strArr) {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            if (strArr == null || strArr.length == 0) {
                this.userInterface.callFunction(str);
            } else {
                userInterface.callFunction(str, strArr);
            }
        }
        super.callFunction(str, strArr);
    }

    @Override
    public void enterPlatform() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_ENTER_PLATFORM);
        }
    }

    @Override
    public void exit() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_EXIT);
        }
    }

    @Override
    public void getAndShowVerifyRealName() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_GET_SHOW_VERIFY_REALNAME);
        }
    }

    @Override
    public String getOrderId() {
        PaymentInterface paymentInterface = this.paymentInterface;
        if (paymentInterface != null) {
            return paymentInterface.getOrderId();
        }
        return null;
    }

    @Override
    public String getPluginId() {
        PlatformSdk platformSdk = this.platformSdk;
        return platformSdk != null ? platformSdk.getPlatformId() : TEXT;
    }

    @Override
    public String getPluginName() {
        PlatformSdk platformSdk = this.platformSdk;
        return platformSdk != null ? platformSdk.getPlatformName() : TEXT;
    }

    @Override
    public int getPluginVersion() {
        return 0;
    }

    @Override
    public String getSdkVersion() {
        PlatformSdk platformSdk = this.platformSdk;
        return platformSdk != null ? platformSdk.getPlatformVersion() : TEXT;
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return null;
    }

    @Override
    public void getVerifyRealNameInfo() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_GET_VERIFY_REALNAME);
        }
    }

    @Override
    public void hideToolBar() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_HIDE_TOOLBAR);
        }
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public boolean isSupportFunction(String str) {
        UserInterface userInterface = this.userInterface;
        return userInterface != null ? userInterface.isSupportFunction(str) : super.isSupportFunction(str);
    }

    @Override
    public void login() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.thirdLogin(new a());
        }
    }

    @Override
    public void logout() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_LOGOUT);
        }
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onActivityResult(i, i2, intent);
        }
    }

    @Override
    public void onDestroy() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.release();
        }
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.release();
        }
        PaymentInterface paymentInterface = this.paymentInterface;
        if (paymentInterface != null) {
            paymentInterface.release();
        }
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.init((Activity) context);
        }
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.init((Activity) context);
        }
        PaymentInterface paymentInterface = this.paymentInterface;
        if (paymentInterface != null) {
            paymentInterface.init((Activity) context);
        }
    }

    @Override
    public void onNewIntent(Intent intent) {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onNewIntent(intent);
        }
    }

    @Override
    public void onPause() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onPause();
        }
    }

    @Override
    public void onRestart() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onRestart();
        }
    }

    @Override
    public void onResume() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onResume();
        }
    }

    @Override
    public void onStart() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onStart();
        }
    }

    @Override
    public void onStop() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onStop();
        }
    }

    @Override
    public void pay(Map<String, String> map) {
        PaymentInterface paymentInterface = this.paymentInterface;
        if (paymentInterface != null) {
            paymentInterface.thirdPay(map, new b());
        }
    }

    @Override
    public void prePay(LinkedHashMap<String, String> linkedHashMap) {
    }

    public void setPaymentInterface(PaymentInterface paymentInterface) {
        this.paymentInterface = paymentInterface;
    }

    public void setPlatformSdk(PlatformSdk platformSdk) {
        this.platformSdk = platformSdk;
    }

    public void setUserInterface(UserInterface userInterface) {
        this.userInterface = userInterface;
    }

    @Override
    public void showToolBar() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_SHOW_TOOLBAR);
        }
    }

    @Override
    public void showVerifyRealName() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_SHOW_VERIFY_REALNAME);
        }
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> linkedHashMap) {
        if (this.userInterface != null) {
            ArrayList arrayList = new ArrayList();
            Iterator<Map.Entry<String, String>> it = linkedHashMap.entrySet().iterator();
            while (it.hasNext()) {
                arrayList.add(it.next().getValue());
            }
            this.userInterface.callFunction(IUserFeature.FUNCTION_SUBMIT_USERINFO, (String[]) arrayList.toArray(new String[arrayList.size()]));
        }
    }

    @Override
    public void switchAccount() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_ACCOUNT_SWITCH);
        }
    }
}
