package com.kwad.sdk.crash.model.message;

public class AnrReason extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = 2458805633316742361L;
    public java.lang.String mLongMsg;
    public java.lang.String mShortMsg;
    public java.lang.String mTag;

    public AnrReason() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "mTag: "
            r0.<init>(r1)
            java.lang.String r1 = r3.mTag
            r0.append(r1)
            r1 = 10
            r0.append(r1)
            java.lang.String r2 = "mShortMsg: "
            r0.append(r2)
            java.lang.String r2 = r3.mShortMsg
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "mLongMsg: "
            r0.append(r2)
            java.lang.String r2 = r3.mLongMsg
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
