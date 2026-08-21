package com.bianfeng.ymnsdk.feature;

public class YmnDataBuilder {

    public static class JsonData {
        org.json.JSONObject json;
        com.bianfeng.ymnsdk.feature.YmnPluginWrapper plugin;

        public JsonData(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2) {
                r1 = this;
                r1.<init>()
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                r1.json = r0
                r1.plugin = r2
                return
        }

        public com.bianfeng.ymnsdk.feature.YmnDataBuilder.JsonData append(java.lang.String r2, java.lang.Object r3) {
                r1 = this;
                org.json.JSONObject r0 = r1.json     // Catch: java.lang.Exception -> L6
                r0.put(r2, r3)     // Catch: java.lang.Exception -> L6
                goto La
            L6:
                r2 = move-exception
                r2.printStackTrace()
            La:
                return r1
        }

        public void sendResult(int r3) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.plugin
                org.json.JSONObject r1 = r2.json
                java.lang.String r1 = r1.toString()
                r0.sendResult(r3, r1)
                return
        }

        public void sendResult(int r3, java.lang.Object r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.plugin
                org.json.JSONObject r1 = r2.json
                r0.sendResult(r3, r1, r4)
                return
        }

        public void sendResultWithoutInterceptors(int r3) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.plugin
                org.json.JSONObject r1 = r2.json
                java.lang.String r1 = r1.toString()
                r0.sendResultWithoutInterceptors(r3, r1)
                return
        }

        public java.lang.String toString() {
                r1 = this;
                org.json.JSONObject r0 = r1.json
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public YmnDataBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.feature.YmnDataBuilder.JsonData createJson(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1) {
            com.bianfeng.ymnsdk.feature.YmnDataBuilder$JsonData r0 = new com.bianfeng.ymnsdk.feature.YmnDataBuilder$JsonData
            r0.<init>(r1)
            return r0
    }
}
