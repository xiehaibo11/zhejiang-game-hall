package com.tkay.network.gdt;

import com.tkay.core.api.TYInitConfig;

public class GDTTYInitConfig extends TYInitConfig {
    public GDTTYInitConfig(String str) {
        this.paramMap.put("app_id", str);
        this.initMediation = GDTTYInitManager.getInstance();
    }
}
