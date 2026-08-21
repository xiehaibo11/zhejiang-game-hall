package com.huawei.hms.framework.network.grs;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.common.StringUtils;
import com.huawei.hms.framework.network.restclient.hwhttp.plugin.BasePlugin;
import com.huawei.hms.framework.network.restclient.hwhttp.plugin.PluginInterceptor;
import java.io.IOException;
import java.util.Locale;

public class GrsManager implements BasePlugin {
    private static final int GRS_KEY_INDEX = 1;
    private static final int GRS_PATH_INDEX = 2;
    private static final String GRS_SCHEMA = "grs://";
    private static final int GRS_SERVICE_INDEX = 0;
    private static final int MAX_GRS_SPLIT = 3;
    private static final String SEPARATOR = "/";
    private static final String TAG = "GrsManager";
    private static volatile GrsManager instance;
    private GrsConfig grsConfig;
    private f grsInterceptor;

    private GrsManager() {
    }

    public static GrsManager getInstance() {
        if (instance == null) {
            synchronized (GrsManager.class) {
                if (instance == null) {
                    instance = new GrsManager();
                }
            }
        }
        return instance;
    }

    private String getServiceNameUrl(String str, String str2) {
        return GrsApi.synGetGrsUrl(str, str2);
    }

    public static boolean isGRSSchema(String str) {
        return str != null && str.startsWith(GRS_SCHEMA);
    }

    private String[] parseGRSSchema(String str) {
        return StringUtils.substring(str, str.toLowerCase(Locale.ENGLISH).indexOf(GRS_SCHEMA) + 6).split(SEPARATOR, 3);
    }

    public PluginInterceptor getInterceptor() {
        if (this.grsInterceptor == null) {
            this.grsInterceptor = new f();
        }
        return this.grsInterceptor;
    }

    public boolean initGrs(Context context, GrsConfig grsConfig) {
        GrsConfig grsConfig2 = this.grsConfig;
        if (grsConfig2 != null && grsConfig2.equal(grsConfig)) {
            return true;
        }
        this.grsConfig = grsConfig;
        Context applicationContext = context != null ? context.getApplicationContext() : null;
        GrsConfig grsConfig3 = this.grsConfig;
        GrsApi.grsSdkInit(applicationContext, grsConfig3 != null ? grsConfig3.getGrsBaseInfo(applicationContext) : null);
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0071  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected String parseGrs(String str) {
        String serviceNameUrl;
        String str2;
        String str3;
        if (str.endsWith(SEPARATOR)) {
            str = StringUtils.substring(str, str.indexOf(GRS_SCHEMA), str.length() - 1);
        }
        String[] gRSSchema = parseGRSSchema(str);
        if (gRSSchema.length == 1) {
            str2 = gRSSchema[0];
            str3 = "ROOT";
        } else {
            if (gRSSchema.length < 2) {
                Logger.i(TAG, "parseGrs params.length<1.");
                serviceNameUrl = "";
                if (!TextUtils.isEmpty(serviceNameUrl)) {
                    throw new IOException("can not get url, do grsUrl(serviceName or key) error?");
                }
                if (gRSSchema.length <= 2) {
                    return serviceNameUrl;
                }
                if (serviceNameUrl.endsWith(SEPARATOR)) {
                    return serviceNameUrl + gRSSchema[2];
                }
                return serviceNameUrl + SEPARATOR + gRSSchema[2];
            }
            str2 = gRSSchema[0];
            str3 = gRSSchema[1];
        }
        serviceNameUrl = getServiceNameUrl(str2, str3);
        if (!TextUtils.isEmpty(serviceNameUrl)) {
        }
    }
}
