package com.bianfeng.ymnsdk.feature;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.entity.UrlConfig;
import com.bianfeng.ymnsdk.entity.UrlLocalState;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceUtil;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.io.File;
import java.io.FileInputStream;
import java.util.Map;
import java.util.Properties;

public class e {
    private static String a = "";
    private static Map<String, UrlConfig> b;
    public static UrlLocalState c;

    static {
        new String[]{"http:47.102.108.186:8087/"};
    }

    public static void a(Context context, UrlConfig urlConfig) {
        try {
            d.a(context, urlConfig);
            g(context);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static String b() {
        String value = YmnProperties.getValue("url_host_test");
        return TextUtils.isEmpty(value) ? "119.97.159.53:8080" : value;
    }

    public static String c(Context context) {
        try {
            d(context);
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (!a.contains("http")) {
            if (a.contains("ymnsdk.bianfeng.com") || a.contains("ymn.bianfeng.com")) {
                a = "https://" + a;
            } else {
                a = "http://" + a;
            }
        }
        String string = context.getSharedPreferences("SP_YMN_CHANGE_HOST", 0).getString("SP_YMN_CHANGE_HOST", "");
        if (!string.isEmpty()) {
            a = string;
        }
        return a;
    }

    public static void d(Context context) {
        try {
            f(context);
            e(context);
            g(context);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static UrlLocalState e(Context context) {
        UrlLocalState urlLocalStateE = d.e(context);
        c = urlLocalStateE;
        return urlLocalStateE;
    }

    private static void f(Context context) {
        b = d.f(context);
    }

    private static void g(Context context) throws Exception {
        a = k(context);
        if (TextUtils.isEmpty(a)) {
            a = j(context);
            Logger.d("YmnURLManager", "从私有文件（远程）读取请求地址 " + a);
        }
        if (TextUtils.isEmpty(a)) {
            if (AppConfig.isDebug()) {
                a = b();
            } else {
                a = a();
            }
        }
        Logger.d("YmnURLManager", "runtime host is " + a);
    }

    public static void h(Context context) {
        UrlLocalState urlLocalState = c;
        if (urlLocalState != null) {
            if (urlLocalState.isNormalHost()) {
                c.increaseNormalContinuedFails();
            } else if (c.isBackupHost()) {
                c.increaseBackupContinuedFails();
            }
            a(context);
            a(context, c);
        }
    }

    public static void i(Context context) {
        UrlLocalState urlLocalState = c;
        if (urlLocalState != null) {
            urlLocalState.resetNormalContinuedFails();
            c.resetBackupContinuedFails();
            if (c.isBackupHost()) {
                c.reduceBackupRemainTime();
                a(context);
            }
            a(context, c);
        }
    }

    private static String j(Context context) {
        UrlLocalState urlLocalState = c;
        if (urlLocalState != null) {
            return urlLocalState.getCurrentHost();
        }
        return null;
    }

    private static String k(Context context) throws Exception {
        try {
            if (!ResourceUtil.isSdcardReady()) {
                return "";
            }
            File file = new File(ResourceUtil.getSdcardPath() + ".bftj/sdk/ymnDebug");
            if (!file.exists()) {
                return "";
            }
            Properties properties = new Properties();
            properties.load(new FileInputStream(file));
            return properties.getProperty("url_host_ymnsdk");
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static void b(Context context) {
        try {
            d.a(context);
            c = null;
            b.clear();
            g(context);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void a(Context context, UrlLocalState urlLocalState) {
        d.a(context, urlLocalState);
    }

    private static String a() {
        String value = YmnProperties.getValue("url_host_public");
        Logger.d("YmnURLManager", "YmnProperties.getValue(KEY_URL_HOST_PUBLIC) :" + value);
        if (!TextUtils.isEmpty(value)) {
            return value;
        }
        String strA = a(AppConfig.getHostUrl());
        Logger.d("YmnURLManager", "keyToUrl(AppConfig.getHostUrl():" + strA);
        return strA;
    }

    private static String a(String str) {
        return str.startsWith("http") ? str : "V2".equals(str) ? "ymn.bianfeng.com" : "ymnsdk.bianfeng.com";
    }

    private static void a(Context context) {
        Logger.d("YmnURLManager", "localState is " + YmnGsonUtil.toJson(c));
        if (c.isNormalHost()) {
            if (c.isNormalContinuedFailsLimited()) {
                c.resetNormalContinuedFails();
                c.resetBackupContinuedFails();
                c.resetBackupRemainTime();
                c.setCurrentHostToBackup();
                Logger.w("YmnURLManager", "set host to backup " + c.getCurrentHost());
            }
        } else if (c.isBackupHost()) {
            if (c.isBackupRemainTimeUseup()) {
                c.resetBackupRemainTime();
                c.resetNormalContinuedFails();
                c.setCurrentHostToNormal();
                Logger.w("YmnURLManager", "set host to normal " + c.getCurrentHost());
            } else if (c.isBackupContinuedFailsLimited()) {
                b(context);
                Logger.w("YmnURLManager", "cleaned local state");
            }
        }
        try {
            if (c != null) {
                a = c.getCurrentHost();
            } else {
                g(context);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
