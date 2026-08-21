package com.bianfeng.ymnsdk.sysfunc;

import android.app.NotificationManager;
import android.bluetooth.BluetoothAdapter;
import android.content.BroadcastReceiver;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.location.LocationManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Environment;
import android.provider.MediaStore;
import android.support.v4.content.FileProvider;
import android.telephony.PhoneStateListener;
import android.telephony.SignalStrength;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.bianfeng.libuniverse.Device;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;
import com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotActivity;
import com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi;
import com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService;
import com.bianfeng.ymnsdk.sysfunc.screenshot.WaterMarkHelp;
import com.bianfeng.ymnsdk.sysfunc.utils.Base64;
import com.bianfeng.ymnsdk.sysfunc.utils.FileUtils;
import com.bianfeng.ymnsdk.sysfunc.utils.IntenetUtil;
import com.bianfeng.ymnsdk.sysfunc.utils.SimulatorUtil;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.heytap.mcssdk.constant.MessageConstant;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tencent.connect.common.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.security.GeneralSecurityException;
import java.util.ArrayList;
import java.util.List;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class SysfuncInterface extends YmnPluginWrapper {
    private static final String CHECK_OP_NO_THROW = "checkOpNoThrow";
    private static final int NOTIFICATION_STATUS_FAIL = 16005;
    private static final int NOTIFICATION_STATUS_SUCCESS = 16004;
    private static final int OPPOAES_FAIL = 16002;
    private static final int OPPOAES_SUCCESS = 16001;
    private static final String OP_POST_NOTIFICATION = "OP_POST_NOTIFICATION";
    private static final int PERMISSION_DOWNLOAD = 102;
    private static final int PERMISSION_EMULATOR_CODE = 101;
    private static final int PERMISSION_GPS_CODE = 100;
    private static final int REQUEST_MANAGE_FILES_ACCESS = 16003;
    protected static final String SYSFUNC_CALL_ALL_PERMISSION = "sysfunc_call_all_permission";
    private static final int SYSFUNC_CALL_ALL_PERMISSION_FAIL = 1224;
    private static final int SYSFUNC_CALL_ALL_PERMISSION_SUCCESS = 1223;
    protected static final String SYSFUNC_CALL_PHONE = "sysfunc_call_phone";
    protected static final String SYSFUNC_DELETE_PRIVATE_FILE = "sysfunc_delete_private_file";
    protected static final String SYSFUNC_DOWNLOADIMGSAVEPHONE = "sysfunc_downLoad_Img_Save";
    public static final int SYSFUNC_DOWNLOAD_IMG_FAIL = 1113;
    public static final int SYSFUNC_DOWNLOAD_IMG_SUCCESS = 1112;
    protected static final String SYSFUNC_FUNCTION_COPY_CLIPBOARD = "sysfunc_copy_clipboard";
    protected static final String SYSFUNC_FUNCTION_DELETE_APK = "sysfunc_delete_apk";
    protected static final String SYSFUNC_FUNCTION_GET_BATTERY_LEVEL = "sysfunc_battery_level";
    protected static final String SYSFUNC_FUNCTION_GET_BATTERY_TEMPERATURE = "sysfunc_battery_temperature";
    protected static final String SYSFUNC_FUNCTION_GET_CLIPBOARDCONTENT = "sysfunc_get_clipboardcontent";
    protected static final String SYSFUNC_FUNCTION_GET_GPS = "sysfunc_get_gps";
    protected static final String SYSFUNC_FUNCTION_GET_NETWORK_LEVEL = "sysfunc_network_level";
    protected static final String SYSFUNC_FUNCTION_GET_PING = "sysfunc_get_ping";
    protected static final String SYSFUNC_FUNCTION_HIDE_BOTTOMUTMENU = "sysfunc_hide_BottomUIMenu";
    protected static final String SYSFUNC_FUNCTION_INSTALL_APK = "sysfunc_install_apk";
    protected static final String SYSFUNC_FUNCTION_IS_EMULATOR = "sysfunc_is_emulator";
    protected static final String SYSFUNC_GET_APP_VERSION_CODE = "sysfunc_get_app_version_code";
    protected static final String SYSFUNC_GET_APP_VERSION_NAME = "sysfunc_get_app_version_name";
    public static final int SYSFUNC_GET_BATTERY_LEVEL_SUCCESS = 1108;
    public static final int SYSFUNC_GET_BATTERY_TEMPERATURE_FAIL = 1118;
    public static final int SYSFUNC_GET_BATTERY_TEMPERATURE_SUCCESS = 1117;
    public static final int SYSFUNC_GET_CLIPBOARDCONTENT_SUCCESS = 1107;
    protected static final String SYSFUNC_GET_DEVICEID = "sysfunc_get_deviceid";
    public static final int SYSFUNC_GET_DEVICE_ID_SUCCESS = 1199;
    protected static final String SYSFUNC_GET_DEVICE_NAME = "sysfunc_get_device_name";
    public static final int SYSFUNC_GET_DEVICE_NAME_INT = 1127;
    protected static final String SYSFUNC_GET_MOBILE_MODEL = "sysfunc_get_mobile_model";
    protected static final int SYSFUNC_GET_MOBILE_MODEL_SUCCESS = 1208;
    protected static final String SYSFUNC_GET_MOBILE_NAME = "sysfunc_get_mobile_name";
    public static final int SYSFUNC_GET_MOBILE_NAME_CODE = 1126;
    public static final int SYSFUNC_GET_NETWORK_LEVEL_SUCCESS = 1109;
    protected static final String SYSFUNC_GET_NET_TYPE = "sysfunc_get_net_type";
    public static final int SYSFUNC_GET_NET_TYPE_SUCCESS = 1206;
    protected static final String SYSFUNC_GET_NOTIFICATION_STATUS = "sysfunc_get_notification_status";
    protected static final String SYSFUNC_GET_OAID = "sysfunc_get_oaid";
    protected static final int SYSFUNC_GET_OAID_FAIL = 1210;
    protected static final int SYSFUNC_GET_OAID_SUCCESS = 1209;
    protected static final String SYSFUNC_GET_OPPOAES = "sysfunc_get_oppoaes";
    protected static final String SYSFUNC_GET_PACKAGE_ID = "sysfunc_get_package_id";
    public static final int SYSFUNC_GET_PACKAGE_ID_SUCCESS = 1200;
    public static final int SYSFUNC_GET_PING_RESULT = 1119;
    public static final int SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS = 1122;
    protected static final String SYSFUNC_GET_SYS_VERSION = "sysfunc_get_sys_version";
    public static final int SYSFUNC_GET_SYS_VERSION_SUCCESS = 1207;
    protected static final int SYSFUNC_GET_VERSION_CODE = 1212;
    protected static final int SYSFUNC_GET_VERSION_NAME = 1211;
    public static final int SYSFUNC_IS_EMULATOR = 1105;
    protected static final String SYSFUNC_IS_FROM_VIVO = "sysfunc_is_from_vivo";
    public static final int SYSFUNC_IS_FROM_VIVO_FALSE = 1111;
    public static final int SYSFUNC_IS_FROM_VIVO_TRUE = 1110;
    protected static final String SYSFUNC_IS_INSTALL = "sysfunc_is_install";
    public static final int SYSFUNC_IS_INSTALLED = 1204;
    public static final int SYSFUNC_IS_NOT_INSTALL = 1205;
    public static final int SYSFUNC_IS_PHONE = 1106;
    protected static final String SYSFUNC_LOCAL_NOTIFICATION = "sysfunc_local_notification";
    protected static final int SYSFUNC_NETWORK_NO = 1222;
    protected static final int SYSFUNC_NETWORK_OTHER = 1221;
    protected static final String SYSFUNC_NETWORK_SNIFFING_CLOSE = "sysfunc_network-sniffing_close";
    protected static final String SYSFUNC_NETWORK_SNIFFING_OPEN = "sysfunc_network-sniffing_open";
    protected static final int SYSFUNC_NETWORK_WIFI = 1220;
    public static final int SYSFUNC_NO_INSTALL_VIVO = 1114;
    protected static final String SYSFUNC_OPEN_APP = "sysfunc_open_app";
    protected static final String SYSFUNC_OPEN_APP_ACTIVITY = "sysfunc_open_app_activity";
    protected static final int SYSFUNC_OPEN_APP_ACTIVITY_FAIL = 1214;
    protected static final int SYSFUNC_OPEN_APP_ACTIVITY_SUCCESS = 1213;
    protected static final String SYSFUNC_OPEN_BROWSER = "sysfunc_open_browser";
    protected static final String SYSFUNC_OPEN_QQGROUP = "sysfunc_open_qqgroup";
    public static final int SYSFUNC_OPEN_QQ_FAIL = 1116;
    public static final int SYSFUNC_OPEN_QQ_SUCCEED = 1115;
    protected static final String SYSFUNC_SAVE_IMAGE_TO_GALLERY = "sysfunc_save_image_to_gallery";
    public static final int SYSFUNC_SAVE_IMAGE_TO_GALLERY_FAIL = 1125;
    public static final int SYSFUNC_SAVE_IMAGE_TO_GALLERY_SUCCESS = 1124;
    protected static final String SYSFUNC_SET_SPLASH_NAME = "sysfunc_set_splash_name";
    protected static final String SYSFUNC_SPKEY_OAID = "sysfunc_spkey_oaid";
    protected static final String SYSFUNC_START_SCREENSHOT = "sysfunc_start_sceenshot";
    protected static final String SYSFUNC_START_SCREENSHOT_ACTIVITY = "sysfunc_start_sceenshot_activity";
    public static final int SYSFUNC_START_SCREENSHOT_ACTIVITY_SUCCESS = 1123;
    protected static final String SYSFUNC_START_SCREENSHOT_ADD_WATERMARK = "sysfunc_start_screenshot_add_watermark";
    public static final int SYSFUNC_START_SCREENSHOT_FAIL = 1121;
    public static final int SYSFUNC_START_SCREENSHOT_SUCCESS = 1120;
    protected static final String SYSFUNC_SYSMESSAGEBOX = "sysfunc_message_box";
    public static final int SYSFUNC_SYSMESSAGEBOX_NEGATIVE = 1203;
    public static final int SYSFUNC_SYSMESSAGEBOX_NEUTRAL = 1202;
    public static final int SYSFUNC_SYSMESSAGEBOX_POSITIVE = 1201;
    private boolean isRegisterReceiver = false;
    private boolean isInitialized = false;
    private boolean isStartScreenShot = false;
    DevicesIDsHelper.AppIdsUpdater appIdsUpdater = new DevicesIDsHelper.AppIdsUpdater() {
        @Override
        public void OnIdsAvalid(String str) {
            if (TextUtils.isEmpty(str)) {
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_OAID_FAIL, "获取失败");
            } else {
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_OAID_SUCCESS, str);
            }
        }
    };
    BroadcastReceiver netReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("android.net.conn.CONNECTIVITY_CHANGE")) {
                NetworkInfo activeNetworkInfo = ((ConnectivityManager) SysfuncInterface.this.getContext().getSystemService("connectivity")).getActiveNetworkInfo();
                if (activeNetworkInfo != null && activeNetworkInfo.isAvailable()) {
                    int type = activeNetworkInfo.getType();
                    activeNetworkInfo.getTypeName();
                    if (type == 1) {
                        SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_NETWORK_WIFI, "WIFI");
                        return;
                    } else {
                        SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_NETWORK_OTHER, "非wifi");
                        return;
                    }
                }
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_NETWORK_NO, "无网络");
            }
        }
    };

    @Override
    public String getPluginId() {
        return Constants.VIA_REPORT_TYPE_START_WAP;
    }

    @Override
    public String getPluginName() {
        return "sysfunc";
    }

    @Override
    public int getPluginVersion() {
        return 58;
    }

    @Override
    public String getSdkVersion() {
        return "3.0.1";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        SysfuncPlus.init(context);
        initReceiver();
        this.isInitialized = true;
    }

    @YFunction(name = SYSFUNC_SYSMESSAGEBOX)
    public void sysMessageBox(String str, String str2, String str3) {
        CoustomDialog.sysMessageBox(getActivity(), str, str2, str3, this);
    }

    @YFunction(name = SYSFUNC_GET_NOTIFICATION_STATUS)
    public void sysfunc_get_notification_status() {
        NotificationManager notificationManager = (NotificationManager) getContext().getSystemService(RemoteMessageConst.NOTIFICATION);
        if (Build.VERSION.SDK_INT >= 26) {
            if (notificationManager.areNotificationsEnabled()) {
                sendResult(NOTIFICATION_STATUS_SUCCESS, "开启了通知权限");
                return;
            } else {
                sendResult(NOTIFICATION_STATUS_FAIL, "关闭了通知权限");
                return;
            }
        }
        sendResult(NOTIFICATION_STATUS_FAIL, "安卓8以下的设备，权限未知");
    }

    @YFunction(name = SYSFUNC_LOCAL_NOTIFICATION)
    public void showLocalNotification(String str, String str2) {
        LocalNotificationUtils.getInstance().sendNotification(getActivity(), str, str2);
    }

    @YFunction(name = "sysfunc_open_location_settings")
    public void sysfunc_open_location_settings() {
        if (isLocationEnabled()) {
            return;
        }
        getActivity().startActivity(new Intent("android.settings.LOCATION_SOURCE_SETTINGS"));
    }

    @YFunction(name = SYSFUNC_FUNCTION_INSTALL_APK)
    public void installApk(String str) {
        SysfuncPlus.installApk(str, this);
    }

    @YFunction(name = SYSFUNC_FUNCTION_DELETE_APK)
    public void deleteApk(String str) {
        SysfuncPlus.deleteApk(str);
    }

    @YFunction(name = SYSFUNC_FUNCTION_COPY_CLIPBOARD)
    public void copyClipbardo(String str) {
        SysfuncPlus.CopyToClipboard(str, this);
    }

    @YFunction(name = SYSFUNC_FUNCTION_GET_GPS)
    public void getCps() {
        if (PermissionUtils.getLocationPermissions(getActivity(), 101, new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str) {
            }

            @Override
            public void onAllowAll(int i) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功");
                SysfuncPlus.GetLatitudeAndLongitude(SysfuncInterface.this);
            }

            @Override
            public void onDeny(int i, String str) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败");
            }

            @Override
            public void onDenyIn48Hours(int i, String str) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "48小时内，用户曾拒绝需要授予的权限");
            }
        })) {
            SysfuncPlus.GetLatitudeAndLongitude(this);
        }
    }

    @YFunction(name = SYSFUNC_FUNCTION_IS_EMULATOR)
    public void isEmulator() {
        if (isPad(getActivity())) {
            Logger.e("是平板");
            sendResult(SYSFUNC_IS_PHONE, null);
        } else if (PermissionUtils.getEmulatorPermissions(getActivity(), 101, new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str) {
            }

            @Override
            public void onAllowAll(int i) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功");
                if (SimulatorUtil.isSimulator(SysfuncInterface.this.getActivity())) {
                    Logger.e("是模拟器");
                    SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_IS_EMULATOR, null);
                } else {
                    Logger.e("是手机");
                    SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_IS_PHONE, null);
                }
            }

            @Override
            public void onDeny(int i, String str) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败");
            }

            @Override
            public void onDenyIn48Hours(int i, String str) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "48小时内，用户曾拒绝需要授予的权限");
            }
        })) {
            if (SimulatorUtil.isSimulator(getActivity())) {
                Logger.e("是模拟器");
                sendResult(SYSFUNC_IS_EMULATOR, null);
            } else {
                Logger.e("是手机");
                sendResult(SYSFUNC_IS_PHONE, null);
            }
        }
    }

    public static boolean isPad(Context context) {
        return (context.getResources().getConfiguration().screenLayout & 15) >= 3;
    }

    @YFunction(name = SYSFUNC_FUNCTION_GET_CLIPBOARDCONTENT)
    public void getClipboardcontent() {
        tryRunOnUiThreadOrJustRun(new Runnable() {
            @Override
            public void run() {
                String clipBoardContent = SysfuncInterface.this.getClipBoardContent();
                Logger.e("clipBoardContent = " + clipBoardContent);
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_CLIPBOARDCONTENT_SUCCESS, clipBoardContent);
            }
        });
    }

    @YFunction(name = SYSFUNC_FUNCTION_GET_BATTERY_LEVEL)
    public void getBatteryLevel() {
        Intent intentRegisterReceiver = getContext().registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        int intExtra = (intentRegisterReceiver.getIntExtra("level", 0) * 100) / intentRegisterReceiver.getIntExtra("scale", 100);
        Logger.e("电量是：", String.valueOf(intExtra));
        sendResult(SYSFUNC_GET_BATTERY_LEVEL_SUCCESS, String.valueOf(intExtra));
    }

    @YFunction(name = SYSFUNC_FUNCTION_GET_BATTERY_TEMPERATURE)
    public void getBatteryTemperature() {
        Intent intentRegisterReceiver = getContext().registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        if (intentRegisterReceiver != null) {
            int intExtra = intentRegisterReceiver.getIntExtra("temperature", 0);
            sendResult(SYSFUNC_GET_BATTERY_TEMPERATURE_SUCCESS, String.valueOf(intExtra));
            Logger.e("温度是：" + String.valueOf(intExtra));
            return;
        }
        sendResult(SYSFUNC_GET_BATTERY_TEMPERATURE_FAIL, "温度获取失败");
    }

    @YFunction(name = SYSFUNC_FUNCTION_GET_PING)
    public void getPing(String str) {
        new PingAsyncTask(str, new PingCallback() {
            @Override
            public void call(String str2) {
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_PING_RESULT, str2);
            }
        }).execute(new Void[0]);
    }

    public void getNetLevel() {
        NetworkInfo networkInfo = ((ConnectivityManager) getContext().getSystemService("connectivity")).getNetworkInfo(1);
        if (networkInfo != null && networkInfo.isAvailable()) {
            WifiInfo connectionInfo = ((WifiManager) getContext().getApplicationContext().getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
            if (connectionInfo.getBSSID() != null) {
                connectionInfo.getSSID();
                int iCalculateSignalLevel = WifiManager.calculateSignalLevel(connectionInfo.getRssi(), 6);
                connectionInfo.getLinkSpeed();
                sendResult(SYSFUNC_GET_NETWORK_LEVEL_SUCCESS, String.valueOf(iCalculateSignalLevel));
                return;
            }
            return;
        }
        ((TelephonyManager) getContext().getSystemService("phone")).listen(new PhoneStateListener() {
            @Override
            public void onSignalStrengthsChanged(SignalStrength signalStrength) {
                super.onSignalStrengthsChanged(signalStrength);
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_NETWORK_LEVEL_SUCCESS, String.valueOf((signalStrength.getGsmSignalStrength() * 2) - 113));
            }
        }, 256);
    }

    public String getClipBoardContent() {
        ClipboardManager clipboardManager;
        if (!YmnSharedPreferencesUtils.isYmnClipAllow() || (clipboardManager = (ClipboardManager) getContext().getSystemService("clipboard")) == null || !clipboardManager.hasPrimaryClip()) {
            return "";
        }
        return ((Object) clipboardManager.getPrimaryClip().getItemAt(0).getText()) + "";
    }

    @YFunction(name = SYSFUNC_IS_FROM_VIVO)
    public void isFromVivoCenter() {
        Intent intent = getActivity().getIntent();
        if (intent != null) {
            String stringExtra = intent.getStringExtra("fromPackage");
            Logger.i("=============" + stringExtra);
            if (!TextUtils.isEmpty(stringExtra) && "com.vivo.game".equalsIgnoreCase(stringExtra)) {
                Logger.i("是从vivo中心过来的=============");
                sendResult(SYSFUNC_IS_FROM_VIVO_TRUE, stringExtra);
            } else {
                Logger.i("================不是从vivo中心过来的");
                sendResult(SYSFUNC_IS_FROM_VIVO_FALSE, "not from vivo center enter");
            }
        }
    }

    @YFunction(name = SYSFUNC_FUNCTION_HIDE_BOTTOMUTMENU)
    protected void sysfunc_hide_BottomUIMenu() {
        Logger.e("================隐藏虚拟按键");
        if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
            getActivity().getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            View decorView = getActivity().getWindow().getDecorView();
            decorView.setSystemUiVisibility(decorView.getSystemUiVisibility() | MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }

    @YFunction(name = SYSFUNC_OPEN_QQGROUP)
    protected void sysfunc_open_qq(String str) {
        Intent intent = new Intent();
        intent.setData(Uri.parse("mqqopensdkapi://bizAgent/qm/qr?url=http%3A%2F%2Fqm.qq.com%2Fcgi-bin%2Fqm%2Fqr%3Ffrom%3Dapp%26p%3Dandroid%26k%3D" + str));
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        try {
            getActivity().startActivity(intent);
            sendResult(SYSFUNC_OPEN_QQ_SUCCEED, "succeed");
        } catch (Exception unused) {
            sendResult(SYSFUNC_OPEN_QQ_FAIL, "fail");
        }
    }

    @YFunction(name = SYSFUNC_OPEN_APP)
    public void openApp(String str) {
        SysfuncPlus.openApp(str, this);
    }

    @YFunction(name = SYSFUNC_DOWNLOADIMGSAVEPHONE)
    public void downLoadImgSavePhone(String str) {
        if (PermissionUtils.getDownLoadPermissions(getActivity(), 102, new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str2) {
            }

            @Override
            public void onAllowAll(int i) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功");
            }

            @Override
            public void onDeny(int i, String str2) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败");
            }

            @Override
            public void onDenyIn48Hours(int i, String str2) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "48小时内，用户曾拒绝需要授予的权限");
            }
        })) {
            ImgDownload.donwloadImg(getContext(), str, this);
        }
    }

    @YFunction(name = SYSFUNC_CALL_PHONE)
    public void callPhoneNum(String str) {
        Intent intent = new Intent("android.intent.action.DIAL", Uri.parse("tel:" + str));
        intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        getActivity().startActivity(intent);
    }

    @YFunction(name = SYSFUNC_OPEN_BROWSER)
    public void openBrowser(String str) {
        Intent intent = new Intent();
        intent.setData(Uri.parse(str));
        intent.setAction("android.intent.action.VIEW");
        getActivity().startActivity(intent);
    }

    @YFunction(name = SYSFUNC_GET_DEVICEID)
    public void getDeviceId() {
        sendResult(SYSFUNC_GET_DEVICE_ID_SUCCESS, DeviceInfoManager.getUniqueId(getContext()));
    }

    @Override
    public void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        getActivity().setIntent(intent);
    }

    @YFunction(name = SYSFUNC_CALL_ALL_PERMISSION)
    public void callPermission() {
        if (Build.VERSION.SDK_INT >= 30) {
            Intent intent = new Intent("android.settings.MANAGE_APP_ALL_FILES_ACCESS_PERMISSION");
            intent.setData(Uri.parse("package:" + getActivity().getPackageName()));
            getActivity().startActivityForResult(intent, REQUEST_MANAGE_FILES_ACCESS);
            return;
        }
        Logger.i("SDK_INT is below 30");
    }

    @YFunction(name = SYSFUNC_START_SCREENSHOT_ADD_WATERMARK)
    public void startScreenShotListenAndAddWaterMark(final String str) {
        if (PermissionUtils.getScreenShotPermissions(getActivity(), 102, new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str2) {
            }

            @Override
            public void onAllowAll(int i) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功");
                ScreenShotApi.getInstance().setCallback(new ScreenShotApi.ScreenShotCallback() {
                    @Override
                    public void onShot(String str2) {
                        SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS, WaterMarkHelp.saveImageWithWatermark(str2, str));
                    }

                    @Override
                    public void onStart() {
                        SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_START_SCREENSHOT_SUCCESS, "启动成功，开始监听");
                        SysfuncInterface.this.isStartScreenShot = true;
                    }
                });
                ScreenShotService.start(SysfuncInterface.this.getActivity());
            }

            @Override
            public void onDeny(int i, String str2) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败");
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_START_SCREENSHOT_FAIL, "授权失败");
            }

            @Override
            public void onDenyIn48Hours(int i, String str2) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "48小时内，用户曾拒绝需要授予的权限");
            }
        })) {
            ScreenShotApi.getInstance().setCallback(new ScreenShotApi.ScreenShotCallback() {
                @Override
                public void onShot(String str2) {
                    SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS, WaterMarkHelp.saveImageWithWatermark(str2, str));
                }

                @Override
                public void onStart() {
                    SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_START_SCREENSHOT_SUCCESS, "启动成功，开始监听");
                    SysfuncInterface.this.isStartScreenShot = true;
                }
            });
            ScreenShotService.start(getActivity());
        } else {
            sendResult(SYSFUNC_START_SCREENSHOT_FAIL, "启动失败");
        }
    }

    @YFunction(alias = "sysfunc_start_screenshot", name = SYSFUNC_START_SCREENSHOT)
    public void startScreenShotListen() {
        if (PermissionUtils.getScreenShotPermissions(getActivity(), 102, new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str) {
            }

            @Override
            public void onAllowAll(int i) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功");
                ScreenShotApi.getInstance().setCallback(new ScreenShotApi.ScreenShotCallback() {
                    @Override
                    public void onShot(String str) {
                        SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS, str);
                    }

                    @Override
                    public void onStart() {
                        SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_START_SCREENSHOT_SUCCESS, "启动成功，开始监听");
                    }
                });
                ScreenShotService.start(SysfuncInterface.this.getActivity());
            }

            @Override
            public void onDeny(int i, String str) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败");
                SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_START_SCREENSHOT_FAIL, "授权失败");
            }

            @Override
            public void onDenyIn48Hours(int i, String str) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "48小时内，用户曾拒绝需要授予的权限");
            }
        })) {
            ScreenShotApi.getInstance().setCallback(new ScreenShotApi.ScreenShotCallback() {
                @Override
                public void onShot(String str) {
                    SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS, str);
                }

                @Override
                public void onStart() {
                    SysfuncInterface.this.sendResult(SysfuncInterface.SYSFUNC_START_SCREENSHOT_SUCCESS, "启动成功，开始监听");
                }
            });
            ScreenShotService.start(getActivity());
        } else {
            sendResult(SYSFUNC_START_SCREENSHOT_FAIL, "启动失败");
        }
    }

    @YFunction(name = SYSFUNC_START_SCREENSHOT_ACTIVITY)
    public void startActivityWithScreenShot() {
        ScreenShotActivity.start(getActivity());
        sendResult(SYSFUNC_START_SCREENSHOT_ACTIVITY_SUCCESS, "启动了一个activity");
    }

    @YFunction(name = SYSFUNC_SAVE_IMAGE_TO_GALLERY)
    public void saveImageToGallery(String str) {
        if (PermissionUtils.getDownLoadPermissions(getActivity(), 102, new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str2) {
            }

            @Override
            public void onAllowAll(int i) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "授权成功");
            }

            @Override
            public void onDeny(int i, String str2) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败");
            }

            @Override
            public void onDenyIn48Hours(int i, String str2) {
                SysfuncInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "48小时内，用户曾拒绝需要授予的权限");
            }
        })) {
            saveImage(str);
        }
    }

    private void saveImage(String str) {
        File file;
        Bitmap bitmapDecodeStream;
        String str2 = "";
        String str3 = System.currentTimeMillis() + ".jpg";
        if (!str.startsWith("/data/")) {
            str = Environment.getExternalStorageDirectory() + str;
        }
        try {
            bitmapDecodeStream = BitmapFactory.decodeStream(new FileInputStream(str));
            str2 = Environment.getExternalStorageDirectory() + File.separator + "bf_picture";
            File file2 = new File(str2);
            if (!file2.exists()) {
                file2.mkdir();
            }
            file = new File(file2, str3);
        } catch (Exception e) {
            e = e;
            file = null;
        }
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            bitmapDecodeStream.compress(Bitmap.CompressFormat.JPEG, 80, fileOutputStream);
            fileOutputStream.flush();
            fileOutputStream.close();
        } catch (Exception e2) {
            e = e2;
            Logger.e("找不到图片");
            e.printStackTrace();
        }
        try {
            MediaStore.Images.Media.insertImage(getContext().getContentResolver(), file.getAbsolutePath(), str3, (String) null);
            File file3 = new File(file.getPath());
            if (Build.VERSION.SDK_INT >= 24) {
                Logger.e(getContext().getPackageName() + ".fileprovider");
                FileProvider.getUriForFile(getContext().getApplicationContext(), getContext().getApplicationContext().getPackageName() + ".fileprovider", file3);
            } else {
                Uri.fromFile(file3);
            }
            getContext().sendBroadcast(new Intent("android.intent.action.MEDIA_SCANNER_SCAN_FILE", Uri.fromFile(file3)));
            sendResult(SYSFUNC_SAVE_IMAGE_TO_GALLERY_SUCCESS, "图片保存成功");
            Logger.e("1111111111", "图片保存成功");
            delFolder(str2);
        } catch (FileNotFoundException e3) {
            e3.printStackTrace();
            sendResult(SYSFUNC_SAVE_IMAGE_TO_GALLERY_FAIL, "图片保存失败");
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0065  */
    @YFunction(name = SYSFUNC_GET_MOBILE_NAME)
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void getMobileName() {
        String str;
        str = "samsung";
        switch (Build.MANUFACTURER) {
            case "HUAWEI":
                str = "huawei";
                break;
            case "vivo":
                str = "vivo";
                break;
            case "OPPO":
                str = "oppo";
                break;
            case "Coolpad":
                str = "coolpad";
                break;
            case "Meizu":
                str = "meizu";
                break;
            case "Xiaomi":
                str = "xiaomi";
                break;
            case "samsung":
                break;
            case "Sony":
                str = "sony";
                break;
            case "LG":
                str = "lg";
                break;
            default:
                str = "";
                break;
        }
        Logger.e("该手机是" + str);
        sendResult(SYSFUNC_GET_MOBILE_NAME_CODE, str);
    }

    @YFunction(name = SYSFUNC_GET_DEVICE_NAME)
    public void getDeviceName() {
        sendResult(SYSFUNC_GET_DEVICE_NAME_INT, BluetoothAdapter.getDefaultAdapter().getName());
    }

    @YFunction(name = SYSFUNC_GET_PACKAGE_ID)
    public void getPackageId() {
        StringBuilder sb = new StringBuilder();
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(getContext().getAssets().open("soureIdConfig.json")));
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                } else {
                    sb.append(line);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        sendResult(SYSFUNC_GET_PACKAGE_ID_SUCCESS, sb.toString());
    }

    @YFunction(name = SYSFUNC_IS_INSTALL)
    public void isInstall(String str) {
        List<PackageInfo> installedPackages = getActivity().getPackageManager().getInstalledPackages(0);
        ArrayList arrayList = new ArrayList();
        if (installedPackages != null) {
            for (int i = 0; i < installedPackages.size(); i++) {
                arrayList.add(installedPackages.get(i).packageName);
            }
        }
        if (arrayList.contains(str)) {
            Logger.e("安装了");
            sendResult(SYSFUNC_IS_INSTALLED, "已安装该应用");
        } else {
            Logger.e("未安装");
            sendResult(SYSFUNC_IS_NOT_INSTALL, "未安装该应用");
        }
    }

    @YFunction(name = SYSFUNC_GET_NET_TYPE)
    public void getNetType() {
        int networkState = IntenetUtil.getNetworkState(getActivity());
        Logger.e("" + networkState);
        sendResult(SYSFUNC_GET_NET_TYPE_SUCCESS, "" + networkState);
    }

    @YFunction(name = SYSFUNC_GET_SYS_VERSION)
    public void getSYSVersion() {
        Logger.e(Build.VERSION.RELEASE);
        sendResult(SYSFUNC_GET_SYS_VERSION_SUCCESS, Build.VERSION.RELEASE);
    }

    @YFunction(name = SYSFUNC_GET_MOBILE_MODEL)
    public void getMobileModel() {
        Logger.e(Build.MODEL);
        sendResult(SYSFUNC_GET_MOBILE_MODEL_SUCCESS, Build.MODEL);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        ScreenShotService.stop(getActivity());
        Log.e("ymnsdk---onDestroy", "onDestroy");
        if (this.netReceiver == null || !this.isRegisterReceiver) {
            return;
        }
        getContext().unregisterReceiver(this.netReceiver);
        this.isRegisterReceiver = false;
    }

    @Override
    public void onPause() {
        super.onPause();
        if (this.isInitialized && this.isStartScreenShot) {
            Logger.e("into onPause");
            ScreenShotService.stop(getActivity());
        }
    }

    @Override
    public void onResume() {
        super.onResume();
        if (this.isInitialized && this.isStartScreenShot) {
            Logger.e("into onResume");
            ScreenShotService.start(getActivity());
        }
    }

    public static void delFolder(String str) {
        try {
            delAllFile(str);
            new File(str.toString()).delete();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private boolean isLocationEnabled() {
        LocationManager locationManager = (LocationManager) getActivity().getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
        return locationManager.isProviderEnabled("gps") || locationManager.isProviderEnabled(PointCategory.NETWORK);
    }

    public static boolean delAllFile(String str) {
        File file;
        File file2 = new File(str);
        if (!file2.exists() || !file2.isDirectory()) {
            return false;
        }
        String[] list = file2.list();
        boolean z = false;
        for (int i = 0; i < list.length; i++) {
            if (str.endsWith(File.separator)) {
                file = new File(str + list[i]);
            } else {
                file = new File(str + File.separator + list[i]);
            }
            if (file.isFile()) {
                file.delete();
            }
            if (file.isDirectory()) {
                delAllFile(str + "/" + list[i]);
                delFolder(str + "/" + list[i]);
                z = true;
            }
        }
        return z;
    }

    @YFunction(name = SYSFUNC_GET_OAID)
    public void getOAID() {
        new DevicesIDsHelper(this.appIdsUpdater).getOAID(getActivity());
    }

    @YFunction(name = SYSFUNC_GET_OPPOAES)
    public String sysfunc_get_oppoaes(String str, String str2) {
        try {
            String strAESencode = Base64.AESencode(str, str2);
            sendResult(OPPOAES_SUCCESS, strAESencode);
            return strAESencode;
        } catch (GeneralSecurityException e) {
            sendResult(OPPOAES_FAIL, "加密失败");
            e.printStackTrace();
            return "";
        }
    }

    @YFunction(name = SYSFUNC_GET_APP_VERSION_NAME)
    public void get_app_version_name() {
        sendResult(SYSFUNC_GET_VERSION_NAME, AppConfig.getVerName());
    }

    @YFunction(name = SYSFUNC_GET_APP_VERSION_CODE)
    public void get_app_version_code() {
        sendResult(SYSFUNC_GET_VERSION_CODE, AppConfig.getVerCode());
    }

    @YFunction(name = SYSFUNC_OPEN_APP_ACTIVITY)
    public void open_app_activity(String str, String str2) {
        if (checkApkExist(getActivity(), str)) {
            Intent intent = new Intent("android.intent.action.VIEW");
            Uri uri = Uri.parse(str2);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.setData(uri);
            getActivity().startActivity(intent);
            sendResult(SYSFUNC_OPEN_APP_ACTIVITY_SUCCESS, "打开成功");
            return;
        }
        sendResult(SYSFUNC_OPEN_APP_ACTIVITY_FAIL, "未安装该应用");
    }

    public boolean checkApkExist(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            context.getPackageManager().getPackageInfo(str, 0);
            return true;
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    @YFunction(name = SYSFUNC_SET_SPLASH_NAME)
    public void open_activity(String str) throws YmnException {
        SharedPreferencesUtils.put("sysfunc_open_activity", str);
    }

    @YFunction(name = SYSFUNC_NETWORK_SNIFFING_OPEN)
    public void network_sniffing_open() {
        initReceiver();
    }

    @YFunction(name = SYSFUNC_NETWORK_SNIFFING_CLOSE)
    public void network_sniffing_close() {
        if (this.netReceiver != null) {
            getContext().unregisterReceiver(this.netReceiver);
            this.netReceiver = null;
        }
    }

    @YFunction(name = SYSFUNC_DELETE_PRIVATE_FILE)
    public void deletePrivateFile(String str) {
        File file = new File(getActivity().getFilesDir().getAbsolutePath().substring(0, r0.length() - 5) + str);
        if (file.exists()) {
            FileUtils.deleteQuietly(file);
        }
    }

    private void initReceiver() {
        if (!this.isRegisterReceiver) {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.ethernet.ETHERNET_STATE_CHANGED");
            intentFilter.addAction("android.net.ethernet.STATE_CHANGE");
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
            intentFilter.addAction("android.net.wifi.STATE_CHANGE");
            intentFilter.addAction("android.net.wifi.STATE_CHANGE");
            getContext().registerReceiver(this.netReceiver, intentFilter);
            this.isRegisterReceiver = true;
            Log.e("ymnsdk", "initReceiver");
            return;
        }
        Log.e("ymnsdk", "no---initReceiver");
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i, intent);
        if (i == REQUEST_MANAGE_FILES_ACCESS) {
            if (Environment.isExternalStorageEmulated()) {
                sendResult(SYSFUNC_CALL_ALL_PERMISSION_SUCCESS, "Environment isExternalStorageEmulated");
            } else {
                sendResult(SYSFUNC_CALL_ALL_PERMISSION_FAIL, "Environment is not ExternalStorageEmulated");
            }
        }
    }
}
