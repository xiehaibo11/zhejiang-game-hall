package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Pair;
import com.xiaomi.push.ho;
import com.xiaomi.push.hp;
import java.util.HashSet;
import java.util.List;

public class ba {
    private static volatile ba a;
    protected SharedPreferences a;
    private HashSet<a> a = new HashSet<>();
    protected SharedPreferences b;

    public abstract class a implements Runnable {
        private String mDescription;
        private int mId;

        public a(int i, String str) {
            this.mId = i;
            this.mDescription = str;
        }

        public boolean equals(Object obj) {
            return (obj instanceof a) && this.mId == ((a) obj).mId;
        }

        public int hashCode() {
            return this.mId;
        }

        protected abstract void onCallback();

        @Override
        public final void run() {
            onCallback();
        }
    }

    private ba(Context context) {
        this.a = context.getSharedPreferences("mipush_oc_normal", 0);
        this.b = context.getSharedPreferences("mipush_oc_custom", 0);
    }

    public static ba a(Context context) {
        if (a == null) {
            synchronized (ba.class) {
                if (a == null) {
                    a = new ba(context);
                }
            }
        }
        return a;
    }

    private String a(int i) {
        return "oc_" + i;
    }

    private String a(hp hpVar) {
        return "oc_version_" + hpVar.a();
    }

    private void a(SharedPreferences.Editor editor, Pair<Integer, Object> pair, String str) {
        if (pair.second instanceof Integer) {
            editor.putInt(str, ((Integer) pair.second).intValue());
            return;
        }
        if (pair.second instanceof Long) {
            editor.putLong(str, ((Long) pair.second).longValue());
            return;
        }
        if (!(pair.second instanceof String)) {
            if (pair.second instanceof Boolean) {
                editor.putBoolean(str, ((Boolean) pair.second).booleanValue());
            }
        } else {
            String strA = (String) pair.second;
            if (str.equals(a(ho.aQ.a()))) {
                strA = com.xiaomi.push.bm.a(strA);
            }
            editor.putString(str, strA);
        }
    }

    public int a(int i, int i2) {
        try {
            String strA = a(i);
            return this.b.contains(strA) ? this.b.getInt(strA, 0) : this.a.contains(strA) ? this.a.getInt(strA, 0) : i2;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(i + " oc int error " + e);
            return i2;
        }
    }

    public int a(hp hpVar, int i) {
        try {
            return this.a.getInt(a(hpVar), i);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(hpVar + " version error " + e);
            return i;
        }
    }

    public long a(int i, long j) {
        try {
            String strA = a(i);
            return this.b.contains(strA) ? this.b.getLong(strA, 0L) : this.a.contains(strA) ? this.a.getLong(strA, 0L) : j;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(i + " oc long error " + e);
            return j;
        }
    }

    public String a(int i, String str) {
        try {
            String strA = a(i);
            return this.b.contains(strA) ? this.b.getString(strA, null) : this.a.contains(strA) ? this.a.getString(strA, null) : str;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(i + " oc string error " + e);
            return str;
        }
    }

    public synchronized void a() {
        this.a.clear();
    }

    public synchronized void a(a aVar) {
        if (!this.a.contains(aVar)) {
            this.a.add(aVar);
        }
    }

    public void a(List<Pair<Integer, Object>> list) {
        if (com.xiaomi.push.ag.a(list)) {
            return;
        }
        SharedPreferences.Editor editorEdit = this.b.edit();
        for (Pair<Integer, Object> pair : list) {
            if (pair.first != null) {
                String strA = a(((Integer) pair.first).intValue());
                if (pair.second == null) {
                    editorEdit.remove(strA);
                } else {
                    a(editorEdit, pair, strA);
                }
            }
        }
        editorEdit.apply();
    }

    public void a(List<Pair<hp, Integer>> list, List<Pair<Integer, Object>> list2) {
        if (com.xiaomi.push.ag.a(list) || com.xiaomi.push.ag.a(list2)) {
            com.xiaomi.channel.commonutils.logger.b.a("not update oc, because versions or configs are empty");
            return;
        }
        SharedPreferences.Editor editorEdit = this.a.edit();
        editorEdit.clear();
        for (Pair<hp, Integer> pair : list) {
            if (pair.first != null && pair.second != null) {
                editorEdit.putInt(a((hp) pair.first), ((Integer) pair.second).intValue());
            }
        }
        for (Pair<Integer, Object> pair2 : list2) {
            if (pair2.first != null && pair2.second != null) {
                a(editorEdit, pair2, a(((Integer) pair2.first).intValue()));
            }
        }
        editorEdit.apply();
    }

    public boolean a(int i, boolean z) {
        try {
            String strA = a(i);
            return this.b.contains(strA) ? this.b.getBoolean(strA, false) : this.a.contains(strA) ? this.a.getBoolean(strA, false) : z;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(i + " oc boolean error " + e);
            return z;
        }
    }

    void b() {
        com.xiaomi.channel.commonutils.logger.b.c("OC_Callback : receive new oc data");
        HashSet<a> hashSet = new HashSet();
        synchronized (this) {
            hashSet.addAll(this.a);
        }
        for (a aVar : hashSet) {
            if (aVar != null) {
                aVar.run();
            }
        }
        hashSet.clear();
    }
}
