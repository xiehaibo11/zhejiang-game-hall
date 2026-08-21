package com.bytedance.android.openliveplugin.material;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class ResPackage {
    public String resUrl;
    public long statusCode;
    public long version;

    public boolean isLegal() {
        return this.statusCode == 0 && !TextUtils.isEmpty(this.resUrl);
    }
}
