package com.mbridge.msdk.widget.custom.b;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import java.io.File;

public final class c {
    private static c a;
    private com.mbridge.msdk.widget.custom.a.b b;

    public static c a(Context context) {
        if (a == null) {
            a = new c(context);
        }
        return a;
    }

    private c(Context context) {
        this.b = null;
        com.mbridge.msdk.widget.custom.a.b bVarA = com.mbridge.msdk.widget.custom.a.b.a();
        this.b = bVarA;
        bVarA.a("");
    }

    public final View a(String str) {
        if (TextUtils.isEmpty(str) || !new File(str).exists()) {
            return null;
        }
        return this.b.f(str);
    }
}
