package com.mbridge.msdk.foundation.same.net.e;

import android.os.SystemClock;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.same.net.g;
import com.mbridge.msdk.foundation.same.net.i;
import com.mbridge.msdk.foundation.same.net.l;
import com.mbridge.msdk.foundation.tools.z;
import java.io.IOException;
import java.net.ConnectException;
import java.net.MalformedURLException;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import javax.net.ssl.SSLProtocolException;
import org.apache.http.conn.ConnectTimeoutException;

/* JADX INFO: compiled from: BasicNetwork.java */
/* JADX INFO: loaded from: classes2.dex */
public class a implements g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3446a = a.class.getSimpleName();
    private com.mbridge.msdk.foundation.same.net.stack.a b;
    private com.mbridge.msdk.foundation.same.net.c c;

    public a(com.mbridge.msdk.foundation.same.net.stack.a aVar, com.mbridge.msdk.foundation.same.net.c cVar) {
        this.b = aVar;
        this.c = cVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v21 */
    /* JADX WARN: Type inference failed for: r3v27 */
    /* JADX WARN: Type inference failed for: r3v28 */
    /* JADX WARN: Type inference failed for: r3v29 */
    @Override // com.mbridge.msdk.foundation.same.net.g
    public final c a(i<?> iVar) throws com.mbridge.msdk.foundation.same.net.a.a {
        String str;
        String str2;
        String str3;
        String str4;
        byte[] bArrA;
        b bVar;
        int iA;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        int i;
        b bVar2;
        int iA2;
        byte[] bArrA2;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        l lVarM = iVar != null ? iVar.m() : null;
        byte[] bArr = "UnknownHostException ex= ";
        String str10 = "perform-discard-cancelled";
        if ((lVarM != null ? lVarM.a() : 0) <= 0) {
            if (iVar.c()) {
                iVar.a("perform-discard-cancelled");
                this.c.b(iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(-2, null);
            }
            try {
                try {
                    try {
                        iVar.f();
                        b bVarPerformRequest = this.b.performRequest(iVar);
                        try {
                            iA2 = bVarPerformRequest.a();
                            bArrA2 = iVar.a(bVarPerformRequest, this.c);
                            try {
                                str7 = "SocketTimeoutException ex= ";
                                str6 = "UnknownHostException ex= ";
                                str5 = "ConnectTimeoutException ex= ";
                                str9 = "IOException ex= ";
                                str8 = "ConnectException ex= ";
                                bVar2 = bVarPerformRequest;
                                i = 15;
                            } catch (IOException e) {
                                e = e;
                                bArr = bArrA2;
                                str9 = "IOException ex= ";
                                bVar2 = bVarPerformRequest;
                                i = 15;
                            }
                        } catch (IOException e2) {
                            e = e2;
                            str9 = "IOException ex= ";
                            bVar2 = bVarPerformRequest;
                            i = 15;
                            bArr = 0;
                        }
                    } catch (IOException e3) {
                        e = e3;
                        str9 = "IOException ex= ";
                        i = 15;
                        bArr = 0;
                        bVar2 = null;
                    }
                } catch (MalformedURLException e4) {
                    a("MalformedURLException ex= " + e4.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                    throw new com.mbridge.msdk.foundation.same.net.a.a(4, null);
                } catch (SSLProtocolException e5) {
                    a("SSLProtocolException ex= " + e5.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                    throw new com.mbridge.msdk.foundation.same.net.a.a(11, null);
                }
            } catch (ConnectException e6) {
                e = e6;
                str8 = "ConnectException ex= ";
            } catch (SocketTimeoutException e7) {
                e = e7;
                str7 = "SocketTimeoutException ex= ";
            } catch (UnknownHostException e8) {
                e = e8;
                str6 = "UnknownHostException ex= ";
            } catch (ConnectTimeoutException e9) {
                e = e9;
                str5 = "ConnectTimeoutException ex= ";
            }
            try {
                try {
                    a(SystemClock.elapsedRealtime() - jElapsedRealtime, iVar, bArrA2, iA2);
                    try {
                        if (iA2 < 200 || iA2 > 399) {
                            throw new IOException();
                        }
                        return new c(iA2, bArrA2, bVar2.b());
                    } catch (IOException e10) {
                        e = e10;
                    }
                } catch (IOException e11) {
                    e = e11;
                    bArr = bArrA2;
                }
            } catch (ConnectException e12) {
                e = e12;
                a(str8 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(12, null);
            } catch (SocketTimeoutException e13) {
                e = e13;
                a(str7 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(10, null);
            } catch (UnknownHostException e14) {
                e = e14;
                a(str6 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(9, null);
            } catch (ConnectTimeoutException e15) {
                e = e15;
                a(str5 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(3, null);
            }
            a(str9 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
            if (bVar2 == null) {
                throw new com.mbridge.msdk.foundation.same.net.a.a(14, null);
            }
            int iA3 = bVar2.a();
            if (bArr != 0) {
                c cVar = new c(iA3, bArr, bVar2.b());
                if (iA3 >= 400 && iA3 <= 499) {
                    throw new com.mbridge.msdk.foundation.same.net.a.a(6, cVar);
                }
                if (iA3 >= 500 && iA3 <= 599) {
                    throw new com.mbridge.msdk.foundation.same.net.a.a(7, cVar);
                }
                throw new com.mbridge.msdk.foundation.same.net.a.a(2, cVar);
            }
            throw new com.mbridge.msdk.foundation.same.net.a.a(i, null);
        }
        String str11 = "ConnectException ex= ";
        String str12 = "SocketTimeoutException ex= ";
        String str13 = "ConnectTimeoutException ex= ";
        while (!iVar.c()) {
            try {
                try {
                    try {
                        iVar.f();
                        b bVarPerformRequest2 = this.b.performRequest(iVar);
                        try {
                            iA = bVarPerformRequest2.a();
                            bArrA = iVar.a(bVarPerformRequest2, this.c);
                            try {
                                bVar = bVarPerformRequest2;
                                str2 = str12;
                                str = str13;
                                str3 = str11;
                                str4 = str10;
                            } catch (IOException e16) {
                                e = e16;
                                bVar = bVarPerformRequest2;
                                str2 = str12;
                                str = str13;
                                str3 = str11;
                                str4 = str10;
                            }
                        } catch (IOException e17) {
                            e = e17;
                            bVar = bVarPerformRequest2;
                            str2 = str12;
                            str = str13;
                            str3 = str11;
                            str4 = str10;
                            bArrA = null;
                        }
                    } catch (IOException e18) {
                        e = e18;
                        str2 = str12;
                        str = str13;
                        str3 = str11;
                        str4 = str10;
                        bArrA = null;
                        bVar = null;
                    }
                } catch (ConnectException e19) {
                    e = e19;
                    str3 = str11;
                } catch (SocketTimeoutException e20) {
                    e = e20;
                    str2 = str12;
                } catch (ConnectTimeoutException e21) {
                    e = e21;
                    str = str13;
                }
                try {
                    try {
                        a(SystemClock.elapsedRealtime() - jElapsedRealtime, iVar, bArrA, iA);
                        try {
                            if (iA < 200 || iA > 399) {
                                throw new IOException();
                            }
                            return new c(iA, bArrA, bVar.b());
                        } catch (IOException e22) {
                            e = e22;
                        }
                    } catch (IOException e23) {
                        e = e23;
                        bArrA = bArrA;
                    }
                } catch (ConnectException e24) {
                    e = e24;
                    a(str3 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                    throw new com.mbridge.msdk.foundation.same.net.a.a(12, null);
                } catch (SocketTimeoutException e25) {
                    e = e25;
                    a(str2 + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                    throw new com.mbridge.msdk.foundation.same.net.a.a(10, null);
                } catch (ConnectTimeoutException e26) {
                    e = e26;
                    a(str + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                    throw new com.mbridge.msdk.foundation.same.net.a.a(3, null);
                }
                a("IOException ex= " + e.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                if (bVar == null) {
                    throw new com.mbridge.msdk.foundation.same.net.a.a(14, null);
                }
                int iA4 = bVar.a();
                if (bArrA != null) {
                    c cVar2 = new c(iA4, bArrA, bVar.b());
                    if (iA4 >= 400 && iA4 <= 499) {
                        throw new com.mbridge.msdk.foundation.same.net.a.a(6, cVar2);
                    }
                    if (iA4 >= 500 && iA4 <= 599) {
                        throw new com.mbridge.msdk.foundation.same.net.a.a(7, cVar2);
                    }
                    throw new com.mbridge.msdk.foundation.same.net.a.a(2, cVar2);
                }
                com.mbridge.msdk.foundation.same.net.a.a aVar = new com.mbridge.msdk.foundation.same.net.a.a(15, null);
                if (iVar.m().a(aVar)) {
                    this.c.e(iVar);
                    str12 = str2;
                    str13 = str;
                    str11 = str3;
                    str10 = str4;
                } else {
                    throw aVar;
                }
            } catch (MalformedURLException e27) {
                a("MalformedURLException ex= " + e27.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(4, null);
            } catch (UnknownHostException e28) {
                a("UnknownHostException ex= " + e28.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(9, null);
            } catch (SSLProtocolException e29) {
                a("SSLProtocolException ex= " + e29.getMessage(), SystemClock.elapsedRealtime() - jElapsedRealtime, iVar);
                throw new com.mbridge.msdk.foundation.same.net.a.a(11, null);
            }
        }
        iVar.a(str10);
        this.c.b(iVar);
        throw new com.mbridge.msdk.foundation.same.net.a.a(-2, null);
    }

    private void a(long j, i<?> iVar, byte[] bArr, int i) {
        if (MBridgeConstans.DEBUG) {
            try {
                if (j > 3000) {
                    String str = f3446a;
                    Object[] objArr = new Object[6];
                    objArr[0] = iVar.b();
                    objArr[1] = Integer.valueOf(iVar.a());
                    objArr[2] = Long.valueOf(j);
                    objArr[3] = bArr != null ? Integer.valueOf(bArr.length) : "null";
                    objArr[4] = Integer.valueOf(i);
                    objArr[5] = Integer.valueOf(iVar.m().c());
                    z.b(str, String.format("Slow HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]", objArr));
                    return;
                }
                String str2 = f3446a;
                Object[] objArr2 = new Object[6];
                objArr2[0] = iVar.b();
                objArr2[1] = Integer.valueOf(iVar.a());
                objArr2[2] = Long.valueOf(j);
                objArr2[3] = bArr != null ? Integer.valueOf(bArr.length) : "null";
                objArr2[4] = Integer.valueOf(i);
                objArr2[5] = Integer.valueOf(iVar.m().c());
                z.b(str2, String.format("Normal HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]", objArr2));
            } catch (Exception unused) {
            }
        }
    }

    private void a(String str, long j, i<?> iVar) {
        if (MBridgeConstans.DEBUG) {
            try {
                String str2 = f3446a;
                Object[] objArr = new Object[4];
                objArr[0] = iVar.b();
                objArr[1] = Long.valueOf(j);
                if (str == null) {
                    str = "null";
                }
                objArr[2] = str;
                objArr[3] = Integer.valueOf(iVar.m().c());
                z.b(str2, String.format("HTTP exception for request=<%s> [lifetime=%d], [size=%s], [retryCount=%s]", objArr));
            } catch (Exception unused) {
            }
        }
    }
}
