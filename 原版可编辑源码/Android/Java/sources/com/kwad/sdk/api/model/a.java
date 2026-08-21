package com.kwad.sdk.api.model;

public final class a implements IKsAdLabel {
    public int ajr;
    public int ajs;
    public String ajt;
    public String aju;
    public String ajv;
    public String ajw;
    public String ajx;
    public long ajy;

    @Override
    public final String getChannel() {
        return this.ajx;
    }

    @Override
    public final long getCpmBidFloor() {
        return this.ajy;
    }

    @Override
    public final String getHistoryTitle() {
        return this.ajw;
    }

    @Override
    public final String getPostTitle() {
        return this.ajv;
    }

    @Override
    public final String getPrevTitle() {
        return this.aju;
    }

    @Override
    public final int getThirdAge() {
        return this.ajr;
    }

    @Override
    public final int getThirdGender() {
        return this.ajs;
    }

    @Override
    public final String getThirdInterest() {
        return this.ajt;
    }

    @Override
    public final void setChannel(String str) {
        this.ajx = str;
    }

    @Override
    public final void setCpmBidFloor(long j) {
        this.ajy = j;
    }

    @Override
    public final void setHistoryTitle(String str) {
        this.ajw = str;
    }

    @Override
    public final void setPostTitle(String str) {
        this.ajv = str;
    }

    @Override
    public final void setPrevTitle(String str) {
        this.aju = str;
    }

    @Override
    public final void setThirdAge(int i) {
        this.ajr = i;
    }

    @Override
    public final void setThirdGender(int i) {
        this.ajs = i;
    }

    @Override
    public final void setThirdInterest(String str) {
        this.ajt = str;
    }
}
