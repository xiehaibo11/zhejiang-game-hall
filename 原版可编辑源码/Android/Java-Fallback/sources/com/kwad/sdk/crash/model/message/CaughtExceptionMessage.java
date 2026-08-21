package com.kwad.sdk.crash.model.message;

public final class CaughtExceptionMessage extends com.kwad.sdk.crash.model.message.JavaExceptionMessage implements java.io.Serializable {
    private static final long serialVersionUID = -4220068453451250185L;

    public CaughtExceptionMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected final java.lang.String getTypePrefix() {
            r1 = this;
            java.lang.String r0 = "CAUGHT_"
            return r0
    }
}
