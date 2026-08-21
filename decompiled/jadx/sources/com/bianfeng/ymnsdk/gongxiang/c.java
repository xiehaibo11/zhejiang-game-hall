package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.afext.read.ApkUtil;
import com.bianfeng.afext.read.ChannelReader;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: ChannelReader.java */
/* JADX INFO: loaded from: classes.dex */
public final class c {
    public static b a(File apkFile) {
        Map<String, String> result = b(apkFile);
        if (result == null) {
            return null;
        }
        String channel = result.get(ChannelReader.CHANNEL_KEY);
        result.remove(ChannelReader.CHANNEL_KEY);
        return new b(channel, result);
    }

    public static Map<String, String> b(File apkFile) {
        try {
            String rawString = c(apkFile);
            if (rawString == null) {
                return null;
            }
            JSONObject jsonObject = new JSONObject(rawString);
            Iterator<String> itKeys = jsonObject.keys();
            Map<String, String> result = new HashMap<>();
            while (itKeys.hasNext()) {
                String key = itKeys.next().toString();
                result.put(key, jsonObject.getString(key));
            }
            return result;
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String c(File apkFile) {
        return e.b(apkFile, ApkUtil.APK_CHANNEL_BLOCK_ID);
    }
}
