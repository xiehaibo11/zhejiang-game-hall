package com.bianfeng.netlibsdk;

import java.io.IOException;

public interface HttpStack {
    HttpResponse executeRequest(Request<?> request) throws IOException;
}
