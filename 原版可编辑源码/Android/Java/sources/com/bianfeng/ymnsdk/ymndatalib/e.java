package com.bianfeng.ymnsdk.ymndatalib;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils;

public class e {
    public String a;
    public ResponseDataUtils b;
    public String c;

    public e(ResponseDataUtils responseDataUtils, String str, String str2, String str3, String str4, String str5) {
        this.a = "";
        this.b = responseDataUtils;
        this.a = str;
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
        return this.a;
    }
}
