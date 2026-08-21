package com.kwad.sdk.crash.model.message;

import java.io.Serializable;

public final class CaughtExceptionMessage extends JavaExceptionMessage implements Serializable {
    private static final long serialVersionUID = -4220068453451250185L;

    @Override
    protected final String getTypePrefix() {
        return "CAUGHT_";
    }
}
