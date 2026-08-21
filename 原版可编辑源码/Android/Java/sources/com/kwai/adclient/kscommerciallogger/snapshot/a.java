package com.kwai.adclient.kscommerciallogger.snapshot;

import org.json.JSONObject;

public final class a extends c {
    a(String str) {
        super(str, 0);
    }

    @Override
    public final synchronized d gb(String str) {
        return new b("empty");
    }

    @Override
    final JSONObject gc(String str) {
        return new JSONObject();
    }
}
