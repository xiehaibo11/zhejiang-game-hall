package com.qihoo360.replugin.loader.b;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import com.qihoo360.replugin.b;
import com.qihoo360.replugin.d;
import com.qihoo360.replugin.e;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Set;

public class PluginLocalBroadcastManager {
    private static final Object f = null;
    private static PluginLocalBroadcastManager g;
    private static Object h;
    private final Context a;
    private final HashMap<BroadcastReceiver, ArrayList<IntentFilter>> b;
    private final HashMap<String, ArrayList<ReceiverRecord>> c;
    private final ArrayList<BroadcastRecord> d;
    private final Handler e;

    private static class BroadcastRecord {
        final Intent a;
        final ArrayList<ReceiverRecord> b;

        BroadcastRecord(Intent r1, ArrayList<ReceiverRecord> r2) {
            this.a = r1;
            this.b = r2;
        }
    }

    public static class ProxyLocalBroadcastManagerVar {
        static b a;
        static b b;
        static b c;
        static b d;
        static b e;

        public ProxyLocalBroadcastManagerVar() {
        }

        public static void initLocked(ClassLoader r6) {
            if (library.b.a == false) goto L5;
            String r0 = "androidx.localbroadcastmanager.content.LocalBroadcastManager";
        L6:
            a = new b(r6, r0, "getInstance", new Class[]{Context.class});
            b = new b(r6, r0, "registerReceiver", new Class[]{BroadcastReceiver.class, IntentFilter.class});
            c = new b(r6, r0, "unregisterReceiver", new Class[]{BroadcastReceiver.class});
            d = new b(r6, r0, "sendBroadcast", new Class[]{Intent.class});
            e = new b(r6, r0, "sendBroadcastSync", new Class[]{Intent.class});
            return;
        L5:
            r0 = "android.support.v4.content.LocalBroadcastManager";
            goto L6
        }
    }

    private static class ReceiverRecord {
        final IntentFilter a;
        final BroadcastReceiver b;
        boolean c;

        ReceiverRecord(IntentFilter r1, BroadcastReceiver r2) {
            this.a = r1;
            this.b = r2;
        }

        public String toString() {
            StringBuilder r0 = new StringBuilder(128);
            r0.append("Receiver{");
            r0.append(this.b);
            r0.append(" filter=");
            r0.append(this.a);
            r0.append("}");
            return r0.toString();
        }
    }

    static {
        f = new Object();
    }

    private PluginLocalBroadcastManager(Context r2) {
        this.b = new HashMap();
        this.c = new HashMap();
        this.d = new ArrayList();
        this.a = r2;
        final Looper r22 = r2.getMainLooper();
        this.e = new 1(this, r22);
    }

    private void a() {
    L2:
        HashMap<BroadcastReceiver, ArrayList<IntentFilter>> r0 = this.b;
        monitor-enter(r0);
        int r1 = this.d.size();     // Catch: Throwable -> L17
        if (r1 <= 0) goto L6;
        BroadcastRecord[] r12 = new BroadcastRecord[r1];     // Catch: Throwable -> L17
        this.d.toArray(r12);     // Catch: Throwable -> L17
        this.d.clear();     // Catch: Throwable -> L17
        monitor-exit(r0);     // Catch: Throwable -> L17
        int r02 = r12.length;
        int r3 = 0;
    L11:
        if (r3 >= r02) goto L2;
        BroadcastRecord r4 = r12[r3];
        int r5 = 0;
    L14:
        if (r5 >= r4.b.size()) goto L16;
        r4.b.get(r5).b.onReceive(this.a, r4.a);
        r5 = r5 + 1;
        goto L14
    L16:
        r3 = r3 + 1;
        goto L11
    L6:
        monitor-exit(r0);     // Catch: Throwable -> L17
        return;
    L17:
        th = move-exception;
        throw th;
    }

    static void a(PluginLocalBroadcastManager r0) {
        r0.a();
    }

    public static Object getInstance(Context r5) {
        Object r0 = f;
        monitor-enter(r0);
    L19:
        th = move-exception;
        throw th;
    L5:
        if (e.a == false) goto L11;
        h = ProxyLocalBroadcastManagerVar.a.a(null, new Object[]{r5});     // Catch: Exception -> L8 Throwable -> L19
    L8:
        e = move-exception;
        e.printStackTrace();     // Catch: Throwable -> L19
    L11:
        if (g != null) goto L16;
        Context r1 = d.a();     // Catch: Throwable -> L19
        if (r1 != null) goto L15;
        r1 = r5.getApplicationContext();     // Catch: Throwable -> L19
    L15:
        g = new PluginLocalBroadcastManager(r1);     // Catch: Throwable -> L19
    L16:
        PluginLocalBroadcastManager r52 = g;     // Catch: Throwable -> L19
        monitor-exit(r0);     // Catch: Throwable -> L19
        return r52;
    }

