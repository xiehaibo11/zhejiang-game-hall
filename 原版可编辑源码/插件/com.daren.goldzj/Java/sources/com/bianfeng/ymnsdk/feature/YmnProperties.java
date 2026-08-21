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
    private static final String[][] NAMES = {new String[]{"appid", "appId", "appID", "AppId", "Appid", "app_id"}, new String[]{"appkey", "appKey", "AppKey", "Appkey", "app_key"}, new String[]{"secretkey", "secretKey", "Secretkey", "SecretKey", "secret_key", "appsecret", "appSecret", "Appsecret", "AppSecret", "app_secret"}, new String[]{"platPublicKey", "publicRsaKey", "publickey", "publicKey", "public_key"}, new String[]{"privateKey", "privatekey", "appPrivateKey", "private_key"}, new String[]{"payid", "payId", "pay_id"}, new String[]{"cpid", "cpId", "cp_id"}, new String[]{"gameid", "gameId", "game_id"}};
    private static JSONObject jsoncfgs = null;
    private static YmnProperties properties = null;
    private static final long serialVersionUID = 1;
    private final List<?>[] namesArray = new List[NAMES.length];

    private YmnProperties() {
        int i = 0;
        while (true) {
            String[][] strArr = NAMES;
            if (i >= strArr.length) {
                return;
            }
            this.namesArray[i] = Arrays.asList(strArr[i]);
            i++;
        }
    }

    public static String getPluginValue(IPlugin iPlugin, String str) {
        JSONObject jSONObject = jsoncfgs;
        if (jSONObject != null) {
            try {
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(iPlugin.getPluginName());
                if (jSONObjectOptJSONObject != null) {
                    return jSONObjectOptJSONObject.optString(str);
                }
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
        YmnProperties ymnProperties = properties;
        if (ymnProperties != null) {
            return ymnProperties.getProperty(str);
        }
        return null;
    }

    public static String getValue(String str) {
        JSONObject jSONObject = jsoncfgs;
        if (jSONObject != null) {
            return jSONObject.optString(str);
        }
        YmnProperties ymnProperties = properties;
        if (ymnProperties != null) {
            return ymnProperties.getProperty(str);
        }
        return null;
    }

    public static void init(Context context) {
        try {
            AssetManager assets = context.getAssets();
            byte[] bArrDecode = ResourceUtil.assetFileExist(context, "ymn.cfg") ? SecurityUtil.getInstance().decode(ResourceUtil.InputStreamToByte(assets.open("ymn.cfg"))) : null;
            if (ResourceUtil.assetFileExist(context, "usdk.cfg")) {
                bArrDecode = ResourceUtil.InputStreamToByte(assets.open("usdk.cfg"));
            }
            boolean z = bArrDecode != null;
            if (z) {
                z = !readAsJson(new String(bArrDecode));
            }
            if (z) {
                readAsProperties(new String(bArrDecode));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static boolean readAsJson(String str) {
        try {
            jsoncfgs = new JSONObject(str);
            return true;
        } catch (JSONException unused) {
            return false;
        }
    }

    private static boolean readAsProperties(String str) {
        try {
            properties = new YmnProperties();
            properties.load(new StringReader(str));
            return true;
        } catch (IOException unused) {
            return false;
        }
    }

    @Override
    public String getProperty(String str) {
        String property = super.getProperty(str);
        if (!TextUtils.isEmpty(property)) {
            return property.trim();
        }
        for (int i = 0; i < NAMES.length; i++) {
            if (this.namesArray[i].contains(str)) {
                return getValue(this.namesArray[i]);
            }
        }
        return property;
    }

    private String getValue(List<?> list) {
        Iterator<?> it = list.iterator();
        while (it.hasNext()) {
            String property = super.getProperty(String.valueOf(it.next()));
            if (!TextUtils.isEmpty(property)) {
                return property;
            }
        }
        return null;
    }
}
