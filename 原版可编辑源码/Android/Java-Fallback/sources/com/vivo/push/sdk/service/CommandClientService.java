package com.vivo.push.sdk.service;

public class CommandClientService extends com.vivo.push.sdk.service.CommandService {
    public CommandClientService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected final boolean a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "com.vivo.pushclient.action.RECEIVE"
            boolean r2 = r0.equals(r2)
            return r2
    }
}
