package com.mbridge.msdk.mbbid.out;

/* JADX INFO: loaded from: classes2.dex */
public class BannerBidRequestParams extends CommonBidRequestParams {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3655a;
    private int b;

    public BannerBidRequestParams(String str, String str2, int i, int i2) {
        super(str, str2);
        this.f3655a = i2;
        this.b = i;
    }

    public BannerBidRequestParams(String str, String str2, String str3, int i, int i2) {
        super(str, str2, str3);
        this.f3655a = i2;
        this.b = i;
    }

    public int getHeight() {
        return this.f3655a;
    }

    public void setHeight(int i) {
        this.f3655a = i;
    }

    public int getWidth() {
        return this.b;
    }

    public void setWidth(int i) {
        this.b = i;
    }
}
