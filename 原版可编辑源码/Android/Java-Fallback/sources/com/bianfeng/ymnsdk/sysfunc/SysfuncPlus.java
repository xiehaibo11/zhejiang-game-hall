package com.bianfeng.ymnsdk.sysfunc;

public class SysfuncPlus {
    private static java.util.List<java.util.Map<java.lang.String, java.lang.Object>> list = null;
    static android.location.LocationListener locationListener = null;
    static android.location.LocationManager locationManager = null;
    private static android.app.Activity mActivity = null;
    private static java.util.List<android.content.pm.ResolveInfo> mAllApps = null;
    private static android.content.pm.PackageManager mPackageManager = null;
    static final int nInt = 1;
    static final int nString = 0;
    static java.lang.String sConName = "config";
    static android.telephony.TelephonyManager tel;


    static {
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus$1 r0 = new com.bianfeng.ymnsdk.sysfunc.SysfuncPlus$1
            r0.<init>()
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationListener = r0
            return
    }

    public SysfuncPlus() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void CopyToClipboard(java.lang.String r1, com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r2) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            if (r0 == 0) goto L1e
            boolean r0 = com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.isYmnClipAllow()
            if (r0 == 0) goto L1e
            android.app.Activity r2 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            java.lang.String r0 = "clipboard"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.content.ClipboardManager r2 = (android.content.ClipboardManager) r2
            java.lang.String r0 = "data"
            android.content.ClipData r1 = android.content.ClipData.newPlainText(r0, r1)
            r2.setPrimaryClip(r1)
            goto L25
        L1e:
            r1 = 1104(0x450, float:1.547E-42)
            java.lang.String r0 = "sysfunc is not init"
            r2.sendResult(r1, r0)
        L25:
            return
    }

    public static void GetLatitudeAndLongitude(com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r2) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            if (r0 == 0) goto L20
            boolean r0 = isGpsOpen(r0)
            if (r0 == 0) goto L13
            java.lang.String r0 = "isGpsOpen = true"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            getGPS(r2)
            goto L27
        L13:
            java.lang.String r0 = "isGpsOpen = false"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 1103(0x44f, float:1.546E-42)
            java.lang.String r1 = "GPS Provider is disabled"
            r2.sendResult(r0, r1)
            goto L27
        L20:
            r0 = 1104(0x450, float:1.547E-42)
            java.lang.String r1 = "sysfunc is not init"
            r2.sendResult(r0, r1)
        L27:
            return
    }

    public static java.lang.String LoadStringData(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "LoadStringData key : "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 0
            java.lang.String r2 = Readconfig(r2, r0)
            return r2
    }

    public static java.lang.String Readconfig(java.lang.String r4, int r5) {
            r0 = 0
            android.app.Activity r1 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity     // Catch: java.lang.Exception -> La
            java.lang.String r2 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.sConName     // Catch: java.lang.Exception -> La
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Exception -> La
            goto Lf
        La:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
        Lf:
            java.lang.String r2 = ""
            if (r5 != 0) goto L4a
            if (r1 != 0) goto L16
            return r2
        L16:
            boolean r5 = r1.contains(r4)
            if (r5 == 0) goto L49
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Readconfig lable: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            java.lang.String r4 = r1.getString(r4, r2)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Readconfig: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            return r4
        L49:
            return r2
        L4a:
            r3 = 1
            if (r5 != r3) goto L62
            java.lang.String r5 = "0"
            if (r1 != 0) goto L52
            return r5
        L52:
            boolean r2 = r1.contains(r4)
            if (r2 == 0) goto L61
            int r4 = r1.getInt(r4, r0)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            return r4
        L61:
            return r5
        L62:
            return r2
    }

    public static void RemoveConfig(java.lang.String r3) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.sConName     // Catch: java.lang.Exception -> L1c
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L1c
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L1c
            if (r3 == 0) goto L20
            int r1 = r3.length()     // Catch: java.lang.Exception -> L1c
            if (r1 <= 0) goto L20
            r0.remove(r3)     // Catch: java.lang.Exception -> L1c
            r0.commit()     // Catch: java.lang.Exception -> L1c
            goto L20
        L1c:
            r3 = move-exception
            r3.printStackTrace()
        L20:
            return
    }

    public static void RemoveData(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RemoveData key : "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            RemoveConfig(r2)
            return
    }

    public static void SaveStringData(java.lang.String r2, byte[] r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SaveStringData key : "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r3)
            r3 = 0
            WriteConfig(r2, r0, r3)
            return
    }

    public static void WriteConfig(java.lang.String r3, java.lang.String r4, int r5) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.sConName     // Catch: java.lang.Exception -> L30
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L30
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L30
            if (r3 == 0) goto L34
            int r1 = r3.length()     // Catch: java.lang.Exception -> L30
            if (r1 <= 0) goto L34
            if (r4 == 0) goto L34
            if (r5 != 0) goto L1d
            r0.putString(r3, r4)     // Catch: java.lang.Exception -> L30
            goto L2c
        L1d:
            r1 = 1
            if (r5 != r1) goto L2c
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Exception -> L28
            r0.putInt(r3, r4)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Exception -> L30
        L2c:
            r0.commit()     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r3 = move-exception
            r3.printStackTrace()
        L34:
            return
    }

    public static void deleteApk(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "deleteApk : "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            java.lang.String r2 = "AC do Local APK file exist?"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L25
            return
        L25:
            java.lang.String r2 = "AC delete file"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            boolean r2 = r0.delete()
            if (r2 == 0) goto L36
            java.lang.String r2 = "AC delete success"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            goto L3b
        L36:
            java.lang.String r2 = "AC delete failed"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
        L3b:
            return
    }

    public static void getGPS(com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r9) {
            android.location.LocationManager r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            r1 = 1102(0x44e, float:1.544E-42)
            if (r0 != 0) goto Lc
            java.lang.String r0 = "get gps failed, locationManager is null"
            r9.sendResult(r1, r0)
            return
        Lc:
            java.lang.String r2 = "network"
            boolean r0 = r0.isProviderEnabled(r2)
            if (r0 == 0) goto L29
            android.location.LocationManager r3 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            r5 = 60000(0xea60, double:2.9644E-319)
            r7 = 1065353216(0x3f800000, float:1.0)
            android.location.LocationListener r8 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationListener
            java.lang.String r4 = "network"
            r3.requestLocationUpdates(r4, r5, r7, r8)
            android.location.LocationManager r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            android.location.Location r0 = r0.getLastKnownLocation(r2)
            goto L49
        L29:
            android.location.LocationManager r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            java.lang.String r2 = "gps"
            boolean r0 = r0.isProviderEnabled(r2)
            if (r0 == 0) goto L48
            android.location.LocationManager r3 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            r5 = 60000(0xea60, double:2.9644E-319)
            r7 = 1065353216(0x3f800000, float:1.0)
            android.location.LocationListener r8 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationListener
            java.lang.String r4 = "gps"
            r3.requestLocationUpdates(r4, r5, r7, r8)
            android.location.LocationManager r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            android.location.Location r0 = r0.getLastKnownLocation(r2)
            goto L49
        L48:
            r0 = 0
        L49:
            if (r0 == 0) goto L71
            double r1 = r0.getLatitude()
            double r3 = r0.getLongitude()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r5 = "latitude"
            r0.put(r5, r1)     // Catch: org.json.JSONException -> L63
            java.lang.String r1 = "longitude"
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L63
            goto L67
        L63:
            r1 = move-exception
            r1.printStackTrace()
        L67:
            r1 = 1101(0x44d, float:1.543E-42)
            java.lang.String r0 = r0.toString()
            r9.sendResult(r1, r0)
            goto L76
        L71:
            java.lang.String r0 = "get gps failed,location is null"
            r9.sendResult(r1, r0)
        L76:
            return
    }

    public static java.lang.String getPhoneNumber(android.content.Context r2) {
            android.app.Activity r2 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.tel = r2
            java.lang.String r2 = r2.getLine1Number()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getPhoneNumber1: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            return r2
    }

    public static void init(android.content.Context r0) {
            android.app.Activity r0 = (android.app.Activity) r0
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity = r0
            return
    }

    public static void installApk(java.lang.String r3, com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r4) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            if (r0 == 0) goto La3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L31
            r4.<init>()     // Catch: java.io.IOException -> L31
            java.lang.String r0 = "chmod 777 "
            r4.append(r0)     // Catch: java.io.IOException -> L31
            r4.append(r3)     // Catch: java.io.IOException -> L31
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L31
            r0.<init>()     // Catch: java.io.IOException -> L31
            java.lang.String r1 = "command = "
            r0.append(r1)     // Catch: java.io.IOException -> L31
            r0.append(r4)     // Catch: java.io.IOException -> L31
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L31
            com.bianfeng.ymnsdk.util.Logger.e(r0)     // Catch: java.io.IOException -> L31
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.io.IOException -> L31
            r0.exec(r4)     // Catch: java.io.IOException -> L31
            goto L3c
        L31:
            r4 = move-exception
            java.lang.String r0 = "debug"
            java.lang.String r1 = "chmod fail!!!!"
            android.util.Log.v(r0, r1)
            r4.printStackTrace()
        L3c:
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            java.lang.String r3 = "AC do Local APK file exist?"
            com.bianfeng.ymnsdk.util.Logger.e(r3)
            boolean r3 = r4.exists()
            if (r3 != 0) goto L4d
            return
        L4d:
            java.lang.String r3 = "AC yes"
            com.bianfeng.ymnsdk.util.Logger.e(r3)
            android.content.Intent r3 = new android.content.Intent
            java.lang.String r0 = "android.intent.action.VIEW"
            r3.<init>(r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r0)
            java.lang.String r0 = "AC new intent"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L8f
            r0 = 1
            r3.addFlags(r0)
            android.content.Context r0 = com.bianfeng.platform.executor.AppConfig.getContext()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = com.bianfeng.platform.executor.AppConfig.getContext()
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r2 = ".fileprovider"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r4 = android.support.v4.content.FileProvider.getUriForFile(r0, r1, r4)
            goto L93
        L8f:
            android.net.Uri r4 = android.net.Uri.fromFile(r4)
        L93:
            java.lang.String r0 = "application/vnd.android.package-archive"
            r3.setDataAndType(r4, r0)
            java.lang.String r4 = "AC start action"
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            android.app.Activity r4 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            r4.startActivity(r3)
            goto Laa
        La3:
            r3 = 1100(0x44c, float:1.541E-42)
            java.lang.String r0 = "sysfunc is not init"
            r4.sendResult(r3, r0)
        Laa:
            return
    }

    public static boolean isGpsOpen(android.content.Context r3) {
            java.lang.String r0 = "location"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.location.LocationManager r3 = (android.location.LocationManager) r3
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager = r3
            r0 = 0
            if (r3 != 0) goto L13
            java.lang.String r3 = "locationManager is null"
            com.bianfeng.ymnsdk.util.Logger.e(r3)
            return r0
        L13:
            java.lang.String r1 = "gps"
            boolean r3 = r3.isProviderEnabled(r1)
            android.location.LocationManager r1 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.locationManager
            java.lang.String r2 = "network"
            boolean r1 = r1.isProviderEnabled(r2)
            if (r3 != 0) goto L27
            if (r1 == 0) goto L26
            goto L27
        L26:
            return r0
        L27:
            r3 = 1
            return r3
    }

    public static void openApp(java.lang.String r4, com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.MAIN"
            r2 = 0
            r0.<init>(r1, r2)
            java.lang.String r1 = "android.intent.category.LAUNCHER"
            r0.addCategory(r1)
            android.app.Activity r1 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mPackageManager = r1
            r2 = 0
            java.util.List r0 = r1.queryIntentActivities(r0, r2)
            com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mAllApps = r0
            android.content.pm.ResolveInfo$DisplayNameComparator r1 = new android.content.pm.ResolveInfo$DisplayNameComparator
            android.content.pm.PackageManager r2 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mPackageManager
            r1.<init>(r2)
            java.util.Collections.sort(r0, r1)
            java.util.List<android.content.pm.ResolveInfo> r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mAllApps
            java.util.Iterator r0 = r0.iterator()
        L2c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L5e
            java.lang.Object r1 = r0.next()
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1
            android.content.pm.ActivityInfo r2 = r1.activityInfo
            java.lang.String r2 = r2.packageName
            android.content.pm.ActivityInfo r1 = r1.activityInfo
            java.lang.String r1 = r1.name
            boolean r3 = r2.contains(r4)
            if (r3 == 0) goto L2c
            android.content.ComponentName r4 = new android.content.ComponentName
            r4.<init>(r2, r1)
            android.content.Intent r5 = new android.content.Intent
            r5.<init>()
            r5.setComponent(r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r5.addFlags(r4)
            android.app.Activity r4 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            r4.startActivity(r5)
            return
        L5e:
            r4 = 1114(0x45a, float:1.561E-42)
            java.lang.String r0 = "没有安装该app"
            r5.sendResult(r4, r0)
            return
    }

    public static int sendSms(java.lang.String r9, java.lang.String r10) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sendSms number:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r1 = ", msg:"
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            boolean r0 = android.telephony.PhoneNumberUtils.isGlobalPhoneNumber(r9)
            if (r0 == 0) goto L4c
            int r0 = r9.length()
            if (r0 <= 0) goto L4c
            int r0 = r10.length()
            if (r0 <= 0) goto L4c
            android.app.Activity r0 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            android.content.Intent r1 = new android.content.Intent
            android.app.Activity r2 = com.bianfeng.ymnsdk.sysfunc.SysfuncPlus.mActivity
            java.lang.Class r3 = r2.getClass()
            r1.<init>(r2, r3)
            r2 = 0
            android.app.PendingIntent r7 = android.app.PendingIntent.getBroadcast(r0, r2, r1, r2)
            android.telephony.SmsManager r3 = android.telephony.SmsManager.getDefault()
            r5 = 0
            r8 = 0
            r4 = r9
            r6 = r10
            r3.sendTextMessage(r4, r5, r6, r7, r8)
            return r2
        L4c:
            r9 = 1
            return r9
    }
}
