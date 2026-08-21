package com.qq.e.ads.rewardvideo;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class ServerSideVerificationOptions {
    public static final String TRANS_ID = "transId";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4669a;
    private String b;
    private final JSONObject c;

    public static class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f4670a;
        private String b;

        public ServerSideVerificationOptions build() {
            return new ServerSideVerificationOptions(this);
        }

        public Builder setCustomData(String str) {
            this.f4670a = str;
            return this;
        }

        public Builder setUserId(String str) {
            this.b = str;
            return this;
        }
    }

    private ServerSideVerificationOptions(Builder builder) {
        this.c = new JSONObject();
        this.f4669a = builder.f4670a;
        this.b = builder.b;
    }

    public String getCustomData() {
        return this.f4669a;
    }

    public JSONObject getOptions() {
        return this.c;
    }

    public String getUserId() {
        return this.b;
    }
}
