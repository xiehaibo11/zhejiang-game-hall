package com.huawei.agconnect.core.service.auth;

public interface CredentialsProvider {
    com.huawei.hmf.tasks.Task<com.huawei.agconnect.core.service.auth.Token> getTokens();

    com.huawei.hmf.tasks.Task<com.huawei.agconnect.core.service.auth.Token> getTokens(boolean r1);
}
