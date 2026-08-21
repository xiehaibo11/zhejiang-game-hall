package com.huawei.agconnect.config.a;

import android.content.Context;
import android.util.Log;
import com.huawei.agconnect.AGCRoutePolicy;
import com.huawei.agconnect.JsonProcessingFactory;
import com.huawei.agconnect.config.AGConnectServicesConfig;
import com.huawei.agconnect.config.LazyInputStream;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class c extends AGConnectServicesConfig {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f1933a;
    private final String b;
    private LazyInputStream c;
    private volatile d d;
    private final Object e = new Object();
    private AGCRoutePolicy f = AGCRoutePolicy.UNKNOWN;
    private final Map<String, String> g = new HashMap();

    public c(Context context, String str) {
        this.f1933a = context;
        this.b = str;
    }

    private static LazyInputStream a(Context context, final InputStream inputStream) {
        return new LazyInputStream(context) { // from class: com.huawei.agconnect.config.a.c.1
            @Override // com.huawei.agconnect.config.LazyInputStream
            public InputStream get(Context context2) {
                return inputStream;
            }
        };
    }

    private static String a(String str) {
        int i = 0;
        if (str.length() > 0) {
            while (str.charAt(i) == '/') {
                i++;
            }
        }
        return '/' + str.substring(i);
    }

    private void a() {
        if (this.d == null) {
            synchronized (this.e) {
                if (this.d == null) {
                    if (this.c != null) {
                        this.d = new f(this.c.loadInputStream());
                        this.c.close();
                        this.c = null;
                    } else {
                        this.d = new i(this.f1933a, this.b);
                    }
                }
                b();
            }
        }
    }

    private String b(String str) {
        JsonProcessingFactory.JsonProcessor jsonProcessor;
        Map<String, JsonProcessingFactory.JsonProcessor> processors = JsonProcessingFactory.getProcessors();
        if (processors.containsKey(str) && (jsonProcessor = processors.get(str)) != null) {
            return jsonProcessor.processOption(this);
        }
        return null;
    }

    private void b() {
        if (this.f == AGCRoutePolicy.UNKNOWN) {
            if (this.d != null) {
                this.f = j.a(this.d.a("/region", null), this.d.a("/agcgw/url", null));
            } else {
                Log.w("AGConnectServiceConfig", "get route fail , config not ready");
            }
        }
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public boolean getBoolean(String str) {
        return getBoolean(str, false);
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public boolean getBoolean(String str, boolean z) {
        return Boolean.parseBoolean(getString(str, String.valueOf(z)));
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public Context getContext() {
        return this.f1933a;
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public String getIdentifier() {
        return "DEFAULT_INSTANCE";
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public int getInt(String str) {
        return getInt(str, 0);
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public int getInt(String str, int i) {
        try {
            return Integer.parseInt(getString(str, String.valueOf(i)));
        } catch (NumberFormatException unused) {
            return i;
        }
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public String getPackageName() {
        return this.b;
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public AGCRoutePolicy getRoutePolicy() {
        if (this.f == AGCRoutePolicy.UNKNOWN && this.d == null) {
            a();
        }
        return this.f;
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public String getString(String str) {
        return getString(str, null);
    }

    @Override // com.huawei.agconnect.AGConnectOptions
    public String getString(String str, String str2) {
        if (str == null) {
            throw new NullPointerException("path must not be null.");
        }
        if (this.d == null) {
            a();
        }
        String strA = a(str);
        String str3 = this.g.get(strA);
        if (str3 != null) {
            return str3;
        }
        String strB = b(strA);
        return strB != null ? strB : this.d.a(strA, str2);
    }

    @Override // com.huawei.agconnect.config.AGConnectServicesConfig
    public void overlayWith(LazyInputStream lazyInputStream) {
        this.c = lazyInputStream;
    }

    @Override // com.huawei.agconnect.config.AGConnectServicesConfig
    public void overlayWith(InputStream inputStream) {
        overlayWith(a(this.f1933a, inputStream));
    }

    @Override // com.huawei.agconnect.config.AGConnectServicesConfig
    public void setParam(String str, String str2) {
        this.g.put(j.a(str), str2);
    }

    @Override // com.huawei.agconnect.config.AGConnectServicesConfig
    public void setRoutePolicy(AGCRoutePolicy aGCRoutePolicy) {
        this.f = aGCRoutePolicy;
    }
}
