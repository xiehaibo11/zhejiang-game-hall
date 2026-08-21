package com.qihoo360.replugin.loader.b;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.qihoo360.replugin.b;
import com.qihoo360.replugin.d;
import com.qihoo360.replugin.e;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Set;

public class PluginLocalBroadcastManager {
    private static final Object f = new Object();
    private static PluginLocalBroadcastManager g;
    private static Object h;
    private final Context a;
    private final HashMap<BroadcastReceiver, ArrayList<IntentFilter>> b = new HashMap<>();
    private final HashMap<String, ArrayList<ReceiverRecord>> c = new HashMap<>();
    private final ArrayList<BroadcastRecord> d = new ArrayList<>();
    private final Handler e;

    private static class BroadcastRecord {
        final Intent a;
        final ArrayList<ReceiverRecord> b;

        BroadcastRecord(Intent intent, ArrayList<ReceiverRecord> arrayList) {
            this.a = intent;
            this.b = arrayList;
        }
    }

    public static class ProxyLocalBroadcastManagerVar {
        static b a;
        static b b;
        static b c;
        static b d;
        static b e;

        public static void initLocked(ClassLoader classLoader) {
            String str = library.b.a ? "androidx.localbroadcastmanager.content.LocalBroadcastManager" : "android.support.v4.content.LocalBroadcastManager";
            a = new b(classLoader, str, "getInstance", new Class[]{Context.class});
            b = new b(classLoader, str, "registerReceiver", new Class[]{BroadcastReceiver.class, IntentFilter.class});
            c = new b(classLoader, str, "unregisterReceiver", new Class[]{BroadcastReceiver.class});
            d = new b(classLoader, str, "sendBroadcast", new Class[]{Intent.class});
            e = new b(classLoader, str, "sendBroadcastSync", new Class[]{Intent.class});
        }
    }

    private static class ReceiverRecord {
        final IntentFilter a;
        final BroadcastReceiver b;
        boolean c;

        ReceiverRecord(IntentFilter intentFilter, BroadcastReceiver broadcastReceiver) {
            this.a = intentFilter;
            this.b = broadcastReceiver;
        }

        public String toString() {
            StringBuilder sb = new StringBuilder(128);
            sb.append("Receiver{");
            sb.append(this.b);
            sb.append(" filter=");
            sb.append(this.a);
            sb.append("}");
            return sb.toString();
        }
    }

    private PluginLocalBroadcastManager(Context context) {
        this.a = context;
        this.e = new Handler(context.getMainLooper()) {
            @Override
            public void handleMessage(Message message) {
                if (message.what != 1) {
                    super.handleMessage(message);
                } else {
                    PluginLocalBroadcastManager.this.a();
                }
            }
        };
    }

