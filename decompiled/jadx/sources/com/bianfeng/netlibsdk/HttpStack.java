package com.bianfeng.netlibsdk;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public interface HttpStack {
    HttpResponse executeRequest(Request<?> request) throws IOException;
}
