package com.bianfeng.ymnsdk.entity;

import com.google.gson.Gson;
import com.google.gson.JsonElement;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class PluginConfig {
    private List<PluginInfo> cfgs;

    public List<PluginInfo> getPluginInfos() {
        return this.cfgs;
    }

    public class PluginInfo {
        private Object cfg_detail;
        public String name;
        private Object params;
        public int status;

        public PluginInfo() {
        }

        public Map<String, String> getParams() {
            Gson gson = new Gson();
            Object obj = this.params;
            if (obj instanceof String) {
                return (Map) gson.fromJson((String) obj, Map.class);
            }
            if (obj instanceof JsonElement) {
                return (Map) gson.fromJson((JsonElement) obj, Map.class);
            }
            return new HashMap();
        }

        public Map<String, String> getCfg_detail() {
            Gson gson = new Gson();
            Object obj = this.params;
            if (obj instanceof String) {
                return (Map) gson.fromJson((String) this.cfg_detail, Map.class);
            }
            if (obj instanceof JsonElement) {
                return (Map) gson.fromJson((JsonElement) this.cfg_detail, Map.class);
            }
            return new HashMap();
        }
    }

    public String toString() {
        Gson gson = new Gson();
        return gson.toJson(this);
    }
}
