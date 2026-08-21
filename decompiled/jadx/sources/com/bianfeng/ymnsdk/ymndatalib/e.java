package com.bianfeng.ymnsdk.ymndatalib;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils;

/* JADX INFO: compiled from: PluginBean.java */
/* JADX INFO: loaded from: classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1481a;
    public ResponseDataUtils b;
    public String c;

    public e(ResponseDataUtils responseDataUtils, String str, String str2, String str3, String str4, String str5) {
        this.f1481a = "";
        this.b = responseDataUtils;
        this.f1481a = str;
        this.c = str5;
    }

    public ResponseDataUtils a() {
        return this.b;
    }

    public String b() {
        if (TextUtils.isEmpty(this.c)) {
            this.c = "";
        }
        return this.c;
    }

    public String c() {
        return this.f1481a;
    }
}
