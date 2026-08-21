package com.igexin.sdk.message;

/* JADX INFO: loaded from: classes2.dex */
public class GTTransmitMessage extends GTPushMessage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2677a;
    private String b;
    private String c;
    private byte[] d;
    private boolean e;
    private boolean f;

    public GTTransmitMessage() {
    }

    public GTTransmitMessage(String str, String str2, String str3, byte[] bArr, boolean z) {
        this.f2677a = str;
        this.b = str2;
        this.c = str3;
        this.d = bArr;
        this.e = z;
    }

    public String getMessageId() {
        return this.b;
    }

    public byte[] getPayload() {
        return this.d;
    }

    public String getPayloadId() {
        return this.c;
    }

    public String getTaskId() {
        return this.f2677a;
    }

    public boolean isOffline() {
        return this.e;
    }

    public boolean isRepeatMessage() {
        return this.f;
    }

    public void setMessageId(String str) {
        this.b = str;
    }

    public void setPayload(byte[] bArr) {
        this.d = bArr;
    }

    public void setPayloadId(String str) {
        this.c = str;
    }

    public GTTransmitMessage setRepeatMessage(boolean z) {
        this.f = z;
        return this;
    }

    public void setTaskId(String str) {
        this.f2677a = str;
    }
}
