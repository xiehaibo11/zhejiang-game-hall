package com.mbridge.msdk.dycreator.e;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import java.io.File;

public class f {
    private static volatile f a;
    private com.mbridge.msdk.dycreator.a.b b;

    public static f a(Context context) {
        if (a == null) {
            synchronized (f.class) {
                if (a == null) {
                    a = new f(context.getApplicationContext());
                }
            }
        }
        return a;
    }

    private f(Context context) {
        this.b = null;
        com.mbridge.msdk.dycreator.a.b bVarA = com.mbridge.msdk.dycreator.a.b.a();
        this.b = bVarA;
        bVarA.a(context, "");
    }

    public final View a(String str) {
        if (new File(str).exists()) {
            return this.b.f(str);
        }
        return null;
    }

    public final View a(ViewGroup viewGroup, String str) {
        if (viewGroup != null && !TextUtils.isEmpty(str)) {
            if (viewGroup.getId() == str.hashCode()) {
                return viewGroup;
            }
            int childCount = viewGroup.getChildCount();
            for (int i = 0; i < childCount; i++) {
                View childAt = viewGroup.getChildAt(i);
                if (childAt.getId() == str.hashCode()) {
                    return childAt;
                }
                if (childAt instanceof ViewGroup) {
                    a((ViewGroup) childAt, str);
                }
            }
        }
        return null;
    }
}
