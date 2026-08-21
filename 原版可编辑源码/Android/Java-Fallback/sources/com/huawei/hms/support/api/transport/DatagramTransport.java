package com.huawei.hms.support.api.transport;

public interface DatagramTransport {

    public interface a {
        void a(int r1, com.huawei.hms.core.aidl.IMessageEntity r2);
    }

    void post(com.huawei.hms.support.api.client.ApiClient r1, com.huawei.hms.support.api.transport.DatagramTransport.a r2);

    void send(com.huawei.hms.support.api.client.ApiClient r1, com.huawei.hms.support.api.transport.DatagramTransport.a r2);
}
