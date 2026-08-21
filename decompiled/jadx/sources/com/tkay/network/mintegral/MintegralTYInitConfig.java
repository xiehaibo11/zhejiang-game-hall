package com.tkay.network.mintegral;

import com.tkay.core.api.TYInitConfig;

/* JADX INFO: loaded from: classes3.dex */
public class MintegralTYInitConfig extends TYInitConfig {
    public MintegralTYInitConfig(String str, String str2) {
        this.paramMap.put("appid", str);
        this.paramMap.put("appkey", str2);
        this.initMediation = MintegralTYInitManager.getInstance();
    }
}
