package com.huawei.agconnect;

public interface CustomAuthProvider {
    com.huawei.hmf.tasks.Task<com.huawei.agconnect.core.service.auth.Token> getTokens(boolean r1);
}
