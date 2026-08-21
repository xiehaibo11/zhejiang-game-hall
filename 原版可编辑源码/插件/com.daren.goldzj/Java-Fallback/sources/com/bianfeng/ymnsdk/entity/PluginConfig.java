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
        final PluginConfig this$0;

        public PluginInfo(PluginConfig r1) {
            this.this$0 = r1;
        }

        public Map<String, String> getCfg_detail() {
            Gson r0 = new Gson();
            Object r1 = this.params;
            if ((r1 instanceof String) == false) goto L7;
            return (Map) r0.fromJson((String) this.cfg_detail, Map.class);
        L7:
            if ((r1 instanceof JsonElement) == false) goto L11;
            return (Map) r0.fromJson((JsonElement) this.cfg_detail, Map.class);
        L11:
            return new HashMap();
        }

        public Map<String, String> getParams() {
            Gson r0 = new Gson();
            Object r1 = this.params;
            if ((r1 instanceof String) == false) goto L7;
            return (Map) r0.fromJson((String) r1, Map.class);
        L7:
            if ((r1 instanceof JsonElement) == false) goto L11;
            return (Map) r0.fromJson((JsonElement) r1, Map.class);
        L11:
            return new HashMap();
        }
    }

    public PluginConfig() {
    }

    public List<PluginInfo> getPluginInfos() {
        return this.cfgs;
    }

    public String toString() {
        return new Gson().toJson(this);
    }
}
