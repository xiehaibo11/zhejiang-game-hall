package com.bianfeng.ymnsdk.feature;

import org.json.JSONObject;

public class YmnDataBuilder {

    public static class JsonData {
        JSONObject json;
        YmnPluginWrapper plugin;

        public JsonData(YmnPluginWrapper r2) {
            this.json = new JSONObject();
            this.plugin = r2;
        }

        public JsonData append(String r2, Object r3) {
            this.json.put(r2, r3);     // Catch: Exception -> L4
        L6:
            return this;
        L4:
            e = move-exception;
            e.printStackTrace();
            goto L6
        }

        public void sendResult(int r3) {
            this.plugin.sendResult(r3, this.json.toString());
        }

        public void sendResultWithoutInterceptors(int r3) {
            this.plugin.sendResultWithoutInterceptors(r3, this.json.toString());
        }

        public String toString() {
            return this.json.toString();
        }

        public void sendResult(int r3, Object r4) {
            this.plugin.sendResult(r3, this.json, r4);
        }
    }

    public YmnDataBuilder() {
    }

    public static JsonData createJson(YmnPluginWrapper r1) {
        return new JsonData(r1);
    }
}
