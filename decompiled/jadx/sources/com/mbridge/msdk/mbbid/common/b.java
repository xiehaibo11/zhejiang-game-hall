package com.mbridge.msdk.mbbid.common;

/* JADX INFO: compiled from: BidRequestParams.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3651a;
    private String b;
    private String c;

    public b(String str, String str2) {
        this.f3651a = str;
        this.b = str2;
    }

    public b(String str, String str2, String str3) {
        this.f3651a = str;
        this.b = str2;
        this.c = str3;
    }

    public String getmUnitId() {
        return this.b;
    }

    public void setmUnitId(String str) {
        this.b = str;
    }

    public String getmFloorPrice() {
        return this.c;
    }

    public void setmFloorPrice(String str) {
        this.c = str;
    }

    public String getmPlacementId() {
        return this.f3651a;
    }

    public void setmPlacementId(String str) {
        this.f3651a = str;
    }
}
