package com.kwad.sdk.internal.api;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.core.response.a.a {
    public int ajr;
    public int ajs;
    public String ajt;
    public String aju;
    public String ajv;
    public String ajw;
    public String ajx;
    public long ajy;

    public final boolean FD() {
        return this.ajr == 0 && this.ajs == 0 && TextUtils.isEmpty(this.ajt);
    }

    public final boolean FE() {
        return TextUtils.isEmpty(this.aju) && TextUtils.isEmpty(this.ajv) && TextUtils.isEmpty(this.ajx) && TextUtils.isEmpty(this.ajw);
    }
}
