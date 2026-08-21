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

        public ProxyRePluginProviderClientVar() {
        }

        static b a() {
            return a;
        }

        static b b() {
            return b;
        }

        static b c() {
            return c;
        }

        static b d() {
            return d;
        }

        static b e() {
            return e;
        }

        static b f() {
            return f;
        }

        static b g() {
            return g;
        }

        static b h() {
            return h;
        }

        static b i() {
            return i;
        }

        public static void initLocked(ClassLoader r13) {
            a = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "query", new Class[]{Context.class, Uri.class, String[].class, String.class, String[].class, String.class});
            if (Build.VERSION.SDK_INT < 16) goto L5;
            b = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "query", new Class[]{Context.class, Uri.class, String[].class, String.class, String[].class, String.class, CancellationSignal.class});
        L5:
            c = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "insert", new Class[]{Context.class, Uri.class, ContentValues.class});
            d = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "bulkInsert", new Class[]{Context.class, Uri.class, ContentValues[].class});
            e = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "delete", new Class[]{Context.class, Uri.class, String.class, String[].class});
            f = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "update", new Class[]{Context.class, Uri.class, ContentValues.class, String.class, String[].class});
            g = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "getType", new Class[]{Context.class, Uri.class});
            h = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "openInputStream", new Class[]{Context.class, Uri.class});
            i = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "openOutputStream", new Class[]{Context.class, Uri.class});
            j = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "openOutputStream", new Class[]{Context.class, Uri.class, String.class});
            k = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "openFileDescriptor", new Class[]{Context.class, Uri.class, String.class});
            if (Build.VERSION.SDK_INT < 16) goto L8;
            l = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "openFileDescriptor", new Class[]{Context.class, Uri.class, String.class, CancellationSignal.class});
        L8:
            m = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "registerContentObserver", new Class[]{Context.class, Uri.class, Boolean.class, ContentObserver.class});
            n = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "acquireContentProviderClient", new Class[]{Context.class, String.class});
            o = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "notifyChange", new Class[]{Context.class, Uri.class, ContentObserver.class});
            p = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "notifyChange", new Class[]{Context.class, Uri.class, ContentObserver.class, Boolean.class});
            q = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "toCalledUri", new Class[]{Context.class, Uri.class});
            r = new b(r13, "com.qihoo360.loader2.mgr.PluginProviderClient", "toCalledUri", new Class[]{Context.class, String.class, Uri.class, Integer.class});
        }

        static b j() {
            return j;
        }

        static b k() {
            return k;
        }

        static b l() {
            return l;
        }

        static b m() {
            return m;
        }

        static b n() {
            return n;
        }

        static b o() {
            return o;
        }

        static b p() {
            return p;
        }

        static b q() {
            return q;
        }

        static b r() {
            return r;
        }
    }

    public PluginProviderClient() {
    }

    @TargetApi(5)
    public static ContentProviderClient acquireContentProviderClient(Context r4, String r5) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L8;
        Object r42 = ProxyRePluginProviderClientVar.n().a(null, new Object[]{r4, r5});     // Catch: Exception -> L14
        if (r42 == null) goto L13;
        return (ContentProviderClient) r42;
    L13:
        return null;
    L8:
        return r4.getContentResolver().acquireContentProviderClient(r5);
    }

    public static int bulkInsert(Context r4, Uri r5, ContentValues[] r6) {
        if (r4 != null) goto L6;
        return 0;
    L6:
        if (e.a == false) goto L8;
        Object r42 = ProxyRePluginProviderClientVar.d().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L15
        if (r42 == null) goto L13;
        return ((Integer) r42).intValue();
    L13:
        return -1;
    L18:
        return -1;
    L8:
        return r4.getContentResolver().bulkInsert(r5, r6);
    }

    public static int delete(Context r4, Uri r5, String r6, String[] r7) {
        if (r4 != null) goto L6;
        return 0;
    L6:
        if (e.a == false) goto L8;
        Object r42 = ProxyRePluginProviderClientVar.e().a(null, new Object[]{r4, r5, r6, r7});     // Catch: Exception -> L15
        if (r42 == null) goto L13;
        return ((Integer) r42).intValue();
    L13:
        return -1;
    L18:
        return -1;
    L8:
        return r4.getContentResolver().delete(r5, r6, r7);
    }

    public static String getType(Context r4, Uri r5) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L8;
        Object r42 = ProxyRePluginProviderClientVar.g().a(null, new Object[]{r4, r5});     // Catch: Exception -> L14
        if (r42 == null) goto L13;
        return (String) r42;
    L13:
        return null;
    L8:
        return r4.getContentResolver().getType(r5);
    }

    public static Uri insert(Context r4, Uri r5, ContentValues r6) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L8;
        return (Uri) ProxyRePluginProviderClientVar.c().a(null, new Object[]{r4, r5, r6});
    L11:
        return null;
    L8:
        return r4.getContentResolver().insert(r5, r6);
    }

    public static void notifyChange(Context r4, Uri r5, ContentObserver r6) {
        if (r4 != null) goto L5;
        return;
    L5:
        if (e.a == true) goto L11;
        r4.getContentResolver().notifyChange(r5, r6);
        return;
    L11:
        ProxyRePluginProviderClientVar.o().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L10
        return;
    }

    public static void notifyChange(Context r4, Uri r5, ContentObserver r6, boolean r7) {
        if (r4 != null) goto L5;
        return;
    L5:
        if (e.a == true) goto L11;
        r4.getContentResolver().notifyChange(r5, r6, r7);
        return;
    L11:
        ProxyRePluginProviderClientVar.p().a(null, new Object[]{r4, r5, r6, Boolean.valueOf(r7)});     // Catch: Exception -> L10
        return;
    }

    public static ParcelFileDescriptor openFileDescriptor(Context r4, Uri r5, String r6) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L20;
        Object r42 = ProxyRePluginProviderClientVar.k().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L17
        if (r42 == null) goto L16;
        return (ParcelFileDescriptor) r42;
    L16:
        return null;
    L20:
        return r4.getContentResolver().openFileDescriptor(r5, r6);
    L9:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    @TargetApi(19)
    public static ParcelFileDescriptor openFileDescriptor(Context r4, Uri r5, String r6, CancellationSignal r7) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == true) goto L20;
        return r4.getContentResolver().openFileDescriptor(r5, r6, r7);
    L9:
        e = move-exception;
        e.printStackTrace();
        return null;
    L20:
        Object r42 = ProxyRePluginProviderClientVar.l().a(null, new Object[]{r4, r5, r6, r7});     // Catch: Exception -> L17
        if (r42 == null) goto L16;
        return (ParcelFileDescriptor) r42;
    L16:
        return null;
    }

    public static InputStream openInputStream(Context r4, Uri r5) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == true) goto L20;
        return r4.getContentResolver().openInputStream(r5);
    L9:
        e = move-exception;
        e.printStackTrace();
        return null;
    L20:
        Object r42 = ProxyRePluginProviderClientVar.h().a(null, new Object[]{r4, r5});     // Catch: Exception -> L17
        if (r42 == null) goto L16;
        return (InputStream) r42;
    L16:
        return null;
    }

    public static OutputStream openOutputStream(Context r4, Uri r5) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == true) goto L20;
        return r4.getContentResolver().openOutputStream(r5);
    L9:
        e = move-exception;
        e.printStackTrace();
        return null;
    L20:
        Object r42 = ProxyRePluginProviderClientVar.i().a(null, new Object[]{r4, r5});     // Catch: Exception -> L17
        if (r42 == null) goto L16;
        return (OutputStream) r42;
    L16:
        return null;
    }

    @TargetApi(3)
    public static OutputStream openOutputStream(Context r4, Uri r5, String r6) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L20;
        Object r42 = ProxyRePluginProviderClientVar.j().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L17
        if (r42 == null) goto L16;
        return (OutputStream) r42;
    L16:
        return null;
    L20:
        return r4.getContentResolver().openOutputStream(r5, r6);
    L9:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public static Cursor query(Context r8, Uri r9, String[] r10, String r11, String[] r12, String r13) {
        if (r8 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L8;
        return (Cursor) ProxyRePluginProviderClientVar.a().a(null, new Object[]{r8, r9, r10, r11, r12, r13});
    L11:
        return null;
    L8:
        return r8.getContentResolver().query(r9, r10, r11, r12, r13);
    }

    @TargetApi(16)
    public static Cursor query(Context r9, Uri r10, String[] r11, String r12, String[] r13, String r14, CancellationSignal r15) {
        if (r9 != null) goto L6;
        return null;
    L6:
        if (e.a == false) goto L8;
        return (Cursor) ProxyRePluginProviderClientVar.b().a(null, new Object[]{r9, r10, r11, r12, r13, r14, r15});
    L11:
        return null;
    L8:
        return r9.getContentResolver().query(r10, r11, r12, r13, r14, r15);
    }

    public static void registerContentObserver(Context r4, Uri r5, boolean r6, ContentObserver r7) {
        if (r4 != null) goto L5;
        return;
    L5:
        if (e.a == true) goto L11;
        r4.getContentResolver().registerContentObserver(r5, r6, r7);
        return;
    L11:
        ProxyRePluginProviderClientVar.m().a(null, new Object[]{r4, r5, Boolean.valueOf(r6), r7});     // Catch: Exception -> L10
        return;
    }

    public static Uri toCalledUri(Context r4, Uri r5) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == true) goto L14;
        return r5;
    L14:
        Object r42 = ProxyRePluginProviderClientVar.q().a(null, new Object[]{r4, r5});     // Catch: Exception -> L13
        if (r42 == null) goto L12;
        return (Uri) r42;
    L12:
        return null;
    }

    public static Uri toCalledUri(Context r4, String r5, Uri r6, int r7) {
        if (r4 != null) goto L6;
        return null;
    L6:
        if (e.a == true) goto L14;
        return r6;
    L14:
        Object r42 = ProxyRePluginProviderClientVar.r().a(null, new Object[]{r4, r5, r6, Integer.valueOf(r7)});     // Catch: Exception -> L13
        if (r42 == null) goto L12;
        return (Uri) r42;
    L12:
        return null;
    }

    public static int update(Context r4, Uri r5, ContentValues r6, String r7, String[] r8) {
        if (r4 != null) goto L6;
        return 0;
    L6:
        if (e.a == false) goto L8;
        Object r42 = ProxyRePluginProviderClientVar.f().a(null, new Object[]{r4, r5, r6, r7, r8});     // Catch: Exception -> L15
        if (r42 == null) goto L13;
        return ((Integer) r42).intValue();
    L13:
        return -1;
    L18:
        return -1;
    L8:
        return r4.getContentResolver().update(r5, r6, r7, r8);
    }
}
