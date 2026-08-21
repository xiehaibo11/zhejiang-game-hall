package org.cocos2dx.lua;

import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import com.bianfeng.gongxiang.screenlib.ScreenSdk;
import com.bianfeng.libuniverse.Universe;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.wechat.WechatInterface;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tencent.bugly.crashreport.BuglyLog;
import com.tencent.bugly.crashreport.CrashReport;
import com.tkay.expressad.videocommon.e.b;
import com.ymnsdk.replugin.RepluginSdkJavaBridging;
import com.ymnsdk.replugin.listener.RepluginListener;
import java.io.File;
import java.io.FileInputStream;
import java.util.HashMap;
import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxLuaJavaBridge;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class AppActivity extends Cocos2dxActivity {
    public static AppActivity mactivity;

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.setEnableVirtualButton(false);
        super.onCreate(bundle);
        YmnSdk.onCreate(this);
        mactivity = this;
        getGLSurfaceView().setMultipleTouchEnabled(false);
        if (isTaskRoot()) {
            Universe.onCreate(this);
            XhSupport.setActivity(this);
            RepluginSdkJavaBridging.onCreate(this);
            RepluginSdkJavaBridging.addRePluginLister(new RepluginListener() { // from class: org.cocos2dx.lua.AppActivity.1
                @Override // com.ymnsdk.replugin.listener.RepluginListener
                public void sendRepluginCodeAndMsg(int i, String str) {
                    final JSONObject jSONObject = new JSONObject();
                    try {
                        jSONObject.put("code", i);
                        jSONObject.put("msg", str);
                    } catch (JSONException e) {
                        e.printStackTrace();
                    }
                    AppActivity.this.runOnGLThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.1.1
                        @Override // java.lang.Runnable
                        public void run() {
                            Cocos2dxLuaJavaBridge.callLuaGlobalFunctionWithString("RepluginSDKCallBack", jSONObject.toString());
                        }
                    });
                }
            });
        }
    }

    static void initSDKYMN() {
        mactivity.runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.2
            @Override // java.lang.Runnable
            public void run() {
                CrashReport.initCrashReport(AppActivity.mactivity, "b666864bbf", false);
                YmnSupport.init(AppActivity.mactivity);
            }
        });
    }

    public static void buglySetUserId(final String str) {
        ((AppActivity) getContext()).runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.3
            @Override // java.lang.Runnable
            public void run() {
                try {
                    CrashReport.setUserId(new JSONObject(str).getString("userid"));
                    Log.d("bugly", "buglySetUserId ok");
                } catch (Exception e) {
                    Log.d("bugly", "buglySetUserId:" + e.toString());
                }
            }
        });
    }

    public static void buglySetTag(final String str) {
        ((AppActivity) getContext()).runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.4
            @Override // java.lang.Runnable
            public void run() {
                try {
                    CrashReport.setUserSceneTag(AppActivity.getContext(), new JSONObject(str).getInt(RemoteMessageConst.Notification.TAG));
                    Log.d("bugly", "buglySetTag ok");
                } catch (Exception e) {
                    Log.d("bugly", "buglySetTag:" + e.toString());
                }
            }
        });
    }

    public static void buglyAddUserValue(final String str) {
        ((AppActivity) getContext()).runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.5
            @Override // java.lang.Runnable
            public void run() {
                try {
                    JSONObject jSONObject = new JSONObject(str);
                    CrashReport.putUserData(AppActivity.getContext(), jSONObject.getString("key"), jSONObject.getString("value"));
                    Log.d("bugly", "buglyAddUserValue ok");
                } catch (Exception e) {
                    Log.d("bugly", "buglyAddUserValue:" + e.toString());
                }
            }
        });
    }

    public static void buglyLog(final String str) {
        ((AppActivity) getContext()).runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.6
            @Override // java.lang.Runnable
            public void run() {
                try {
                    JSONObject jSONObject = new JSONObject(str);
                    int i = jSONObject.getInt("level");
                    String string = jSONObject.getString(RemoteMessageConst.Notification.TAG);
                    String string2 = jSONObject.getString("log");
                    if (i == 0) {
                        BuglyLog.v(string, string2);
                    } else if (i == 1) {
                        BuglyLog.d(string, string2);
                    } else if (i == 2) {
                        BuglyLog.i(string, string2);
                    } else if (i == 3) {
                        BuglyLog.w(string, string2);
                    } else if (i == 4) {
                        BuglyLog.e(string, string2);
                    } else {
                        BuglyLog.v(string, string2);
                    }
                    Log.d("bugly", "buglyLog ok");
                } catch (Exception e) {
                    Log.d("bugly", "buglyLog:" + e.toString());
                }
            }
        });
    }

    public static void buglyReportLuaException(final String str) {
        ((AppActivity) getContext()).runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.AppActivity.7
            @Override // java.lang.Runnable
            public void run() {
                try {
                    Thread threadCurrentThread = Thread.currentThread();
                    System.out.println("Current thread: " + threadCurrentThread.getName());
                    JSONObject jSONObject = new JSONObject(str);
                    String string = jSONObject.getString("title");
                    CrashReport.postException(6, string, jSONObject.getString("msg"), jSONObject.getString("track"), new HashMap());
                    Log.d("bugly", string);
                } catch (Exception e) {
                    Log.d("bugly", "buglyReportLuaException error:" + e.toString());
                }
            }
        });
    }

    public static void hideSplash() {
        ScreenSdk.hideSplashView(mactivity);
    }

    @Override // android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        YmnSdk.onRequestPermissionsResult(i, strArr, iArr);
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        YmnSupport.onStart();
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onResume() {
        super.onResume();
        checkScheme();
        YmnSupport.onResume();
        Log.w("onResume:", "Activity_onResume触发");
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        RepluginSdkJavaBridging.onDestory();
    }

    public static String readJsonFile(String str) {
        File file = new File(str);
        if (!file.exists()) {
            return null;
        }
        try {
            FileInputStream fileInputStream = new FileInputStream(file);
            byte[] bArr = new byte[fileInputStream.available()];
            fileInputStream.read(bArr);
            fileInputStream.close();
            return new String(bArr, "UTF-8");
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // org.cocos2dx.lib.Cocos2dxActivity, android.app.Activity
    protected void onPause() {
        super.onPause();
        YmnSupport.onPause();
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        YmnSupport.onStop();
    }

    void invokeZJBWechatSetPayParams(int i, String str, int i2, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("wxAppId", str2);
            jSONObject.put(b.u, Integer.toString(i));
            jSONObject.put("packageId", Integer.toString(i2));
            jSONObject.put("clientKey", str);
            YmnSdk.callFunction(WechatInterface.WECHAT_SET_PAY_PARAMS, jSONObject.toString());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        System.out.println("_debug onNewIntent");
        if (intent != null && intent.getData() != null) {
            checkScheme();
        } else if (intent == null) {
            System.out.println("_debug onNewIntent intent is null");
        } else {
            System.out.println("_debug onNewIntent intent.getData is null");
        }
        YmnSupport.onNewIntent(intent);
        RepluginSdkJavaBridging.onNewIntent(intent);
    }

    public void checkScheme() {
        Intent intent = getIntent();
        String scheme = intent.getScheme();
        Uri data = intent.getData();
        System.out.println("scheme:" + scheme);
        if (data != null) {
            String queryParameter = data.getQueryParameter("key");
            System.out.println("String:" + queryParameter);
            try {
                YmnSupport.ymnCallBack(1601, data.getQuery());
                ClipboardManager clipboardManager = (ClipboardManager) getSystemService("clipboard");
                String str = ((String) clipboardManager.getPrimaryClip().getDescription().getLabel()) + " " + ((String) clipboardManager.getPrimaryClip().getItemAt(0).getText());
                System.out.println("String1:" + str);
                clipboardManager.setPrimaryClip(ClipData.newPlainText("", queryParameter));
                String str2 = ((String) clipboardManager.getPrimaryClip().getDescription().getLabel()) + " " + ((String) clipboardManager.getPrimaryClip().getItemAt(0).getText());
                System.out.println("String2:" + str2);
                intent.setData(null);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
