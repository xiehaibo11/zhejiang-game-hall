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
import java.util.List;
import java.util.Properties;
import org.json.JSONException;
import org.json.JSONObject;

public class YmnProperties extends Properties {
    private static final String[][] NAMES = {new String[]{"appid", com.tkay.expressad.videocommon.e.b.u, com.heytap.mcssdk.constant.b.u, "AppId", "Appid", "app_id"}, new String[]{"appkey", com.heytap.mcssdk.constant.b.z, "AppKey", "Appkey", "app_key"}, new String[]{"secretkey", "secretKey", "Secretkey", "SecretKey", "secret_key", "appsecret", com.heytap.mcssdk.constant.b.A, "Appsecret", "AppSecret", "app_secret"}, new String[]{"platPublicKey", "publicRsaKey", "publickey", "publicKey", "public_key"}, new String[]{"privateKey", "privatekey", "appPrivateKey", "private_key"}, new String[]{"payid", "payId", "pay_id"}, new String[]{"cpid", "cpId", "cp_id"}, new String[]{"gameid", "gameId", "game_id"}};
    private static JSONObject jsoncfgs = null;
    private static YmnProperties properties = null;
    private static final long serialVersionUID = 1;
    private final List<?>[] namesArray = new List[NAMES.length];

    public static void init(Context context) {
        byte[] buf = null;
        try {
            AssetManager am = context.getAssets();
            if (ResourceUtil.assetFileExist(context, "ymn.cfg")) {
                byte[] buf2 = ResourceUtil.InputStreamToByte(am.open("ymn.cfg"));
                buf = SecurityUtil.getInstance().decode(buf2);
            }
            if (ResourceUtil.assetFileExist(context, "usdk.cfg")) {
                buf = ResourceUtil.InputStreamToByte(am.open("usdk.cfg"));
            }
            boolean tryNext = buf != null;
            if (tryNext) {
                tryNext = true ^ readAsJson(new String(buf));
            }
            if (tryNext) {
                readAsProperties(new String(buf));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static boolean readAsJson(String text) {
        try {
            jsoncfgs = new JSONObject(text);
            return true;
        } catch (JSONException e) {
            return false;
        }
    }

    private static boolean readAsProperties(String text) {
        try {
            properties = new YmnProperties();
            properties.load(new StringReader(text));
            return true;
        } catch (IOException e) {
            return false;
        }
    }

    public static String getPluginValue(IPlugin plugin, String name) {
        JSONObject jSONObject = jsoncfgs;
        if (jSONObject != null) {
            try {
                JSONObject json = jSONObject.optJSONObject(plugin.getPluginName());
                if (json != null) {
                    return json.optString(name);
                }
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
        YmnProperties ymnProperties = properties;
        if (ymnProperties != null) {
            return ymnProperties.getProperty(name);
        }
        return null;
    }

    public static String getValue(String name) {
        JSONObject jSONObject = jsoncfgs;
        if (jSONObject != null) {
            return jSONObject.optString(name);
        }
        YmnProperties ymnProperties = properties;
        if (ymnProperties != null) {
            return ymnProperties.getProperty(name);
        }
        return null;
    }

    private YmnProperties() {
        int i = 0;
        while (true) {
            String[][] strArr = NAMES;
            if (i < strArr.length) {
                this.namesArray[i] = Arrays.asList(strArr[i]);
                i++;
            } else {
                return;
            }
        }
    }

    @Override
    public String getProperty(String name) {
        String value = super.getProperty(name);
        if (!TextUtils.isEmpty(value)) {
            return value.trim();
        }
        for (int i = 0; i < NAMES.length; i++) {
            if (this.namesArray[i].contains(name)) {
                return getValue(this.namesArray[i]);
            }
        }
        return value;
    }

    private String getValue(List<?> keys) {
        for (Object key : keys) {
            String value = super.getProperty(String.valueOf(key));
            if (!TextUtils.isEmpty(value)) {
                return value;
            }
        }
        return null;
    }
}