    private void a() {
        BroadcastRecord[] broadcastRecordArr;
        while (true) {
            synchronized (this.b) {
                int size = this.d.size();
                if (size <= 0) {
                    return;
                }
                broadcastRecordArr = new BroadcastRecord[size];
                this.d.toArray(broadcastRecordArr);
                this.d.clear();
            }
            for (BroadcastRecord broadcastRecord : broadcastRecordArr) {
                for (int i = 0; i < broadcastRecord.b.size(); i++) {
                    broadcastRecord.b.get(i).b.onReceive(this.a, broadcastRecord.a);
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x001f A[Catch: all -> 0x0034, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0007, B:10:0x001b, B:12:0x001f, B:14:0x0025, B:15:0x0029, B:16:0x0030, B:17:0x0032, B:9:0x0018), top: B:22:0x0003, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Object getInstance(Context context) {
        PluginLocalBroadcastManager pluginLocalBroadcastManager;
        synchronized (f) {
            if (e.a) {
                try {
                    h = ProxyLocalBroadcastManagerVar.a.a(null, context);
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (g == null) {
                    Context contextA = d.a();
                    if (contextA == null) {
                        contextA = context.getApplicationContext();
                    }
                    g = new PluginLocalBroadcastManager(contextA);
                }
                pluginLocalBroadcastManager = g;
            } else {
                if (g == null) {
                }
                pluginLocalBroadcastManager = g;
            }
        }
        return pluginLocalBroadcastManager;
    }

    public static void registerReceiver(Object obj, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        ((PluginLocalBroadcastManager) obj).registerReceiver(broadcastReceiver, intentFilter);
    }

    public static boolean sendBroadcast(Object obj, Intent intent) {
        return ((PluginLocalBroadcastManager) obj).sendBroadcast(intent);
    }

    public static void sendBroadcastSync(Object obj, Intent intent) {
        ((PluginLocalBroadcastManager) obj).sendBroadcastSync(intent);
    }

    public static void unregisterReceiver(Object obj, BroadcastReceiver broadcastReceiver) {
        ((PluginLocalBroadcastManager) obj).unregisterReceiver(broadcastReceiver);
    }

    public void registerReceiver(BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        if (e.a) {
            try {
                ProxyLocalBroadcastManagerVar.b.a(h, broadcastReceiver, intentFilter);
                return;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        synchronized (this.b) {
            ReceiverRecord receiverRecord = new ReceiverRecord(intentFilter, broadcastReceiver);
            ArrayList<IntentFilter> arrayList = this.b.get(broadcastReceiver);
            if (arrayList == null) {
                arrayList = new ArrayList<>(1);
                this.b.put(broadcastReceiver, arrayList);
            }
            arrayList.add(intentFilter);
            for (int i = 0; i < intentFilter.countActions(); i++) {
                String action = intentFilter.getAction(i);
                ArrayList<ReceiverRecord> arrayList2 = this.c.get(action);
                if (arrayList2 == null) {
                    arrayList2 = new ArrayList<>(1);
                    this.c.put(action, arrayList2);
                }
                arrayList2.add(receiverRecord);
            }
        }
    }

    public boolean sendBroadcast(Intent intent) {
        ArrayList arrayList;
        int i;
        ArrayList<ReceiverRecord> arrayList2;
        if (e.a) {
            try {
                return ((Boolean) ProxyLocalBroadcastManagerVar.d.a(h, intent)).booleanValue();
            } catch (Exception e) {
                e.printStackTrace();
                return false;
            }
        }
        synchronized (this.b) {
            String action = intent.getAction();
            String strResolveTypeIfNeeded = intent.resolveTypeIfNeeded(this.a.getContentResolver());
            Uri data = intent.getData();
            String scheme = intent.getScheme();
            Set<String> categories = intent.getCategories();
            boolean z = (intent.getFlags() & 8) != 0;
            if (z) {
                Log.v("PluginLocalBroadcastManager", "Resolving type " + strResolveTypeIfNeeded + " scheme " + scheme + " of intent " + intent);
            }
            ArrayList<ReceiverRecord> arrayList3 = this.c.get(intent.getAction());
            if (arrayList3 != null) {
                if (z) {
                    Log.v("PluginLocalBroadcastManager", "Action list: " + arrayList3);
                }
                ArrayList arrayList4 = null;
                int i2 = 0;
                while (i2 < arrayList3.size()) {
                    ReceiverRecord receiverRecord = arrayList3.get(i2);
                    if (z) {
                        Log.v("PluginLocalBroadcastManager", "Matching against filter " + receiverRecord.a);
                    }
                    if (receiverRecord.c) {
                        if (z) {
                            Log.v("PluginLocalBroadcastManager", "  Filter's target already added");
                        }
                        arrayList = arrayList4;
                        i = i2;
                        arrayList2 = arrayList3;
                    } else {
                        arrayList = arrayList4;
                        i = i2;
                        arrayList2 = arrayList3;
                        int iMatch = receiverRecord.a.match(action, strResolveTypeIfNeeded, scheme, data, categories, "PluginLocalBroadcastManager");
                        if (iMatch >= 0) {
                            if (z) {
                                Log.v("PluginLocalBroadcastManager", "  Filter matched!  match=0x" + Integer.toHexString(iMatch));
                            }
                            if (arrayList == null) {
                                arrayList = new ArrayList();
                            }
                            arrayList.add(receiverRecord);
                            receiverRecord.c = true;
                        } else if (z) {
                            Log.v("PluginLocalBroadcastManager", "  Filter did not match: " + (iMatch != -4 ? iMatch != -3 ? iMatch != -2 ? iMatch != -1 ? "unknown reason" : "type" : "data" : "action" : "category"));
                        }
                    }
                    arrayList4 = arrayList;
                    i2 = i + 1;
                    arrayList3 = arrayList2;
                }
                ArrayList arrayList5 = arrayList4;
                if (arrayList5 != null) {
                    for (int i3 = 0; i3 < arrayList5.size(); i3++) {
                        ((ReceiverRecord) arrayList5.get(i3)).c = false;
                    }
                    this.d.add(new BroadcastRecord(intent, arrayList5));
                    if (!this.e.hasMessages(1)) {
                        this.e.sendEmptyMessage(1);
                    }
                    return true;
                }
            }
            return false;
        }
    }

    public void sendBroadcastSync(Intent intent) {
        if (e.a) {
            try {
                ProxyLocalBroadcastManagerVar.e.a(h, intent);
            } catch (Exception unused) {
            }
        } else if (sendBroadcast(intent)) {
            a();
        }
    }

    public void unregisterReceiver(BroadcastReceiver broadcastReceiver) {
        if (e.a) {
            try {
                ProxyLocalBroadcastManagerVar.c.a(h, broadcastReceiver);
                return;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        synchronized (this.b) {
            ArrayList<IntentFilter> arrayListRemove = this.b.remove(broadcastReceiver);
            if (arrayListRemove == null) {
                return;
            }
            for (int i = 0; i < arrayListRemove.size(); i++) {
                IntentFilter intentFilter = arrayListRemove.get(i);
                for (int i2 = 0; i2 < intentFilter.countActions(); i2++) {
                    String action = intentFilter.getAction(i2);
                    ArrayList<ReceiverRecord> arrayList = this.c.get(action);
                    if (arrayList != null) {
                        int i3 = 0;
                        while (i3 < arrayList.size()) {
                            if (arrayList.get(i3).b == broadcastReceiver) {
                                arrayList.remove(i3);
                                i3--;
                            }
                            i3++;
                        }
                        if (arrayList.size() <= 0) {
                            this.c.remove(action);
                        }
                    }
                }
            }
        }
    }
}
