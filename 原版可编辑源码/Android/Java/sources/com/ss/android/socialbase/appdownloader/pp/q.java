package com.ss.android.socialbase.appdownloader.pp;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.network.IDownloadHttpConnection;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.util.LinkedHashMap;
import java.util.Map;

public class q {
    private static volatile q df = null;
    private static int rg = 8;
    private rg<Integer, Bitmap> q;

    private static class rg<K, T> extends LinkedHashMap<K, T> {
        final int rg;

        public rg(int i, int i2) {
            super(i2, 0.75f, true);
            this.rg = i;
        }

        @Override
        protected boolean removeEldestEntry(Map.Entry<K, T> entry) {
            return size() > this.rg;
        }
    }

    public static q rg() {
        if (df == null) {
            synchronized (q.class) {
                if (df == null) {
                    df = new q();
                }
            }
        }
        return df;
    }

    private q() {
        this.q = null;
        int i = rg;
        this.q = new rg<>(i, i / 2);
    }

    public Bitmap rg(int i) {
        return this.q.get(Integer.valueOf(i));
    }

    public void rg(final int i, final String str) {
        if (TextUtils.isEmpty(str) || rg(i) != null) {
            return;
        }
        DownloadComponentManager.getIOThreadExecutor().submit(new Runnable() {
            /* JADX WARN: Multi-variable type inference failed */
            @Override
            public void run() throws Throwable {
                ByteArrayOutputStream byteArrayOutputStreamDf;
                ByteArrayInputStream byteArrayInputStream;
                ByteArrayInputStream byteArrayInputStream2;
                Throwable th;
                InputStream inputStream;
                Exception e;
                IDownloadHttpConnection iDownloadHttpConnectionDownloadWithConnection;
                int i2 = 4;
                i2 = 4;
                i2 = 4;
                i2 = 4;
                i2 = 4;
                try {
                    try {
                        iDownloadHttpConnectionDownloadWithConnection = DownloadComponentManager.downloadWithConnection(true, 0, str, null);
                    } catch (Throwable th2) {
                        th = th2;
                    }
                } catch (Exception e2) {
                    byteArrayOutputStreamDf = null;
                    byteArrayInputStream = null;
                    byteArrayInputStream2 = null;
                    e = e2;
                    inputStream = null;
                } catch (Throwable th3) {
                    byteArrayOutputStreamDf = null;
                    byteArrayInputStream = null;
                    byteArrayInputStream2 = null;
                    th = th3;
                    inputStream = null;
                }
                if (iDownloadHttpConnectionDownloadWithConnection != null) {
                    inputStream = iDownloadHttpConnectionDownloadWithConnection.getInputStream();
                    try {
                        byteArrayOutputStreamDf = q.df(inputStream);
                        try {
                            byteArrayInputStream = new ByteArrayInputStream(byteArrayOutputStreamDf.toByteArray());
                            try {
                                byteArrayInputStream2 = new ByteArrayInputStream(byteArrayOutputStreamDf.toByteArray());
                                try {
                                    BitmapFactory.Options options = new BitmapFactory.Options();
                                    options.inJustDecodeBounds = true;
                                    BitmapFactory.decodeStream(byteArrayInputStream, null, options);
                                    int i3 = options.outWidth;
                                    int i4 = options.outHeight;
                                    int iRg = com.ss.android.socialbase.appdownloader.q.rg(DownloadComponentManager.getAppContext(), 44.0f);
                                    options.inSampleSize = q.rg(iRg, iRg, options);
                                    options.inJustDecodeBounds = false;
                                    q.this.q.put(Integer.valueOf(i), BitmapFactory.decodeStream(byteArrayInputStream2, null, options));
                                    Closeable[] closeableArr = {inputStream, byteArrayOutputStreamDf, byteArrayInputStream, byteArrayInputStream2};
                                    DownloadUtils.safeClose(closeableArr);
                                    i2 = closeableArr;
                                } catch (Exception e3) {
                                    e = e3;
                                    e.printStackTrace();
                                    Closeable[] closeableArr2 = {inputStream, byteArrayOutputStreamDf, byteArrayInputStream, byteArrayInputStream2};
                                    DownloadUtils.safeClose(closeableArr2);
                                    i2 = closeableArr2;
                                }
                            } catch (Exception e4) {
                                byteArrayInputStream2 = null;
                                e = e4;
                            } catch (Throwable th4) {
                                byteArrayInputStream2 = null;
                                th = th4;
                                Closeable[] closeableArr3 = new Closeable[i2];
                                closeableArr3[0] = inputStream;
                                closeableArr3[1] = byteArrayOutputStreamDf;
                                closeableArr3[2] = byteArrayInputStream;
                                closeableArr3[3] = byteArrayInputStream2;
                                DownloadUtils.safeClose(closeableArr3);
                                throw th;
                            }
                        } catch (Exception e5) {
                            byteArrayInputStream2 = null;
                            e = e5;
                            byteArrayInputStream = null;
                        } catch (Throwable th5) {
                            byteArrayInputStream2 = null;
                            th = th5;
                            byteArrayInputStream = null;
                        }
                    } catch (Exception e6) {
                        byteArrayInputStream = null;
                        byteArrayInputStream2 = null;
                        e = e6;
                        byteArrayOutputStreamDf = null;
                    } catch (Throwable th6) {
                        byteArrayInputStream = null;
                        byteArrayInputStream2 = null;
                        th = th6;
                        byteArrayOutputStreamDf = null;
                    }
                }
                DownloadUtils.safeClose(null, null, null, null);
                return;
                e.printStackTrace();
                Closeable[] closeableArr22 = {inputStream, byteArrayOutputStreamDf, byteArrayInputStream, byteArrayInputStream2};
                DownloadUtils.safeClose(closeableArr22);
                i2 = closeableArr22;
            }
        });
    }

    public static int rg(int i, int i2, BitmapFactory.Options options) {
        if (options.outWidth > i || options.outHeight > i2) {
            return Math.min(Math.round(options.outWidth / i), Math.round(options.outHeight / i2));
        }
        return 1;
    }

    private static ByteArrayOutputStream df(InputStream inputStream) throws IOException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        byte[] bArr = new byte[1024];
        while (true) {
            int i = inputStream.read(bArr);
            if (i > -1) {
                byteArrayOutputStream.write(bArr, 0, i);
            } else {
                byteArrayOutputStream.flush();
                return byteArrayOutputStream;
            }
        }
    }
}
