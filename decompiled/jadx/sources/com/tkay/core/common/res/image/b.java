package com.tkay.core.common.res.image;

import android.os.SystemClock;
import com.ss.android.download.api.constant.BaseConstants;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.SocketTimeoutException;
import java.net.URL;
import java.util.Map;
import org.apache.http.conn.ConnectTimeoutException;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f6308a = getClass().getSimpleName();
    protected String c;
    protected boolean d;
    protected long e;
    protected long f;
    protected long g;
    protected long h;
    protected long i;

    private static int g() {
        return BaseConstants.Time.MINUTE;
    }

    private static int h() {
        return 20000;
    }

    protected abstract Map<String, String> a();

    protected abstract void a(com.tkay.core.common.l.b.b bVar);

    protected abstract void a(String str, String str2);

    protected abstract boolean a(InputStream inputStream);

    protected abstract void b();

    protected abstract void c();

    public b(String str) {
        this.c = str;
    }

    public final void d() {
        this.d = false;
        a(new AnonymousClass1());
    }

    private void e() {
        this.d = true;
    }

    /* JADX INFO: renamed from: com.tkay.core.common.res.image.b$1, reason: invalid class name */
    final class AnonymousClass1 extends com.tkay.core.common.l.b.b {
        AnonymousClass1() {
        }

        @Override // com.tkay.core.common.l.b.b
        public final void a() throws Throwable {
            try {
                b(b.this.c);
            } catch (Exception e) {
                String unused = b.this.f6308a;
                e.getMessage();
                b.this.a(c.f6310a, e.getMessage());
            } catch (OutOfMemoryError e2) {
                e = e2;
                System.gc();
                b.this.a(c.f6310a, e.getMessage());
            } catch (StackOverflowError e3) {
                e = e3;
                System.gc();
                b.this.a(c.f6310a, e.getMessage());
            }
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r1v10, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v11 */
        /* JADX WARN: Type inference failed for: r1v13 */
        /* JADX WARN: Type inference failed for: r1v14 */
        /* JADX WARN: Type inference failed for: r1v15 */
        /* JADX WARN: Type inference failed for: r1v16 */
        /* JADX WARN: Type inference failed for: r1v17 */
        /* JADX WARN: Type inference failed for: r1v18 */
        /* JADX WARN: Type inference failed for: r1v19 */
        /* JADX WARN: Type inference failed for: r1v2 */
        /* JADX WARN: Type inference failed for: r1v3 */
        /* JADX WARN: Type inference failed for: r1v33 */
        /* JADX WARN: Type inference failed for: r1v4, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v41 */
        /* JADX WARN: Type inference failed for: r1v42 */
        /* JADX WARN: Type inference failed for: r1v43 */
        /* JADX WARN: Type inference failed for: r1v44 */
        /* JADX WARN: Type inference failed for: r1v45 */
        /* JADX WARN: Type inference failed for: r1v46 */
        /* JADX WARN: Type inference failed for: r1v47 */
        /* JADX WARN: Type inference failed for: r1v48 */
        /* JADX WARN: Type inference failed for: r1v5, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v6, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v7, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v8, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v9, types: [java.net.HttpURLConnection] */
        private void b(String str) throws Throwable {
            HttpURLConnection httpURLConnection;
            b.this.e = System.currentTimeMillis();
            b.this.f = SystemClock.elapsedRealtime();
            ?? r1 = 0;
            r1 = 0;
            r1 = 0;
            r1 = 0;
            r1 = 0;
            r1 = 0;
            r1 = 0;
            try {
                try {
                    String unused = b.this.f6308a;
                    httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                } catch (Throwable th) {
                    th = th;
                }
                try {
                    httpURLConnection.setInstanceFollowRedirects(false);
                    Map<String, String> mapA = b.this.a();
                    if (mapA != null && mapA.size() > 0) {
                        for (String str2 : mapA.keySet()) {
                            httpURLConnection.addRequestProperty(str2, mapA.get(str2));
                            String unused2 = b.this.f6308a;
                            StringBuilder sb = new StringBuilder("REQUEST ADDED HEADER: \n");
                            sb.append(str2);
                            sb.append("  :  ");
                            sb.append(mapA.get(str2));
                        }
                    }
                } catch (OutOfMemoryError e) {
                    e = e;
                    r1 = httpURLConnection;
                    System.gc();
                    String unused3 = b.this.f6308a;
                    e.getMessage();
                    b.this.a(c.f6310a, e.getMessage());
                    if (r1 != 0) {
                        r1.disconnect();
                        return;
                    }
                } catch (StackOverflowError e2) {
                    e = e2;
                    r1 = httpURLConnection;
                    System.gc();
                    String unused4 = b.this.f6308a;
                    e.getMessage();
                    b.this.a(c.f6310a, e.getMessage());
                    if (r1 != 0) {
                        r1.disconnect();
                        return;
                    }
                } catch (Error e3) {
                    e = e3;
                    r1 = httpURLConnection;
                    System.gc();
                    String unused5 = b.this.f6308a;
                    e.getMessage();
                    b.this.a(c.f6310a, e.getMessage());
                    if (r1 != 0) {
                        r1.disconnect();
                        return;
                    }
                } catch (SocketTimeoutException e4) {
                    e = e4;
                    r1 = httpURLConnection;
                    b.this.a(c.f6310a, e.getMessage());
                    String unused6 = b.this.f6308a;
                    if (r1 != 0) {
                        r1.disconnect();
                    }
                } catch (ConnectTimeoutException e5) {
                    e = e5;
                    r1 = httpURLConnection;
                    b.this.a(c.f6310a, e.getMessage());
                    if (r1 != 0) {
                        r1.disconnect();
                        return;
                    }
                } catch (Exception e6) {
                    e = e6;
                    r1 = httpURLConnection;
                    String unused7 = b.this.f6308a;
                    e.getMessage();
                    b.this.a(c.f6310a, e.getMessage());
                    if (r1 != 0) {
                        r1.disconnect();
                        return;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    r1 = httpURLConnection;
                    if (r1 != 0) {
                        r1.disconnect();
                    }
                    throw th;
                }
            } catch (OutOfMemoryError e7) {
                e = e7;
            } catch (StackOverflowError e8) {
                e = e8;
            } catch (Error e9) {
                e = e9;
            } catch (SocketTimeoutException e10) {
                e = e10;
            } catch (ConnectTimeoutException e11) {
                e = e11;
            } catch (Exception e12) {
                e = e12;
            }
            if (b.this.d) {
                b.this.a(c.b, "Task had been canceled.");
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                    return;
                }
                return;
            }
            httpURLConnection.setConnectTimeout(BaseConstants.Time.MINUTE);
            httpURLConnection.connect();
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode != 200) {
                String unused8 = b.this.f6308a;
                StringBuilder sb2 = new StringBuilder("http respond status code is ");
                sb2.append(responseCode);
                sb2.append(" ! url=");
                sb2.append(str);
                if (responseCode != 302 && responseCode != 301 && responseCode != 307) {
                    b.this.a(c.f6310a, httpURLConnection.getResponseMessage());
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                        return;
                    }
                    return;
                }
                if (b.this.d) {
                    b.this.a(c.b, "Task had been canceled.");
                } else {
                    String headerField = httpURLConnection.getHeaderField("Location");
                    if (headerField != null) {
                        if (!headerField.toLowerCase().startsWith("http")) {
                            b.this.a(c.f6310a, "Final url is wrong:".concat(String.valueOf(headerField)));
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                                return;
                            }
                            return;
                        }
                        b(headerField);
                    }
                }
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                    return;
                }
                return;
            }
            if (b.this.d) {
                b.this.a(c.b, "Task had been canceled.");
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                    return;
                }
                return;
            }
            b.this.i = httpURLConnection.getContentLength();
            InputStream inputStream = httpURLConnection.getInputStream();
            boolean zA = b.this.a(inputStream);
            if (inputStream != null) {
                inputStream.close();
            }
            b.this.g = System.currentTimeMillis();
            b.this.h = SystemClock.elapsedRealtime();
            if (zA) {
                String unused9 = b.this.f6308a;
                StringBuilder sb3 = new StringBuilder("download success --> ");
                String str3 = b.this.c;
                sb3.append(str3);
                b.this.c();
                r1 = str3;
            } else {
                String unused10 = b.this.f6308a;
                new StringBuilder("download fail --> ").append(b.this.c);
                b.this.a(c.f6310a, "Save fail!");
                r1 = "Save fail!";
            }
            if (httpURLConnection != null) {
                httpURLConnection.disconnect();
            }
        }
    }

    private void f() {
        a(new AnonymousClass1());
    }
}
