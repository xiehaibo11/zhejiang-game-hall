package com.kwai.adclient.kscommerciallogger.snapshot;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends c {
    a(String str) {
        super(str, 0);
    }

    @Override // com.kwai.adclient.kscommerciallogger.snapshot.c
    public final synchronized d gb(String str) {
        return new b("empty");
    }

    @Override // com.kwai.adclient.kscommerciallogger.snapshot.c
    final JSONObject gc(String str) {
        return new JSONObject();
    }
}