    public static void registerReceiver(Object r0, BroadcastReceiver r1, IntentFilter r2) {
        ((PluginLocalBroadcastManager) r0).registerReceiver(r1, r2);
    }

    public static boolean sendBroadcast(Object r0, Intent r1) {
        return ((PluginLocalBroadcastManager) r0).sendBroadcast(r1);
    }

    public static void sendBroadcastSync(Object r0, Intent r1) {
        ((PluginLocalBroadcastManager) r0).sendBroadcastSync(r1);
    }

    public static void unregisterReceiver(Object r0, BroadcastReceiver r1) {
        ((PluginLocalBroadcastManager) r0).unregisterReceiver(r1);
    }

    public void registerReceiver(BroadcastReceiver r7, IntentFilter r8) {
        int r1 = 0;
        if (e.a == true) goto L26;
        HashMap<BroadcastReceiver, ArrayList<IntentFilter>> r0 = this.b;
        monitor-enter(r0);
        ReceiverRecord r3 = new ReceiverRecord(r8, r7);     // Catch: Throwable -> L23
        ArrayList<IntentFilter> r4 = this.b.get(r7);     // Catch: Throwable -> L23
        if (r4 != null) goto L14;
        r4 = new ArrayList(1);     // Catch: Throwable -> L23
        this.b.put(r7, r4);     // Catch: Throwable -> L23
    L14:
        r4.add(r8);     // Catch: Throwable -> L23
    L16:
        if (r1 >= r8.countActions()) goto L21;
        String r72 = r8.getAction(r1);     // Catch: Throwable -> L23
        ArrayList<ReceiverRecord> r42 = this.c.get(r72);     // Catch: Throwable -> L23
        if (r42 != null) goto L20;
        r42 = new ArrayList(1);     // Catch: Throwable -> L23
        this.c.put(r72, r42);     // Catch: Throwable -> L23
    L20:
        r42.add(r3);     // Catch: Throwable -> L23
        r1 = r1 + 1;     // Catch: Throwable -> L23
        goto L16
    L21:
        monitor-exit(r0);     // Catch: Throwable -> L23
        return;
    L23:
        th = move-exception;
        throw th;
    L26:
        ProxyLocalBroadcastManagerVar.b.a(h, new Object[]{r7, r8});     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        e.printStackTrace();
    }

