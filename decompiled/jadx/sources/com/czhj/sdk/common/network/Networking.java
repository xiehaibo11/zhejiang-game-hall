package com.czhj.sdk.common.network;

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.LruCache;
import android.webkit.WebSettings;
import android.webkit.WebView;
import com.czhj.sdk.common.utils.DeviceUtils;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.SharedPreferencesUtil;
import com.czhj.volley.Cache;
import com.czhj.volley.toolbox.BasicNetwork;
import com.czhj.volley.toolbox.FileDownloadNetwork;
import com.czhj.volley.toolbox.HurlStack;
import com.czhj.volley.toolbox.ImageLoader;
import com.czhj.volley.toolbox.NoCache;
import java.util.HashSet;

/* JADX INFO: loaded from: classes.dex */
public class Networking {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1783a = "sigmob-volley-cache";
    private static volatile SigmobRequestQueue c;
    private static volatile SigmobRequestQueue d;
    private static volatile SigmobRequestQueue e;
    private static volatile SigmobRequestQueue f;
    private static volatile String g;
    private static volatile String h;
    private static volatile MaxWidthImageLoader i;
    private static HurlStack.UrlRewriter k;
    private static SigmobRequestQueue m;
    private static final String b = System.getProperty("http.agent");
    private static boolean j = false;
    private static volatile Cache l = null;
    private static HashSet n = new HashSet();

    public static void AddSigmobServerURL(String str) {
        n.add(str);
    }

    private static Cache a(Context context) {
        if (l == null) {
            l = new NoCache();
        }
        return l;
    }

    private static HurlStack.UrlRewriter b(Context context) {
        if (k == null) {
            k = new PlayServicesUrlRewriter();
        }
        return k;
    }

    private static SigmobRequestQueue c(Context context) {
        SigmobRequestQueue sigmobRequestQueue = c;
        if (sigmobRequestQueue == null) {
            synchronized (Networking.class) {
                sigmobRequestQueue = c;
                if (sigmobRequestQueue == null) {
                    sigmobRequestQueue = new SigmobRequestQueue(new BasicNetwork(new RequestQueueHttpStack(b(context), CustomSSLSocketFactory.getDefault(10000))), 2);
                    c = sigmobRequestQueue;
                    sigmobRequestQueue.start();
                }
            }
        }
        return sigmobRequestQueue;
    }

    private static boolean c() {
        return j;
    }

    public static synchronized void clearForTesting() {
        c = null;
        i = null;
        g = null;
    }

