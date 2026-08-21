package com.xiaomi.push;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Random;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes4.dex */
public class cj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile cj f8079a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f176a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ci f177a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final HashMap<String, ch> f179a = new HashMap<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ThreadPoolExecutor f180a = new ThreadPoolExecutor(1, 1, 15, TimeUnit.SECONDS, new LinkedBlockingQueue());

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final ArrayList<a> f178a = new ArrayList<>();

    public abstract class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private a f182a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f183a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private WeakReference<Context> f184a;
        protected String b;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        protected ch f181a = null;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private Random f185a = new Random();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8080a = 0;

        public a(String str) {
            this.f183a = str;
        }

        public SQLiteDatabase a() {
            return this.f181a.getWritableDatabase();
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public Object mo193a() {
            return null;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m194a() {
            return this.f183a;
        }

        void a(Context context) {
            a aVar = this.f182a;
            if (aVar != null) {
                aVar.a(context, mo193a());
            }
            b(context);
        }

        public abstract void a(Context context, SQLiteDatabase sQLiteDatabase);

        public void a(Context context, Object obj) {
            cj.a(context).a(this);
        }

        void a(ch chVar, Context context) {
            this.f181a = chVar;
            this.b = chVar.a();
            this.f184a = new WeakReference<>(context);
        }

        public void a(a aVar) {
            this.f182a = aVar;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m195a() {
            return this.f181a == null || TextUtils.isEmpty(this.b) || this.f184a == null;
        }

        public void b(Context context) {
        }

        @Override // java.lang.Runnable
        public final void run() {
            Context context;
            WeakReference<Context> weakReference = this.f184a;
            if (weakReference == null || (context = weakReference.get()) == null || context.getFilesDir() == null || this.f181a == null || TextUtils.isEmpty(this.f183a)) {
                return;
            }
            File file = new File(this.f183a);
            y.a(context, new File(file.getParentFile(), bo.b(file.getAbsolutePath())), new cl(this, context));
        }
    }

    public abstract class b<T> extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8081a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f186a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private List<String> f187a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String[] f188a;
        private List<T> b;
        private String c;
        private String d;
        private String e;

        public b(String str, List<String> list, String str2, String[] strArr, String str3, String str4, String str5, int i) {
            super(str);
            this.b = new ArrayList();
            this.f187a = list;
            this.f186a = str2;
            this.f188a = strArr;
            this.c = str3;
            this.d = str4;
            this.e = str5;
            this.f8081a = i;
        }

        @Override // com.xiaomi.push.cj.a
        public SQLiteDatabase a() {
            return this.f181a.getReadableDatabase();
        }

        public abstract T a(Context context, Cursor cursor);

        @Override // com.xiaomi.push.cj.a
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            String[] strArr;
            this.b.clear();
            List<String> list = this.f187a;
            if (list == null || list.size() <= 0) {
                strArr = null;
            } else {
                String[] strArr2 = new String[this.f187a.size()];
                this.f187a.toArray(strArr2);
                strArr = strArr2;
            }
            int i = this.f8081a;
            Cursor cursorQuery = sQLiteDatabase.query(this.b, strArr, this.f186a, this.f188a, this.c, this.d, this.e, i > 0 ? String.valueOf(i) : null);
            if (cursorQuery != null && cursorQuery.moveToFirst()) {
                do {
                    T tA = a(context, cursorQuery);
                    if (tA != null) {
                        this.b.add(tA);
                    }
                } while (cursorQuery.moveToNext());
                cursorQuery.close();
            }
            a(context, (List) this.b);
        }

        public abstract void a(Context context, List<T> list);
    }

    public class c extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private ArrayList<a> f8082a;

        public c(String str, ArrayList<a> arrayList) {
            super(str);
            ArrayList<a> arrayList2 = new ArrayList<>();
            this.f8082a = arrayList2;
            arrayList2.addAll(arrayList);
        }

        @Override // com.xiaomi.push.cj.a
        public final void a(Context context) {
            super.a(context);
            for (a aVar : this.f8082a) {
                if (aVar != null) {
                    aVar.a(context);
                }
            }
        }

        @Override // com.xiaomi.push.cj.a
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            for (a aVar : this.f8082a) {
                if (aVar != null) {
                    aVar.a(context, sQLiteDatabase);
                }
            }
        }
    }

    public class d extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f8083a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        protected String[] f189a;

        public d(String str, String str2, String[] strArr) {
            super(str);
            this.f8083a = str2;
            this.f189a = strArr;
        }

        @Override // com.xiaomi.push.cj.a
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.delete(this.b, this.f8083a, this.f189a);
        }
    }

    public class e extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private ContentValues f8084a;

        public e(String str, ContentValues contentValues) {
            super(str);
            this.f8084a = contentValues;
        }

        @Override // com.xiaomi.push.cj.a
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.insert(this.b, null, this.f8084a);
        }
    }

    private cj(Context context) {
        this.f176a = context;
    }

    private ch a(String str) {
        ch chVarA = this.f179a.get(str);
        if (chVarA == null) {
            synchronized (this.f179a) {
                if (chVarA == null) {
                    chVarA = this.f177a.a(this.f176a, str);
                    this.f179a.put(str, chVarA);
                }
            }
        }
        return chVarA;
    }

    public static cj a(Context context) {
        if (f8079a == null) {
            synchronized (cj.class) {
                if (f8079a == null) {
                    f8079a = new cj(context);
                }
            }
        }
        return f8079a;
    }

    private void a() {
        al.a(this.f176a).b(new ck(this), com.xiaomi.push.service.ba.a(this.f176a).a(ho.StatDataProcessFrequency.a(), 5));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m192a(String str) {
        return a(str).a();
    }

    public void a(a aVar) {
        ch chVarA;
        if (aVar == null) {
            return;
        }
        if (this.f177a == null) {
            throw new IllegalStateException("should exec init method first!");
        }
        String strM194a = aVar.m194a();
        synchronized (this.f179a) {
            chVarA = this.f179a.get(strM194a);
            if (chVarA == null) {
                chVarA = this.f177a.a(this.f176a, strM194a);
                this.f179a.put(strM194a, chVarA);
            }
        }
        if (this.f180a.isShutdown()) {
            return;
        }
        aVar.a(chVarA, this.f176a);
        synchronized (this.f178a) {
            this.f178a.add(aVar);
            a();
        }
    }

    public void a(Runnable runnable) {
        if (this.f180a.isShutdown()) {
            return;
        }
        this.f180a.execute(runnable);
    }

    public void a(ArrayList<a> arrayList) {
        if (this.f177a == null) {
            throw new IllegalStateException("should exec setDbHelperFactory method first!");
        }
        HashMap map = new HashMap();
        if (this.f180a.isShutdown()) {
            return;
        }
        for (a aVar : arrayList) {
            if (aVar.m195a()) {
                aVar.a(a(aVar.m194a()), this.f176a);
            }
            ArrayList arrayList2 = (ArrayList) map.get(aVar.m194a());
            if (arrayList2 == null) {
                arrayList2 = new ArrayList();
                map.put(aVar.m194a(), arrayList2);
            }
            arrayList2.add(aVar);
        }
        for (String str : map.keySet()) {
            ArrayList arrayList3 = (ArrayList) map.get(str);
            if (arrayList3 != null && arrayList3.size() > 0) {
                c cVar = new c(str, arrayList3);
                cVar.a(((a) arrayList3.get(0)).f181a, this.f176a);
                this.f180a.execute(cVar);
            }
        }
    }

    public void b(a aVar) {
        ch chVarA;
        if (aVar == null) {
            return;
        }
        if (this.f177a == null) {
            throw new IllegalStateException("should exec init method first!");
        }
        String strM194a = aVar.m194a();
        synchronized (this.f179a) {
            chVarA = this.f179a.get(strM194a);
            if (chVarA == null) {
                chVarA = this.f177a.a(this.f176a, strM194a);
                this.f179a.put(strM194a, chVarA);
            }
        }
        if (this.f180a.isShutdown()) {
            return;
        }
        aVar.a(chVarA, this.f176a);
        a((Runnable) aVar);
    }
}
