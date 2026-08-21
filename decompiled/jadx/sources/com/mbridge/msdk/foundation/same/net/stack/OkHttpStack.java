package com.mbridge.msdk.foundation.same.net.stack;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.i;
import com.mbridge.msdk.foundation.same.net.stack.b;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.thrid.okhttp.Call;
import com.mbridge.msdk.thrid.okhttp.Connection;
import com.mbridge.msdk.thrid.okhttp.EventListener;
import com.mbridge.msdk.thrid.okhttp.Headers;
import com.mbridge.msdk.thrid.okhttp.MediaType;
import com.mbridge.msdk.thrid.okhttp.OkHttpClient;
import com.mbridge.msdk.thrid.okhttp.Protocol;
import com.mbridge.msdk.thrid.okhttp.Request;
import com.mbridge.msdk.thrid.okhttp.RequestBody;
import com.mbridge.msdk.thrid.okhttp.Response;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class OkHttpStack implements a {
    private final OkHttpClient mClient = b.a.f3472a.b();

    private static void setConnectionParametersForRequest(Request.Builder builder, i<?> iVar) throws IOException {
        switch (iVar.a()) {
            case 0:
                builder.get();
                return;
            case 1:
                builder.post(createRequestBody(iVar));
                return;
            case 2:
                builder.put(createRequestBody(iVar));
                return;
            case 3:
                builder.delete();
                return;
            case 4:
                builder.head();
                return;
            case 5:
                builder.method("OPTIONS", null);
                return;
            case 6:
                builder.method("TRACE", null);
                return;
            case 7:
                builder.patch(createRequestBody(iVar));
                return;
            default:
                throw new IllegalStateException("Unknown method type.");
        }
    }

    private static RequestBody createRequestBody(i iVar) {
        byte[] bArrE = iVar.e();
        if (bArrE == null) {
            return null;
        }
        return RequestBody.create((MediaType) null, bArrE);
    }

    @Override // com.mbridge.msdk.foundation.same.net.stack.a
    public com.mbridge.msdk.foundation.same.net.e.b performRequest(i<?> iVar) throws IOException {
        int iH = iVar.h();
        int i = iVar.i();
        int iJ = iVar.j();
        int iK = iVar.k();
        int iL = iVar.l();
        if (i == 0) {
            i = iH;
        }
        if (iJ == 0) {
            iJ = iH;
        }
        if (iK != 0) {
            iH = iK;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(Protocol.HTTP_1_1);
        arrayList.add(Protocol.HTTP_2);
        OkHttpClient.Builder builderEventListener = this.mClient.newBuilder().protocols(arrayList).readTimeout(iJ, TimeUnit.MILLISECONDS).connectTimeout(i, TimeUnit.MILLISECONDS).writeTimeout(iH, TimeUnit.MILLISECONDS).eventListener(new DefaultEventListener(iVar.b()));
        if (iL > 0) {
            builderEventListener.callTimeout(iL, TimeUnit.MILLISECONDS);
        }
        StringBuilder sb = new StringBuilder();
        sb.append("connectTimeout: ");
        sb.append(i);
        sb.append(" readTimeout: ");
        sb.append(iJ);
        sb.append(" writeTimeout: ");
        sb.append(iH);
        sb.append(" callTimeout: ");
        sb.append(iL == 0 ? "not set" : Integer.valueOf(iL));
        z.a("OkHttpStack", sb.toString());
        Request.Builder builder = new Request.Builder();
        for (Map.Entry<String, String> entry : iVar.d().entrySet()) {
            builder.addHeader(entry.getKey(), entry.getValue());
        }
        setConnectionParametersForRequest(builder, iVar);
        Response responseExecute = builderEventListener.build().newCall(builder.url(iVar.b()).build()).execute();
        Headers headers = responseExecute.headers();
        ArrayList arrayList2 = new ArrayList();
        int size = headers.size();
        for (int i2 = 0; i2 < size; i2++) {
            String strName = headers.name(i2);
            String strValue = headers.value(i2);
            if (strName != null) {
                arrayList2.add(new com.mbridge.msdk.foundation.same.net.c.b(strName, strValue));
            }
        }
        return new com.mbridge.msdk.foundation.same.net.e.b(responseExecute.code(), arrayList2, responseExecute.body().byteStream());
    }

    private static class DefaultEventListener extends EventListener {
        private long callDuring;
        private long callStart;
        private long connectDuring;
        private String connectErrorMessage;
        private long connectStart;
        private long connectionDuring;
        private long connectionStart;
        private long dnsDuring;
        private String dnsResult;
        private long dnsStart;
        private String hostName;
        private b.C0261b httpStatus;
        private boolean isReportHttpStatus;
        private String method;

        public DefaultEventListener(String str) {
            try {
                boolean zA = b.a().a(str);
                this.isReportHttpStatus = zA;
                if (zA) {
                    this.httpStatus = b.a().c();
                }
            } catch (Exception unused) {
                this.isReportHttpStatus = false;
                this.httpStatus = null;
            }
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void callStart(Call call) {
            super.callStart(call);
            try {
                com.mbridge.msdk.foundation.same.net.a.a().b();
            } catch (Exception unused) {
            }
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.callStart = System.currentTimeMillis();
            if (call != null) {
                try {
                    this.method = call.request().method();
                } catch (Exception unused2) {
                    this.method = "";
                }
            }
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void dnsStart(Call call, String str) {
            super.dnsStart(call, str);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.dnsStart = System.currentTimeMillis();
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void dnsEnd(Call call, String str, List<InetAddress> list) {
            super.dnsEnd(call, str, list);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            try {
                this.dnsDuring = System.currentTimeMillis() - this.dnsStart;
                if (TextUtils.isEmpty(str)) {
                    this.hostName = "unKnown";
                } else {
                    this.hostName = str;
                }
                if (list != null && list.size() != 0) {
                    InetAddress inetAddress = list.get(0);
                    if (inetAddress != null && !TextUtils.isEmpty(inetAddress.getHostAddress())) {
                        this.dnsResult = inetAddress.getHostAddress();
                        return;
                    }
                    this.dnsResult = "unKnown";
                    return;
                }
                this.dnsResult = "unKnown";
            } catch (Exception e) {
                z.d("OkHttpStack", e.getMessage());
                this.hostName = "";
                this.dnsResult = "";
            }
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void connectStart(Call call, InetSocketAddress inetSocketAddress, Proxy proxy) {
            super.connectStart(call, inetSocketAddress, proxy);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.connectStart = System.currentTimeMillis();
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void connectEnd(Call call, InetSocketAddress inetSocketAddress, Proxy proxy, Protocol protocol) {
            super.connectEnd(call, inetSocketAddress, proxy, protocol);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.connectDuring = System.currentTimeMillis() - this.connectStart;
            this.connectErrorMessage = "";
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void connectFailed(Call call, InetSocketAddress inetSocketAddress, Proxy proxy, Protocol protocol, IOException iOException) {
            super.connectFailed(call, inetSocketAddress, proxy, protocol, iOException);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.connectDuring = System.currentTimeMillis() - this.connectStart;
            this.connectErrorMessage = iOException != null ? iOException.getMessage() : "IO Exception";
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void connectionAcquired(Call call, Connection connection) {
            super.connectionAcquired(call, connection);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.connectionStart = System.currentTimeMillis();
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void connectionReleased(Call call, Connection connection) {
            super.connectionReleased(call, connection);
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            this.connectionDuring = System.currentTimeMillis() - this.connectionStart;
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void callEnd(Call call) {
            super.callEnd(call);
            try {
                com.mbridge.msdk.foundation.same.net.a.a().c();
            } catch (Exception unused) {
            }
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            try {
                this.callDuring = System.currentTimeMillis() - this.callStart;
                this.httpStatus.f3473a = 0;
                this.httpStatus.d = this.method;
                this.httpStatus.b = this.callDuring;
                this.httpStatus.e = this.hostName;
                this.httpStatus.g = this.dnsDuring;
                this.httpStatus.h = this.dnsResult;
                this.httpStatus.i = this.connectDuring;
                this.httpStatus.k = this.connectionDuring;
                b.a().a(this.httpStatus);
            } catch (Exception e) {
                z.d("OkHttpStack", e.getMessage());
            }
        }

        @Override // com.mbridge.msdk.thrid.okhttp.EventListener
        public void callFailed(Call call, IOException iOException) {
            super.callFailed(call, iOException);
            try {
                com.mbridge.msdk.foundation.same.net.a.a().d();
            } catch (Exception unused) {
            }
            if (!this.isReportHttpStatus || this.httpStatus == null) {
                return;
            }
            try {
                this.callDuring = System.currentTimeMillis() - this.callStart;
                if (!TextUtils.isEmpty(this.connectErrorMessage)) {
                    this.httpStatus.f3473a = 1;
                    this.httpStatus.j = this.connectErrorMessage;
                } else {
                    this.httpStatus.f3473a = 2;
                }
                this.httpStatus.c = iOException != null ? iOException.getMessage() : "IO Exception";
                this.httpStatus.b = this.callDuring;
                this.httpStatus.e = this.hostName;
                this.httpStatus.d = this.method;
                this.httpStatus.g = this.dnsDuring;
                this.httpStatus.h = this.dnsResult;
                this.httpStatus.i = this.connectDuring;
                this.httpStatus.k = this.connectionDuring;
                b.a().a(this.httpStatus);
            } catch (Exception e) {
                z.d("OkHttpStack", e.getMessage());
            }
        }
    }
}
