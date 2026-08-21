package com.kwad.sdk.crash.model.message;

public class JavaExceptionMessage extends com.kwad.sdk.crash.model.message.ExceptionMessage {
    private static final long serialVersionUID = -2410125079234148135L;

    public JavaExceptionMessage() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mExceptionType = r0
            return
    }

    @Override
    protected java.lang.String getTypePrefix() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r1) {
            r0 = this;
            super.parseJson(r1)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = super.toJson()
            return r0
    }
}
