package com.igexin.sdk.message;

/* JADX INFO: loaded from: classes2.dex */
public class FeedbackCmdMessage extends GTCmdMessage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2674a;
    private String b;
    private String c;
    private long d;

    public FeedbackCmdMessage() {
    }

    public FeedbackCmdMessage(String str, String str2, String str3, long j, int i) {
        super(i);
        this.f2674a = str;
        this.b = str2;
        this.c = str3;
        this.d = j;
    }

    public String getActionId() {
        return this.b;
    }

    public String getResult() {
        return this.c;
    }

    public String getTaskId() {
        return this.f2674a;
    }

    public long getTimeStamp() {
        return this.d;
    }

    public void setActionId(String str) {
        this.b = str;
    }

    public void setResult(String str) {
        this.c = str;
    }

    public void setTaskId(String str) {
        this.f2674a = str;
    }

    public void setTimeStamp(long j) {
        this.d = j;
    }
}
