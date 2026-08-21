package com.tkay.core.common.l;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import com.tkay.core.basead.ui.web.WebLandPageActivity;

public final class l {
    public static void a(String str) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.addFlags(268468224);
            Context contextF = com.tkay.core.common.b.m.a().f();
            if (contextF != null) {
                contextF.startActivity(intent);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, String str) {
        try {
            WebLandPageActivity.a(context, str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
