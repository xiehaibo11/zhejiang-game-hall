package com.qihoo360.replugin.loader.p;

import android.annotation.TargetApi;
import android.content.ContentProviderClient;
import android.content.ContentValues;
import android.content.Context;
import android.database.ContentObserver;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.CancellationSignal;
import android.os.ParcelFileDescriptor;
import com.qihoo360.replugin.b;
import com.qihoo360.replugin.e;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.io.OutputStream;

public class PluginProviderClient {

    public static class ProxyRePluginProviderClientVar {
        private static b a;
        private static b b;
        private static b c;
        private static b d;
        private static b e;
        private static b f;
        private static b g;
        private static b h;
        private static b i;
        private static b j;
        private static b k;
        private static b l;
        private static b m;
        private static b n;
        private static b o;
        private static b p;
        private static b q;
        private static b r;

        public static void initLocked(ClassLoader classLoader) {
            a = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "query", new Class[]{Context.class, Uri.class, String[].class, String.class, String[].class, String.class});
            if (Build.VERSION.SDK_INT >= 16) {
                b = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "query", new Class[]{Context.class, Uri.class, String[].class, String.class, String[].class, String.class, CancellationSignal.class});
            }
            c = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "insert", new Class[]{Context.class, Uri.class, ContentValues.class});
            d = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "bulkInsert", new Class[]{Context.class, Uri.class, ContentValues[].class});
            e = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "delete", new Class[]{Context.class, Uri.class, String.class, String[].class});
            f = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "update", new Class[]{Context.class, Uri.class, ContentValues.class, String.class, String[].class});
            g = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "getType", new Class[]{Context.class, Uri.class});
            h = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "openInputStream", new Class[]{Context.class, Uri.class});
            i = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "openOutputStream", new Class[]{Context.class, Uri.class});
            j = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "openOutputStream", new Class[]{Context.class, Uri.class, String.class});
            k = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "openFileDescriptor", new Class[]{Context.class, Uri.class, String.class});
            if (Build.VERSION.SDK_INT >= 16) {
                l = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "openFileDescriptor", new Class[]{Context.class, Uri.class, String.class, CancellationSignal.class});
            }
            m = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "registerContentObserver", new Class[]{Context.class, Uri.class, Boolean.class, ContentObserver.class});
            n = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "acquireContentProviderClient", new Class[]{Context.class, String.class});
            o = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "notifyChange", new Class[]{Context.class, Uri.class, ContentObserver.class});
            p = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "notifyChange", new Class[]{Context.class, Uri.class, ContentObserver.class, Boolean.class});
            q = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "toCalledUri", new Class[]{Context.class, Uri.class});
            r = new b(classLoader, "com.qihoo360.loader2.mgr.PluginProviderClient", "toCalledUri", new Class[]{Context.class, String.class, Uri.class, Integer.class});
        }
    }

    @TargetApi(5)
    public static ContentProviderClient acquireContentProviderClient(Context context, String str) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return context.getContentResolver().acquireContentProviderClient(str);
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.n.a(null, context, str);
            if (objA != null) {
                return (ContentProviderClient) objA;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static int bulkInsert(Context context, Uri uri, ContentValues[] contentValuesArr) {
        if (context == null) {
            return 0;
        }
        if (!e.a) {
            return context.getContentResolver().bulkInsert(uri, contentValuesArr);
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.d.a(null, context, uri, contentValuesArr);
            if (objA != null) {
                return ((Integer) objA).intValue();
            }
            return -1;
        } catch (Exception unused) {
            return -1;
        }
    }

    public static int delete(Context context, Uri uri, String str, String[] strArr) {
        if (context == null) {
            return 0;
        }
        if (!e.a) {
            return context.getContentResolver().delete(uri, str, strArr);
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.e.a(null, context, uri, str, strArr);
            if (objA != null) {
                return ((Integer) objA).intValue();
            }
            return -1;
        } catch (Exception unused) {
            return -1;
        }
    }

    public static String getType(Context context, Uri uri) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return context.getContentResolver().getType(uri);
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.g.a(null, context, uri);
            if (objA != null) {
                return (String) objA;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static Uri insert(Context context, Uri uri, ContentValues contentValues) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return context.getContentResolver().insert(uri, contentValues);
        }
        try {
            return (Uri) ProxyRePluginProviderClientVar.c.a(null, context, uri, contentValues);
        } catch (Exception unused) {
            return null;
        }
    }

    public static void notifyChange(Context context, Uri uri, ContentObserver contentObserver) {
        if (context == null) {
            return;
        }
        if (!e.a) {
            context.getContentResolver().notifyChange(uri, contentObserver);
        } else {
            try {
                ProxyRePluginProviderClientVar.o.a(null, context, uri, contentObserver);
            } catch (Exception unused) {
            }
        }
    }

    public static void notifyChange(Context context, Uri uri, ContentObserver contentObserver, boolean z) {
        if (context == null) {
            return;
        }
        if (!e.a) {
            context.getContentResolver().notifyChange(uri, contentObserver, z);
        } else {
            try {
                ProxyRePluginProviderClientVar.p.a(null, context, uri, contentObserver, Boolean.valueOf(z));
            } catch (Exception unused) {
            }
        }
    }

    public static ParcelFileDescriptor openFileDescriptor(Context context, Uri uri, String str) {
        if (context == null) {
            return null;
        }
        if (e.a) {
            try {
                Object objA = ProxyRePluginProviderClientVar.k.a(null, context, uri, str);
                if (objA != null) {
                    return (ParcelFileDescriptor) objA;
                }
            } catch (Exception unused) {
            }
            return null;
        }
        try {
            return context.getContentResolver().openFileDescriptor(uri, str);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    @TargetApi(19)
    public static ParcelFileDescriptor openFileDescriptor(Context context, Uri uri, String str, CancellationSignal cancellationSignal) {
        if (context == null) {
            return null;
        }
        if (e.a) {
            try {
                Object objA = ProxyRePluginProviderClientVar.l.a(null, context, uri, str, cancellationSignal);
                if (objA != null) {
                    return (ParcelFileDescriptor) objA;
                }
            } catch (Exception unused) {
            }
            return null;
        }
        try {
            return context.getContentResolver().openFileDescriptor(uri, str, cancellationSignal);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static InputStream openInputStream(Context context, Uri uri) {
        if (context == null) {
            return null;
        }
        if (e.a) {
            try {
                Object objA = ProxyRePluginProviderClientVar.h.a(null, context, uri);
                if (objA != null) {
                    return (InputStream) objA;
                }
            } catch (Exception unused) {
            }
            return null;
        }
        try {
            return context.getContentResolver().openInputStream(uri);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static OutputStream openOutputStream(Context context, Uri uri) {
        if (context == null) {
            return null;
        }
        if (e.a) {
            try {
                Object objA = ProxyRePluginProviderClientVar.i.a(null, context, uri);
                if (objA != null) {
                    return (OutputStream) objA;
                }
            } catch (Exception unused) {
            }
            return null;
        }
        try {
            return context.getContentResolver().openOutputStream(uri);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    @TargetApi(3)
    public static OutputStream openOutputStream(Context context, Uri uri, String str) {
        if (context == null) {
            return null;
        }
        if (e.a) {
            try {
                Object objA = ProxyRePluginProviderClientVar.j.a(null, context, uri, str);
                if (objA != null) {
                    return (OutputStream) objA;
                }
            } catch (Exception unused) {
            }
            return null;
        }
        try {
            return context.getContentResolver().openOutputStream(uri, str);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static Cursor query(Context context, Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return context.getContentResolver().query(uri, strArr, str, strArr2, str2);
        }
        try {
            return (Cursor) ProxyRePluginProviderClientVar.a.a(null, context, uri, strArr, str, strArr2, str2);
        } catch (Exception unused) {
            return null;
        }
    }

    @TargetApi(16)
    public static Cursor query(Context context, Uri uri, String[] strArr, String str, String[] strArr2, String str2, CancellationSignal cancellationSignal) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return context.getContentResolver().query(uri, strArr, str, strArr2, str2, cancellationSignal);
        }
        try {
            return (Cursor) ProxyRePluginProviderClientVar.b.a(null, context, uri, strArr, str, strArr2, str2, cancellationSignal);
        } catch (Exception unused) {
            return null;
        }
    }

    public static void registerContentObserver(Context context, Uri uri, boolean z, ContentObserver contentObserver) {
        if (context == null) {
            return;
        }
        if (!e.a) {
            context.getContentResolver().registerContentObserver(uri, z, contentObserver);
        } else {
            try {
                ProxyRePluginProviderClientVar.m.a(null, context, uri, Boolean.valueOf(z), contentObserver);
            } catch (Exception unused) {
            }
        }
    }

    public static Uri toCalledUri(Context context, Uri uri) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return uri;
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.q.a(null, context, uri);
            if (objA != null) {
                return (Uri) objA;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static Uri toCalledUri(Context context, String str, Uri uri, int i) {
        if (context == null) {
            return null;
        }
        if (!e.a) {
            return uri;
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.r.a(null, context, str, uri, Integer.valueOf(i));
            if (objA != null) {
                return (Uri) objA;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static int update(Context context, Uri uri, ContentValues contentValues, String str, String[] strArr) {
        if (context == null) {
            return 0;
        }
        if (!e.a) {
            return context.getContentResolver().update(uri, contentValues, str, strArr);
        }
        try {
            Object objA = ProxyRePluginProviderClientVar.f.a(null, context, uri, contentValues, str, strArr);
            if (objA != null) {
                return ((Integer) objA).intValue();
            }
            return -1;
        } catch (Exception unused) {
            return -1;
        }
    }
}
