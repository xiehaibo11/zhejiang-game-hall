package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.net.RequestHeaders;
import com.bianfeng.datafunsdk.net.ResponseData;
import com.bianfeng.datafunsdk.net.ResponseHeaders;

/* JADX INFO: compiled from: HttpPostRequest.java */
/* JADX INFO: loaded from: classes.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1408a;
    public byte[] b;
    public RequestHeaders c;
    public p d;
    public ResponseHeaders e;
    public ResponseData f;

    public q(String str, byte[] bArr, p pVar) {
        this.f1408a = str;
        this.b = bArr;
        this.d = pVar;
    }

    public void a(RequestHeaders requestHeaders) {
        this.c = requestHeaders;
    }

    public void a(ResponseData responseData) {
        this.f = responseData;
    }

    public void a(ResponseHeaders responseHeaders) {
        this.e = responseHeaders;
    }

    /* JADX WARN: Removed duplicated region for block: B:146:0x0338 A[Catch: Exception -> 0x0334, TryCatch #6 {Exception -> 0x0334, blocks: (B:142:0x0330, B:146:0x0338, B:148:0x033d), top: B:172:0x0330 }] */
    /* JADX WARN: Removed duplicated region for block: B:148:0x033d A[Catch: Exception -> 0x0334, TRY_LEAVE, TryCatch #6 {Exception -> 0x0334, blocks: (B:142:0x0330, B:146:0x0338, B:148:0x033d), top: B:172:0x0330 }] */
    /* JADX WARN: Removed duplicated region for block: B:160:0x0368 A[Catch: Exception -> 0x0364, TryCatch #13 {Exception -> 0x0364, blocks: (B:156:0x0360, B:160:0x0368, B:162:0x036d), top: B:180:0x0360 }] */
    /* JADX WARN: Removed duplicated region for block: B:162:0x036d A[Catch: Exception -> 0x0364, TRY_LEAVE, TryCatch #13 {Exception -> 0x0364, blocks: (B:156:0x0360, B:160:0x0368, B:162:0x036d), top: B:180:0x0360 }] */
    /* JADX WARN: Removed duplicated region for block: B:172:0x0330 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:180:0x0360 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public int a() throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 885
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.datafunsdk.q.a():int");
    }
}