    public boolean sendBroadcast(Intent r22) {
        if (e.a == true) goto L72;
        HashMap<BroadcastReceiver, ArrayList<IntentFilter>> r2 = this.b;
        monitor-enter(r2);
        String r12 = r22.getAction();     // Catch: Throwable -> L69
        String r13 = r22.resolveTypeIfNeeded(this.a.getContentResolver());     // Catch: Throwable -> L69
        Uri r14 = r22.getData();     // Catch: Throwable -> L69
        String r15 = r22.getScheme();     // Catch: Throwable -> L69
        Set<String> r16 = r22.getCategories();     // Catch: Throwable -> L69
        if ((r22.getFlags() & 8) == 0) goto L14;
        boolean r17 = true;
    L15:
        if (r17 == false) goto L17;
        Log.v("PluginLocalBroadcastManager", "Resolving type " + r13 + " scheme " + r15 + " of intent " + r22);     // Catch: Throwable -> L69
    L17:
        ArrayList<ReceiverRecord> r11 = this.c.get(r22.getAction());     // Catch: Throwable -> L69
        if (r11 == null) goto L66;
        if (r17 == false) goto L21;
        Log.v("PluginLocalBroadcastManager", "Action list: " + r11);     // Catch: Throwable -> L69
    L21:
        ArrayList r9 = null;
        int r10 = 0;
    L23:
        if (r10 >= r11.size()) goto L55;
        ReceiverRecord r8 = r11.get(r10);     // Catch: Throwable -> L69
        if (r17 == false) goto L28;
        Log.v("PluginLocalBroadcastManager", "Matching against filter " + r8.a);     // Catch: Throwable -> L69
    L28:
        if (r8.c == false) goto L32;
        if (r17 == false) goto L31;
        Log.v("PluginLocalBroadcastManager", "  Filter's target already added");     // Catch: Throwable -> L69
    L31:
        ArrayList r4 = r9;
        int r19 = r10;
        ArrayList<ReceiverRecord> r20 = r11;
    L54:
        r9 = r4;
        r10 = r19 + 1;     // Catch: Throwable -> L69
        r11 = r20;
        goto L23
    L32:
        r4 = r9;
        r19 = r10;
        r20 = r11;
        int r5 = r8.a.match(r12, r13, r15, r14, r16, "PluginLocalBroadcastManager");     // Catch: Throwable -> L69
        if (r5 < 0) goto L39;
        if (r17 == false) goto L36;
        Log.v("PluginLocalBroadcastManager", "  Filter matched!  match=0x" + Integer.toHexString(r5));     // Catch: Throwable -> L69
    L36:
        if (r4 != null) goto L38;
        r4 = new ArrayList();     // Catch: Throwable -> L69
    L38:
        r4.add(r8);     // Catch: Throwable -> L69
        r8.c = true;     // Catch: Throwable -> L69
        goto L54
    L39:
        if (r17 == false) goto L54;
        if (r5 != (-4)) goto L43;
        String r3 = "category";
    L53:
        Log.v("PluginLocalBroadcastManager", "  Filter did not match: " + r3);     // Catch: Throwable -> L69
        goto L54
    L43:
        if (r5 != (-3)) goto L45;
        r3 = "action";
        goto L53
    L45:
        if (r5 != (-2)) goto L47;
        r3 = "data";
        goto L53
    L47:
        if (r5 == (-1)) goto L49;
        r3 = "unknown reason";
        goto L53
    L49:
        r3 = "type";
        goto L53
    L55:
        ArrayList r42 = r9;
        if (r42 == null) goto L66;
        int r32 = 0;
    L59:
        if (r32 >= r42.size()) goto L61;
        ((ReceiverRecord) r42.get(r32)).c = false;     // Catch: Throwable -> L69
        r32 = r32 + 1;     // Catch: Throwable -> L69
        goto L59
    L61:
        this.d.add(new BroadcastRecord(r22, r42));     // Catch: Throwable -> L69
        if (this.e.hasMessages(1) == true) goto L64;
        this.e.sendEmptyMessage(1);     // Catch: Throwable -> L69
    L64:
        monitor-exit(r2);     // Catch: Throwable -> L69
        return true;
    L66:
        monitor-exit(r2);     // Catch: Throwable -> L69
        return false;
    L14:
        r17 = false;
    L69:
        th = move-exception;
        throw th;
    L72:
        return ((Boolean) ProxyLocalBroadcastManagerVar.d.a(h, new Object[]{r22})).booleanValue();
    L6:
        e = move-exception;
        e.printStackTrace();
        return false;
    }

    public void sendBroadcastSync(Intent r5) {
        if (e.a == false) goto L7;
        ProxyLocalBroadcastManagerVar.e.a(h, new Object[]{r5});     // Catch: Exception -> L10
        return;
    L13:
        return;
    L7:
        if (sendBroadcast(r5) == false) goto L14;
        a();
        return;
    }

    public void unregisterReceiver(BroadcastReceiver r12) {
        if (e.a == true) goto L41;
        HashMap<BroadcastReceiver, ArrayList<IntentFilter>> r0 = this.b;
        monitor-enter(r0);
        ArrayList<IntentFilter> r3 = this.b.remove(r12);     // Catch: Throwable -> L37
        if (r3 != null) goto L15;
        monitor-exit(r0);     // Catch: Throwable -> L37
        return;
    L15:
        int r4 = 0;
    L17:
        if (r4 >= r3.size()) goto L35;
        IntentFilter r5 = r3.get(r4);     // Catch: Throwable -> L37
        int r6 = 0;
    L20:
        if (r6 >= r5.countActions()) goto L34;
        String r7 = r5.getAction(r6);     // Catch: Throwable -> L37
        ArrayList<ReceiverRecord> r8 = this.c.get(r7);     // Catch: Throwable -> L37
        if (r8 == null) goto L33;
        int r9 = 0;
    L25:
        if (r9 >= r8.size()) goto L31;
        if (r8.get(r9).b != r12) goto L29;
        r8.remove(r9);     // Catch: Throwable -> L37
        r9 = r9 - 1;
    L29:
        r9 = r9 + 1;     // Catch: Throwable -> L37
        goto L25
    L31:
        if (r8.size() > 0) goto L33;
        this.c.remove(r7);     // Catch: Throwable -> L37
    L33:
        r6 = r6 + 1;     // Catch: Throwable -> L37
        goto L20
    L34:
        r4 = r4 + 1;     // Catch: Throwable -> L37
        goto L17
    L35:
        monitor-exit(r0);     // Catch: Throwable -> L37
        return;
    L37:
        th = move-exception;
        throw th;
    L41:
        ProxyLocalBroadcastManagerVar.c.a(h, new Object[]{r12});     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        e.printStackTrace();
    }
}
