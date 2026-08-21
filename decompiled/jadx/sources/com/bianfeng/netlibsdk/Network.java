package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

/* JADX INFO: loaded from: classes.dex */
public interface Network {
    NetworkResponse performRequest(Request<?> request) throws NetException;
}
