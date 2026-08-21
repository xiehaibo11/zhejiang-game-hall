package com.bianfeng.fastvo.action;

import android.content.Context;
import com.bianfeng.fastvo.util.FastovAppConextUtils;
import com.bianfeng.fastvo.util.LogUtil;
import com.bianfeng.fastvo.util.SecurityUtil;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLEncoder;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class OssStsAction {
    public OssStsAction(Context context) {
    }

    private String getUrl() {
        String signUrl = FastovAppConextUtils.getSignUrl();
        Logger.i("FAST_SIGN_URL---->" + signUrl);
        return String.format("%s/%s", signUrl, "storage/oss/sts");
    }

    public SecurityToken start() throws Throwable {
        TreeMap treeMap = new TreeMap();
        try {
            treeMap.put("device_code", URLEncoder.encode(YmnDataFunUtils.getInstance().getDeviceId(), "UTF-8"));
        } catch (Exception e) {
            e.printStackTrace();
        }
        treeMap.put("expire", String.valueOf(3600));
        StringBuilder sb = new StringBuilder();
        for (Map.Entry entry : treeMap.entrySet()) {
            sb.append("&" + ((String) entry.getKey()) + ContainerUtils.KEY_VALUE_DELIMITER + ((String) entry.getValue()));
        }
        String strSubstring = sb.substring(1);
        String url = getUrl();
        String sign = SecurityUtil.getSign(strSubstring);
        if (sb.length() > 0) {
            url = url + "?" + strSubstring;
        }
        LogUtil.d("OssStsAction action request url is " + url);
        String strRequest = request(url, sign);
        if (strRequest != null) {
            try {
                JSONObject jSONObject = new JSONObject(strRequest);
                if (jSONObject.optInt("status") == 200) {
                    return new SecurityToken(jSONObject);
                }
                return null;
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r8v2 */
    /* JADX WARN: Type inference failed for: r8v3 */
    /* JADX WARN: Type inference failed for: r8v4, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r8v6, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r8v9, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r9v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r9v1 */
    /* JADX WARN: Type inference failed for: r9v3, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r9v6 */
    private String request(String str, String str2) throws Throwable {
        Throwable th;
        InputStream inputStream;
        try {
            try {
                str = (HttpURLConnection) new URL(str).openConnection();
            } catch (Throwable th2) {
                th = th2;
            }
            try {
                str.setRequestMethod("GET");
                str.setConnectTimeout(10000);
                str.addRequestProperty("Authorization", str2);
                if (str.getResponseCode() != 200) {
                    Logger.i("请求结果--->" + str.getResponseCode() + "---" + str.getResponseMessage());
                    if (str != 0) {
                        try {
                            str.disconnect();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                    return null;
                }
                inputStream = str.getInputStream();
                try {
                    byte[] bArr = new byte[1048576];
                    StringBuilder sb = new StringBuilder();
                    while (true) {
                        int i = inputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        sb.append(new String(bArr, 0, i));
                    }
                    inputStream.close();
                    String string = sb.toString();
                    if (str != 0) {
                        try {
                            str.disconnect();
                        } catch (Exception e2) {
                            e2.printStackTrace();
                        }
                    }
                    if (inputStream != null) {
                        inputStream.close();
                    }
                    return string;
                } catch (Exception e3) {
                    e = e3;
                    e.printStackTrace();
                    if (str != 0) {
                        try {
                            str.disconnect();
                        } catch (Exception e4) {
                            e4.printStackTrace();
                            return null;
                        }
                    }
                    if (inputStream != null) {
                        inputStream.close();
                    }
                    return null;
                }
            } catch (Exception e5) {
                e = e5;
                inputStream = null;
            } catch (Throwable th3) {
                th = th3;
                str2 = 0;
                if (str != 0) {
                    try {
                        str.disconnect();
                    } catch (Exception e6) {
                        e6.printStackTrace();
                        throw th;
                    }
                }
                if (str2 != 0) {
                    str2.close();
                }
                throw th;
            }
        } catch (Exception e7) {
            e = e7;
            str = 0;
            inputStream = null;
        } catch (Throwable th4) {
            str2 = 0;
            th = th4;
            str = 0;
        }
    }
}
