package org.cocos2dx.javascript;

import android.app.ActivityManager;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.net.Uri;
import android.os.Bundle;
import android.os.Debug;
import android.os.Process;
import android.util.Log;
import com.bianfeng.gongxiang.screenlib.ScreenSdk;
import com.bianfeng.libuniverse.Universe;
import com.bianfeng.pluginlibrary.RePluginSdk;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.qihoo360.replugin.RePlugin;
import java.io.PrintStream;
import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxEditBox;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;
import org.json.JSONException;
import org.json.JSONObject;

public class AppActivity extends Cocos2dxActivity {
    public static String TAG = "MainActivity_log";
    private static final String ZHUOYI_INSTALLER_PACKAGE_NAME = "com.zhuoyi.appstore.lite";
    private static Context appContext = null;
    static boolean isSetCocosData = true;
    public static boolean isUnityEngine = false;
    static int luaFuncCallback;
    public static AppActivity mactivity;
    private static int queryUpdateCallback;
    private static int updateProgressCallback;
    private Resources uaalResouces;
    boolean isUnityLoaded = false;
    YmnSupport YmnSupport = new YmnSupport();
    String unity2CocosData = null;

    static void initSDKYMN() {
    }

    public static void postToSepperllita(String str) {
    }

    public static void quitUnity() {
    }

    public static void showUnity(String str) {
    }

    public static String strPluginAppParam() {
        return "1";
    }

    @Override
    protected void CallJSFuncByEvent(int i, String str) {
    }

    void _loadUnity(String str) {
    }

    void _quitUnity() {
    }

    void _sendDataToCocos(String str) {
    }

    protected String updateUnityCommandLineArguments(String str) {
        return str;
    }

    public static String getUnityCommandLineArgs() {
        return mactivity.getIntent().getExtras().getString("unity");
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        mactivity = this;
        this.YmnSupport.init(this);
        appContext = this;
        getIntent().putExtra("unity", updateUnityCommandLineArguments(getIntent().getStringExtra("unity")));
        getWindow().setFlags(128, 128);
        Universe.onCreate(this);
        RePluginSdk.onCreate(this);
        if (isInstalledViaZhuoyi(this)) {
            Log.d("EnvCheck", "应用通过卓易通安装");
        } else {
            Log.d("EnvCheck", "应用通过常规渠道安装");
        }
    }

