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
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

@Deprecated
public class FixExcutorInterface extends YmnPluginWrapper implements IUserFeature, IPaymentFeature {
    private static final String TEXT = "waiting";
    private PaymentInterface paymentInterface;
    private PlatformSdk platformSdk;
    private UserInterface userInterface;

    public void setPlatformSdk(PlatformSdk platformSdk) {
        this.platformSdk = platformSdk;
    }

    public void setUserInterface(UserInterface userInterface) {
        this.userInterface = userInterface;
    }

    public void setPaymentInterface(PaymentInterface paymentInterface) {
        this.paymentInterface = paymentInterface;
    }

    public boolean available() {
        return this.platformSdk != null;
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
    public String getPluginId() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            return platformSdk.getPlatformId();
        }
        return TEXT;
    }

    @Override
    public String getPluginName() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            return platformSdk.getPlatformName();
        }
        return TEXT;
    }

    @Override
    public int getPluginVersion() {
        return 0;
    }

    @Override
    public String getSdkVersion() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            return platformSdk.getPlatformVersion();
        }
        return TEXT;
    }

    @Override
    public boolean isSupportFunction(String functionName) {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            return userInterface.isSupportFunction(functionName);
        }
        return super.isSupportFunction(functionName);
    }

    @Override
    public void callFunction(String functionName, String... data) {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            if (data == null || data.length == 0) {
                this.userInterface.callFunction(functionName);
            } else {
                userInterface.callFunction(functionName, data);
            }
        }
        super.callFunction(functionName, data);
    }

    @Override
    public void onStart() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onStart();
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
    public void onPause() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onPause();
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
    public void onStop() {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onStop();
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
    public void onNewIntent(Intent intent) {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onNewIntent(intent);
        }
    }

    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        PlatformSdk platformSdk = this.platformSdk;
        if (platformSdk != null) {
            platformSdk.onActivityResult(requestCode, resultCode, data);
        }
    }

    class a implements PlatformSdkListener {
        a() {
        }

        @Override
        public void onCallBack(int code, String msg) {
            FixExcutorInterface.this.sendResult(code, msg);
        }
    }

    @Override
    public void login() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.thirdLogin(new a());
        }
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public void logout() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_LOGOUT);
        }
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
    public void getVerifyRealNameInfo() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_GET_VERIFY_REALNAME);
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
    public void hideToolBar() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_HIDE_TOOLBAR);
        }
    }

    @Override
    public void switchAccount() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_ACCOUNT_SWITCH);
        }
    }

    @Override
    public void exit() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction("exit");
        }
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> data) {
        if (this.userInterface != null) {
            List<String> args = new ArrayList<>();
            for (Map.Entry<String, String> entry : data.entrySet()) {
                args.add(entry.getValue());
            }
            String[] array = new String[args.size()];
            this.userInterface.callFunction(IUserFeature.FUNCTION_SUBMIT_USERINFO, (String[]) args.toArray(array));
        }
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return null;
    }

    @Override
    public void enterPlatform() {
        UserInterface userInterface = this.userInterface;
        if (userInterface != null) {
            userInterface.callFunction(IUserFeature.FUNCTION_ENTER_PLATFORM);
        }
    }

    @Override
    public void prePay(LinkedHashMap<String, String> order) {
    }

    class b implements PlatformSdkListener {
        b() {
        }

        @Override
        public void onCallBack(int code, String msg) {
            FixExcutorInterface.this.sendResult(code, msg);
        }
    }

    @Override
    public void pay(Map<String, String> orders) {
        PaymentInterface paymentInterface = this.paymentInterface;
        if (paymentInterface != null) {
            paymentInterface.thirdPay(orders, new b());
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
}
