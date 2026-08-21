package com.bianfeng.ymnsdk.sysfunc;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.content.FileProvider;
import android.telephony.PhoneNumberUtils;
import android.telephony.SmsManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bytedance.pangle.ZeusPluginEventCallback;
import com.huawei.hms.framework.common.ExceptionCode;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.File;
import java.io.IOException;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public class SysfuncPlus {
    private static List<Map<String, Object>> list = null;
    static LocationListener locationListener = new LocationListener() {
        @Override
        public void onStatusChanged(String str, int i, Bundle bundle) {
            Logger.i("|onStatusChanged|" + str + "|" + i);
        }

        @Override
        public void onProviderEnabled(String str) {
            Logger.e("|onProviderEnabled|" + str);
        }

        @Override
        public void onProviderDisabled(String str) {
            Logger.e("|onProviderDisabled|" + str);
        }

        @Override
        public void onLocationChanged(Location location) {
            Logger.e("|onLocationChanged|" + location.getLatitude() + "|" + location.getLongitude());
        }
    };
    static LocationManager locationManager = null;
    private static Activity mActivity = null;
    private static List<ResolveInfo> mAllApps = null;
    private static PackageManager mPackageManager = null;
    static final int nInt = 1;
    static final int nString = 0;
    static String sConName = "config";
    static TelephonyManager tel;

    public static void init(Context context) {
        mActivity = (Activity) context;
    }

    public static void installApk(String str, SysfuncInterface sysfuncInterface) {
        Uri uriFromFile;
        if (mActivity != null) {
            try {
                String str2 = "chmod 777 " + str;
                Logger.e("command = " + str2);
                Runtime.getRuntime().exec(str2);
            } catch (IOException e) {
                Log.v("debug", "chmod fail!!!!");
                e.printStackTrace();
            }
            File file = new File(str);
            Logger.e("AC do Local APK file exist?");
            if (file.exists()) {
                Logger.e("AC yes");
                Intent intent = new Intent("android.intent.action.VIEW");
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                Logger.e("AC new intent");
                if (Build.VERSION.SDK_INT >= 24) {
                    intent.addFlags(1);
                    uriFromFile = FileProvider.getUriForFile(AppConfig.getContext(), AppConfig.getContext().getPackageName() + ".fileprovider", file);
                } else {
                    uriFromFile = Uri.fromFile(file);
                }
                intent.setDataAndType(uriFromFile, AdBaseConstants.MIME_APK);
                Logger.e("AC start action");
                mActivity.startActivity(intent);
                return;
            }
            return;
        }
        sysfuncInterface.sendResult(ZeusPluginEventCallback.EVENT_FINISH_INSTALLATION, "sysfunc is not init");
    }

    public static void deleteApk(String str) {
        Logger.e("deleteApk : " + str);
        File file = new File(str);
        Logger.e("AC do Local APK file exist?");
        if (file.exists()) {
            Logger.e("AC delete file");
            if (file.delete()) {
                Logger.e("AC delete success");
            } else {
                Logger.e("AC delete failed");
            }
        }
    }

    public static String getPhoneNumber(Context context) {
        TelephonyManager telephonyManager = (TelephonyManager) mActivity.getSystemService("phone");
        tel = telephonyManager;
        String line1Number = telephonyManager.getLine1Number();
        Logger.e("getPhoneNumber1: " + line1Number);
        return line1Number;
    }

    public static int sendSms(String str, String str2) {
        Logger.e("sendSms number:" + str + ", msg:" + str2);
        if (!PhoneNumberUtils.isGlobalPhoneNumber(str) || str.length() <= 0 || str2.length() <= 0) {
            return 1;
        }
        Activity activity = mActivity;
        Activity activity2 = mActivity;
        SmsManager.getDefault().sendTextMessage(str, null, str2, PendingIntent.getBroadcast(activity, 0, new Intent(activity2, activity2.getClass()), 0), null);
        return 0;
    }

    public static void SaveStringData(String str, byte[] bArr) {
        Logger.e("SaveStringData key : " + str);
        WriteConfig(str, new String(bArr), 0);
    }

    public static String LoadStringData(String str) {
        Logger.e("LoadStringData key : " + str);
        return Readconfig(str, 0);
    }

    public static void RemoveData(String str) {
        Logger.e("RemoveData key : " + str);
        RemoveConfig(str);
    }

    public static void WriteConfig(String str, String str2, int i) {
        try {
            SharedPreferences.Editor editorEdit = mActivity.getSharedPreferences(sConName, 0).edit();
            if (str == null || str.length() <= 0 || str2 == null) {
                return;
            }
            if (i == 0) {
                editorEdit.putString(str, str2);
            } else if (i == 1) {
                try {
                    editorEdit.putInt(str, Integer.parseInt(str2));
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            editorEdit.commit();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public static void RemoveConfig(String str) {
        try {
            SharedPreferences.Editor editorEdit = mActivity.getSharedPreferences(sConName, 0).edit();
            if (str == null || str.length() <= 0) {
                return;
            }
            editorEdit.remove(str);
            editorEdit.commit();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String Readconfig(String str, int i) {
        SharedPreferences sharedPreferences;
        try {
            sharedPreferences = mActivity.getSharedPreferences(sConName, 0);
        } catch (Exception e) {
            e.printStackTrace();
            sharedPreferences = null;
        }
        if (i != 0) {
            return i == 1 ? (sharedPreferences != null && sharedPreferences.contains(str)) ? String.valueOf(sharedPreferences.getInt(str, 0)) : "0" : "";
        }
        if (sharedPreferences == null || !sharedPreferences.contains(str)) {
            return "";
        }
        Logger.e("Readconfig lable: " + str);
        String string = sharedPreferences.getString(str, "");
        Logger.e("Readconfig: " + string);
        return string;
    }

    public static void CopyToClipboard(String str, SysfuncInterface sysfuncInterface) {
        if (mActivity != null && YmnSharedPreferencesUtils.isYmnClipAllow()) {
            ((ClipboardManager) mActivity.getSystemService("clipboard")).setPrimaryClip(ClipData.newPlainText("data", str));
        } else {
            sysfuncInterface.sendResult(ExceptionCode.CANCEL, "sysfunc is not init");
        }
    }

    public static void GetLatitudeAndLongitude(SysfuncInterface sysfuncInterface) {
        Activity activity = mActivity;
        if (activity != null) {
            if (isGpsOpen(activity)) {
                Logger.e("isGpsOpen = true");
                getGPS(sysfuncInterface);
                return;
            } else {
                Logger.e("isGpsOpen = false");
                sysfuncInterface.sendResult(ExceptionCode.CRASH_EXCEPTION, "GPS Provider is disabled");
                return;
            }
        }
        sysfuncInterface.sendResult(ExceptionCode.CANCEL, "sysfunc is not init");
    }

    public static boolean isGpsOpen(Context context) {
        LocationManager locationManager2 = (LocationManager) context.getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
        locationManager = locationManager2;
        if (locationManager2 != null) {
            return locationManager2.isProviderEnabled("gps") || locationManager.isProviderEnabled(PointCategory.NETWORK);
        }
        Logger.e("locationManager is null");
        return false;
    }

    public static void getGPS(SysfuncInterface sysfuncInterface) {
        Location lastKnownLocation;
        LocationManager locationManager2 = locationManager;
        if (locationManager2 == null) {
            sysfuncInterface.sendResult(ExceptionCode.NETWORK_IO_EXCEPTION, "get gps failed, locationManager is null");
            return;
        }
        if (locationManager2.isProviderEnabled(PointCategory.NETWORK)) {
            locationManager.requestLocationUpdates(PointCategory.NETWORK, 60000L, 1.0f, locationListener);
            lastKnownLocation = locationManager.getLastKnownLocation(PointCategory.NETWORK);
        } else if (locationManager.isProviderEnabled("gps")) {
            locationManager.requestLocationUpdates("gps", 60000L, 1.0f, locationListener);
            lastKnownLocation = locationManager.getLastKnownLocation("gps");
        } else {
            lastKnownLocation = null;
        }
        if (lastKnownLocation != null) {
            double latitude = lastKnownLocation.getLatitude();
            double longitude = lastKnownLocation.getLongitude();
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("latitude", latitude);
                jSONObject.put("longitude", longitude);
            } catch (JSONException e) {
                e.printStackTrace();
            }
            sysfuncInterface.sendResult(1101, jSONObject.toString());
            return;
        }
        sysfuncInterface.sendResult(ExceptionCode.NETWORK_IO_EXCEPTION, "get gps failed,location is null");
    }

    public static void openApp(String str, SysfuncInterface sysfuncInterface) {
        Intent intent = new Intent("android.intent.action.MAIN", (Uri) null);
        intent.addCategory("android.intent.category.LAUNCHER");
        PackageManager packageManager = mActivity.getPackageManager();
        mPackageManager = packageManager;
        List<ResolveInfo> listQueryIntentActivities = packageManager.queryIntentActivities(intent, 0);
        mAllApps = listQueryIntentActivities;
        Collections.sort(listQueryIntentActivities, new ResolveInfo.DisplayNameComparator(mPackageManager));
        for (ResolveInfo resolveInfo : mAllApps) {
            String str2 = resolveInfo.activityInfo.packageName;
            String str3 = resolveInfo.activityInfo.name;
            if (str2.contains(str)) {
                ComponentName componentName = new ComponentName(str2, str3);
                Intent intent2 = new Intent();
                intent2.setComponent(componentName);
                intent2.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                mActivity.startActivity(intent2);
                return;
            }
        }
        sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_NO_INSTALL_VIVO, "没有安装该app");
    }
}
