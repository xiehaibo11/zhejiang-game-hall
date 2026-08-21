package com.bianfeng.datafunsdk.net;

import android.text.TextUtils;
import com.bianfeng.datafunsdk.w;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class RequestHeaders {
    public String headers;

    public RequestHeaders(String str) {
        this.headers = str;
    }

    public Map<String, String> getHeaderMap() {
        return TextUtils.isEmpty(this.headers) ? new HashMap() : w.a(this.headers);
    }
}
