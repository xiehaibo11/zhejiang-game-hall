package com.bianfeng.afext.read;

import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class ChannelReader {
    public static final String CHANNEL_KEY = "ymn_channel";

    private ChannelReader() {
    }

    public static ChannelInfo get(File file) {
        Map<String, String> map = getMap(file);
        if (map == null) {
            return null;
        }
        String str = map.get(CHANNEL_KEY);
        map.remove(CHANNEL_KEY);
        return new ChannelInfo(str, map);
    }

    public static Map<String, String> getMap(File file) {
        try {
            String raw = getRaw(file);
            if (raw == null) {
                return null;
            }
            JSONObject jSONObject = new JSONObject(raw);
            Iterator<String> itKeys = jSONObject.keys();
            HashMap map = new HashMap();
            while (itKeys.hasNext()) {
                String string = itKeys.next().toString();
                map.put(string, jSONObject.getString(string));
            }
            return map;
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getRaw(File file) {
        return PayloadReader.getString(file, ApkUtil.APK_CHANNEL_BLOCK_ID);
    }
}
