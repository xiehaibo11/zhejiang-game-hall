package com.kwad.sdk.api.model;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements IKsAdLabel {
    public int ajr;
    public int ajs;
    public String ajt;
    public String aju;
    public String ajv;
    public String ajw;
    public String ajx;
    public long ajy;

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final String getChannel() {
        return this.ajx;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final long getCpmBidFloor() {
        return this.ajy;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final String getHistoryTitle() {
        return this.ajw;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final String getPostTitle() {
        return this.ajv;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final String getPrevTitle() {
        return this.aju;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final int getThirdAge() {
        return this.ajr;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final int getThirdGender() {
        return this.ajs;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final String getThirdInterest() {
        return this.ajt;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setChannel(String str) {
        this.ajx = str;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setCpmBidFloor(long j) {
        this.ajy = j;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setHistoryTitle(String str) {
        this.ajw = str;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setPostTitle(String str) {
        this.ajv = str;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setPrevTitle(String str) {
        this.aju = str;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setThirdAge(int i) {
        this.ajr = i;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setThirdGender(int i) {
        this.ajs = i;
    }

    @Override // com.kwad.sdk.api.model.IKsAdLabel
    public final void setThirdInterest(String str) {
        this.ajt = str;
    }
}
