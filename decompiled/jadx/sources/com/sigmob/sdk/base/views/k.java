package com.sigmob.sdk.base.views;

import com.czhj.sdk.common.utils.Preconditions;
import java.io.Serializable;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class k implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final List<String> f4963a = Arrays.asList("image/jpeg", "image/png", "image/bmp", "image/gif");
    private static final List<String> b = Arrays.asList("application/x-javascript");
    private static final long serialVersionUID = 0;
    private final String c;
    private final b d;
    private final a e;
    private final int f;
    private final int g;

    /* JADX INFO: renamed from: com.sigmob.sdk.base.views.k$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4964a;

        static {
            int[] iArr = new int[b.values().length];
            f4964a = iArr;
            try {
                iArr[b.IFRAME_RESOURCE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4964a[b.HTML_RESOURCE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4964a[b.STATIC_RESOURCE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f4964a[b.NATIVE_RESOURCE.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f4964a[b.URL_RESOURCE.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    public enum a {
        NONE,
        IMAGE,
        JAVASCRIPT
    }

    public enum b {
        STATIC_RESOURCE,
        HTML_RESOURCE,
        IFRAME_RESOURCE,
        NATIVE_RESOURCE,
        URL_RESOURCE
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
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String a(java.lang.String r6, java.lang.String r7) {
        /*
            r5 = this;
            int[] r0 = com.sigmob.sdk.base.views.k.AnonymousClass1.f4964a
            com.sigmob.sdk.base.views.k$b r1 = r5.d
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            java.lang.String r2 = "CreativeType.JAVASCRIPT"
            java.lang.String r3 = "CreativeType.IMAGE"
            r4 = 0
            if (r0 == r1) goto L3b
            r1 = 2
            if (r0 == r1) goto L3b
            r1 = 3
            if (r0 == r1) goto L1f
            r1 = 4
            if (r0 == r1) goto L3b
            r1 = 5
            if (r0 == r1) goto L3b
            goto L56
        L1f:
            com.sigmob.sdk.base.views.k$a r0 = com.sigmob.sdk.base.views.k.a.IMAGE
            com.sigmob.sdk.base.views.k$a r1 = r5.e
            if (r0 != r1) goto L30
            com.czhj.sdk.logger.SigmobLog.d(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L2f
            return r7
        L2f:
            return r6
        L30:
            com.sigmob.sdk.base.views.k$a r6 = com.sigmob.sdk.base.views.k.a.JAVASCRIPT
            com.sigmob.sdk.base.views.k$a r0 = r5.e
            if (r6 != r0) goto L3a
            com.czhj.sdk.logger.SigmobLog.d(r2)
            return r7
        L3a:
            return r4
        L3b:
            com.sigmob.sdk.base.views.k$a r0 = com.sigmob.sdk.base.views.k.a.IMAGE
            com.sigmob.sdk.base.views.k$a r1 = r5.e
            if (r0 != r1) goto L4c
            com.czhj.sdk.logger.SigmobLog.d(r3)
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L4b
            return r6
        L4b:
            return r4
        L4c:
            com.sigmob.sdk.base.views.k$a r6 = com.sigmob.sdk.base.views.k.a.JAVASCRIPT
            com.sigmob.sdk.base.views.k$a r0 = r5.e
            if (r6 != r0) goto L56
            com.czhj.sdk.logger.SigmobLog.d(r2)
            return r7
        L56:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.views.k.a(java.lang.String, java.lang.String):java.lang.String");
    }

    public void a(l lVar) {
        StringBuilder sb;
        String str;
        String string;
        String str2;
        Preconditions.NoThrow.checkNotNull(lVar);
        int i = AnonymousClass1.f4964a[this.d.ordinal()];
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
            if (this.e == a.IMAGE) {
                sb = new StringBuilder();
                sb.append("<html><head></head><body style=\"margin:0;padding:0\"><img src=\"");
                sb.append(this.c);
                str = "\" width=\"100%\" style=\"max-width:100%;max-height:100%;\" /></body></html>";
            } else {
                if (this.e != a.JAVASCRIPT) {
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
