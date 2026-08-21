package com.bianfeng.ymnsdk.ymndatalib.utils;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.SystemUtils;
import java.util.HashMap;
import java.util.Map;

public class TraceUtils {
    public static volatile Map<String, String> map;
    public static volatile TraceUtils utils;
    public ThreadLocal<String> local;
    public String originTrace;

    public TraceUtils() {
        map = new HashMap();
        this.local = new ThreadLocal<>();
    }

    private String createTrace(String str) {
        return set(str);
    }

    public static TraceUtils getInstance() {
        if (utils == null) {
            synchronized (TraceUtils.class) {
                if (utils == null) {
                    utils = new TraceUtils();
                }
            }
        }
        return utils;
    }

    private String set(String str) {
        String strCreateTransactionId = createTransactionId();
        map.put(str, strCreateTransactionId);
        return strCreateTransactionId;
    }

    public String createTransactionId() {
        return SystemUtils.createTransactionId();
    }

    public String getLoginTrace() {
        return getTrace("ymn_login");
    }

    public String getOriginTrace() {
        if (this.originTrace == null) {
            synchronized (TraceUtils.class) {
                if (this.originTrace == null) {
                    this.originTrace = set("ymn_init");
                }
            }
        }
        return this.originTrace;
    }

    public String getPayTrace() {
        return getTrace("ymn_pay");
    }

    public String getPluginTrace(String str) {
        return getTrace(str);
    }

    public String getStartLoginTrace() {
        YmnDatalibLogger.i("getStartLoginTrace：");
        return set("ymn_login");
    }

    public String getStartPayTrace() {
        return set("ymn_pay");
    }

    public String getStartPluginTrace(String str) {
        return set(str);
    }

    public String getTrace(String str) {
        String str2 = map.get(str);
        return TextUtils.isEmpty(str2) ? this.originTrace : str2;
    }

    public void init() {
        map.put("ymn_init", createTransactionId());
    }

    public synchronized String getTrace() {
        String strCreateTransactionId;
        strCreateTransactionId = this.local.get();
        if (TextUtils.isEmpty(strCreateTransactionId)) {
            strCreateTransactionId = createTransactionId();
            this.local.set(strCreateTransactionId);
        }
        return strCreateTransactionId;
    }
}
