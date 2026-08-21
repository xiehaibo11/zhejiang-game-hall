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
import java.util.Iterator;
import org.cocos2dx.lib.Cocos2dxActivity;
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
    YmnSupport YmnSupport;
    boolean isUnityLoaded;
    private Resources uaalResouces;
    String unity2CocosData;

    static {
    }

    static void initSDKYMN() {
    }

    public static void postToSepperllita(String r0) {
    }

    public static void quitUnity() {
    }

    public static void showUnity(String r0) {
    }

    public static String strPluginAppParam() {
        return "1";
    }

    @Override
    protected void CallJSFuncByEvent(int r1, String r2) {
    }

    void _loadUnity(String r1) {
    }

    void _quitUnity() {
    }

    void _sendDataToCocos(String r1) {
    }

    protected String updateUnityCommandLineArguments(String r1) {
        return r1;
    }

    public AppActivity() {
        this.isUnityLoaded = false;
        this.YmnSupport = new YmnSupport();
        this.unity2CocosData = null;
    }

    public static String getUnityCommandLineArgs() {
        return mactivity.getIntent().getExtras().getString("unity");
    }

    @Override
    protected void onCreate(Bundle r3) {
        super.onCreate(r3);
        mactivity = this;
        this.YmnSupport.init(this);
        appContext = this;
        String r32 = updateUnityCommandLineArguments(getIntent().getStringExtra("unity"));
        getIntent().putExtra("unity", r32);
        getWindow().setFlags(128, 128);
        Universe.onCreate(this);
        RePluginSdk.onCreate(this);
        if (isInstalledViaZhuoyi(this) == false) goto L5;
        Log.d("EnvCheck", "应用通过卓易通安装");
        return;
    L5:
        Log.d("EnvCheck", "应用通过常规渠道安装");
    }

    public static void openPlugin(String r3) {
        JSONObject r2 = new JSONObject(r3);     // Catch: JSONException -> L10
        if (r2.has("pluginId") == false) goto L7;
        r2.getString("pluginId");     // Catch: JSONException -> L10
    L7:
        if (r2.has("loginJsonStr") == false) goto L15;
        r2.getString("loginJsonStr");     // Catch: JSONException -> L10
        return;
    L15:
        return;
    L10:
        e = move-exception;
        e.printStackTrace();
    }

    public static void allowStartPlugin(String r4) {
        JSONObject r3 = new JSONObject(r4);     // Catch: JSONException -> L13
        if (r3.has("pluginId") == false) goto L7;
        r3.getString("pluginId");     // Catch: JSONException -> L13
    L7:
        if (r3.has("loginJsonStr") == false) goto L10;
        r3.getString("loginJsonStr");     // Catch: JSONException -> L13
    L10:
        if (r3.has("isAllow") == false) goto L18;
        r3.getString("isAllow");     // Catch: JSONException -> L13
        return;
    L18:
        return;
    L13:
        e = move-exception;
        e.printStackTrace();
    }

    public static void getPluginsInfo(String r3) {
        JSONObject r2 = new JSONObject(r3);     // Catch: JSONException -> L10
        if (r2.has("app_id") == false) goto L7;
        r2.getString("app_id");     // Catch: JSONException -> L10
    L7:
        if (r2.has("hostAppInfo") == false) goto L15;
        r2.getString("hostAppInfo");     // Catch: JSONException -> L10
        return;
    L15:
        return;
    L10:
        e = move-exception;
        e.printStackTrace();
    }

    public static void queryPluginStatus(String r2) {
        JSONObject r1 = new JSONObject(r2);     // Catch: JSONException -> L7
        if (r1.has("pluginId") == false) goto L12;
        r1.getString("pluginId");     // Catch: JSONException -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public static void preloadPlugin(String r2) {
        JSONObject r1 = new JSONObject(r2);     // Catch: JSONException -> L7
        if (r1.has("pluginId") == false) goto L12;
        r1.getString("pluginId");     // Catch: JSONException -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public static void installPlugin(String r4) {
        JSONObject r3 = new JSONObject(r4);     // Catch: JSONException -> L13
        if (r3.has("pluginId") == false) goto L7;
        r3.getString("pluginId");     // Catch: JSONException -> L13
    L7:
        if (r3.has("noNetTimeout") == false) goto L10;
        r3.getString("noNetTimeout");     // Catch: JSONException -> L13
    L10:
        if (r3.has("weakNetTimeout") == false) goto L18;
        r3.getString("weakNetTimeout");     // Catch: JSONException -> L13
        return;
    L18:
        return;
    L13:
        e = move-exception;
        e.printStackTrace();
    }

    public static void unInstallPlugin(String r2) {
        JSONObject r1 = new JSONObject(r2);     // Catch: JSONException -> L7
        if (r1.has("pluginId") == false) goto L12;
        r1.getString("pluginId");     // Catch: JSONException -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public static void clearDownloadCache(String r2) {
        JSONObject r1 = new JSONObject(r2);     // Catch: JSONException -> L7
        if (r1.has("pluginId") == false) goto L12;
        r1.getString("pluginId");     // Catch: JSONException -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public static void isInstallPlugin(String r2) {
        JSONObject r1 = new JSONObject(r2);     // Catch: JSONException -> L7
        if (r1.has("pluginId") == false) goto L12;
        r1.getString("pluginId");     // Catch: JSONException -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public static void startApk(String r5) {
        Log.e(TAG, "startApk:" + r5);
        JSONObject r2 = new JSONObject(r5);     // Catch: JSONException -> L10
        if (r2.has("pluginId") == false) goto L7;
        r2.getString("pluginId");     // Catch: JSONException -> L10
    L7:
        if (r2.has("loginJsonStr") == false) goto L15;
        r2.getString("loginJsonStr");     // Catch: JSONException -> L10
        return;
    L15:
        return;
    L10:
        e = move-exception;
        e.printStackTrace();
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
        Cocos2dxGLSurfaceView r7 = new Cocos2dxGLSurfaceView(this);
        r7.setEGLConfigChooser(5, 6, 5, 0, 16, 8);
        return r7;
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
        if (super.getTaskRootCreate() == false) goto L4;
    }

    @Override
    protected void onActivityResult(int r2, int r3, Intent r4) {
        super.onActivityResult(r2, r3, r4);
        if (r2 == 10001) goto L5;
        return;
    L5:
        if (r3 != (-1)) goto L14;
        if (r4 != null) goto L8;
        return;
    L8:
        if (r4.getStringExtra("editbox_text") == null) goto L10;
        final String r22 = r4.getStringExtra("editbox_text");
    L11:
        final boolean r32 = r4.getBooleanExtra("editbox_confirm", false);
        runOnGLThread(new 1(this, r22, r32));
        return;
    L10:
        r22 = "";
        goto L11
    }

    @Override
    protected void onNewIntent(Intent r3) {
        super.onNewIntent(r3);
        System.out.println("_debug onNewIntent");
        if (r3 != null) goto L5;
    L7:
        if (r3 != null) goto L9;
        System.out.println("_debug onNewIntent intent is null");
    L10:
        this.YmnSupport.onNewIntent(r3);
        return;
    L9:
        System.out.println("_debug onNewIntent intent.getData is null");
        goto L10
    L5:
        if (r3.getData() == null) goto L7;
        checkScheme();
        goto L10
    }

    void handleIntent(Intent r4) {
        if (r4 != null) goto L5;
        Log.e(TAG, "handleIntent intent==null return");
    L5:
        if (r4.getExtras() != null) goto L7;
        Log.e(TAG, "handleIntent intent.getExtras() == null return");
    L7:
        if (r4 != null) goto L9;
        return;
    L9:
        if (r4.getExtras() == null) goto L20;
        Boolean r0 = Boolean.valueOf(r4.getExtras().containsKey("data"));
        Log.e(TAG, r0.toString());
        if (r4.getExtras().containsKey("data") == false) goto L15;
        String r02 = r4.getExtras().getString("data");
        Log.e(TAG, r02);
        _sendDataToCocos(r02);
    L15:
        if (r4.getExtras().containsKey("isUnityLoaded") == false) goto L19;
        this.isUnityLoaded = r4.getExtras().getBoolean("isUnityLoaded");
        return;
    L19:
        return;
    }

    public void checkScheme() {
        Intent r1 = getIntent();
        String r2 = r1.getScheme();
        Uri r3 = r1.getData();
        System.out.println("scheme:" + r2);
        if (r3 == null) goto L12;
        String r22 = r3.getQueryParameter("key");
        System.out.println("String:" + r22);
        ClipboardManager r32 = (ClipboardManager) getSystemService("clipboard");     // Catch: Exception -> L7
        String r4 = ((String) r32.getPrimaryClip().getDescription().getLabel()) + " " + ((String) r32.getPrimaryClip().getItemAt(0).getText());     // Catch: Exception -> L7
        System.out.println("String1:" + r4);     // Catch: Exception -> L7
        r32.setPrimaryClip(ClipData.newPlainText("", r22));     // Catch: Exception -> L7
        String r0 = ((String) r32.getPrimaryClip().getDescription().getLabel()) + " " + ((String) r32.getPrimaryClip().getItemAt(0).getText());     // Catch: Exception -> L7
        System.out.println("String2:" + r0);     // Catch: Exception -> L7
        r1.setData(null);     // Catch: Exception -> L7
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
        return;
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
    public void onConfigurationChanged(Configuration r1) {
        super.onConfigurationChanged(r1);
    }

    @Override
    protected void onRestoreInstanceState(Bundle r1) {
        super.onRestoreInstanceState(r1);
    }

    @Override
    protected void onSaveInstanceState(Bundle r1) {
        super.onSaveInstanceState(r1);
    }

    @Override
    protected void onStart() {
        super.onStart();
        this.YmnSupport.onStart();
    }

    @Override
    public void onRequestPermissionsResult(int r1, String[] r2, int[] r3) {
        super.onRequestPermissionsResult(r1, r2, r3);
    }

    public static void startApplicationDetailsSettings() {
        if (mactivity != null) goto L5;
        return;
    L5:
        Intent r0 = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
        r0.setData(Uri.fromParts("package", mactivity.getPackageName(), null));
        mactivity.startActivity(r0);
    }

    private static int getChannelID() {
        Context r0 = Universe.getContext();
        int r1 = 0;
        r1 = r0.getPackageManager().getPackageInfo(r0.getPackageName(), 128).applicationInfo.metaData.getInt("TD_CHANNEL_ID", 0);     // Catch: Exception -> L5
        Log.d("Tag", " TD_CHANNEL_ID : " + r1);     // Catch: Exception -> L5
        return r1;
    L5:
        e = move-exception;
        e.printStackTrace();
        return r1;
    }

    public static String getRunningMemory() {
        double r1 = 0.0d;
        Debug.MemoryInfo[] r3 = ((ActivityManager) mactivity.getSystemService("activity")).getProcessMemoryInfo(new int[]{Process.myPid()});     // Catch: Exception -> L10
        System.out.println("summary.myPid: " + Process.myPid());     // Catch: Exception -> L10
        if (r3.length <= 0) goto L13;
        System.out.println("summary.total-pss: " + r3);     // Catch: Exception -> L10
        String r32 = r3[r3.length - 1].getMemoryStat("summary.total-pss");     // Catch: Exception -> L10
        int r4 = convertToInt(r32, 0);     // Catch: Exception -> L10
        PrintStream r5 = System.out;     // Catch: Exception -> L10
        StringBuilder r6 = new StringBuilder();     // Catch: Exception -> L10
        r6.append("summary.total-pss: ");     // Catch: Exception -> L10
        r6.append(r32);     // Catch: Exception -> L10
        r6.append(',');     // Catch: Exception -> L10
        double r7 = ((double) r4) / 1024.0d;     // Catch: Exception -> L10
        r6.append(r7);     // Catch: Exception -> L10
        r5.println(r6.toString());     // Catch: Exception -> L10
        if (r4 < 0) goto L8;
        r1 = r7;
    L8:
        System.out.println("summary.mem: " + r1);     // Catch: Exception -> L10
    L13:
        return r1 + "";
    L10:
        e = move-exception;
        e.printStackTrace();
        goto L13
    }

    public static final int convertToInt(Object r2, int r3) {
        if (r2 != null) goto L4;
    L12:
        return r3;
    L4:
        if ("".equals(r2.toString().trim()) == true) goto L12;
        return Integer.valueOf(r2.toString()).intValue();
    L8:
        return Integer.valueOf(String.valueOf(r2)).intValue();
    L10:
        return Double.valueOf(r2.toString()).intValue();
    }

    public static boolean isInstalledViaZhuoyi(Context r1) {
        if (r1 != null) goto L6;
        return false;
    L6:
        return ZHUOYI_INSTALLER_PACKAGE_NAME.equals(getInstallerPackageName(r1));
    }

    private static String getInstallerPackageName(Context r1) {
        return r1.getPackageManager().getInstallerPackageName(r1.getPackageName());
    L5:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    @Override
    public Resources getResources() {
        if (this.uaalResouces != null) goto L6;
        this.uaalResouces = new UaalResources(RePlugin.getPluginContext());
    L6:
        return this.uaalResouces;
    }

    public void ymnUnityCallback(int r3, String r4) {
        Log.i("1", String.format(">> onCallback: %d, %s", new Object[]{Integer.valueOf(r3), r4}));
    }

    public static void showMainActivity(String r1) {
        AppActivity r0 = mactivity;
        if (r0 == null) goto L6;
        r0.unity2CocosData = r1;
        r0._showMainActivity();
        return;
    }

    void _showMainActivity() {
        Log.e(HostConstant.ymn, "进入到了showMainActivity");
        if (mactivity != null) goto L6;
        Log.e(HostConstant.ymn, "showMainActivity - mUnityPlayer is null");
        return;
    L6:
        Intent r0 = getIntent();
        String r1 = r0.getExtras().getString("hostActivity");
        String r2 = r0.getExtras().getString("hostPackageName");
        Intent r3 = new Intent();
        if (getIntent().getData() == null) goto L10;
        r3.setData(getIntent().getData());
    L10:
        if (getIntent().getExtras() == null) goto L12;
        r3.putExtras(getIntent().getExtras());
    L12:
        r3.addFlags(131072);
        r3.putExtra("data", this.unity2CocosData);
        if (r0.getExtras().containsKey("pluginId") == false) goto L15;
        r3.putExtra("pluginId", r0.getExtras().getString("pluginId"));
    L15:
        r3.setClassName(r2, r1);
        startActivity(r3);
        Iterator<ActivityManager.RunningAppProcessInfo> r02 = ((ActivityManager) getSystemService("activity")).getRunningAppProcesses().iterator();
    L17:
        if (r02.hasNext() == false) goto L19;
        ActivityManager.RunningAppProcessInfo r12 = r02.next();
        Log.e("ProcessUtil2", "processName=" + r12.processName + " uid=" + r12.uid + " pid=" + r12.pid);
        goto L17
    L19:
        runOnUiThread(-$$Lambda$AppActivity$ewGgeuEDHOIhhblyMrJyjkCRups.INSTANCE);
    }

    static void lambda$_showMainActivity$0() {
        mactivity = null;
        Log.e(HostConstant.ymn, "Process杀掉killProcess");
        Process.killProcess(Process.myPid());
    }
}
