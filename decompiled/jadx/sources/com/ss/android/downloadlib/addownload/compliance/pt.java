package com.ss.android.downloadlib.addownload.compliance;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.Chain;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.network.IDownloadHttpConnection;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.ss.android.socialbase.downloader.utils.LruCache;
import java.io.BufferedInputStream;
import java.lang.ref.SoftReference;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pt extends LruCache<Long, Bitmap> {
    private final Map<Long, SoftReference<rg>> rg;

    public interface rg {
        void rg(Bitmap bitmap);
    }

    private static class df {
        private static pt rg = new pt();
    }

    public static pt rg() {
        return df.rg;
    }

    private pt() {
        super(8, 8);
        this.rg = new HashMap();
    }

    public void rg(long j, rg rgVar) {
        if (get(Long.valueOf(j)) != null) {
            rgVar.rg((Bitmap) get(Long.valueOf(j)));
        } else {
            this.rg.put(Long.valueOf(j), new SoftReference<>(rgVar));
        }
    }

    public void rg(final long j, final long j2, final String str) {
        if (get(Long.valueOf(j)) != null) {
            SoftReference<rg> softReferenceRemove = this.rg.remove(Long.valueOf(j));
            if (softReferenceRemove == null || softReferenceRemove.get() == null) {
                return;
            }
            softReferenceRemove.get().rg((Bitmap) get(Long.valueOf(j)));
            return;
        }
        if (TextUtils.isEmpty(str)) {
            pp.rg(12, j2);
        } else {
            Chain.rg((Chain.rg<Object, R>) new Chain.rg<Object, Object>() { // from class: com.ss.android.downloadlib.addownload.compliance.pt.2
                @Override // com.ss.android.downloadlib.utils.Chain.rg
                public Object rg(Object obj) throws Throwable {
                    BufferedInputStream bufferedInputStream;
                    Throwable th;
                    IDownloadHttpConnection iDownloadHttpConnectionDownloadWithConnection;
                    try {
                        iDownloadHttpConnectionDownloadWithConnection = DownloadComponentManager.downloadWithConnection(true, 0, str, null);
                    } catch (Exception e) {
                        e = e;
                        bufferedInputStream = null;
                    } catch (Throwable th2) {
                        bufferedInputStream = null;
                        th = th2;
                        DownloadUtils.safeClose(bufferedInputStream);
                        throw th;
                    }
                    if (iDownloadHttpConnectionDownloadWithConnection != null) {
                        bufferedInputStream = new BufferedInputStream(iDownloadHttpConnectionDownloadWithConnection.getInputStream());
                        try {
                            try {
                                bufferedInputStream.mark(bufferedInputStream.available());
                                BitmapFactory.Options options = new BitmapFactory.Options();
                                options.inJustDecodeBounds = true;
                                BitmapFactory.decodeStream(bufferedInputStream, null, options);
                                int i = options.outWidth;
                                int i2 = options.outHeight;
                                int iRg = b.rg(bm.getContext(), 60.0f);
                                options.inSampleSize = pt.df(iRg, iRg, options);
                                options.inJustDecodeBounds = false;
                                bufferedInputStream.reset();
                                Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(bufferedInputStream, null, options);
                                JSONObject jSONObject = new JSONObject();
                                try {
                                    jSONObject.putOpt(EventConstants.ExtraJson.KEY_TYPE, "load_bitmap");
                                    jSONObject.putOpt("bm_original_w", Integer.valueOf(i));
                                    jSONObject.putOpt("bm_original_h", Integer.valueOf(i2));
                                    jSONObject.putOpt("bm_bytes", Integer.valueOf(bitmapDecodeStream == null ? -1 : bitmapDecodeStream.getByteCount()));
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                }
                                AdEventHandler.rg().rg(EventConstants.UnityLabel.TTD_PREF_MONITOR, jSONObject, j2);
                                pt.this.put(Long.valueOf(j), bitmapDecodeStream);
                                DownloadUtils.safeClose(bufferedInputStream);
                            } catch (Exception e3) {
                                e = e3;
                                com.ss.android.downloadlib.exception.q.rg().rg(e, "BitmapCache loadBitmap");
                                DownloadUtils.safeClose(bufferedInputStream);
                            }
                            return null;
                        } catch (Throwable th3) {
                            th = th3;
                            DownloadUtils.safeClose(bufferedInputStream);
                            throw th;
                        }
                    }
                    DownloadUtils.safeClose(null);
                    return null;
                    com.ss.android.downloadlib.exception.q.rg().rg(e, "BitmapCache loadBitmap");
                    DownloadUtils.safeClose(bufferedInputStream);
                    return null;
                }
            }, (Object) null).rg(new Chain.rg<Object, Object>() { // from class: com.ss.android.downloadlib.addownload.compliance.pt.1
                @Override // com.ss.android.downloadlib.utils.Chain.rg
                public Object rg(Object obj) {
                    SoftReference softReference = (SoftReference) pt.this.rg.remove(Long.valueOf(j));
                    if (softReference == null || softReference.get() == null) {
                        return null;
                    }
                    ((rg) softReference.get()).rg((Bitmap) pt.this.get(Long.valueOf(j)));
                    return null;
                }
            }).rg();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int df(int i, int i2, BitmapFactory.Options options) {
        if (options.outWidth > i || options.outHeight > i2) {
            return Math.min(Math.round(options.outWidth / i), Math.round(options.outHeight / i2));
        }
        return 1;
    }
}
