package com.huawei.agconnect.core.service.auth;

public interface AuthProvider {
    void addTokenListener(com.huawei.agconnect.core.service.auth.OnTokenListener r1);

    com.huawei.hmf.tasks.Task<com.huawei.agconnect.core.service.auth.Token> getTokens();

    com.huawei.hmf.tasks.Task<com.huawei.agconnect.core.service.auth.Token> getTokens(boolean r1);

    java.lang.String getUid();

    void removeTokenListener(com.huawei.agconnect.core.service.auth.OnTokenListener r1);
}
