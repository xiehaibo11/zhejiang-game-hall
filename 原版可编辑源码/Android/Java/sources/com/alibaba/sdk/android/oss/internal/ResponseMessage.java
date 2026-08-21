package com.alibaba.sdk.android.oss.internal;

import java.io.IOException;
import java.io.InputStream;
import java.util.Map;
import okhttp3.Response;

public class ResponseMessage extends HttpMessage {
    private RequestMessage request;
    private Response response;
    private int statusCode;

    @Override
    public void addHeader(String str, String str2) {
        super.addHeader(str, str2);
    }

    @Override
    public void close() throws IOException {
        super.close();
    }

    @Override
    public InputStream getContent() {
        return super.getContent();
    }

    @Override
    public long getContentLength() {
        return super.getContentLength();
    }

    @Override
    public Map getHeaders() {
        return super.getHeaders();
    }

    @Override
    public String getStringBody() {
        return super.getStringBody();
    }

    @Override
    public void setContent(InputStream inputStream) {
        super.setContent(inputStream);
    }

    @Override
    public void setContentLength(long j) {
        super.setContentLength(j);
    }

    @Override
    public void setHeaders(Map map) {
        super.setHeaders(map);
    }

    @Override
    public void setStringBody(String str) {
        super.setStringBody(str);
    }

    public int getStatusCode() {
        return this.statusCode;
    }

    public void setStatusCode(int i) {
        this.statusCode = i;
    }

    public Response getResponse() {
        return this.response;
    }

    public void setResponse(Response response) {
        this.response = response;
    }

    public RequestMessage getRequest() {
        return this.request;
    }

    public void setRequest(RequestMessage requestMessage) {
        this.request = requestMessage;
    }
}
