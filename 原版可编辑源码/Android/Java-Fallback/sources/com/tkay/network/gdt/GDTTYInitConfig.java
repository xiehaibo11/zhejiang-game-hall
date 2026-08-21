package com.tkay.network.gdt;

public class GDTTYInitConfig extends com.tkay.core.api.TYInitConfig {
    public GDTTYInitConfig(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.paramMap
            java.lang.String r1 = "app_id"
            r0.put(r1, r3)
            com.tkay.network.gdt.GDTTYInitManager r3 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r2.initMediation = r3
            return
    }
}
