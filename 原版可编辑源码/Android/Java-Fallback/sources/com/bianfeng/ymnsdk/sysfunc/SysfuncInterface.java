package com.bianfeng.ymnsdk.sysfunc;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class SysfuncInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final java.lang.String CHECK_OP_NO_THROW = "checkOpNoThrow";
    private static final int NOTIFICATION_STATUS_FAIL = 16005;
    private static final int NOTIFICATION_STATUS_SUCCESS = 16004;
    private static final int OPPOAES_FAIL = 16002;
    private static final int OPPOAES_SUCCESS = 16001;
    private static final java.lang.String OP_POST_NOTIFICATION = "OP_POST_NOTIFICATION";
    private static final int PERMISSION_DOWNLOAD = 102;
    private static final int PERMISSION_EMULATOR_CODE = 101;
    private static final int PERMISSION_GPS_CODE = 100;
    private static final int REQUEST_MANAGE_FILES_ACCESS = 16003;
    protected static final java.lang.String SYSFUNC_CALL_ALL_PERMISSION = "sysfunc_call_all_permission";
    private static final int SYSFUNC_CALL_ALL_PERMISSION_FAIL = 1224;
    private static final int SYSFUNC_CALL_ALL_PERMISSION_SUCCESS = 1223;
    protected static final java.lang.String SYSFUNC_CALL_PHONE = "sysfunc_call_phone";
    protected static final java.lang.String SYSFUNC_DELETE_PRIVATE_FILE = "sysfunc_delete_private_file";
    protected static final java.lang.String SYSFUNC_DOWNLOADIMGSAVEPHONE = "sysfunc_downLoad_Img_Save";
    public static final int SYSFUNC_DOWNLOAD_IMG_FAIL = 1113;
    public static final int SYSFUNC_DOWNLOAD_IMG_SUCCESS = 1112;
    protected static final java.lang.String SYSFUNC_FUNCTION_COPY_CLIPBOARD = "sysfunc_copy_clipboard";
    protected static final java.lang.String SYSFUNC_FUNCTION_DELETE_APK = "sysfunc_delete_apk";
    protected static final java.lang.String SYSFUNC_FUNCTION_GET_BATTERY_LEVEL = "sysfunc_battery_level";
    protected static final java.lang.String SYSFUNC_FUNCTION_GET_BATTERY_TEMPERATURE = "sysfunc_battery_temperature";
    protected static final java.lang.String SYSFUNC_FUNCTION_GET_CLIPBOARDCONTENT = "sysfunc_get_clipboardcontent";
    protected static final java.lang.String SYSFUNC_FUNCTION_GET_GPS = "sysfunc_get_gps";
    protected static final java.lang.String SYSFUNC_FUNCTION_GET_NETWORK_LEVEL = "sysfunc_network_level";
    protected static final java.lang.String SYSFUNC_FUNCTION_GET_PING = "sysfunc_get_ping";
    protected static final java.lang.String SYSFUNC_FUNCTION_HIDE_BOTTOMUTMENU = "sysfunc_hide_BottomUIMenu";
    protected static final java.lang.String SYSFUNC_FUNCTION_INSTALL_APK = "sysfunc_install_apk";
    protected static final java.lang.String SYSFUNC_FUNCTION_IS_EMULATOR = "sysfunc_is_emulator";
    protected static final java.lang.String SYSFUNC_GET_APP_VERSION_CODE = "sysfunc_get_app_version_code";
    protected static final java.lang.String SYSFUNC_GET_APP_VERSION_NAME = "sysfunc_get_app_version_name";
    public static final int SYSFUNC_GET_BATTERY_LEVEL_SUCCESS = 1108;
    public static final int SYSFUNC_GET_BATTERY_TEMPERATURE_FAIL = 1118;
    public static final int SYSFUNC_GET_BATTERY_TEMPERATURE_SUCCESS = 1117;
    public static final int SYSFUNC_GET_CLIPBOARDCONTENT_SUCCESS = 1107;
    protected static final java.lang.String SYSFUNC_GET_DEVICEID = "sysfunc_get_deviceid";
    public static final int SYSFUNC_GET_DEVICE_ID_SUCCESS = 1199;
    protected static final java.lang.String SYSFUNC_GET_DEVICE_NAME = "sysfunc_get_device_name";
    public static final int SYSFUNC_GET_DEVICE_NAME_INT = 1127;
    protected static final java.lang.String SYSFUNC_GET_MOBILE_MODEL = "sysfunc_get_mobile_model";
    protected static final int SYSFUNC_GET_MOBILE_MODEL_SUCCESS = 1208;
    protected static final java.lang.String SYSFUNC_GET_MOBILE_NAME = "sysfunc_get_mobile_name";
    public static final int SYSFUNC_GET_MOBILE_NAME_CODE = 1126;
    public static final int SYSFUNC_GET_NETWORK_LEVEL_SUCCESS = 1109;
    protected static final java.lang.String SYSFUNC_GET_NET_TYPE = "sysfunc_get_net_type";
    public static final int SYSFUNC_GET_NET_TYPE_SUCCESS = 1206;
    protected static final java.lang.String SYSFUNC_GET_NOTIFICATION_STATUS = "sysfunc_get_notification_status";
    protected static final java.lang.String SYSFUNC_GET_OAID = "sysfunc_get_oaid";
    protected static final int SYSFUNC_GET_OAID_FAIL = 1210;
    protected static final int SYSFUNC_GET_OAID_SUCCESS = 1209;
    protected static final java.lang.String SYSFUNC_GET_OPPOAES = "sysfunc_get_oppoaes";
    protected static final java.lang.String SYSFUNC_GET_PACKAGE_ID = "sysfunc_get_package_id";
    public static final int SYSFUNC_GET_PACKAGE_ID_SUCCESS = 1200;
    public static final int SYSFUNC_GET_PING_RESULT = 1119;
    public static final int SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS = 1122;
    protected static final java.lang.String SYSFUNC_GET_SYS_VERSION = "sysfunc_get_sys_version";
    public static final int SYSFUNC_GET_SYS_VERSION_SUCCESS = 1207;
    protected static final int SYSFUNC_GET_VERSION_CODE = 1212;
    protected static final int SYSFUNC_GET_VERSION_NAME = 1211;
    public static final int SYSFUNC_IS_EMULATOR = 1105;
    protected static final java.lang.String SYSFUNC_IS_FROM_VIVO = "sysfunc_is_from_vivo";
    public static final int SYSFUNC_IS_FROM_VIVO_FALSE = 1111;
    public static final int SYSFUNC_IS_FROM_VIVO_TRUE = 1110;
    protected static final java.lang.String SYSFUNC_IS_INSTALL = "sysfunc_is_install";
    public static final int SYSFUNC_IS_INSTALLED = 1204;
    public static final int SYSFUNC_IS_NOT_INSTALL = 1205;
    public static final int SYSFUNC_IS_PHONE = 1106;
    protected static final java.lang.String SYSFUNC_LOCAL_NOTIFICATION = "sysfunc_local_notification";
    protected static final int SYSFUNC_NETWORK_NO = 1222;
    protected static final int SYSFUNC_NETWORK_OTHER = 1221;
    protected static final java.lang.String SYSFUNC_NETWORK_SNIFFING_CLOSE = "sysfunc_network-sniffing_close";
    protected static final java.lang.String SYSFUNC_NETWORK_SNIFFING_OPEN = "sysfunc_network-sniffing_open";
    protected static final int SYSFUNC_NETWORK_WIFI = 1220;
    public static final int SYSFUNC_NO_INSTALL_VIVO = 1114;
    protected static final java.lang.String SYSFUNC_OPEN_APP = "sysfunc_open_app";
    protected static final java.lang.String SYSFUNC_OPEN_APP_ACTIVITY = "sysfunc_open_app_activity";
    protected static final int SYSFUNC_OPEN_APP_ACTIVITY_FAIL = 1214;
    protected static final int SYSFUNC_OPEN_APP_ACTIVITY_SUCCESS = 1213;
    protected static final java.lang.String SYSFUNC_OPEN_BROWSER = "sysfunc_open_browser";
    protected static final java.lang.String SYSFUNC_OPEN_QQGROUP = "sysfunc_open_qqgroup";
    public static final int SYSFUNC_OPEN_QQ_FAIL = 1116;
    public static final int SYSFUNC_OPEN_QQ_SUCCEED = 1115;
    protected static final java.lang.String SYSFUNC_SAVE_IMAGE_TO_GALLERY = "sysfunc_save_image_to_gallery";
    public static final int SYSFUNC_SAVE_IMAGE_TO_GALLERY_FAIL = 1125;
    public static final int SYSFUNC_SAVE_IMAGE_TO_GALLERY_SUCCESS = 1124;
    protected static final java.lang.String SYSFUNC_SET_SPLASH_NAME = "sysfunc_set_splash_name";
    protected static final java.lang.String SYSFUNC_SPKEY_OAID = "sysfunc_spkey_oaid";
    protected static final java.lang.String SYSFUNC_START_SCREENSHOT = "sysfunc_start_sceenshot";
    protected static final java.lang.String SYSFUNC_START_SCREENSHOT_ACTIVITY = "sysfunc_start_sceenshot_activity";
    public static final int SYSFUNC_START_SCREENSHOT_ACTIVITY_SUCCESS = 1123;
    protected static final java.lang.String SYSFUNC_START_SCREENSHOT_ADD_WATERMARK = "sysfunc_start_screenshot_add_watermark";
    public static final int SYSFUNC_START_SCREENSHOT_FAIL = 1121;
    public static final int SYSFUNC_START_SCREENSHOT_SUCCESS = 1120;
    protected static final java.lang.String SYSFUNC_SYSMESSAGEBOX = "sysfunc_message_box";
    public static final int SYSFUNC_SYSMESSAGEBOX_NEGATIVE = 1203;
    public static final int SYSFUNC_SYSMESSAGEBOX_NEUTRAL = 1202;
    public static final int SYSFUNC_SYSMESSAGEBOX_POSITIVE = 1201;
    com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater appIdsUpdater;
    private boolean isInitialized;
    private boolean isRegisterReceiver;
    private boolean isStartScreenShot;
    android.content.BroadcastReceiver netReceiver;














    public SysfuncInterface() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isRegisterReceiver = r0
            r1.isInitialized = r0
            r1.isStartScreenShot = r0
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$12 r0 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$12
            r0.<init>(r1)
            r1.appIdsUpdater = r0
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$13 r0 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$13
            r0.<init>(r1)
            r1.netReceiver = r0
            return
    }

    static boolean access$002(com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r0, boolean r1) {
            r0.isStartScreenShot = r1
            return r1
    }

    public static boolean delAllFile(java.lang.String r6) {
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r1 = r0.exists()
            r2 = 0
            if (r1 != 0) goto Ld
            return r2
        Ld:
            boolean r1 = r0.isDirectory()
            if (r1 != 0) goto L14
            return r2
        L14:
            java.lang.String[] r0 = r0.list()
            r1 = 0
        L19:
            int r3 = r0.length
            if (r2 >= r3) goto L99
            java.lang.String r3 = java.io.File.separator
            boolean r3 = r6.endsWith(r3)
            if (r3 == 0) goto L3b
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            r5 = r0[r2]
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            goto L56
        L3b:
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            java.lang.String r5 = java.io.File.separator
            r4.append(r5)
            r5 = r0[r2]
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
        L56:
            boolean r4 = r3.isFile()
            if (r4 == 0) goto L5f
            r3.delete()
        L5f:
            boolean r3 = r3.isDirectory()
            if (r3 == 0) goto L96
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r3 = "/"
            r1.append(r3)
            r4 = r0[r2]
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            delAllFile(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r3)
            r3 = r0[r2]
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            delFolder(r1)
            r1 = 1
        L96:
            int r2 = r2 + 1
            goto L19
        L99:
            return r1
    }

    public static void delFolder(java.lang.String r1) {
            delAllFile(r1)     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L10
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L10
            r0.<init>(r1)     // Catch: java.lang.Exception -> L10
            r0.delete()     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            return
    }

    private void initReceiver() {
            r4 = this;
            boolean r0 = r4.isRegisterReceiver
            java.lang.String r1 = "ymnsdk"
            if (r0 != 0) goto L39
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r2 = "android.net.ethernet.ETHERNET_STATE_CHANGED"
            r0.addAction(r2)
            java.lang.String r2 = "android.net.ethernet.STATE_CHANGE"
            r0.addAction(r2)
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r2)
            java.lang.String r2 = "android.net.wifi.WIFI_STATE_CHANGED"
            r0.addAction(r2)
            java.lang.String r2 = "android.net.wifi.STATE_CHANGE"
            r0.addAction(r2)
            r0.addAction(r2)
            android.content.Context r2 = r4.getContext()
            android.content.BroadcastReceiver r3 = r4.netReceiver
            r2.registerReceiver(r3, r0)
            r0 = 1
            r4.isRegisterReceiver = r0
            java.lang.String r0 = "initReceiver"
            android.util.Log.e(r1, r0)
            goto L3e
        L39:
            java.lang.String r0 = "no---initReceiver"
            android.util.Log.e(r1, r0)
        L3e:
            return
    }

    private boolean isLocationEnabled() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            java.lang.String r1 = "location"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.location.LocationManager r0 = (android.location.LocationManager) r0
            java.lang.String r1 = "gps"
            boolean r1 = r0.isProviderEnabled(r1)
            if (r1 != 0) goto L1f
            java.lang.String r1 = "network"
            boolean r0 = r0.isProviderEnabled(r1)
            if (r0 == 0) goto L1d
            goto L1f
        L1d:
            r0 = 0
            goto L20
        L1f:
            r0 = 1
        L20:
            return r0
    }

    public static boolean isPad(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.screenLayout
            r1 = r1 & 15
            r0 = 3
            if (r1 < r0) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            return r1
    }

    private void saveImage(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "bf_picture"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            long r3 = java.lang.System.currentTimeMillis()
            r2.append(r3)
            java.lang.String r3 = ".jpg"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "/data/"
            boolean r3 = r8.startsWith(r3)
            if (r3 != 0) goto L34
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.io.File r4 = android.os.Environment.getExternalStorageDirectory()
            r3.append(r4)
            r3.append(r8)
            java.lang.String r8 = r3.toString()
        L34:
            r3 = 0
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L7e
            r4.<init>(r8)     // Catch: java.lang.Exception -> L7e
            android.graphics.Bitmap r8 = android.graphics.BitmapFactory.decodeStream(r4)     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r4.<init>()     // Catch: java.lang.Exception -> L7e
            java.io.File r5 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L7e
            r4.append(r5)     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Exception -> L7e
            r4.append(r5)     // Catch: java.lang.Exception -> L7e
            r4.append(r1)     // Catch: java.lang.Exception -> L7e
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L7e
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L7e
            r1.<init>(r0)     // Catch: java.lang.Exception -> L7e
            boolean r4 = r1.exists()     // Catch: java.lang.Exception -> L7e
            if (r4 != 0) goto L64
            r1.mkdir()     // Catch: java.lang.Exception -> L7e
        L64:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L7e
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L7e
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L7c
            r1.<init>(r4)     // Catch: java.lang.Exception -> L7c
            android.graphics.Bitmap$CompressFormat r5 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L7c
            r6 = 80
            r8.compress(r5, r6, r1)     // Catch: java.lang.Exception -> L7c
            r1.flush()     // Catch: java.lang.Exception -> L7c
            r1.close()     // Catch: java.lang.Exception -> L7c
            goto L88
        L7c:
            r8 = move-exception
            goto L80
        L7e:
            r8 = move-exception
            r4 = r3
        L80:
            java.lang.String r1 = "找不到图片"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            r8.printStackTrace()
        L88:
            android.content.Context r8 = r7.getContext()     // Catch: java.io.FileNotFoundException -> L10e
            android.content.ContentResolver r8 = r8.getContentResolver()     // Catch: java.io.FileNotFoundException -> L10e
            java.lang.String r1 = r4.getAbsolutePath()     // Catch: java.io.FileNotFoundException -> L10e
            android.provider.MediaStore.Images.Media.insertImage(r8, r1, r2, r3)     // Catch: java.io.FileNotFoundException -> L10e
            java.io.File r8 = new java.io.File
            java.lang.String r1 = r4.getPath()
            r8.<init>(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r1 < r2) goto Le9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = r7.getContext()
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r2 = ".fileprovider"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            android.content.Context r1 = r7.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r4 = r7.getContext()
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r4 = r4.getPackageName()
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            android.support.v4.content.FileProvider.getUriForFile(r1, r2, r8)
            goto Lec
        Le9:
            android.net.Uri.fromFile(r8)
        Lec:
            android.net.Uri r8 = android.net.Uri.fromFile(r8)
            android.content.Context r1 = r7.getContext()
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.MEDIA_SCANNER_SCAN_FILE"
            r2.<init>(r3, r8)
            r1.sendBroadcast(r2)
            r8 = 1124(0x464, float:1.575E-42)
            java.lang.String r1 = "图片保存成功"
            r7.sendResult(r8, r1)
            java.lang.String r8 = "1111111111"
            com.bianfeng.ymnsdk.util.Logger.e(r8, r1)
            delFolder(r0)
            return
        L10e:
            r8 = move-exception
            r8.printStackTrace()
            r8 = 1125(0x465, float:1.576E-42)
            java.lang.String r0 = "图片保存失败"
            r7.sendResult(r8, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_call_all_permission")
    public void callPermission() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 < r1) goto L37
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.settings.MANAGE_APP_ALL_FILES_ACCESS_PERMISSION"
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "package:"
            r1.append(r2)
            android.app.Activity r2 = r3.getActivity()
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            android.app.Activity r1 = r3.getActivity()
            r2 = 16003(0x3e83, float:2.2425E-41)
            r1.startActivityForResult(r0, r2)
            goto L3c
        L37:
            java.lang.String r0 = "SDK_INT is below 30"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L3c:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_call_phone")
    public void callPhoneNum(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "tel:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.net.Uri r4 = android.net.Uri.parse(r4)
            java.lang.String r1 = "android.intent.action.DIAL"
            r0.<init>(r1, r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r4)
            android.app.Activity r4 = r3.getActivity()
            r4.startActivity(r0)
            return
    }

    public boolean checkApkExist(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11
            r3.getPackageInfo(r4, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11
            r3 = 1
            return r3
        L11:
            return r1
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_copy_clipboard")
    public void copyClipbardo(java.lang.String r1) {
            r0 = this;
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.CopyToClipboard(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_delete_apk")
    public void deleteApk(java.lang.String r1) {
            r0 = this;
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.deleteApk(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_delete_private_file")
    public void deletePrivateFile(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.io.File r0 = r0.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            int r1 = r0.length()
            int r1 = r1 + (-5)
            r2 = 0
            java.lang.String r0 = r0.substring(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r4 = r0.exists()
            if (r4 == 0) goto L34
            com.bianfeng.ymnsdk.sysfunc.utils.FileUtils.deleteQuietly(r0)
        L34:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_downLoad_Img_Save")
    public void downLoadImgSavePhone(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$6 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$6
            r1.<init>(r3)
            r2 = 102(0x66, float:1.43E-43)
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.PermissionUtils.getDownLoadPermissions(r0, r2, r1)
            if (r0 == 0) goto L18
            android.content.Context r0 = r3.getContext()
            com.bianfeng.ymnsdk.sysfunc.ImgDownload.donwloadImg(r0, r4, r3)
        L18:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_battery_level")
    public void getBatteryLevel() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.BATTERY_CHANGED"
            r1.<init>(r2)
            r2 = 0
            android.content.Intent r0 = r0.registerReceiver(r2, r1)
            java.lang.String r1 = "level"
            r2 = 0
            int r1 = r0.getIntExtra(r1, r2)
            r2 = 100
            java.lang.String r3 = "scale"
            int r0 = r0.getIntExtra(r3, r2)
            int r1 = r1 * 100
            int r1 = r1 / r0
            java.lang.String r0 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "电量是："
            com.bianfeng.ymnsdk.util.Logger.e(r2, r0)
            java.lang.String r0 = java.lang.String.valueOf(r1)
            r1 = 1108(0x454, float:1.553E-42)
            r4.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_battery_temperature")
    public void getBatteryTemperature() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.BATTERY_CHANGED"
            r1.<init>(r2)
            r2 = 0
            android.content.Intent r0 = r0.registerReceiver(r2, r1)
            if (r0 == 0) goto L3b
            r1 = 0
            java.lang.String r2 = "temperature"
            int r0 = r0.getIntExtra(r2, r1)
            r1 = 1117(0x45d, float:1.565E-42)
            java.lang.String r2 = java.lang.String.valueOf(r0)
            r3.sendResult(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "温度是："
            r1.append(r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            goto L42
        L3b:
            r0 = 1118(0x45e, float:1.567E-42)
            java.lang.String r1 = "温度获取失败"
            r3.sendResult(r0, r1)
        L42:
            return
    }

    public java.lang.String getClipBoardContent() {
            r3 = this;
            boolean r0 = com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.isYmnClipAllow()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "clipboard"
            java.lang.Object r0 = r0.getSystemService(r2)
            android.content.ClipboardManager r0 = (android.content.ClipboardManager) r0
            if (r0 == 0) goto L39
            boolean r2 = r0.hasPrimaryClip()
            if (r2 == 0) goto L39
            android.content.ClipData r0 = r0.getPrimaryClip()
            r2 = 0
            android.content.ClipData$Item r0 = r0.getItemAt(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.CharSequence r0 = r0.getText()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L39:
            return r1
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_clipboardcontent")
    public void getClipboardcontent() {
            r1 = this;
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$3 r0 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$3
            r0.<init>(r1)
            r1.tryRunOnUiThreadOrJustRun(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_gps")
    public void getCps() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$1 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$1
            r1.<init>(r3)
            r2 = 101(0x65, float:1.42E-43)
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.PermissionUtils.getLocationPermissions(r0, r2, r1)
            if (r0 == 0) goto L14
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.GetLatitudeAndLongitude(r3)
        L14:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_deviceid")
    public void getDeviceId() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r0 = com.bianfeng.ymnsdk.sysfunc.DeviceInfoManager.getUniqueId(r0)
            r1 = 1199(0x4af, float:1.68E-42)
            r2.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_device_name")
    public void getDeviceName() {
            r2 = this;
            android.bluetooth.BluetoothAdapter r0 = android.bluetooth.BluetoothAdapter.getDefaultAdapter()
            java.lang.String r0 = r0.getName()
            r1 = 1127(0x467, float:1.579E-42)
            r2.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_mobile_model")
    public void getMobileModel() {
            r2 = this;
            java.lang.String r0 = android.os.Build.MODEL
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.lang.String r0 = android.os.Build.MODEL
            r1 = 1208(0x4b8, float:1.693E-42)
            r2.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_mobile_name")
    public void getMobileName() {
            r4 = this;
            java.lang.String r0 = android.os.Build.MANUFACTURER
            int r1 = r0.hashCode()
            java.lang.String r2 = "samsung"
            java.lang.String r3 = "vivo"
            switch(r1) {
                case -1678088054: goto L5b;
                case -1675632421: goto L51;
                case 2427: goto L46;
                case 2432928: goto L3c;
                case 2582855: goto L32;
                case 3620012: goto L2a;
                case 74224812: goto L20;
                case 1864941562: goto L18;
                case 2141820391: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L65
        Le:
            java.lang.String r1 = "HUAWEI"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 0
            goto L66
        L18:
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L65
            r0 = 6
            goto L66
        L20:
            java.lang.String r1 = "Meizu"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 4
            goto L66
        L2a:
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L65
            r0 = 1
            goto L66
        L32:
            java.lang.String r1 = "Sony"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 7
            goto L66
        L3c:
            java.lang.String r1 = "OPPO"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 2
            goto L66
        L46:
            java.lang.String r1 = "LG"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 8
            goto L66
        L51:
            java.lang.String r1 = "Xiaomi"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 5
            goto L66
        L5b:
            java.lang.String r1 = "Coolpad"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L65
            r0 = 3
            goto L66
        L65:
            r0 = -1
        L66:
            switch(r0) {
                case 0: goto L80;
                case 1: goto L7e;
                case 2: goto L7b;
                case 3: goto L78;
                case 4: goto L75;
                case 5: goto L72;
                case 6: goto L82;
                case 7: goto L6f;
                case 8: goto L6c;
                default: goto L69;
            }
        L69:
            java.lang.String r2 = ""
            goto L82
        L6c:
            java.lang.String r2 = "lg"
            goto L82
        L6f:
            java.lang.String r2 = "sony"
            goto L82
        L72:
            java.lang.String r2 = "xiaomi"
            goto L82
        L75:
            java.lang.String r2 = "meizu"
            goto L82
        L78:
            java.lang.String r2 = "coolpad"
            goto L82
        L7b:
            java.lang.String r2 = "oppo"
            goto L82
        L7e:
            r2 = r3
            goto L82
        L80:
            java.lang.String r2 = "huawei"
        L82:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "该手机是"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 1126(0x466, float:1.578E-42)
            r4.sendResult(r0, r2)
            return
    }

    public void getNetLevel() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r1 = 1
            android.net.NetworkInfo r0 = r0.getNetworkInfo(r1)
            if (r0 == 0) goto L4c
            boolean r0 = r0.isAvailable()
            if (r0 == 0) goto L4c
            android.content.Context r0 = r3.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "wifi"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.wifi.WifiManager r0 = (android.net.wifi.WifiManager) r0
            android.net.wifi.WifiInfo r0 = r0.getConnectionInfo()
            java.lang.String r1 = r0.getBSSID()
            if (r1 == 0) goto L62
            r0.getSSID()
            int r1 = r0.getRssi()
            r2 = 6
            int r1 = android.net.wifi.WifiManager.calculateSignalLevel(r1, r2)
            r0.getLinkSpeed()
            r0 = 1109(0x455, float:1.554E-42)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r3.sendResult(r0, r1)
            goto L62
        L4c:
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "phone"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$5 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$5
            r1.<init>(r3)
            r2 = 256(0x100, float:3.59E-43)
            r0.listen(r1, r2)
        L62:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_net_type")
    public void getNetType() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            int r0 = com.bianfeng.ymnsdk.sysfunc.utils.IntenetUtil.getNetworkState(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = 1206(0x4b6, float:1.69E-42)
            r3.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_oaid")
    public void getOAID() {
            r2 = this;
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r1 = r2.appIdsUpdater
            r0.<init>(r1)
            android.app.Activity r1 = r2.getActivity()
            r0.getOAID(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_package_id")
    public void getPackageId() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = r5.getContext()     // Catch: java.io.IOException -> L27
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.io.IOException -> L27
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.io.IOException -> L27
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.io.IOException -> L27
            java.lang.String r4 = "soureIdConfig.json"
            java.io.InputStream r1 = r1.open(r4)     // Catch: java.io.IOException -> L27
            r3.<init>(r1)     // Catch: java.io.IOException -> L27
            r2.<init>(r3)     // Catch: java.io.IOException -> L27
        L1d:
            java.lang.String r1 = r2.readLine()     // Catch: java.io.IOException -> L27
            if (r1 == 0) goto L2b
            r0.append(r1)     // Catch: java.io.IOException -> L27
            goto L1d
        L27:
            r1 = move-exception
            r1.printStackTrace()
        L2b:
            java.lang.String r0 = r0.toString()
            r1 = 1200(0x4b0, float:1.682E-42)
            r5.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_ping")
    public void getPing(java.lang.String r3) {
            r2 = this;
            com.bianfeng.ymnsdk.sysfunc.PingAsyncTask r0 = new com.bianfeng.ymnsdk.sysfunc.PingAsyncTask
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$4 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$4
            r1.<init>(r2)
            r0.<init>(r3, r1)
            r3 = 0
            java.lang.Void[] r3 = new java.lang.Void[r3]
            r0.execute(r3)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "16"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "sysfunc"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 58
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_sys_version")
    public void getSYSVersion() {
            r2 = this;
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            r1 = 1207(0x4b7, float:1.691E-42)
            r2.sendResult(r1, r0)
            return
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "3.0.1"
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_app_version_code")
    public void get_app_version_code() {
            r2 = this;
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.getVerCode()
            r1 = 1212(0x4bc, float:1.698E-42)
            r2.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_app_version_name")
    public void get_app_version_name() {
            r2 = this;
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.getVerName()
            r1 = 1211(0x4bb, float:1.697E-42)
            r2.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_install_apk")
    public void installApk(java.lang.String r1) {
            r0 = this;
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.installApk(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_is_emulator")
    public void isEmulator() {
            r5 = this;
            android.app.Activity r0 = r5.getActivity()
            boolean r0 = isPad(r0)
            r1 = 1106(0x452, float:1.55E-42)
            r2 = 0
            if (r0 == 0) goto L16
            java.lang.String r0 = "是平板"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r5.sendResult(r1, r2)
            goto L44
        L16:
            android.app.Activity r0 = r5.getActivity()
            r3 = 101(0x65, float:1.42E-43)
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$2 r4 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$2
            r4.<init>(r5)
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.PermissionUtils.getEmulatorPermissions(r0, r3, r4)
            if (r0 == 0) goto L44
            android.app.Activity r0 = r5.getActivity()
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.utils.SimulatorUtil.isSimulator(r0)
            if (r0 == 0) goto L3c
            java.lang.String r0 = "是模拟器"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 1105(0x451, float:1.548E-42)
            r5.sendResult(r0, r2)
            goto L44
        L3c:
            java.lang.String r0 = "是手机"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r5.sendResult(r1, r2)
        L44:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_is_from_vivo")
    public void isFromVivoCenter() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            android.content.Intent r0 = r0.getIntent()
            if (r0 == 0) goto L49
            java.lang.String r1 = "fromPackage"
            java.lang.String r0 = r0.getStringExtra(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "============="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3d
            java.lang.String r1 = "com.vivo.game"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L3d
            java.lang.String r1 = "是从vivo中心过来的============="
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            r1 = 1110(0x456, float:1.555E-42)
            r3.sendResult(r1, r0)
            goto L49
        L3d:
            java.lang.String r0 = "================不是从vivo中心过来的"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r0 = 1111(0x457, float:1.557E-42)
            java.lang.String r1 = "not from vivo center enter"
            r3.sendResult(r0, r1)
        L49:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_is_install")
    public void isInstall(java.lang.String r5) {
            r4 = this;
            android.app.Activity r0 = r4.getActivity()
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            r1 = 0
            java.util.List r0 = r0.getInstalledPackages(r1)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            if (r0 == 0) goto L28
        L14:
            int r3 = r0.size()
            if (r1 >= r3) goto L28
            java.lang.Object r3 = r0.get(r1)
            android.content.pm.PackageInfo r3 = (android.content.pm.PackageInfo) r3
            java.lang.String r3 = r3.packageName
            r2.add(r3)
            int r1 = r1 + 1
            goto L14
        L28:
            boolean r5 = r2.contains(r5)
            if (r5 == 0) goto L3b
            java.lang.String r5 = "安装了"
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            r5 = 1204(0x4b4, float:1.687E-42)
            java.lang.String r0 = "已安装该应用"
            r4.sendResult(r5, r0)
            goto L47
        L3b:
            java.lang.String r5 = "未安装"
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            r5 = 1205(0x4b5, float:1.689E-42)
            java.lang.String r0 = "未安装该应用"
            r4.sendResult(r5, r0)
        L47:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_network-sniffing_close")
    public void network_sniffing_close() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.netReceiver
            if (r0 == 0) goto L10
            android.content.Context r0 = r2.getContext()
            android.content.BroadcastReceiver r1 = r2.netReceiver
            r0.unregisterReceiver(r1)
            r0 = 0
            r2.netReceiver = r0
        L10:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_network-sniffing_open")
    public void network_sniffing_open() {
            r0 = this;
            r0.initReceiver()
            return
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            super.onActivityResult(r1, r1, r3)
            r2 = 16003(0x3e83, float:2.2425E-41)
            if (r1 != r2) goto L1c
            boolean r1 = android.os.Environment.isExternalStorageEmulated()
            if (r1 == 0) goto L15
            r1 = 1223(0x4c7, float:1.714E-42)
            java.lang.String r2 = "Environment isExternalStorageEmulated"
            r0.sendResult(r1, r2)
            goto L1c
        L15:
            r1 = 1224(0x4c8, float:1.715E-42)
            java.lang.String r2 = "Environment is not ExternalStorageEmulated"
            r0.sendResult(r1, r2)
        L1c:
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.stop(r0)
            java.lang.String r0 = "ymnsdk---onDestroy"
            java.lang.String r1 = "onDestroy"
            android.util.Log.e(r0, r1)
            android.content.BroadcastReceiver r0 = r2.netReceiver
            if (r0 == 0) goto L25
            boolean r0 = r2.isRegisterReceiver
            if (r0 == 0) goto L25
            android.content.Context r0 = r2.getContext()
            android.content.BroadcastReceiver r1 = r2.netReceiver
            r0.unregisterReceiver(r1)
            r0 = 0
            r2.isRegisterReceiver = r0
        L25:
            return
    }

    @Override
    public void onInit(android.content.Context r1) {
            r0 = this;
            super.onInit(r1)
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.init(r1)
            r0.initReceiver()
            r1 = 1
            r0.isInitialized = r1
            return
    }

    @Override
    public void onNewIntent(android.content.Intent r2) {
            r1 = this;
            super.onNewIntent(r2)
            android.app.Activity r0 = r1.getActivity()
            r0.setIntent(r2)
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            boolean r0 = r1.isInitialized
            if (r0 == 0) goto L17
            boolean r0 = r1.isStartScreenShot
            if (r0 == 0) goto L17
            java.lang.String r0 = "into onPause"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            android.app.Activity r0 = r1.getActivity()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.stop(r0)
        L17:
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            boolean r0 = r1.isInitialized
            if (r0 == 0) goto L17
            boolean r0 = r1.isStartScreenShot
            if (r0 == 0) goto L17
            java.lang.String r0 = "into onResume"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            android.app.Activity r0 = r1.getActivity()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.start(r0)
        L17:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_open_app")
    public void openApp(java.lang.String r1) {
            r0 = this;
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.openApp(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_open_browser")
    public void openBrowser(java.lang.String r2) {
            r1 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            r0.setData(r2)
            java.lang.String r2 = "android.intent.action.VIEW"
            r0.setAction(r2)
            android.app.Activity r2 = r1.getActivity()
            r2.startActivity(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_set_splash_name")
    public void open_activity(java.lang.String r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r1 = this;
            java.lang.String r0 = "sysfunc_open_activity"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_open_app_activity")
    public void open_app_activity(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.app.Activity r0 = r1.getActivity()
            boolean r2 = r1.checkApkExist(r0, r2)
            if (r2 == 0) goto L2c
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r0 = "android.intent.action.VIEW"
            r2.<init>(r0)
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r0)
            r2.setData(r3)
            android.app.Activity r3 = r1.getActivity()
            r3.startActivity(r2)
            r2 = 1213(0x4bd, float:1.7E-42)
            java.lang.String r3 = "打开成功"
            r1.sendResult(r2, r3)
            goto L33
        L2c:
            r2 = 1214(0x4be, float:1.701E-42)
            java.lang.String r3 = "未安装该应用"
            r1.sendResult(r2, r3)
        L33:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_save_image_to_gallery")
    public void saveImageToGallery(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$11 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$11
            r1.<init>(r3)
            r2 = 102(0x66, float:1.43E-43)
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.PermissionUtils.getDownLoadPermissions(r0, r2, r1)
            if (r0 == 0) goto L14
            r3.saveImage(r4)
        L14:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_local_notification")
    public void showLocalNotification(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils r0 = com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils.getInstance()
            android.app.Activity r1 = r2.getActivity()
            r0.sendNotification(r1, r3, r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_start_sceenshot_activity")
    public void startActivityWithScreenShot() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotActivity.start(r0)
            r0 = 1123(0x463, float:1.574E-42)
            java.lang.String r1 = "启动了一个activity"
            r2.sendResult(r0, r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "sysfunc_start_screenshot", name = "sysfunc_start_sceenshot")
    public void startScreenShotListen() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$9 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$9
            r1.<init>(r3)
            r2 = 102(0x66, float:1.43E-43)
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.PermissionUtils.getScreenShotPermissions(r0, r2, r1)
            if (r0 == 0) goto L25
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.getInstance()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$10 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$10
            r1.<init>(r3)
            r0.setCallback(r1)
            android.app.Activity r0 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.start(r0)
            goto L2c
        L25:
            r0 = 1121(0x461, float:1.571E-42)
            java.lang.String r1 = "启动失败"
            r3.sendResult(r0, r1)
        L2c:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_start_screenshot_add_watermark")
    public void startScreenShotListenAndAddWaterMark(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$7 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$7
            r1.<init>(r3, r4)
            r2 = 102(0x66, float:1.43E-43)
            boolean r0 = com.bianfeng.ymnsdk.sysfunc.PermissionUtils.getScreenShotPermissions(r0, r2, r1)
            if (r0 == 0) goto L25
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.getInstance()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$8 r1 = new com.bianfeng.ymnsdk.sysfunc.SysfuncInterface$8
            r1.<init>(r3, r4)
            r0.setCallback(r1)
            android.app.Activity r4 = r3.getActivity()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.start(r4)
            goto L2c
        L25:
            r4 = 1121(0x461, float:1.571E-42)
            java.lang.String r0 = "启动失败"
            r3.sendResult(r4, r0)
        L2c:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_message_box")
    public void sysMessageBox(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.app.Activity r0 = r1.getActivity()
            com.bianfeng.ymnsdk.sysfunc.CoustomDialog.sysMessageBox(r0, r2, r3, r4, r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_notification_status")
    public void sysfunc_get_notification_status() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = "notification"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16005(0x3e85, float:2.2428E-41)
            r3 = 26
            if (r1 < r3) goto L28
            boolean r0 = r0.areNotificationsEnabled()
            if (r0 == 0) goto L22
            r0 = 16004(0x3e84, float:2.2426E-41)
            java.lang.String r1 = "开启了通知权限"
            r4.sendResult(r0, r1)
            goto L2d
        L22:
            java.lang.String r0 = "关闭了通知权限"
            r4.sendResult(r2, r0)
            goto L2d
        L28:
            java.lang.String r0 = "安卓8以下的设备，权限未知"
            r4.sendResult(r2, r0)
        L2d:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_get_oppoaes")
    public java.lang.String sysfunc_get_oppoaes(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r2 = com.bianfeng.ymnsdk.sysfunc.utils.Base64.AESencode(r2, r3)     // Catch: java.security.GeneralSecurityException -> La
            r3 = 16001(0x3e81, float:2.2422E-41)
            r1.sendResult(r3, r2)     // Catch: java.security.GeneralSecurityException -> La
            return r2
        La:
            r2 = move-exception
            r3 = 16002(0x3e82, float:2.2424E-41)
            java.lang.String r0 = "加密失败"
            r1.sendResult(r3, r0)
            r2.printStackTrace()
            java.lang.String r2 = ""
            return r2
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_hide_BottomUIMenu")
    protected void sysfunc_hide_BottomUIMenu() {
            r3 = this;
            java.lang.String r0 = "================隐藏虚拟按键"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 11
            if (r0 <= r2) goto L23
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L23
            android.app.Activity r0 = r3.getActivity()
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = r0.getDecorView()
            r1 = 8
            r0.setSystemUiVisibility(r1)
            goto L3c
        L23:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L3c
            android.app.Activity r0 = r3.getActivity()
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = r0.getDecorView()
            int r1 = r0.getSystemUiVisibility()
            r1 = r1 | 4102(0x1006, float:5.748E-42)
            r0.setSystemUiVisibility(r1)
        L3c:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_open_location_settings")
    public void sysfunc_open_location_settings() {
            r2 = this;
            boolean r0 = r2.isLocationEnabled()
            if (r0 != 0) goto L14
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.settings.LOCATION_SOURCE_SETTINGS"
            r0.<init>(r1)
            android.app.Activity r1 = r2.getActivity()
            r1.startActivity(r0)
        L14:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "sysfunc_open_qqgroup")
    protected void sysfunc_open_qq(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "mqqopensdkapi://bizAgent/qm/qr?url=http%3A%2F%2Fqm.qq.com%2Fcgi-bin%2Fqm%2Fqr%3Ffrom%3Dapp%26p%3Dandroid%26k%3D"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r0.setData(r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
            android.app.Activity r4 = r3.getActivity()     // Catch: java.lang.Exception -> L31
            r4.startActivity(r0)     // Catch: java.lang.Exception -> L31
            r4 = 1115(0x45b, float:1.562E-42)
            java.lang.String r0 = "succeed"
            r3.sendResult(r4, r0)     // Catch: java.lang.Exception -> L31
            goto L38
        L31:
            r4 = 1116(0x45c, float:1.564E-42)
            java.lang.String r0 = "fail"
            r3.sendResult(r4, r0)
        L38:
            return
    }
}
