package com.vivo.push.sdk.service;

public class CommandClientService extends CommandService {
    @Override
    protected final boolean a(String str) {
        return "com.vivo.pushclient.action.RECEIVE".equals(str);
    }
}
