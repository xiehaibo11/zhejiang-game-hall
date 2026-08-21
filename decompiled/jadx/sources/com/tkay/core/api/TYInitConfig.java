package com.tkay.core.api;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class TYInitConfig {
    protected TYInitMediation initMediation;
    protected Map<String, Object> paramMap = new HashMap(4);

    public final TYInitMediation getInitMediation() {
        return this.initMediation;
    }

    public final Map<String, Object> getRequestParamMap() {
        return this.paramMap;
    }
}
