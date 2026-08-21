package com.vivo.push.util;

import android.content.Context;
import android.content.res.Resources;
import android.os.Build;
import android.text.TextUtils;
import com.vivo.push.model.InsideNotificationItem;

/* JADX INFO: loaded from: classes4.dex */
public final class h implements BaseNotifyDataAdapter {
    private static int e;
    private static int f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Resources f7946a;
    private String b;
    private String c;
    private String d;

    private int a(String str, String str2) {
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            String[] strArrSplit = str.split("\\.");
            if (strArrSplit != null && strArrSplit.length > 0) {
                str = strArrSplit[0];
            }
            try {
                for (int i = Integer.parseInt(str); i > 0; i--) {
                    String str3 = "vivo_push_ard" + i + str2;
                    p.c("DefaultNotifyDataAdapter", "get notify icon : ".concat(String.valueOf(str3)));
                    int identifier = this.f7946a.getIdentifier(str3, com.tkay.expressad.foundation.h.i.c, this.b);
                    if (identifier > 0) {
                        p.c("DefaultNotifyDataAdapter", "find notify icon : ".concat(String.valueOf(str3)));
                        return identifier;
                    }
                }
            } catch (Exception e2) {
                p.a("DefaultNotifyDataAdapter", e2);
            }
        }
        return -1;
    }

    private static boolean a(int i) {
        return (i == -1 || i == 0) ? false : true;
    }

    private static boolean a(String str) {
        if (Build.VERSION.SDK_INT < 26) {
            return false;
        }
        if (!TextUtils.isEmpty(str)) {
            return true;
        }
        p.d("DefaultNotifyDataAdapter", "systemVersion is not suit ");
        return false;
    }

    @Override // com.vivo.push.util.BaseNotifyDataAdapter
    public final int getDefaultNotifyIcon() {
        if (a(e)) {
            return e;
        }
        String str = this.d;
        int iA = !a(str) ? -1 : a(str, "_notifyicon");
        e = iA;
        if (a(iA)) {
            return e;
        }
        for (String strSubstring = this.c; !TextUtils.isEmpty(strSubstring); strSubstring = strSubstring.substring(0, strSubstring.length() - 1)) {
            int identifier = this.f7946a.getIdentifier("vivo_push_rom" + strSubstring + "_notifyicon", com.tkay.expressad.foundation.h.i.c, this.b);
            if (identifier > 0) {
                return identifier;
            }
        }
        return this.f7946a.getIdentifier("vivo_push_notifyicon", com.tkay.expressad.foundation.h.i.c, this.b);
    }

    @Override // com.vivo.push.util.BaseNotifyDataAdapter
    public final int getDefaultSmallIconId() {
        if (a(f)) {
            return f;
        }
        String str = this.d;
        int iA = !a(str) ? -1 : a(str, "_icon");
        f = iA;
        if (a(iA)) {
            return f;
        }
        for (String strSubstring = this.c; !TextUtils.isEmpty(strSubstring); strSubstring = strSubstring.substring(0, strSubstring.length() - 1)) {
            int identifier = this.f7946a.getIdentifier("vivo_push_rom" + strSubstring + "_icon", com.tkay.expressad.foundation.h.i.c, this.b);
            if (identifier > 0) {
                return identifier;
            }
        }
        return this.f7946a.getIdentifier("vivo_push_icon", com.tkay.expressad.foundation.h.i.c, this.b);
    }

    @Override // com.vivo.push.util.BaseNotifyDataAdapter
    public final int getNotifyMode(InsideNotificationItem insideNotificationItem) {
        return Build.VERSION.SDK_INT >= 21 ? 2 : 1;
    }

    @Override // com.vivo.push.util.BaseNotifyDataAdapter
    public final void init(Context context) {
        this.b = context.getPackageName();
        this.f7946a = context.getResources();
        this.c = j.a();
        this.d = Build.VERSION.RELEASE;
    }
}
