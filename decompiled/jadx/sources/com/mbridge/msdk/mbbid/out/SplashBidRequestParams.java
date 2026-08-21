package com.mbridge.msdk.mbbid.out;

import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.tools.v;

/* JADX INFO: loaded from: classes2.dex */
public class SplashBidRequestParams extends BannerBidRequestParams {
    private static int b = 1;
    private static int c;
    private static int d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3658a;

    public SplashBidRequestParams(String str, String str2) {
        this(str, str2, "");
    }

    public SplashBidRequestParams(String str, String str2, String str3) {
        this(str, str2, str3, false, b, d, c);
    }

    public SplashBidRequestParams(String str, String str2, boolean z, int i, int i2, int i3) {
        this(str, str2, "", z, i, i3, i2);
    }

    public SplashBidRequestParams(String str, String str2, String str3, boolean z, int i, int i2, int i3) {
        super(str, str2, str3, 0, 0);
        this.f3658a = false;
        b = i;
        int iX = v.x(a.f().j());
        int iY = v.y(a.f().j());
        int i4 = b;
        if (i4 == 1) {
            if (iY > i3 * 4) {
                setHeight(iY - i3);
                setWidth(iX);
            } else {
                setHeight(0);
                setWidth(0);
            }
        } else if (i4 == 2) {
            if (iX > i2 * 4) {
                setWidth(iX - i2);
                setHeight(iY);
            } else {
                setHeight(0);
                setWidth(0);
            }
        }
        this.f3658a = z;
    }

    protected final boolean a() {
        return this.f3658a;
    }

    public int getOrientation() {
        return b;
    }
}
