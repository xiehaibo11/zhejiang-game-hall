package com.sigmob.sdk.base;

import com.sigmob.windad.WindAdRequest;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class k extends WindAdRequest {
    public k(String str, String str2, Map<String, Object> map) {
        super(str, str2, map);
        this.f5280a = 1;
    }

    @Deprecated
    public k(String str, String str2, boolean z, Map<String, Object> map) {
        this(str, str2, map);
        this.f5280a = z ? 1 : 4;
    }
}
