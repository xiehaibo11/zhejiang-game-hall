package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.afext.read.ApkUtil;
import com.bianfeng.afext.read.ChannelReader;
import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public final class i {
    public static void a(File apkFile, String channel, Map<String, String> extraInfo) throws IOException, f {
        a(apkFile, channel, extraInfo, false);
    }

    public static void a(File apkFile, String channel, Map<String, String> extraInfo, boolean lowMemory) throws Throwable {
        Map<String, String> newData = new HashMap<>();
        Map<String, String> existsData = c.b(apkFile);
        if (existsData != null) {
            newData.putAll(existsData);
        }
        if (extraInfo != null) {
            extraInfo.remove(ChannelReader.CHANNEL_KEY);
            newData.putAll(extraInfo);
        }
        if (channel != null && channel.length() > 0) {
            newData.put(ChannelReader.CHANNEL_KEY, channel);
        }
        JSONObject jsonObject = new JSONObject();
        for (Map.Entry<String, String> item : newData.entrySet()) {
            jsonObject.put(item.getKey(), item.getValue());
        }
        a(apkFile, jsonObject.toString(), lowMemory);
    }

    public static void a(File apkFile, String string, boolean lowMemory) throws Throwable {
        j.a(apkFile, ApkUtil.APK_CHANNEL_BLOCK_ID, string, lowMemory);
    }
}
