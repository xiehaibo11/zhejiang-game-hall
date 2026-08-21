package com.bianfeng.ymnsdk.entity;

public class PluginConfig {
    private java.util.List<com.bianfeng.ymnsdk.entity.PluginConfig.PluginInfo> cfgs;

    public class PluginInfo {
        private java.lang.Object cfg_detail;
        public java.lang.String name;
        private java.lang.Object params;
        public int status;
        final com.bianfeng.ymnsdk.entity.PluginConfig this$0;

        public PluginInfo(com.bianfeng.ymnsdk.entity.PluginConfig r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public java.util.Map<java.lang.String, java.lang.String> getCfg_detail() {
                r3 = this;
                com.google.gson.Gson r0 = new com.google.gson.Gson
                r0.<init>()
                java.lang.Object r1 = r3.params
                boolean r2 = r1 instanceof java.lang.String
                if (r2 == 0) goto L18
                java.lang.Object r1 = r3.cfg_detail
                java.lang.String r1 = (java.lang.String) r1
                java.lang.Class<java.util.Map> r2 = java.util.Map.class
                java.lang.Object r1 = r0.fromJson(r1, r2)
                java.util.Map r1 = (java.util.Map) r1
                return r1
            L18:
                boolean r1 = r1 instanceof com.google.gson.JsonElement
                if (r1 == 0) goto L29
                java.lang.Object r1 = r3.cfg_detail
                com.google.gson.JsonElement r1 = (com.google.gson.JsonElement) r1
                java.lang.Class<java.util.Map> r2 = java.util.Map.class
                java.lang.Object r1 = r0.fromJson(r1, r2)
                java.util.Map r1 = (java.util.Map) r1
                return r1
            L29:
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                return r1
        }

        public java.util.Map<java.lang.String, java.lang.String> getParams() {
                r3 = this;
                com.google.gson.Gson r0 = new com.google.gson.Gson
                r0.<init>()
                java.lang.Object r1 = r3.params
                boolean r2 = r1 instanceof java.lang.String
                if (r2 == 0) goto L16
                java.lang.String r1 = (java.lang.String) r1
                java.lang.Class<java.util.Map> r2 = java.util.Map.class
                java.lang.Object r1 = r0.fromJson(r1, r2)
                java.util.Map r1 = (java.util.Map) r1
                return r1
            L16:
                boolean r2 = r1 instanceof com.google.gson.JsonElement
                if (r2 == 0) goto L25
                com.google.gson.JsonElement r1 = (com.google.gson.JsonElement) r1
                java.lang.Class<java.util.Map> r2 = java.util.Map.class
                java.lang.Object r1 = r0.fromJson(r1, r2)
                java.util.Map r1 = (java.util.Map) r1
                return r1
            L25:
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                return r1
        }
    }

    public PluginConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<com.bianfeng.ymnsdk.entity.PluginConfig.PluginInfo> getPluginInfos() {
            r1 = this;
            java.util.List<com.bianfeng.ymnsdk.entity.PluginConfig$PluginInfo> r0 = r1.cfgs
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.lang.String r1 = r0.toJson(r2)
            return r1
    }
}