    private static String d(final Context context) {
        Preconditions.NoThrow.checkNotNull(context);
        String str = g;
        if (str == null) {
            synchronized (Networking.class) {
                str = g;
                if (str == null) {
                    new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.czhj.sdk.common.network.Networking.3
                        @Override // java.lang.Runnable
                        public void run() {
                            SharedPreferences.Editor editorEdit;
                            String str2;
                            try {
                                if (Build.VERSION.SDK_INT >= 17) {
                                    String unused = Networking.g = WebSettings.getDefaultUserAgent(context);
                                    editorEdit = SharedPreferencesUtil.getSharedPreferences(context).edit();
                                    str2 = Networking.g;
                                } else if (Looper.myLooper() != Looper.getMainLooper()) {
                                    String unused2 = Networking.g = Networking.b;
                                    return;
                                } else {
                                    String unused3 = Networking.g = new WebView(context).getSettings().getUserAgentString();
                                    editorEdit = SharedPreferencesUtil.getSharedPreferences(context).edit();
                                    str2 = Networking.g;
                                }
                                editorEdit.putString("user-agent-cache", str2);
                                editorEdit.apply();
                            } catch (Throwable unused4) {
                                String unused5 = Networking.g = Networking.b;
                            }
                        }
                    });
                }
            }
        }
        return str;
    }

    public static SigmobRequestQueue getAdTrackerRetryQueue() {
        return f;
    }

    public static String getBaseUrlScheme() {
        return c() ? "https" : "http";
    }

    public static SigmobRequestQueue getBuriedPointRequestQueue() {
        return e;
    }

    public static String getCachedUserAgent() {
        String str = g;
        return str == null ? b : str;
    }

    public static SigmobRequestQueue getDownloadRequestQueue() {
        return d;
    }

    public static ImageLoader getImageLoader() {
        return i;
    }

    public static SigmobRequestQueue getRequestQueue() {
        return c;
    }

    public static String getScheme() {
        return "https";
    }

    public static HashSet getSigmobServerURLS() {
        return n;
    }

    public static SigmobRequestQueue getStreamDownloadRequestQueue() {
        return m;
    }

    public static HurlStack.UrlRewriter getUrlRewriter() {
        return k;
    }

    public static String getUserAgent() {
        return TextUtils.isEmpty(g) ? h : g;
    }

    public static void initialize(Context context) {
        initializeUserAgentCache(context);
        d(context);
        c(context);
        initializeBuriedPointRequestQueue(context);
        initializeDownloadRequestQueue(context);
        initializeadTrackerReTryQueue(context);
        initializeStreamDownloadRequestQueue(context);
        initializeImageLoader(context);
    }

    public static SigmobRequestQueue initializeBuriedPointRequestQueue(Context context) {
        SigmobRequestQueue sigmobRequestQueue = e;
        if (sigmobRequestQueue == null) {
            synchronized (Networking.class) {
                sigmobRequestQueue = e;
                if (sigmobRequestQueue == null) {
                    sigmobRequestQueue = new SigmobRequestQueue(new BasicNetwork(new RequestQueueHttpStack(b(context), CustomSSLSocketFactory.getDefault(10000))), 1);
                    e = sigmobRequestQueue;
                    sigmobRequestQueue.start();
                }
            }
        }
        return sigmobRequestQueue;
    }

    public static SigmobRequestQueue initializeDownloadRequestQueue(Context context) {
        SigmobRequestQueue sigmobRequestQueue = d;
        if (sigmobRequestQueue == null) {
            synchronized (Networking.class) {
                sigmobRequestQueue = d;
                if (sigmobRequestQueue == null) {
                    sigmobRequestQueue = new SigmobRequestQueue(new FileDownloadNetwork(new RequestQueueHttpStack(b(context), CustomSSLSocketFactory.getDefault(10000))), 4);
                    d = sigmobRequestQueue;
                    sigmobRequestQueue.start();
                }
            }
        }
        return sigmobRequestQueue;
    }

    public static ImageLoader initializeImageLoader(Context context) {
        MaxWidthImageLoader maxWidthImageLoader = i;
        if (maxWidthImageLoader == null) {
            synchronized (Networking.class) {
                maxWidthImageLoader = i;
                if (maxWidthImageLoader == null) {
                    SigmobRequestQueue requestQueue = getRequestQueue();
                    final LruCache<String, Bitmap> lruCache = new LruCache<String, Bitmap>(DeviceUtils.memoryCacheSizeBytes(context)) { // from class: com.czhj.sdk.common.network.Networking.1
                        /* JADX INFO: Access modifiers changed from: protected */
                        @Override // android.util.LruCache
                        public int sizeOf(String str, Bitmap bitmap) {
                            return bitmap != null ? bitmap.getRowBytes() * bitmap.getHeight() : super.sizeOf(str, (Object) null);
                        }
                    };
                    MaxWidthImageLoader maxWidthImageLoader2 = new MaxWidthImageLoader(requestQueue, context, new ImageLoader.ImageCache() { // from class: com.czhj.sdk.common.network.Networking.2
                        @Override // com.czhj.volley.toolbox.ImageLoader.ImageCache
                        public Bitmap getBitmap(String str) {
                            return (Bitmap) lruCache.get(str);
                        }

                        @Override // com.czhj.volley.toolbox.ImageLoader.ImageCache
                        public void putBitmap(String str, Bitmap bitmap) {
                            lruCache.put(str, bitmap);
                        }
                    });
                    i = maxWidthImageLoader2;
                    maxWidthImageLoader = maxWidthImageLoader2;
                }
            }
        }
        return maxWidthImageLoader;
    }

    public static void initializeMill(Context context) {
        initializeUserAgentCache(context);
        d(context.getApplicationContext());
        c(context);
        initializeBuriedPointRequestQueue(context);
    }

    public static SigmobRequestQueue initializeStreamDownloadRequestQueue(Context context) {
        SigmobRequestQueue sigmobRequestQueue = m;
        if (sigmobRequestQueue == null) {
            synchronized (Networking.class) {
                sigmobRequestQueue = m;
                if (sigmobRequestQueue == null) {
                    sigmobRequestQueue = new SigmobRequestQueue(new FileDownloadNetwork(new RequestQueueHttpStack(b(context), CustomSSLSocketFactory.getDefault(10000))), 2);
                    m = sigmobRequestQueue;
                    sigmobRequestQueue.start();
                }
            }
        }
        return sigmobRequestQueue;
    }

    public static void initializeUserAgentCache(Context context) {
        h = SharedPreferencesUtil.getSharedPreferences(context).getString("user-agent-cache", null);
    }

    public static SigmobRequestQueue initializeadTrackerReTryQueue(Context context) {
        SigmobRequestQueue sigmobRequestQueue = f;
        if (sigmobRequestQueue == null) {
            synchronized (Networking.class) {
                sigmobRequestQueue = f;
                if (sigmobRequestQueue == null) {
                    BasicNetwork basicNetwork = new BasicNetwork(new RequestQueueHttpStack(b(context), CustomSSLSocketFactory.getDefault(10000)));
                    if (l == null) {
                        a(context);
                    }
                    SigmobRequestQueue sigmobRequestQueue2 = new SigmobRequestQueue(basicNetwork, 2);
                    f = sigmobRequestQueue2;
                    sigmobRequestQueue2.start();
                    sigmobRequestQueue = sigmobRequestQueue2;
                }
            }
        }
        return sigmobRequestQueue;
    }

    public static synchronized void setImageLoaderForTesting(MaxWidthImageLoader maxWidthImageLoader) {
        i = maxWidthImageLoader;
    }

    public static synchronized void setRequestQueueForTesting(SigmobRequestQueue sigmobRequestQueue) {
        c = sigmobRequestQueue;
    }

    public static synchronized void setUserAgentForTesting(String str) {
        g = str;
    }

    public static void useHttps(boolean z) {
        j = z;
    }
}
