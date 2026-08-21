package com.kwad.sdk.crash.model.message;

import org.json.JSONObject;

public class JavaExceptionMessage extends ExceptionMessage {
    private static final long serialVersionUID = -2410125079234148135L;

    public JavaExceptionMessage() {
        this.mExceptionType = 1;
    }

    @Override
    protected String getTypePrefix() {
        return "";
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
    }

    @Override
    public JSONObject toJson() {
        return super.toJson();
    }
}
