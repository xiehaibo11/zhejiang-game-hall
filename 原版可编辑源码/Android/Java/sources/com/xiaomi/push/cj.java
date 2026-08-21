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

public class cj {
    private static volatile cj a;
    private Context a;
    private ci a;
    private final HashMap<String, ch> a = new HashMap<>();
    private ThreadPoolExecutor a = new ThreadPoolExecutor(1, 1, 15, TimeUnit.SECONDS, new LinkedBlockingQueue());
    private final ArrayList<a> a = new ArrayList<>();

    public abstract class a implements Runnable {
        private a a;
        private String a;
        private WeakReference<Context> a;
        protected String b;
        protected ch a = null;
        private Random a = new Random();
        private int a = 0;

        public a(String str) {
            this.a = str;
        }

        public SQLiteDatabase a() {
            return this.a.getWritableDatabase();
        }

        public Object a() {
            return null;
        }

        public String a() {
            return this.a;
        }

        void a(Context context) {
            a aVar = this.a;
            if (aVar != null) {
                aVar.a(context, a());
            }
            b(context);
        }

        public abstract void a(Context context, SQLiteDatabase sQLiteDatabase);

        public void a(Context context, Object obj) {
            cj.a(context).a(this);
        }

        void a(ch chVar, Context context) {
            this.a = chVar;
            this.b = chVar.a();
            this.a = new WeakReference<>(context);
        }

        public void a(a aVar) {
            this.a = aVar;
        }

        public boolean a() {
            return this.a == null || TextUtils.isEmpty(this.b) || this.a == null;
        }

        public void b(Context context) {
        }

        @Override
        public final void run() {
            Context context;
            WeakReference<Context> weakReference = this.a;
            if (weakReference == null || (context = weakReference.get()) == null || context.getFilesDir() == null || this.a == null || TextUtils.isEmpty(this.a)) {
                return;
            }
            File file = new File(this.a);
            y.a(context, new File(file.getParentFile(), bo.b(file.getAbsolutePath())), new cl(this, context));
        }
    }

    public abstract class b<T> extends a {
        private int a;
        private String a;
        private List<String> a;
        private String[] a;
        private List<T> b;
        private String c;
        private String d;
        private String e;

        public b(String str, List<String> list, String str2, String[] strArr, String str3, String str4, String str5, int i) {
            super(str);
            this.b = new ArrayList();
            this.a = list;
            this.a = str2;
            this.a = strArr;
            this.c = str3;
            this.d = str4;
            this.e = str5;
            this.a = i;
        }

        @Override
        public SQLiteDatabase a() {
            return this.a.getReadableDatabase();
        }

        public abstract T a(Context context, Cursor cursor);

        @Override
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            String[] strArr;
            this.b.clear();
            List<String> list = this.a;
            if (list == null || list.size() <= 0) {
                strArr = null;
            } else {
                String[] strArr2 = new String[this.a.size()];
                this.a.toArray(strArr2);
                strArr = strArr2;
            }
            int i = this.a;
            Cursor cursorQuery = sQLiteDatabase.query(this.b, strArr, this.a, this.a, this.c, this.d, this.e, i > 0 ? String.valueOf(i) : null);
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
        private ArrayList<a> a;

        public c(String str, ArrayList<a> arrayList) {
            super(str);
            ArrayList<a> arrayList2 = new ArrayList<>();
            this.a = arrayList2;
            arrayList2.addAll(arrayList);
        }

        @Override
        public final void a(Context context) {
            super.a(context);
            for (a aVar : this.a) {
                if (aVar != null) {
                    aVar.a(context);
                }
            }
        }

        @Override
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            for (a aVar : this.a) {
                if (aVar != null) {
                    aVar.a(context, sQLiteDatabase);
                }
            }
        }
    }

    public class d extends a {
        private String a;
        protected String[] a;

        public d(String str, String str2, String[] strArr) {
            super(str);
            this.a = str2;
            this.a = strArr;
        }

        @Override
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.delete(this.b, this.a, this.a);
        }
    }

    public class e extends a {
        private ContentValues a;

        public e(String str, ContentValues contentValues) {
            super(str);
            this.a = contentValues;
        }

        @Override
        public void a(Context context, SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.insert(this.b, null, this.a);
        }
    }

    private cj(Context context) {
        this.a = context;
    }

    private ch a(String str) {
        ch chVarA = this.a.get(str);
        if (chVarA == null) {
            synchronized (this.a) {
                if (chVarA == null) {
                    chVarA = this.a.a(this.a, str);
                    this.a.put(str, chVarA);
                }
            }
        }
        return chVarA;
    }

    public static cj a(Context context) {
        if (a == null) {
            synchronized (cj.class) {
                if (a == null) {
                    a = new cj(context);
                }
            }
        }
        return a;
    }

    private void a() {
        al.a(this.a).b(new ck(this), com.xiaomi.push.service.ba.a(this.a).a(ho.bm.a(), 5));
    }

    public String a(String str) {
        return a(str).a();
    }

    public void a(a aVar) {
        ch chVarA;
        if (aVar == null) {
            return;
        }
        if (this.a == null) {
            throw new IllegalStateException("should exec init method first!");
        }
        String strA = aVar.a();
        synchronized (this.a) {
            chVarA = this.a.get(strA);
            if (chVarA == null) {
                chVarA = this.a.a(this.a, strA);
                this.a.put(strA, chVarA);
            }
        }
        if (this.a.isShutdown()) {
            return;
        }
        aVar.a(chVarA, this.a);
        synchronized (this.a) {
            this.a.add(aVar);
            a();
        }
    }

    public void a(Runnable runnable) {
        if (this.a.isShutdown()) {
            return;
        }
        this.a.execute(runnable);
    }

    public void a(ArrayList<a> arrayList) {
        if (this.a == null) {
            throw new IllegalStateException("should exec setDbHelperFactory method first!");
        }
        HashMap map = new HashMap();
        if (this.a.isShutdown()) {
            return;
        }
        for (a aVar : arrayList) {
            if (aVar.a()) {
                aVar.a(a(aVar.a()), this.a);
            }
            ArrayList arrayList2 = (ArrayList) map.get(aVar.a());
            if (arrayList2 == null) {
                arrayList2 = new ArrayList();
                map.put(aVar.a(), arrayList2);
            }
            arrayList2.add(aVar);
        }
        for (String str : map.keySet()) {
            ArrayList arrayList3 = (ArrayList) map.get(str);
            if (arrayList3 != null && arrayList3.size() > 0) {
                c cVar = new c(str, arrayList3);
                cVar.a(((a) arrayList3.get(0)).a, this.a);
                this.a.execute(cVar);
            }
        }
    }

    public void b(a aVar) {
        ch chVarA;
        if (aVar == null) {
            return;
        }
        if (this.a == null) {
            throw new IllegalStateException("should exec init method first!");
        }
        String strA = aVar.a();
        synchronized (this.a) {
            chVarA = this.a.get(strA);
            if (chVarA == null) {
                chVarA = this.a.a(this.a, strA);
                this.a.put(strA, chVarA);
            }
        }
        if (this.a.isShutdown()) {
            return;
        }
        aVar.a(chVarA, this.a);
        a((Runnable) aVar);
    }
}
