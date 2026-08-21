package com.bykv.vk.openvk.api.plugin;

import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.bykv.vk.openvk.TTAdEvent;
import com.bykv.vk.openvk.TTPluginListener;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfSdk;
import com.bykv.vk.openvk.api.proto.EventListener;
import com.bykv.vk.openvk.api.proto.Result;
import com.bykv.vk.openvk.api.proto.ValueSet;
import com.bytedance.pangle.GlobalParam;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.ZeusPluginStateListener;
import com.bytedance.pangle.log.IZeusLogger;
import com.bytedance.pangle.log.IZeusReporter;
import com.bytedance.pangle.plugin.Plugin;
import com.tkay.expressad.foundation.d.r;
import dalvik.system.BaseDexClassLoader;
import java.io.File;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class c {
    private static volatile boolean c;
    private static volatile TTPluginListener hq;
    private static volatile BaseDexClassLoader pt;
    private final Context bm;
    private static final String rg = "next" + File.separator;
    private static final HashMap<String, TTPluginListener> df = new HashMap<>();
    private static final HashMap<String, Handler> q = new HashMap<>();
    private static volatile c pp = null;
    private final CountDownLatch fw = new CountDownLatch(1);
    private volatile boolean ux = false;
    private volatile String rz = Device.NETWORN_NONE;
    private JSONObject b = new JSONObject();

    private c(Context context) {
        this.bm = context.getApplicationContext();
        pt.rg(context);
        df(context.getApplicationContext());
    }

    public static c rg(Context context) {
        if (pp == null) {
            synchronized (c.class) {
                if (pp == null) {
                    pp = new c(context);
                }
            }
        }
        return pp;
    }

    public void rg() {
        c = true;
        pt.rg(new ArrayList());
    }

    public JSONObject df() {
        return this.b;
    }

    public BaseDexClassLoader rg(pp ppVar) throws Exception {
        if (!this.ux) {
            com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "Zeus init failed.");
            throw new com.bykv.vk.openvk.api.plugin.q(4, this.rz);
        }
        if (!Zeus.isPluginInstalled("com.bykv.vk")) {
            try {
                this.fw.await(60000L, TimeUnit.MILLISECONDS);
                ppVar.df("wait_install_cost");
            } catch (Exception unused) {
                com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "Install wait time out");
                throw new com.bykv.vk.openvk.api.plugin.q(8, "install wait timeout");
            }
        }
        boolean z = false;
        if (Zeus.isPluginLoaded("com.bykv.vk") || Zeus.loadPlugin("com.bykv.vk")) {
            pt = Zeus.getPlugin("com.bykv.vk").mClassLoader;
            z = true;
        }
        ppVar.df("get_classloader_cost");
        Zeus.installFromDownloadDir();
        if (pt == null) {
            if (this.fw.getCount() != 0) {
                com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "Install wait time out");
                throw new com.bykv.vk.openvk.api.plugin.q(8, "install wait timeout");
            }
            if (z) {
                com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "Get null after load");
                throw new com.bykv.vk.openvk.api.plugin.q(9, "Get null after load");
            }
        }
        ppVar.df("get_classloader_done");
        return pt;
    }

    private void df(Context context) {
        try {
            IZeusReporter iZeusReporter = new IZeusReporter() { // from class: com.bykv.vk.openvk.api.plugin.c.1
                @Override // com.bytedance.pangle.log.IZeusReporter
                public void report(String str, JSONObject jSONObject) {
                    if (str == "load_finish" && jSONObject != null && "com.bykv.vk".endsWith(jSONObject.optString("plugin_package_name"))) {
                        try {
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(r.ag, jSONObject.opt(r.ag));
                            jSONObject2.put("message", jSONObject.opt("message"));
                            c.this.b.put("zeus", jSONObject2);
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                    if (c.c) {
                        pt.rg(str, jSONObject);
                    } else {
                        pt.q(str, jSONObject);
                    }
                }
            };
            GlobalParam globalParam = GlobalParam.getInstance();
            globalParam.setReporter(iZeusReporter);
            globalParam.setCheckPermission(false);
            globalParam.setDownloadDir(q(context));
            globalParam.setLogger(new rg());
            globalParam.setSignature("com.bykv.vk", "MIIDfTCCAmWgAwIBAgIEfRwYPjANBgkqhkiG9w0BAQsFADBvMQswCQYDVQQGEwJDTjEQMA4GA1UECBMHQmVpamluZzEQMA4GA1UEBxMHQmVpamluZzESMBAGA1UEChMJQnl0ZURhbmNlMQ8wDQYDVQQLEwZQYW5nbGUxFzAVBgNVBAMTDkNodWFuIFNoYW4gSmlhMB4XDTIxMTEwODA2MjQzOVoXDTQ2MTEwMjA2MjQzOVowbzELMAkGA1UEBhMCQ04xEDAOBgNVBAgTB0JlaWppbmcxEDAOBgNVBAcTB0JlaWppbmcxEjAQBgNVBAoTCUJ5dGVEYW5jZTEPMA0GA1UECxMGUGFuZ2xlMRcwFQYDVQQDEw5DaHVhbiBTaGFuIEppYTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAIBKeRL+4mfCn1SLYv6OemfwwItkjlLPyqOEugkV6lanFTcZgLwEl5LIkL0y28UncPtMX1Mii6DzCdJ/plw7S9+RT/hYDneu339IKWojaU2qai/5FokHlQ0MMnYl5yry00ghVPsl1u+03cQA2ZnjIMiFhrBJpQzHt7IYvq2aEEMBcY8uT7iFoBI848e1mL1joVS2z02C3NliP7ZNARkXH+rTQAlCJulT5IZk+V/PTaKqzgNrkhsKh0/tBmU7m8u79x/xpgGsE19H18AgS4P/9/MDCRe2Z35boZeccaUy2MXCwv3djzUcDk3rRzQPYzdpyyRnrFMuhiKesc5VHgUMs9kCAwEAAaMhMB8wHQYDVR0OBBYEFENENrNWGzc2WhxdvhoMDs57U70zMA0GCSqGSIb3DQEBCwUAA4IBAQAHqDCrmvyBBmIGXwuL1rwS/Qv9ZJIZykBIaNMm+H1IfitCl4yXd9N2n+PjE0UZtxZ21UZOt9wAr+RFiSl5YRXqpt7WLARTy4YW3RiQ+wiL7bshzeSYBoSiC427Bfeq0WjwY0/jHlr8uouppyJOz++6U9hrYX2EW/6UjH5XlWiKQJ6b2ZzPcP8Xpg/TJn4tWvXJP6jw9kRRP2GmMttY78leWQst2QEZILmWJubXRLPj9O+qx2uP9oGTD4sc1vb9hzkOHBIHzGaalqLFbbGaeFpLFHoGTsnOfPTwUVKDZYmxbkcmR1bp7eYOW+nSQNMLn0FjDewZl5l37Sa/gz0WVHon");
            globalParam.setSignature("com.byted.csj.ext", "MIIDezCCAmOgAwIBAgIENkE1KDANBgkqhkiG9w0BAQsFADBtMQswCQYDVQQGEwI4NjEQMA4GA1UECBMHYmVpamluZzEQMA4GA1UEBxMHYmVpamluZzESMBAGA1UEChMJYnl0ZWRhbmNlMRIwEAYDVQQLEwlieXRlZGFuY2UxEjAQBgNVBAMTCWJ5dGVkYW5jZTAgFw0yMjExMDIwODI3MzlaGA8yMDUwMDMyMDA4MjczOVowbTELMAkGA1UEBhMCODYxEDAOBgNVBAgTB2JlaWppbmcxEDAOBgNVBAcTB2JlaWppbmcxEjAQBgNVBAoTCWJ5dGVkYW5jZTESMBAGA1UECxMJYnl0ZWRhbmNlMRIwEAYDVQQDEwlieXRlZGFuY2UwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCc9Z2F3xxOMX1qTXMy2aPmS9OSkqrp8C8bHwS1hkNVR4umKREuqOn73INNo+R706jaCVnlPwxDwWjtX6H74DE4CveivyM9f2wNC3yIyDW+5j7lW/keTQcOlGLDEJQv4O/6FbB/jNU6epjyNaNIZhgZcvTpgaSixbdyHzRTFmvMh+WovdVK/J9LnHOQ+pmPZj7NB6MQRGMUrPEotLHQca3cmnLrnPAaZQaVoaFE9lOt9syyqEuf361SprNIGDtbkJuX3EqV/QOKWFwZX94IS7ZGSvfyCojcD4kaUSbaSoZC7zEuBb7l69g+ZMrJ/v6wkm01wxsNNssUwF7k6Sp0zubbAgMBAAGjITAfMB0GA1UdDgQWBBSxk+gVdDco1dP65hP67qoKNlMEYDANBgkqhkiG9w0BAQsFAAOCAQEAfosExl/AYEbS2xqHBTHa28cvnp/SElUQuzW6aWLqkfk9cxmFSI/euUV3/eB8RN+U2X47Y05u6+XUxTv0tSSEtyXNawm0qWH8jkR4gZY38YqBChKjhea668oT5X3Uocrw7SYXO/BfI8SKPa0uI/U8Cyl3uctbmmq/pPUkd3mKAy+HgyJoThD6K0oyiADlygngUMVTv6Uvid4qPj/bBnxI+LvVeX4l1dxGqWkiafQW9sz+RbFdge3X2XsSH4eo01BsCwOYEv1lHO2FrbAtFNpnIsSqrERdFaAJZ3tlJmg9bA03png8A2AajEjkhaOhduJB8zkSlvHNpoQMIAS9WtkG/w==");
            globalParam.setSignature("com.byted.live.lite", "MIIDSTCCAjGgAwIBAgIEaLy5tzANBgkqhkiG9w0BAQsFADBVMQswCQYDVQQGEwIxMTEMMAoGA1UECBMDMTExMQ4wDAYDVQQHEwUxMTExMTEMMAoGA1UEChMDMTExMQwwCgYDVQQLEwMxMTExDDAKBgNVBAMTAzExMTAeFw0yMDEyMDMxMjQyMTJaFw00NTExMjcxMjQyMTJaMFUxCzAJBgNVBAYTAjExMQwwCgYDVQQIEwMxMTExDjAMBgNVBAcTBTExMTExMQwwCgYDVQQKEwMxMTExDDAKBgNVBAsTAzExMTEMMAoGA1UEAxMDMTExMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA45E52YdkJm4gPCXZq7KDoM1h6pgSswllC/CwDOmh8pDGvX4ROaYP1vr2biRlXMHg7G0iXpxWVdlTtx+4QFd3dC+cGJQk0f6apGo2n2RpMA0zIsSf0VO1a3GjWLei5INo+4RDdciqJ4jfsoqBIjZETRkky+UU4eO/oyrAwOu4KdMln3Bg3u7eHWU4kMFrXxrRruT3Q/9gzlO90yQa0CZPWVDrk6cGJtJwJGhWm+62S3U8D26HE++eGP7ve83QBDGtKqx7HpCAFWUiYBgXGq12H0amQDkKcPcr/EFCaBlombSgkN0t6zBX80m+wcUPC75IBTmMV/DT2dXcgjZ2I1JSCQIDAQABoyEwHzAdBgNVHQ4EFgQUPDyIeKI0KhZFPHyn36gMMIYrpukwDQYJKoZIhvcNAQELBQADggEBAHkl0DoCRwn+XKsDJE+wGMpBBqUDzL6DSOnJx4SNqb7YZZU0ThcDK7jY4If3QRkvMio6ODrVZc2U/m/Tc3VeMk5h2W2UZRUWHNH3k9Xe0720uL20ZeH2Y6IG4L5HG8kIbTbFtX3gJpPG/xAcez+CzyCFLWQAZt1N+csG0syWkXJ0Nryq8VrgSCyCXD1KzFxrOe+65wtu50Vi68Vlbk7BZe/G8Qm0RhKmxq5BPMBJ4uY3be+03Ba5qC//o1XQHOEAjrJKXcN5wqHdFZTkmuxVyIPogZOzx4JlNl0zOrYGDJxp7aZfKF9FkXQyF7x0Ns3mZEtjx/+flXRzAAU9MDhPr/0=");
            Zeus.registerPluginStateListener(new ZeusPluginStateListener() { // from class: com.bykv.vk.openvk.api.plugin.c.2
                @Override // com.bytedance.pangle.ZeusPluginStateListener
                public void onPluginStateChange(final String str, final int i, Object... objArr) {
                    com.bykv.vk.openvk.api.rg.df("TTPluginManager", str + " state changed, " + i);
                    if (i == 7) {
                        c.this.df(str, i);
                    } else if (i == 6) {
                        com.bykv.vk.openvk.df.rg.rg().rg(new Runnable() { // from class: com.bykv.vk.openvk.api.plugin.c.2.1
                            @Override // java.lang.Runnable
                            public void run() {
                                c.this.df(str, i);
                            }
                        });
                    }
                }
            });
            Zeus.init((Application) context, true);
            this.ux = true;
        } catch (Throwable th) {
            com.bykv.vk.openvk.api.rg.rg("TTPluginManager", "Unexpected error for init zeus.", th);
            this.rz = th.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void df(String str, int i) {
        if ("com.bykv.vk".equals(str) && i == 6) {
            this.fw.countDown();
        }
        rg(i == 6, str);
    }

    private static File q(Context context) {
        return new File(new File(context.getDir("tt_pangle_bykv_file", 0), "pangle_com.bykv.vk"), rg);
    }

    public Bundle rg(String str, Bundle bundle) {
        String strRg = rg(str);
        if (!TextUtils.isEmpty(strRg)) {
            bundle.putString(PluginConstants.KEY_PLUGIN_VERSION, strRg);
        }
        fw.rg(str, bundle);
        Bundle bundle2 = new Bundle();
        bundle2.putBundle(str, bundle);
        Bundle bundle3 = new Bundle();
        bundle3.putBundle(PluginConstants.KEY_PL_CONFIG_INFO, bundle2);
        return bundle3;
    }

    public static String rg(String str) {
        Plugin plugin;
        try {
            if (!Zeus.isPluginInstalled(str) || (plugin = Zeus.getPlugin(str)) == null) {
                return null;
            }
            return rg(plugin.getVersion());
        } catch (Throwable unused) {
            com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "Get local version failed");
            return null;
        }
    }

    public void rg(final TTPluginListener tTPluginListener) {
        if (!this.ux) {
            com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "Zeus init failed.");
            if (tTPluginListener != null) {
                tTPluginListener.onPluginListener(1002, null, null, null);
                return;
            }
            return;
        }
        Handler handler = new Handler(Looper.getMainLooper());
        handler.postDelayed(new Runnable() { // from class: com.bykv.vk.openvk.api.plugin.c.3
            @Override // java.lang.Runnable
            public void run() {
                com.bykv.vk.openvk.api.rg.df("TTPluginManager", "Load plugin failed, caused by timeout.");
                tTPluginListener.onPluginListener(1001, null, null, null);
            }
        }, 180000L);
        String strPackageName = tTPluginListener.packageName();
        Plugin plugin = (Zeus.isPluginInstalled(strPackageName) && (Zeus.isPluginLoaded(strPackageName) || Zeus.loadPlugin(strPackageName))) ? Zeus.getPlugin(strPackageName) : null;
        StringBuilder sb = new StringBuilder();
        sb.append("Find plugin:");
        sb.append(plugin != null);
        com.bykv.vk.openvk.api.rg.df("TTPluginManager", sb.toString());
        if (plugin != null) {
            df(plugin);
            handler.removeCallbacksAndMessages(null);
            tTPluginListener.onPluginListener(1000, plugin.mClassLoader, plugin.mResources, null);
        } else {
            df.put(strPackageName, tTPluginListener);
            q.put(strPackageName, handler);
        }
    }

    public void df(final TTPluginListener tTPluginListener) {
        com.bykv.vk.openvk.df.rg.rg().rg(new Runnable() { // from class: com.bykv.vk.openvk.api.plugin.c.4
            @Override // java.lang.Runnable
            public void run() {
                String strPackageName = tTPluginListener.packageName();
                Plugin plugin = (Zeus.isPluginInstalled(strPackageName) && (Zeus.isPluginLoaded(strPackageName) || Zeus.loadPlugin(strPackageName))) ? Zeus.getPlugin(strPackageName) : null;
                StringBuilder sb = new StringBuilder();
                sb.append("Find plugin:");
                sb.append(plugin != null);
                com.bykv.vk.openvk.api.rg.df("TTPluginManager", sb.toString());
                if (plugin != null) {
                    c.df(plugin);
                    tTPluginListener.onPluginListener(1000, plugin.mClassLoader, plugin.mResources, null);
                } else {
                    TTPluginListener unused = c.hq = tTPluginListener;
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static com.bykv.vk.openvk.api.plugin.df q(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return rg(new JSONObject(str));
        } catch (JSONException unused) {
            com.bykv.vk.openvk.api.rg.pp("TTPluginManager", "Invalid plugin info:" + str);
            return null;
        }
    }

    private static com.bykv.vk.openvk.api.plugin.df rg(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        com.bykv.vk.openvk.api.plugin.df dfVar = new com.bykv.vk.openvk.api.plugin.df();
        dfVar.mPackageName = jSONObject.optString("package_name");
        dfVar.mVersionCode = jSONObject.optInt("version_code");
        dfVar.mUrl = jSONObject.optString("download_url");
        dfVar.mMd5 = jSONObject.optString("md5");
        dfVar.mApiVersionMin = jSONObject.optInt("min_version");
        dfVar.mApiVersionMax = jSONObject.optInt("max_version");
        dfVar.rg = jSONObject.optString("sign");
        dfVar.mFlag = jSONObject.optBoolean("is_revert") ? 3 : 2;
        dfVar.df = new File(jSONObject.optString("plugin_file"));
        return dfVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void df(Plugin plugin) {
        if (plugin == null) {
            com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin is null.");
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putInt("action", 0);
        bundle.putString("plugin_pkg_name", plugin.mPkgName);
        bundle.putString(PluginConstants.KEY_PLUGIN_VERSION, rg(plugin.getVersion()));
        TTVfManager vfManager = TTVfSdk.getVfManager();
        if (vfManager != null) {
            vfManager.getExtra(Bundle.class, bundle);
        }
    }

    public static String rg(int i) {
        char[] charArray = String.valueOf(i).toCharArray();
        StringBuilder sb = new StringBuilder();
        for (int i2 = 0; i2 < charArray.length; i2++) {
            sb.append(charArray[i2]);
            if (i2 < charArray.length - 1) {
                sb.append(".");
            }
        }
        return sb.toString();
    }

    private static boolean rg(TTPluginListener tTPluginListener, String str) {
        if (tTPluginListener == null || tTPluginListener.packageName() == null) {
            return false;
        }
        return tTPluginListener.packageName().equals(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean df(com.bykv.vk.openvk.api.plugin.df dfVar) {
        if (dfVar == null || dfVar.df == null) {
            com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin config is null");
            return false;
        }
        boolean zSyncInstallPlugin = Zeus.syncInstallPlugin(dfVar.mPackageName, dfVar.df.getAbsolutePath());
        rg(zSyncInstallPlugin, dfVar.mPackageName);
        return zSyncInstallPlugin;
    }

    private static void rg(boolean z, String str) {
        TTPluginListener tTPluginListener = df.get(str);
        StringBuilder sb = new StringBuilder();
        sb.append("Install dl plugin ");
        sb.append(str);
        sb.append(z ? " success" : " failed");
        sb.append(", need notify: ");
        sb.append(tTPluginListener != null);
        com.bykv.vk.openvk.api.rg.df("TTPluginManager", sb.toString());
        Handler handler = q.get(str);
        if (z) {
            TTPluginListener tTPluginListener2 = hq;
            if (!rg(tTPluginListener2, str) && (tTPluginListener == null || handler == null)) {
                return;
            }
            if (Zeus.loadPlugin(str)) {
                Plugin plugin = Zeus.getPlugin(str);
                df(plugin);
                if (handler != null) {
                    handler.removeCallbacksAndMessages(null);
                }
                if (tTPluginListener != null) {
                    tTPluginListener.onPluginListener(1000, plugin.mClassLoader, plugin.mResources, null);
                }
                if (rg(tTPluginListener2, str)) {
                    tTPluginListener2.onPluginListener(1000, plugin.mClassLoader, plugin.mResources, null);
                    hq = null;
                }
            } else {
                q(str, 1002);
            }
        } else {
            q(str, 1003);
        }
        df.remove(str);
        q.remove(str);
    }

    public static void rg(Throwable th) {
        if (th instanceof AbstractMethodError) {
            Zeus.unInstallPlugin("com.bykv.vk");
            com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "AbstractMethodError, rollback to builtin version.");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void q(String str, int i) {
        com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin update failed");
        Bundle bundle = new Bundle();
        bundle.putInt("code", i);
        TTPluginListener tTPluginListener = df.get(str);
        if (tTPluginListener != null) {
            tTPluginListener.onPluginListener(1001, null, null, bundle);
        }
    }

    static final class df implements TTAdEvent {
        df() {
        }

        @Override // com.bykv.vk.openvk.TTAdEvent
        public void onEvent(int i, Bundle bundle) {
            if (i == 1) {
                String string = bundle.getString("config");
                String string2 = bundle.getString("plugin_pkg_name");
                int i2 = bundle.getInt("code");
                if (i2 != 0) {
                    c.q(string2, i2);
                    return;
                }
                com.bykv.vk.openvk.api.plugin.df dfVarQ = c.q(string);
                if (dfVarQ == null || TextUtils.isEmpty(dfVarQ.mPackageName)) {
                    com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin update received with invalid config");
                    return;
                }
                if (!bundle.getBoolean("success")) {
                    c.q(dfVarQ.mPackageName, 1004);
                    return;
                }
                com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin update received: " + dfVarQ.mPackageName);
                if (!dfVarQ.isRevert()) {
                    if (c.df(dfVarQ)) {
                        bundle.putBoolean("installed", true);
                        return;
                    }
                    return;
                }
                Zeus.unInstallPlugin(dfVarQ.mPackageName);
            }
        }
    }

    private static final class rg implements IZeusLogger {
        private rg() {
        }

        @Override // com.bytedance.pangle.log.IZeusLogger
        public void v(String str, String str2) {
            com.bykv.vk.openvk.api.rg.rg(str, str2);
        }

        @Override // com.bytedance.pangle.log.IZeusLogger
        public void i(String str, String str2) {
            com.bykv.vk.openvk.api.rg.q(str, str2);
        }

        @Override // com.bytedance.pangle.log.IZeusLogger
        public void w(String str, String str2) {
            com.bykv.vk.openvk.api.rg.rg(str, str2);
        }

        @Override // com.bytedance.pangle.log.IZeusLogger
        public void w(String str, String str2, Throwable th) {
            com.bykv.vk.openvk.api.rg.rg(str, str2, th);
        }

        @Override // com.bytedance.pangle.log.IZeusLogger
        public void e(String str, String str2, Throwable th) {
            com.bykv.vk.openvk.api.rg.df(str, str2, th);
        }
    }

    static final class q implements EventListener, Serializable {
        q() {
        }

        @Override // com.bykv.vk.openvk.api.proto.EventListener
        public ValueSet onEvent(int i, Result result) {
            com.bykv.vk.openvk.api.q qVarRg = com.bykv.vk.openvk.api.q.rg();
            if (i == 1) {
                ValueSet valueSetValues = result.values();
                if (valueSetValues == null) {
                    return null;
                }
                String strStringValue = valueSetValues.stringValue(3);
                int iCode = result.code();
                if (!result.isSuccess()) {
                    c.q(strStringValue, iCode);
                    return null;
                }
                com.bykv.vk.openvk.api.plugin.df dfVarQ = c.q(valueSetValues.stringValue(2));
                if (dfVarQ == null || TextUtils.isEmpty(dfVarQ.mPackageName)) {
                    com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin update received with invalid config");
                    return null;
                }
                com.bykv.vk.openvk.api.rg.pt("TTPluginManager", "plugin update received: " + dfVarQ.mPackageName);
                if (!dfVarQ.isRevert()) {
                    if (c.df(dfVarQ)) {
                        qVarRg.rg(4, true);
                    }
                } else {
                    Zeus.unInstallPlugin(dfVarQ.mPackageName);
                }
            }
            return qVarRg.df();
        }
    }
}
