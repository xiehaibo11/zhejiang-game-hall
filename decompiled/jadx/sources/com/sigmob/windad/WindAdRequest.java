package com.sigmob.windad;

import android.text.TextUtils;
import com.czhj.sdk.common.Constants;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class WindAdRequest {
    private String c;
    private String d;
    private String e;
    private Map<String, Object> f;
    private Map<String, Object> g;
    private boolean h;
    protected int b = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f5280a = 1;

    protected WindAdRequest(String str, String str2, Map<String, Object> map) {
        this.c = str;
        this.d = str2;
        this.f = map;
    }

    public static boolean isPlacementEmpty(WindAdRequest windAdRequest) {
        return windAdRequest == null || TextUtils.isEmpty(windAdRequest.getPlacementId());
    }

    public int getAdCount() {
        return this.b;
    }

    public int getAdType() {
        return this.f5280a;
    }

    public String getLoadId() {
        Map<String, Object> map = this.g;
        if (map == null) {
            return null;
        }
        Object obj = map.get(Constants.LOAD_ID);
        if (obj instanceof String) {
            return (String) obj;
        }
        return null;
    }

    public Map<String, Object> getOptions() {
        return this.f;
    }

    public String getPlacementId() {
        return this.c;
    }

    public String getUserId() {
        return this.d;
    }

    public boolean hasOptions() {
        return this.f != null;
    }

    public boolean isHalfInterstitial() {
        return this.h;
    }

    public void setExtOptions(Map<String, Object> map) {
        this.g = map;
    }

    public void setHalfInterstitial(boolean z) {
        this.h = z;
    }

    public void setOptions(Map<String, Object> map) {
        this.f = map;
    }

    public void setUserId(String str) {
        this.d = str;
    }
}
