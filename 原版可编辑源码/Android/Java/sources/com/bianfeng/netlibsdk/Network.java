package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

public interface Network {
    NetworkResponse performRequest(Request<?> request) throws NetException;
}
