package com.sigmob.sdk.base.views;

import android.text.TextUtils;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import java.io.Serializable;
import java.util.Arrays;
import java.util.List;

public class k implements Serializable {
    private static final List<String> a = Arrays.asList("image/jpeg", "image/png", "image/bmp", "image/gif");
    private static final List<String> b = Arrays.asList("application/x-javascript");
    private static final long serialVersionUID = 0;
    private final String c;
    private final b d;
    private final a e;
    private final int f;
    private final int g;

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[b.values().length];
            a = iArr;
            try {
                iArr[b.c.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[b.b.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[b.a.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[b.d.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[b.e.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    public enum a {
        a,
        b,
        c
    }

    public enum b {
        a,
        b,
        c,
        d,
        e
    }

    public k(String str, b bVar, a aVar, int i, int i2) {
        Preconditions.NoThrow.checkNotNull(str);
        Preconditions.NoThrow.checkNotNull(bVar);
        Preconditions.NoThrow.checkNotNull(aVar);
        this.c = str;
        this.d = bVar;
        this.e = aVar;
        this.f = i;
        this.g = i2;
    }

    public String a() {
        return this.c;
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x003b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String a(String str, String str2) {
        int i = 1.a[this.d.ordinal()];
        if (i == 1 || i == 2) {
            if (a.b == this.e) {
                SigmobLog.d("CreativeType.IMAGE");
                if (TextUtils.isEmpty(str2)) {
                    return str;
                }
                return null;
            }
            if (a.c == this.e) {
                SigmobLog.d("CreativeType.JAVASCRIPT");
                return str2;
            }
        } else {
            if (i == 3) {
                if (a.b == this.e) {
                    SigmobLog.d("CreativeType.IMAGE");
                    return TextUtils.isEmpty(str) ? str2 : str;
                }
                if (a.c != this.e) {
                    return null;
                }
                SigmobLog.d("CreativeType.JAVASCRIPT");
                return str2;
            }
            if (i == 4 || i == 5) {
            }
        }
        return null;
    }

    public void a(l lVar) {
        StringBuilder sb;
        String str;
        String string;
        String str2;
        Preconditions.NoThrow.checkNotNull(lVar);
        int i = 1.a[this.d.ordinal()];
        if (i == 1) {
            sb = new StringBuilder();
            sb.append("<iframe frameborder=\"0\" scrolling=\"no\" marginheight=\"0\" marginwidth=\"0\" style=\"border: 0px; margin: 0px;\" width=\"");
            sb.append(this.f);
            sb.append("\" height=\"");
            sb.append(this.g);
            sb.append("\" src=\"");
            sb.append(this.c);
            str = "\"></iframe>";
        } else {
            if (i == 2) {
                string = this.c;
                lVar.a(string);
            }
            if (i != 3) {
                if (i == 4) {
                    if (!this.c.toLowerCase().startsWith("file://")) {
                        str2 = "file://" + this.c;
                    }
                    lVar.loadUrl(str2);
                    return;
                }
                if (i != 5) {
                    return;
                }
                str2 = this.c;
                lVar.loadUrl(str2);
                return;
            }
            if (this.e == a.b) {
                sb = new StringBuilder();
                sb.append("<html><head></head><body style=\"margin:0;padding:0\"><img src=\"");
                sb.append(this.c);
                str = "\" width=\"100%\" style=\"max-width:100%;max-height:100%;\" /></body></html>";
            } else {
                if (this.e != a.c) {
                    return;
                }
                sb = new StringBuilder();
                sb.append("<script src=\"");
                sb.append(this.c);
                str = "\"></script>";
            }
        }
        sb.append(str);
        string = sb.toString();
        lVar.a(string);
    }

    public b b() {
        return this.d;
    }

    public a c() {
        return this.e;
    }
}
