package com.bianfeng.ymnsdk.feature;

import android.content.Context;
import android.content.res.AssetManager;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.ResourceUtil;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.io.IOException;
import java.io.StringReader;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Properties;
import org.json.JSONException;
import org.json.JSONObject;

public class YmnProperties extends Properties {
    private static final String[][] NAMES = null;
    private static JSONObject jsoncfgs = null;
    private static YmnProperties properties = null;
    private static final long serialVersionUID = 1;
    private final List<?>[] namesArray;

    static {
        NAMES = new String[][]{new String[]{"appid", "appId", "appID", "AppId", "Appid", "app_id"}, new String[]{"appkey", "appKey", "AppKey", "Appkey", "app_key"}, new String[]{"secretkey", "secretKey", "Secretkey", "SecretKey", "secret_key", "appsecret", "appSecret", "Appsecret", "AppSecret", "app_secret"}, new String[]{"platPublicKey", "publicRsaKey", "publickey", "publicKey", "public_key"}, new String[]{"privateKey", "privatekey", "appPrivateKey", "private_key"}, new String[]{"payid", "payId", "pay_id"}, new String[]{"cpid", "cpId", "cp_id"}, new String[]{"gameid", "gameId", "game_id"}};
    }

    private YmnProperties() {
        this.namesArray = new List[NAMES.length];
        int r0 = 0;
    L3:
        String[][] r1 = NAMES;
        if (r0 >= r1.length) goto L6;
        this.namesArray[r0] = Arrays.asList(r1[r0]);
        r0 = r0 + 1;
        goto L3
    }

    public static String getPluginValue(IPlugin r2, String r3) {
        JSONObject r0 = jsoncfgs;
        if (r0 != null) goto L16;
    L11:
        YmnProperties r22 = properties;
        if (r22 != null) goto L14;
        return null;
    L14:
        return r22.getProperty(r3);
    L16:
        JSONObject r23 = r0.optJSONObject(r2.getPluginName());     // Catch: Exception -> L8
        if (r23 == null) goto L11;
        return r23.optString(r3);
    L8:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public static String getValue(String r1) {
        JSONObject r0 = jsoncfgs;
        if (r0 != null) goto L5;
        YmnProperties r02 = properties;
        if (r02 != null) goto L9;
        return null;
    L9:
        return r02.getProperty(r1);
    L5:
        return r0.optString(r1);
    }

    public static void init(Context r4) {
        AssetManager r2 = r4.getAssets();     // Catch: Exception -> L19
        if (ResourceUtil.assetFileExist(r4, "ymn.cfg") == false) goto L6;
        byte[] r1 = SecurityUtil.getInstance().decode(ResourceUtil.InputStreamToByte(r2.open("ymn.cfg")));     // Catch: Exception -> L19
    L8:
        if (ResourceUtil.assetFileExist(r4, "usdk.cfg") == false) goto L11;
        r1 = ResourceUtil.InputStreamToByte(r2.open("usdk.cfg"));     // Catch: Exception -> L19
    L11:
        if (r1 == null) goto L13;
        boolean r0 = true;
    L14:
        if (r0 == false) goto L16;
        r0 = !readAsJson(new String(r1));
    L16:
        if (r0 == false) goto L24;
        readAsProperties(new String(r1));     // Catch: Exception -> L19
        return;
    L24:
        return;
    L13:
        r0 = false;
        goto L14
    L6:
        r1 = null;
    L19:
        e = move-exception;
        e.printStackTrace();
    }

    private static boolean readAsJson(String r1) {
        jsoncfgs = new JSONObject(r1);     // Catch: JSONException -> L5
        return true;
    L5:
        return false;
    }

    private static boolean readAsProperties(String r2) {
        properties = new YmnProperties();     // Catch: IOException -> L5
        properties.load(new StringReader(r2));     // Catch: IOException -> L5
        return true;
    L5:
        return false;
    }

    @Override
    public String getProperty(String r4) {
        String r0 = super.getProperty(r4);
        if (TextUtils.isEmpty(r0) == false) goto L5;
        int r1 = 0;
    L8:
        if (r1 >= NAMES.length) goto L14;
        if (this.namesArray[r1].contains(r4) == true) goto L12;
        r1 = r1 + 1;
        goto L8
    L12:
        return getValue(this.namesArray[r1]);
    L14:
        return r0;
    L5:
        return r0.trim();
    }

    private String getValue(List<?> r3) {
        Iterator<?> r32 = r3.iterator();
    L4:
        if (r32.hasNext() == false) goto L8;
        String r0 = super.getProperty(String.valueOf(r32.next()));
        if (TextUtils.isEmpty(r0) == true) goto L4;
        return r0;
    L8:
        return null;
    }
}
