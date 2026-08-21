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
        final FixExcutorInterface a;

        a(FixExcutorInterface r1) {
            this.a = r1;
        }

        @Override
        public void onCallBack(int r2, String r3) {
            this.a.sendResult(r2, r3);
        }
    }

    class b implements PlatformSdkListener {
        final FixExcutorInterface a;

        b(FixExcutorInterface r1) {
            this.a = r1;
        }

        @Override
        public void onCallBack(int r2, String r3) {
            this.a.sendResult(r2, r3);
        }
    }

    public FixExcutorInterface() {
    }

    public boolean available() {
        if (this.platformSdk == null) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public void callFunction(String r3, String... r4) {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L10;
        if (r4 != null) goto L6;
    L9:
        this.userInterface.callFunction(r3);
        goto L10
    L6:
        if (r4.length == 0) goto L9;
        r0.callFunction(r3, r4);
    L10:
        super.callFunction(r3, r4);
    }

    @Override
    public void enterPlatform() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_ENTER_PLATFORM);
        return;
    }

    @Override
    public void exit() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_EXIT);
        return;
    }

    @Override
    public void getAndShowVerifyRealName() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_GET_SHOW_VERIFY_REALNAME);
        return;
    }

    @Override
    public String getOrderId() {
        PaymentInterface r0 = this.paymentInterface;
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getOrderId();
    }

    @Override
    public String getPluginId() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 != null) goto L5;
        return TEXT;
    L5:
        return r0.getPlatformId();
    }

    @Override
    public String getPluginName() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 != null) goto L5;
        return TEXT;
    L5:
        return r0.getPlatformName();
    }

    @Override
    public int getPluginVersion() {
        return 0;
    }

    @Override
    public String getSdkVersion() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 != null) goto L5;
        return TEXT;
    L5:
        return r0.getPlatformVersion();
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return null;
    }

    @Override
    public void getVerifyRealNameInfo() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_GET_VERIFY_REALNAME);
        return;
    }

    @Override
    public void hideToolBar() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_HIDE_TOOLBAR);
        return;
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public boolean isSupportFunction(String r2) {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L7;
        return r0.isSupportFunction(r2);
    L7:
        return super.isSupportFunction(r2);
    }

    @Override
    public void login() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.thirdLogin(new a(this));
        return;
    }

    @Override
    public void logout() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_LOGOUT);
        return;
    }

    @Override
    public void onActivityResult(int r2, int r3, Intent r4) {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onActivityResult(r2, r3, r4);
        return;
    }

    @Override
    public void onDestroy() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L5;
        r0.release();
    L5:
        UserInterface r02 = this.userInterface;
        if (r02 == null) goto L8;
        r02.release();
    L8:
        PaymentInterface r03 = this.paymentInterface;
        if (r03 == null) goto L12;
        r03.release();
        return;
    }

    @Override
    public void onInit(Context r3) {
        super.onInit(r3);
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L5;
        r0.init((Activity) r3);
    L5:
        UserInterface r02 = this.userInterface;
        if (r02 == null) goto L8;
        r02.init((Activity) r3);
    L8:
        PaymentInterface r03 = this.paymentInterface;
        if (r03 == null) goto L12;
        r03.init((Activity) r3);
        return;
    }

    @Override
    public void onNewIntent(Intent r2) {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onNewIntent(r2);
        return;
    }

    @Override
    public void onPause() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onPause();
        return;
    }

    @Override
    public void onRestart() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onRestart();
        return;
    }

    @Override
    public void onResume() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onResume();
        return;
    }

    @Override
    public void onStart() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onStart();
        return;
    }

    @Override
    public void onStop() {
        PlatformSdk r0 = this.platformSdk;
        if (r0 == null) goto L6;
        r0.onStop();
        return;
    }

    @Override
    public void pay(Map<String, String> r3) {
        PaymentInterface r0 = this.paymentInterface;
        if (r0 == null) goto L6;
        r0.thirdPay(r3, new b(this));
        return;
    }

    @Override
    public void prePay(LinkedHashMap<String, String> r1) {
    }

    public void setPaymentInterface(PaymentInterface r1) {
        this.paymentInterface = r1;
    }

    public void setPlatformSdk(PlatformSdk r1) {
        this.platformSdk = r1;
    }

    public void setUserInterface(UserInterface r1) {
        this.userInterface = r1;
    }

    @Override
    public void showToolBar() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_SHOW_TOOLBAR);
        return;
    }

    @Override
    public void showVerifyRealName() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_SHOW_VERIFY_REALNAME);
        return;
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> r3) {
        if (this.userInterface == null) goto L11;
        ArrayList r0 = new ArrayList();
        Iterator<Map.Entry<String, String>> r32 = r3.entrySet().iterator();
    L6:
        if (r32.hasNext() == false) goto L8;
        r0.add(r32.next().getValue());
        goto L6
    L8:
        String[] r33 = new String[r0.size()];
        this.userInterface.callFunction(IUserFeature.FUNCTION_SUBMIT_USERINFO, (String[]) r0.toArray(r33));
        return;
    }

    @Override
    public void switchAccount() {
        UserInterface r0 = this.userInterface;
        if (r0 == null) goto L6;
        r0.callFunction(IUserFeature.FUNCTION_ACCOUNT_SWITCH);
        return;
    }
}
