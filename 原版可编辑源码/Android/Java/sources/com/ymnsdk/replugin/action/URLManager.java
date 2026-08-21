package com.ymnsdk.replugin.action;

import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.util.ResourceUtil;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import java.util.ArrayList;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class URLManager {
    private static String REQUSET_URL = "https://plugin-res.imeete.com/res";
    private static List<String> hostList = new ArrayList();

    public static synchronized String getHost() {
        initHost();
        if (hostList.size() > 0) {
            return hostList.get(((int) (Math.random() * ((double) (hostList.size() + 0 + 1)))) + 0);
        }
        try {
            String strUrlOnSdCard4Public = ResourceUtil.urlOnSdCard4Public();
            if (strUrlOnSdCard4Public != null && !strUrlOnSdCard4Public.isEmpty()) {
                Log.d(HostConstant.ymn, "host is " + strUrlOnSdCard4Public);
                return strUrlOnSdCard4Public;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        Log.d(HostConstant.ymn, "host is " + REQUSET_URL);
        return REQUSET_URL;
    }

    private static void initHost() {
        hostList.clear();
        SharedPreferencesUtils.getInstance();
        String updateServerAddress = SharedPreferencesUtils.getUpdateServerAddress();
        if (updateServerAddress == null || updateServerAddress.isEmpty()) {
            return;
        }
        try {
            hostList = GsonUtils.getInstance().getListFrom(updateServerAddress);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
