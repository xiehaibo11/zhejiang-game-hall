package com.bianfeng.ymnsdk.feature;

import org.json.JSONObject;

public class YmnDataBuilder {

    public static class JsonData {
        JSONObject json = new JSONObject();
        YmnPluginWrapper plugin;

        public JsonData(YmnPluginWrapper ymnPluginWrapper) {
            this.plugin = ymnPluginWrapper;
        }

        public JsonData append(String str, Object obj) {
            try {
                this.json.put(str, obj);
            } catch (Exception e) {
                e.printStackTrace();
            }
            return this;
        }

        public void sendResult(int i) {
            this.plugin.sendResult(i, this.json.toString());
        }

        public void sendResultWithoutInterceptors(int i) {
            this.plugin.sendResultWithoutInterceptors(i, this.json.toString());
        }

        public String toString() {
            return this.json.toString();
        }

        public void sendResult(int i, Object obj) {
            this.plugin.sendResult(i, this.json, obj);
        }
    }

    public static JsonData createJson(YmnPluginWrapper ymnPluginWrapper) {
        return new JsonData(ymnPluginWrapper);
    }
}
