package com.xiaomi.mipush.sdk;

import android.text.TextUtils;

class x {
    int a = 0;
    String a = "";

    public boolean equals(Object obj) {
        if (obj == null || !(obj instanceof x)) {
            return false;
        }
        x xVar = (x) obj;
        return !TextUtils.isEmpty(xVar.a) && xVar.a.equals(this.a);
    }
}
