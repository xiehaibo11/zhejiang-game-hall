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

    public static void a(Context r0, UrlConfig r1) {
        d.a(r0, r1);     // Catch: Exception -> L4
        g(r0);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    private static String b() {
        String r0 = YmnProperties.getValue("url_host_test");
        if (TextUtils.isEmpty(r0) == false) goto L6;
        return "119.97.159.53:8080";
    L6:
        return r0;
    }

    public static String c(Context r2) {
        d(r2);     // Catch: Exception -> L4
    L7:
        if (a.contains("http") == false) goto L9;
    L15:
        String r22 = r2.getSharedPreferences("SP_YMN_CHANGE_HOST", 0).getString("SP_YMN_CHANGE_HOST", "");
        if (r22.isEmpty() == true) goto L19;
        a = r22;
    L19:
        return a;
    L9:
        if (a.contains("ymnsdk.bianfeng.com") == false) goto L11;
    L14:
        a = "https://" + a;
        goto L15
    L11:
        if (a.contains("ymn.bianfeng.com") == true) goto L14;
        a = "http://" + a;
    L4:
        e = move-exception;
        e.printStackTrace();
        goto L7
    }

    public static void d(Context r0) {
        f(r0);     // Catch: Exception -> L4
        e(r0);     // Catch: Exception -> L4
        g(r0);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public static UrlLocalState e(Context r0) {
        UrlLocalState r02 = d.e(r0);
        c = r02;
        return r02;
    }

    private static void f(Context r0) {
        b = d.f(r0);
    }

    private static void g(Context r2) throws Exception {
        a = k(r2);
        if (TextUtils.isEmpty(a) == false) goto L6;
        a = j(r2);
        Logger.d("YmnURLManager", "从私有文件（远程）读取请求地址 " + a);
    L6:
        if (TextUtils.isEmpty(a) == true) goto L8;
    L11:
        Logger.d("YmnURLManager", "runtime host is " + a);
        return;
    L8:
        if (AppConfig.isDebug() == false) goto L10;
        a = b();
        goto L11
    L10:
        a = a();
        goto L11
    }

    public static void h(Context r1) {
        UrlLocalState r0 = c;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isNormalHost() == false) goto L8;
        c.increaseNormalContinuedFails();
    L10:
        a(r1);
        a(r1, c);
        return;
    L8:
        if (c.isBackupHost() == false) goto L10;
        c.increaseBackupContinuedFails();
        goto L10
    }

    public static void i(Context r1) {
        UrlLocalState r0 = c;
        if (r0 == null) goto L9;
        r0.resetNormalContinuedFails();
        c.resetBackupContinuedFails();
        if (c.isBackupHost() == false) goto L7;
        c.reduceBackupRemainTime();
        a(r1);
    L7:
        a(r1, c);
        return;
    }

    private static String j(Context r0) {
        UrlLocalState r02 = c;
        if (r02 != null) goto L5;
        return null;
    L5:
        return r02.getCurrentHost();
    }

    private static String k(Context r3) throws Exception {
    L11:
        e = move-exception;
        e.printStackTrace();
        return "";
    L4:
        if (ResourceUtil.isSdcardReady() == true) goto L6;
        return "";
    L6:
        File r0 = new File(ResourceUtil.getSdcardPath() + ".bftj/sdk/ymnDebug");     // Catch: Exception -> L11
        if (r0.exists() == true) goto L9;
        return "";
    L9:
        Properties r1 = new Properties();     // Catch: Exception -> L11
        r1.load(new FileInputStream(r0));     // Catch: Exception -> L11
        return r1.getProperty("url_host_ymnsdk");
    }

    public static void b(Context r1) {
        d.a(r1);     // Catch: Exception -> L4
        c = null;     // Catch: Exception -> L4
        b.clear();     // Catch: Exception -> L4
        g(r1);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public static void a(Context r0, UrlLocalState r1) {
        d.a(r0, r1);
    }

    private static String a() {
        String r0 = YmnProperties.getValue("url_host_public");
        Logger.d("YmnURLManager", "YmnProperties.getValue(KEY_URL_HOST_PUBLIC) :" + r0);
        if (TextUtils.isEmpty(r0) == false) goto L6;
        String r02 = a(AppConfig.getHostUrl());
        Logger.d("YmnURLManager", "keyToUrl(AppConfig.getHostUrl():" + r02);
        return r02;
    L6:
        return r0;
    }

    private static String a(String r1) {
        if (r1.startsWith("http") == false) goto L6;
        return r1;
    L6:
        if ("V2".equals(r1) == false) goto L9;
        return "ymn.bianfeng.com";
    L9:
        return "ymnsdk.bianfeng.com";
    }

    private static void a(Context r3) {
        Logger.d("YmnURLManager", "localState is " + YmnGsonUtil.toJson(c));
        if (c.isNormalHost() == false) goto L8;
        if (c.isNormalContinuedFailsLimited() == false) goto L23;
        c.resetNormalContinuedFails();
        c.resetBackupContinuedFails();
        c.resetBackupRemainTime();
        c.setCurrentHostToBackup();
        Logger.w("YmnURLManager", "set host to backup " + c.getCurrentHost());
    L23:
    L20:
        e = move-exception;
        e.printStackTrace();
        return;
    L16:
        if (c == null) goto L18;
        a = c.getCurrentHost();     // Catch: Exception -> L20
        return;
    L18:
        g(r3);     // Catch: Exception -> L20
        return;
    L8:
        if (c.isBackupHost() == false) goto L23;
        if (c.isBackupRemainTimeUseup() == false) goto L13;
        c.resetBackupRemainTime();
        c.resetNormalContinuedFails();
        c.setCurrentHostToNormal();
        Logger.w("YmnURLManager", "set host to normal " + c.getCurrentHost());
        goto L23
    L13:
        if (c.isBackupContinuedFailsLimited() == false) goto L23;
        b(r3);
        Logger.w("YmnURLManager", "cleaned local state");
        goto L23
    }
}