    public static void openPlugin(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
            if (jSONObject.has("loginJsonStr")) {
                jSONObject.getString("loginJsonStr");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void allowStartPlugin(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
            if (jSONObject.has("loginJsonStr")) {
                jSONObject.getString("loginJsonStr");
            }
            if (jSONObject.has("isAllow")) {
                jSONObject.getString("isAllow");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void getPluginsInfo(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("app_id")) {
                jSONObject.getString("app_id");
            }
            if (jSONObject.has("hostAppInfo")) {
                jSONObject.getString("hostAppInfo");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void queryPluginStatus(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void preloadPlugin(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void installPlugin(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
            if (jSONObject.has("noNetTimeout")) {
                jSONObject.getString("noNetTimeout");
            }
            if (jSONObject.has("weakNetTimeout")) {
                jSONObject.getString("weakNetTimeout");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void unInstallPlugin(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void clearDownloadCache(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void isInstallPlugin(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void startApk(String str) {
        Log.e(TAG, "startApk:" + str);
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("pluginId")) {
                jSONObject.getString("pluginId");
            }
            if (jSONObject.has("loginJsonStr")) {
                jSONObject.getString("loginJsonStr");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void hideSplash() {
        ScreenSdk.hideSplashView(mactivity);
    }

    public static void changePortrait() {
        mactivity.setRequestedOrientation(7);
    }

    public static void changeLandscape() {
        mactivity.setRequestedOrientation(6);
    }

    @Override
    public Cocos2dxGLSurfaceView onCreateView() {
        Cocos2dxGLSurfaceView cocos2dxGLSurfaceView = new Cocos2dxGLSurfaceView(this);
        cocos2dxGLSurfaceView.setEGLConfigChooser(5, 6, 5, 0, 16, 8);
        return cocos2dxGLSurfaceView;
    }

    @Override
    protected void onResume() {
        super.onResume();
        checkScheme();
        this.YmnSupport.onResume();
    }

    @Override
    protected void onPause() {
        super.onPause();
        this.YmnSupport.onPause();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (!super.getTaskRootCreate()) {
        }
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        if (i == 10001 && i2 == -1 && intent != null) {
            final String stringExtra = intent.getStringExtra("editbox_text") != null ? intent.getStringExtra("editbox_text") : "";
            final boolean booleanExtra = intent.getBooleanExtra("editbox_confirm", false);
            runOnGLThread(new Runnable() {
                @Override
                public void run() {
                    Cocos2dxEditBox.onKeyboardInputCallback(stringExtra);
                    if (booleanExtra) {
                        Cocos2dxEditBox.onKeyboardConfirmCallback(stringExtra);
                    }
                    Cocos2dxEditBox.onKeyboardCompleteCallback(stringExtra);
                }
            });
        }
    }

    @Override
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
        this.YmnSupport.onNewIntent(intent);
    }

    void handleIntent(Intent intent) {
        if (intent == null) {
            Log.e(TAG, "handleIntent intent==null return");
        }
        if (intent.getExtras() == null) {
            Log.e(TAG, "handleIntent intent.getExtras() == null return");
        }
        if (intent == null || intent.getExtras() == null) {
            return;
        }
        Log.e(TAG, Boolean.valueOf(intent.getExtras().containsKey("data")).toString());
        if (intent.getExtras().containsKey("data")) {
            String string = intent.getExtras().getString("data");
            Log.e(TAG, string);
            _sendDataToCocos(string);
        }
        if (intent.getExtras().containsKey("isUnityLoaded")) {
            this.isUnityLoaded = intent.getExtras().getBoolean("isUnityLoaded");
        }
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

    @Override
    protected void onRestart() {
        super.onRestart();
    }

    @Override
    protected void onStop() {
        super.onStop();
        this.YmnSupport.onStop();
    }

    @Override
    public void onBackPressed() {
        super.onBackPressed();
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override
    protected void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
    }

    @Override
    protected void onStart() {
        super.onStart();
        this.YmnSupport.onStart();
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
    }

    public static void startApplicationDetailsSettings() {
        if (mactivity == null) {
            return;
        }
        Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
        intent.setData(Uri.fromParts("package", mactivity.getPackageName(), null));
        mactivity.startActivity(intent);
    }

    private static int getChannelID() {
        Context context = Universe.getContext();
        int i = 0;
        try {
            i = context.getPackageManager().getPackageInfo(context.getPackageName(), 128).applicationInfo.metaData.getInt("TD_CHANNEL_ID", 0);
            Log.d("Tag", " TD_CHANNEL_ID : " + i);
            return i;
        } catch (Exception e) {
            e.printStackTrace();
            return i;
        }
    }

    public static String getRunningMemory() {
        try {
            Debug.MemoryInfo[] processMemoryInfo = ((ActivityManager) mactivity.getSystemService("activity")).getProcessMemoryInfo(new int[]{Process.myPid()});
            System.out.println("summary.myPid: " + Process.myPid());
            if (processMemoryInfo.length > 0) {
                System.out.println("summary.total-pss: " + processMemoryInfo);
                String memoryStat = processMemoryInfo[processMemoryInfo.length - 1].getMemoryStat("summary.total-pss");
                int iConvertToInt = convertToInt(memoryStat, 0);
                PrintStream printStream = System.out;
                StringBuilder sb = new StringBuilder();
                sb.append("summary.total-pss: ");
                sb.append(memoryStat);
                sb.append(',');
                double d = ((double) iConvertToInt) / 1024.0d;
                sb.append(d);
                printStream.println(sb.toString());
                d = iConvertToInt >= 0 ? d : 0.0d;
                System.out.println("summary.mem: " + d);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return d + "";
    }

    public static final int convertToInt(Object obj, int i) {
        if (obj != null && !"".equals(obj.toString().trim())) {
            try {
                try {
                    try {
                        return Integer.valueOf(obj.toString()).intValue();
                    } catch (Exception unused) {
                        return Integer.valueOf(String.valueOf(obj)).intValue();
                    }
                } catch (Exception unused2) {
                    return Double.valueOf(obj.toString()).intValue();
                }
            } catch (Exception unused3) {
            }
        }
        return i;
    }

    public static boolean isInstalledViaZhuoyi(Context context) {
        if (context == null) {
            return false;
        }
        return ZHUOYI_INSTALLER_PACKAGE_NAME.equals(getInstallerPackageName(context));
    }

    private static String getInstallerPackageName(Context context) {
        try {
            return context.getPackageManager().getInstallerPackageName(context.getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public Resources getResources() {
        if (this.uaalResouces == null) {
            this.uaalResouces = new UaalResources(RePlugin.getPluginContext());
        }
        return this.uaalResouces;
    }

    public void ymnUnityCallback(int i, String str) {
        Log.i("1", String.format(">> onCallback: %d, %s", Integer.valueOf(i), str));
    }

    public static void showMainActivity(String str) {
        AppActivity appActivity = mactivity;
        if (appActivity != null) {
            appActivity.unity2CocosData = str;
            appActivity._showMainActivity();
        }
    }

    void _showMainActivity() {
        Log.e(HostConstant.ymn, "进入到了showMainActivity");
        if (mactivity == null) {
            Log.e(HostConstant.ymn, "showMainActivity - mUnityPlayer is null");
            return;
        }
        Intent intent = getIntent();
        String string = intent.getExtras().getString("hostActivity");
        String string2 = intent.getExtras().getString("hostPackageName");
        Intent intent2 = new Intent();
        if (getIntent().getData() != null) {
            intent2.setData(getIntent().getData());
        }
        if (getIntent().getExtras() != null) {
            intent2.putExtras(getIntent().getExtras());
        }
        intent2.addFlags(131072);
        intent2.putExtra("data", this.unity2CocosData);
        if (intent.getExtras().containsKey("pluginId")) {
            intent2.putExtra("pluginId", intent.getExtras().getString("pluginId"));
        }
        intent2.setClassName(string2, string);
        startActivity(intent2);
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : ((ActivityManager) getSystemService("activity")).getRunningAppProcesses()) {
            Log.e("ProcessUtil2", "processName=" + runningAppProcessInfo.processName + " uid=" + runningAppProcessInfo.uid + " pid=" + runningAppProcessInfo.pid);
        }
        runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                AppActivity.lambda$_showMainActivity$0();
            }
        });
    }

    static void lambda$_showMainActivity$0() {
        mactivity = null;
        Log.e(HostConstant.ymn, "Process杀掉killProcess");
        Process.killProcess(Process.myPid());
    }
}
