package com.bianfeng.afext.write;

import com.bianfeng.afext.read.ApkUtil;
import com.bianfeng.afext.read.ChannelReader;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public final class ChannelWriter {
    private ChannelWriter() {
    }

    public static void put(File file, String str) throws Throwable {
        put(file, str, false);
    }

    public static void put(File file, String str, boolean z) throws Throwable {
        put(file, str, null, z);
    }

    public static void put(File file, String str, Map<String, String> map) throws Throwable {
        put(file, str, map, false);
    }

    public static void put(File file, String str, Map<String, String> map, boolean z) throws Throwable {
        HashMap map2 = new HashMap();
        Map<String, String> map3 = ChannelReader.getMap(file);
        if (map3 != null) {
            map2.putAll(map3);
        }
        if (map != null) {
            map.remove(ChannelReader.CHANNEL_KEY);
            map2.putAll(map);
        }
        if (str != null && str.length() > 0) {
            map2.put(ChannelReader.CHANNEL_KEY, str);
        }
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry entry : map2.entrySet()) {
            jSONObject.put((String) entry.getKey(), entry.getValue());
        }
        putRaw(file, jSONObject.toString(), z);
    }

    public static void putRaw(File file, String str) throws Throwable {
        putRaw(file, str, false);
    }

    public static void putRaw(File file, String str, boolean z) throws Throwable {
        PayloadWriter.put(file, ApkUtil.APK_CHANNEL_BLOCK_ID, str, z);
    }

    public static void remove(File file) throws Throwable {
        remove(file, false);
    }

    public static void remove(File file, boolean z) throws Throwable {
        PayloadWriter.remove(file, ApkUtil.APK_CHANNEL_BLOCK_ID, z);
    }
}
