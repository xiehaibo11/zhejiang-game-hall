package com.tkay.expressad.videocommon.b;

import android.webkit.URLUtil;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.videocommon.b.f;
import com.tkay.expressad.videocommon.b.g;
import java.io.ByteArrayOutputStream;
import java.net.HttpURLConnection;
import java.net.URL;

public final class e {
    public static final String a = "<tkayloadend></tkayloadend>";
    private static final String b = "DownLoadUtils";
    private static final int c = 20000;
    private static final int d = 30000;

    public static void a(final String str, final g.c cVar) {
        try {
            if (!w.a(str) && URLUtil.isNetworkUrl(str)) {
                f.a.a.a(new com.tkay.expressad.foundation.g.g.a() {
                    final boolean f = true;

                    @Override
                    public final void b() {
                    }

                    @Override
                    public final void c() {
                    }

                    /* JADX WARN: Can't wrap try/catch for region: R(15:0|2|102|(2:100|3)|(8:5|6|114|7|(8:110|8|(1:10)(1:116)|45|(1:47)|(1:51)|(3:109|55|(2:60|61))|(2:75|(2:77|78)(1:118))(2:71|(2:73|74)(1:117)))|11|(4:13|103|14|(2:16|17))(1:20)|21)(2:30|31)|107|32|(1:34)|(1:36)|37|(0)|(1:65)|75|(0)(0)|(1:(0))) */
                    /* JADX WARN: Code restructure failed: missing block: B:38:0x008a, code lost:
                    
                        r2 = e;
                     */
                    /* JADX WARN: Multi-variable type inference failed */
                    /* JADX WARN: Removed duplicated region for block: B:105:0x0126 A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:109:0x00bf A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:118:? A[RETURN, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:47:0x00aa A[Catch: Exception -> 0x00ae, TRY_ENTER, TryCatch #1 {Exception -> 0x00ae, blocks: (B:34:0x0080, B:36:0x0085, B:47:0x00aa, B:51:0x00b2), top: B:102:0x0002 }] */
                    /* JADX WARN: Removed duplicated region for block: B:51:0x00b2 A[Catch: Exception -> 0x00ae, TRY_LEAVE, TryCatch #1 {Exception -> 0x00ae, blocks: (B:34:0x0080, B:36:0x0085, B:47:0x00aa, B:51:0x00b2), top: B:102:0x0002 }] */
                    /* JADX WARN: Removed duplicated region for block: B:77:0x00f8 A[Catch: all -> 0x00d0, TRY_LEAVE, TryCatch #8 {all -> 0x00d0, blocks: (B:55:0x00bf, B:58:0x00c5, B:60:0x00c8, B:65:0x00d4, B:67:0x00da, B:69:0x00e0, B:71:0x00e8, B:73:0x00ec, B:75:0x00f4, B:77:0x00f8), top: B:109:0x00bf }] */
                    /* JADX WARN: Removed duplicated region for block: B:96:0x012e A[Catch: Exception -> 0x012a, TRY_LEAVE, TryCatch #4 {Exception -> 0x012a, blocks: (B:92:0x0126, B:96:0x012e), top: B:105:0x0126 }] */
                    /* JADX WARN: Type inference failed for: r0v0 */
                    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Exception] */
                    /* JADX WARN: Type inference failed for: r0v2 */
                    /* JADX WARN: Type inference failed for: r0v20, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r0v21, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r0v22 */
                    /* JADX WARN: Type inference failed for: r0v24 */
                    /* JADX WARN: Type inference failed for: r0v26 */
                    /* JADX WARN: Type inference failed for: r0v27 */
                    /* JADX WARN: Type inference failed for: r0v29 */
                    /* JADX WARN: Type inference failed for: r0v30 */
                    /* JADX WARN: Type inference failed for: r0v5 */
                    /* JADX WARN: Type inference failed for: r3v0 */
                    /* JADX WARN: Type inference failed for: r3v1 */
                    /* JADX WARN: Type inference failed for: r3v14, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r3v19 */
                    /* JADX WARN: Type inference failed for: r3v2, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r3v4 */
                    @Override
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public final void a() throws Throwable {
                        String message;
                        ?? inputStream;
                        ByteArrayOutputStream byteArrayOutputStream;
                        Throwable th;
                        byte[] byteArray;
                        String str2;
                        HttpURLConnection httpURLConnection;
                        int responseCode;
                        boolean z;
                        byte[] bArr;
                        ?? e = 0;
                        str = null;
                        String str3 = null;
                        e = 0;
                        e = 0;
                        boolean z2 = false;
                        try {
                            try {
                                try {
                                    httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                                    httpURLConnection.setReadTimeout(30000);
                                    httpURLConnection.setConnectTimeout(20000);
                                    responseCode = httpURLConnection.getResponseCode();
                                } catch (Throwable th2) {
                                    th = th2;
                                    inputStream = e;
                                }
                            } catch (Exception e2) {
                                e = e2;
                                str2 = null;
                                byteArray = null;
                                byteArrayOutputStream = null;
                            } catch (Throwable th3) {
                                th = th3;
                                inputStream = 0;
                                byteArrayOutputStream = null;
                            }
                        } catch (Exception e3) {
                            e = e3;
                            e.printStackTrace();
                            message = e.getMessage();
                        }
                        if (responseCode == 200) {
                            inputStream = httpURLConnection.getInputStream();
                            try {
                                bArr = new byte[6144];
                                byteArrayOutputStream = new ByteArrayOutputStream();
                            } catch (Exception e4) {
                                e = e4;
                                byteArray = null;
                                byteArrayOutputStream = null;
                                e = inputStream;
                                str2 = null;
                            } catch (Throwable th4) {
                                th = th4;
                                byteArrayOutputStream = null;
                                inputStream = inputStream;
                                th = th;
                                if (inputStream != 0) {
                                }
                                if (byteArrayOutputStream != null) {
                                }
                                throw th;
                            }
                            while (true) {
                                try {
                                    try {
                                        int i = inputStream.read(bArr);
                                        if (i == -1) {
                                            break;
                                        } else {
                                            byteArrayOutputStream.write(bArr, 0, i);
                                        }
                                    } catch (Exception e5) {
                                        e = e5;
                                        byteArray = null;
                                        e = inputStream;
                                        str2 = null;
                                    }
                                    if (z2) {
                                        try {
                                            if (this.f && byteArray != null && byteArray.length > 0) {
                                                cVar.a(byteArray, str);
                                                return;
                                            }
                                        } catch (Throwable th5) {
                                            if (com.tkay.expressad.b.a) {
                                                th5.printStackTrace();
                                            }
                                            g.c cVar2 = cVar;
                                            if (cVar2 != null) {
                                                try {
                                                    cVar2.a(th5.getMessage());
                                                    return;
                                                } catch (Exception e6) {
                                                    e6.printStackTrace();
                                                    return;
                                                }
                                            }
                                            return;
                                        }
                                    }
                                    if (!z2 && w.b(str2) && str2.length() > 0 && str2.contains(e.a)) {
                                        if (cVar != null) {
                                            cVar.a(byteArray, str);
                                            return;
                                        }
                                        return;
                                    } else {
                                        if (cVar == null) {
                                            cVar.a("content write failed:".concat(String.valueOf(message)));
                                            return;
                                        }
                                        return;
                                    }
                                } catch (Throwable th6) {
                                    th = th6;
                                    if (inputStream != 0) {
                                        try {
                                            inputStream.close();
                                        } catch (Exception e7) {
                                            e7.printStackTrace();
                                            e7.getMessage();
                                            throw th;
                                        }
                                    }
                                    if (byteArrayOutputStream != null) {
                                        byteArrayOutputStream.close();
                                    }
                                    throw th;
                                }
                                message = e.getMessage();
                                new StringBuilder("getStringFromUrl failed ").append(e.getLocalizedMessage());
                                if (e != 0) {
                                    e.close();
                                }
                                if (byteArrayOutputStream != null) {
                                    byteArrayOutputStream.close();
                                }
                            }
                            if (byteArrayOutputStream.toByteArray() != null) {
                                byteArray = byteArrayOutputStream.toByteArray();
                                try {
                                    if (!this.f) {
                                        str3 = new String(byteArray);
                                    }
                                } catch (Exception e8) {
                                    e = e8;
                                    str2 = null;
                                    e = inputStream;
                                }
                            } else {
                                byteArray = null;
                            }
                            z = true;
                            message = "";
                            str2 = str3;
                            e = inputStream;
                        } else {
                            message = "responseCode is ".concat(String.valueOf(responseCode));
                            str2 = null;
                            byteArray = null;
                            byteArrayOutputStream = null;
                            z = false;
                        }
                        httpURLConnection.disconnect();
                        if (e != 0) {
                            e.close();
                        }
                        if (byteArrayOutputStream != null) {
                            byteArrayOutputStream.close();
                        }
                        z2 = z;
                        if (z2) {
                        }
                        if (!z2) {
                        }
                        if (cVar == null) {
                        }
                    }
                });
                return;
            }
            cVar.a("url is error");
        } catch (Throwable th) {
            if (com.tkay.expressad.b.a) {
                th.printStackTrace();
            }
        }
    }
}
