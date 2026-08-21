package com.huawei.agconnect.core;

public interface ServiceRegistrar {
    java.util.List<com.huawei.agconnect.core.Service> getServices(android.content.Context r1);

    void initialize(android.content.Context r1);
}
