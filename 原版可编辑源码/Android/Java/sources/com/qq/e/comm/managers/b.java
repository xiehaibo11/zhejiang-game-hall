package com.qq.e.comm.managers;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.qq.e.ads.dfa.GDTAppDialogClickListener;
import com.qq.e.comm.managers.devtool.DevTools;
import com.qq.e.comm.managers.plugin.PM;
import com.qq.e.comm.util.GDTLogger;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class b implements IGDTAdManager {
    public static final ExecutorService g = Executors.newSingleThreadExecutor();
    private volatile Boolean a;
    private volatile boolean b;
    private volatile Context c;
    private volatile PM d;
    private volatile DevTools e;
    private volatile String f;

    private static final class a {
        private static b a = new b(null);
    }

    private b() {
        this.a = Boolean.FALSE;
        this.b = false;
    }

    b(com.qq.e.comm.managers.a aVar) {
        this();
    }

    public static b b() {
        return a.a;
    }

    public String a() {
        return this.f;
    }

    synchronized boolean a(Context context, String str) {
        if (Build.VERSION.SDK_INT < 14) {
            GDTLogger.e("GDTADManager初始化错误，SDK不支持Android 4.0以下版本");
            return false;
        }
        if (this.a.booleanValue()) {
            return true;
        }
        if (context == null || TextUtils.isEmpty(str)) {
            GDTLogger.e("GDTADManager初始化错误，context和appId不能为空");
            return false;
        }
        try {
            this.f = str;
            this.c = context.getApplicationContext();
            this.d = new PM(this.c, null);
            g.submit(new com.qq.e.comm.managers.a(this));
            this.a = Boolean.TRUE;
            return true;
        } catch (Throwable th) {
            GDTLogger.e("GDTADManager初始化错误", th);
            return false;
        }
    }

    public PM c() {
        return this.d;
    }

    public boolean d() {
        if (this.a != null && this.a.booleanValue()) {
            return true;
        }
        GDTLogger.e("SDK 尚未初始化，请在 Application 中调用 GDTAdSdk.init() 初始化");
        return false;
    }

    @Override
    public String getBuyerId(Map<String, Object> map) {
        if (!d()) {
            return "";
        }
        try {
            return this.d.getPOFactory().getBuyerId(map);
        } catch (Exception e) {
            GDTLogger.e("SDK 初始化异常", e);
            return "";
        }
    }

    @Override
    public DevTools getDevTools() {
        if (this.e == null) {
            this.e = new DevTools();
        }
        return this.e;
    }

    @Override
    public String getSDKInfo(String str) {
        if (!d()) {
            return "";
        }
        try {
            return this.d.getPOFactory().getSDKInfo(str);
        } catch (Exception e) {
            GDTLogger.e("SDK 初始化异常", e);
            return "";
        }
    }

    @Override
    public int showOpenOrInstallAppDialog(GDTAppDialogClickListener gDTAppDialogClickListener) {
        if (!this.b) {
            return 0;
        }
        try {
            return this.d.getPOFactory().showOpenOrInstallAppDialog(gDTAppDialogClickListener);
        } catch (Exception e) {
            GDTLogger.e("SDK 初始化异常", e);
            return 0;
        }
    }
}
