package com.bianfeng.ymnsdk.feature;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class YmnDataBuilder {

    public static class JsonData {
        JSONObject json = new JSONObject();
        YmnPluginWrapper plugin;

        public JsonData(YmnPluginWrapper plugin) {
            this.plugin = plugin;
        }

        public JsonData append(String key, Object value) {
            try {
                this.json.put(key, value);
            } catch (Exception e) {
                e.printStackTrace();
            }
            return this;
        }

        public void sendResult(int code) {
            this.plugin.sendResult(code, this.json.toString());
        }

        public void sendResult(int code, Object ext) {
            this.plugin.sendResult(code, this.json, ext);
        }

        public void sendResultWithoutInterceptors(int code) {
            this.plugin.sendResultWithoutInterceptors(code, this.json.toString());
        }

        public String toString() {
            return this.json.toString();
        }
    }

    public static JsonData createJson(YmnPluginWrapper plugin) {
        return new JsonData(plugin);
    }
}
