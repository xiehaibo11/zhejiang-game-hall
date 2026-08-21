package com.bianfeng.ymnsdk.entity;

import com.google.gson.Gson;
import com.google.gson.JsonElement;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class PluginConfig {
    private List<PluginInfo> cfgs;

    public class PluginInfo {
        private Object cfg_detail;
        public String name;
        private Object params;
        public int status;

        public PluginInfo() {
        }

        public Map<String, String> getCfg_detail() {
            Gson gson = new Gson();
            Object obj = this.params;
            return obj instanceof String ? (Map) gson.fromJson((String) this.cfg_detail, Map.class) : obj instanceof JsonElement ? (Map) gson.fromJson((JsonElement) this.cfg_detail, Map.class) : new HashMap();
        }

        public Map<String, String> getParams() {
            Gson gson = new Gson();
            Object obj = this.params;
            return obj instanceof String ? (Map) gson.fromJson((String) obj, Map.class) : obj instanceof JsonElement ? (Map) gson.fromJson((JsonElement) obj, Map.class) : new HashMap();
        }
    }

    public List<PluginInfo> getPluginInfos() {
        return this.cfgs;
    }

    public String toString() {
        return new Gson().toJson(this);
    }
}
