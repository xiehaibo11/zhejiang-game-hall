package com.sigmob.sdk.videocache;

import com.czhj.sdk.logger.SigmobLog;
import java.io.IOException;
import java.io.OutputStream;
import java.net.Proxy;
import java.net.ProxySelector;
import java.net.Socket;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

class m {
    private static final String a = "ping";
    private static final String b = "ping ok";
    private final ExecutorService c = Executors.newSingleThreadExecutor();
    private final String d;
    private final int e;

    private class a implements Callable<Boolean> {
        private a() {
        }

        @Override
        public Boolean call() throws Exception {
            return Boolean.valueOf(m.this.b());
        }
    }

    m(String str, int i) {
        this.d = (String) n.a(str);
        this.e = i;
    }

    private List<Proxy> a() {
        try {
            return ProxySelector.getDefault().select(new URI(c()));
        } catch (URISyntaxException e) {
            throw new IllegalStateException(e);
        }
    }

    private boolean b() throws p {
        j jVar = new j(c());
        try {
            byte[] bytes = b.getBytes();
            jVar.a(0L);
            byte[] bArr = new byte[bytes.length];
            jVar.a(bArr);
            boolean zEquals = Arrays.equals(bytes, bArr);
            SigmobLog.i("Ping response: `" + new String(bArr) + "`, pinged? " + zEquals);
            return zEquals;
        } catch (p e) {
            SigmobLog.e("Error reading ping response", e);
            return false;
        } finally {
            jVar.b();
        }
    }

    private String c() {
        return String.format(Locale.US, "http://%s:%d/%s", this.d, Integer.valueOf(this.e), a);
    }

    void a(Socket socket) throws IOException {
        OutputStream outputStream = socket.getOutputStream();
        outputStream.write("HTTP/1.1 200 OK\n\n".getBytes());
        outputStream.write(b.getBytes());
    }

    boolean a(int i, int i2) {
        n.a(i >= 1);
        n.a(i2 > 0);
        int i3 = 0;
        while (i3 < i) {
            try {
            } catch (InterruptedException e) {
                e = e;
                SigmobLog.w("Error pinging server due to unexpected error", e);
            } catch (ExecutionException e2) {
                e = e2;
                SigmobLog.w("Error pinging server due to unexpected error", e);
            } catch (TimeoutException unused) {
                SigmobLog.w("Error pinging server (attempt: " + i3 + ", timeout: " + i2 + "). ");
            }
            if (((Boolean) this.c.submit(new a()).get(i2, TimeUnit.MILLISECONDS)).booleanValue()) {
                return true;
            }
            i3++;
            i2 *= 2;
        }
        String str = String.format(Locale.US, "Error pinging server (attempts: %d, max timeout: %d). If you see this message, please, report at https://github.com/danikula/AndroidVideoCache/issues/134. Default proxies are: %s", Integer.valueOf(i3), Integer.valueOf(i2 / 2), a());
        SigmobLog.e(str, new p(str));
        return false;
    }

    boolean a(String str) {
        return a.equals(str);
    }
}
