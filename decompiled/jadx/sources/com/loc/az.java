package com.loc;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import java.lang.annotation.Annotation;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: DBOperation.java */
/* JADX INFO: loaded from: classes2.dex */
public final class az {
    private static Map<Class<? extends ay>, ay> d = new HashMap();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private bc f2857a;
    private SQLiteDatabase b;
    private ay c;

    public az(Context context, ay ayVar) {
        try {
            this.f2857a = new bc(context.getApplicationContext(), ayVar.a(), ayVar);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        this.c = ayVar;
    }

    private static ContentValues a(Object obj, ba baVar) {
        ContentValues contentValues = new ContentValues();
        for (Field field : a(obj.getClass(), baVar.b())) {
            field.setAccessible(true);
            a(obj, field, contentValues);
        }
        return contentValues;
    }

    private SQLiteDatabase a() {
        try {
            if (this.b == null) {
                this.b = this.f2857a.getReadableDatabase();
            }
        } catch (Throwable th) {
            as.a(th, "dbs", "grd");
        }
        return this.b;
    }

    public static synchronized ay a(Class<? extends ay> cls) throws IllegalAccessException, InstantiationException {
        if (d.get(cls) == null) {
            d.put(cls, cls.newInstance());
        }
        return d.get(cls);
    }

    private static <T> T a(Cursor cursor, Class<T> cls, ba baVar) throws IllegalAccessException, NoSuchMethodException, InstantiationException, InvocationTargetException {
        Object objValueOf;
        Field[] fieldArrA = a((Class<?>) cls, baVar.b());
        Constructor<T> declaredConstructor = cls.getDeclaredConstructor(new Class[0]);
        declaredConstructor.setAccessible(true);
        T tNewInstance = declaredConstructor.newInstance(new Object[0]);
        for (Field field : fieldArrA) {
            field.setAccessible(true);
            Annotation annotation = field.getAnnotation(bb.class);
            if (annotation != null) {
                bb bbVar = (bb) annotation;
                int iB = bbVar.b();
                int columnIndex = cursor.getColumnIndex(bbVar.a());
                switch (iB) {
                    case 1:
                        objValueOf = Short.valueOf(cursor.getShort(columnIndex));
                        break;
                    case 2:
                        objValueOf = Integer.valueOf(cursor.getInt(columnIndex));
                        break;
                    case 3:
                        objValueOf = Float.valueOf(cursor.getFloat(columnIndex));
                        break;
                    case 4:
                        objValueOf = Double.valueOf(cursor.getDouble(columnIndex));
                        break;
                    case 5:
                        objValueOf = Long.valueOf(cursor.getLong(columnIndex));
                        break;
                    case 6:
                        objValueOf = cursor.getString(columnIndex);
                        break;
                    case 7:
                        field.set(tNewInstance, cursor.getBlob(columnIndex));
                        continue;
                }
                field.set(tNewInstance, objValueOf);
            }
        }
        return tNewInstance;
    }

    private static <T> String a(ba baVar) {
        if (baVar == null) {
            return null;
        }
        return baVar.a();
    }

    private static <T> void a(SQLiteDatabase sQLiteDatabase, T t) {
        ba baVarB = b((Class) t.getClass());
        String strA = a(baVarB);
        if (TextUtils.isEmpty(strA) || t == null || sQLiteDatabase == null) {
            return;
        }
        sQLiteDatabase.insert(strA, null, a(t, baVarB));
    }

    private <T> void a(T t) {
        b(t);
    }

    private static void a(Object obj, Field field, ContentValues contentValues) {
        Annotation annotation = field.getAnnotation(bb.class);
        if (annotation == null) {
        }
        bb bbVar = (bb) annotation;
        try {
            switch (bbVar.b()) {
                case 1:
                    contentValues.put(bbVar.a(), Short.valueOf(field.getShort(obj)));
                    break;
                case 2:
                    contentValues.put(bbVar.a(), Integer.valueOf(field.getInt(obj)));
                    break;
                case 3:
                    contentValues.put(bbVar.a(), Float.valueOf(field.getFloat(obj)));
                    break;
                case 4:
                    contentValues.put(bbVar.a(), Double.valueOf(field.getDouble(obj)));
                    break;
                case 5:
                    contentValues.put(bbVar.a(), Long.valueOf(field.getLong(obj)));
                    break;
                case 6:
                    contentValues.put(bbVar.a(), (String) field.get(obj));
                    break;
                case 7:
                    contentValues.put(bbVar.a(), (byte[]) field.get(obj));
                    break;
            }
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        }
    }

    private <T> void a(String str, Object obj) {
        synchronized (this.c) {
            if (obj == null) {
                return;
            }
            ba baVarB = b((Class) obj.getClass());
            String strA = a(baVarB);
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            ContentValues contentValuesA = a(obj, baVarB);
            SQLiteDatabase sQLiteDatabaseB = b();
            this.b = sQLiteDatabaseB;
            if (sQLiteDatabaseB == null) {
                return;
            }
            try {
                sQLiteDatabaseB.update(strA, contentValuesA, str, null);
            } catch (Throwable th) {
                try {
                    as.a(th, "dbs", "udd");
                    if (this.b != null) {
                        this.b.close();
                    }
                } catch (Throwable th2) {
                    if (this.b != null) {
                        this.b.close();
                        this.b = null;
                    }
                    throw th2;
                }
            }
            if (this.b != null) {
                this.b.close();
                this.b = null;
            }
        }
    }

    private static Field[] a(Class<?> cls, boolean z) {
        if (cls == null) {
            return null;
        }
        return z ? cls.getSuperclass().getDeclaredFields() : cls.getDeclaredFields();
    }

    private SQLiteDatabase b() {
        try {
            if (this.b == null || this.b.isReadOnly()) {
                if (this.b != null) {
                    this.b.close();
                }
                this.b = this.f2857a.getWritableDatabase();
            }
        } catch (Throwable th) {
            as.a(th, "dbs", "gwd");
        }
        return this.b;
    }

    private static <T> ba b(Class<T> cls) {
        Annotation annotation = cls.getAnnotation(ba.class);
        if (annotation != null) {
            return (ba) annotation;
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:106:? A[Catch: all -> 0x00e6, SYNTHETIC, TryCatch #6 {, blocks: (B:4:0x0003, B:6:0x0014, B:7:0x001a, B:9:0x001e, B:28:0x0060, B:27:0x0059, B:21:0x0045, B:63:0x00be, B:45:0x008f, B:38:0x0077, B:56:0x00a5, B:77:0x00e3, B:76:0x00dc, B:70:0x00c8, B:78:0x00e4, B:51:0x0097, B:53:0x00a0, B:18:0x0040, B:35:0x0072, B:67:0x00c3, B:22:0x004c, B:24:0x0050, B:71:0x00cf, B:73:0x00d3), top: B:94:0x0003, inners: #0, #2, #3, #5, #7, #9, #11 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0050 A[Catch: all -> 0x0058, TRY_LEAVE, TryCatch #9 {all -> 0x0058, blocks: (B:22:0x004c, B:24:0x0050), top: B:99:0x004c, outer: #6 }] */
    /* JADX WARN: Removed duplicated region for block: B:73:0x00d3 A[Catch: all -> 0x00db, TRY_LEAVE, TryCatch #11 {all -> 0x00db, blocks: (B:71:0x00cf, B:73:0x00d3), top: B:103:0x00cf, outer: #6 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private <T> java.util.List<T> b(java.lang.String r13, java.lang.Class<T> r14) {
        /*
            Method dump skipped, instruction units count: 233
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.az.b(java.lang.String, java.lang.Class):java.util.List");
    }

    private <T> void b(T t) {
        synchronized (this.c) {
            SQLiteDatabase sQLiteDatabaseB = b();
            this.b = sQLiteDatabaseB;
            if (sQLiteDatabaseB == null) {
                return;
            }
            try {
                a(sQLiteDatabaseB, t);
            } catch (Throwable th) {
                try {
                    as.a(th, "dbs", "itd");
                    if (this.b != null) {
                        this.b.close();
                    }
                } catch (Throwable th2) {
                    if (this.b != null) {
                        this.b.close();
                        this.b = null;
                    }
                    throw th2;
                }
            }
            if (this.b != null) {
                this.b.close();
                this.b = null;
            }
        }
    }

    private <T> void b(String str, Object obj) {
        a(str, obj);
    }

    public final <T> List<T> a(String str, Class<T> cls) {
        return b(str, (Class) cls);
    }

    public final void a(Object obj, String str) {
        synchronized (this.c) {
            List listA = a(str, (Class) obj.getClass());
            if (listA == null || listA.size() == 0) {
                a(obj);
            } else {
                b(str, obj);
            }
        }
    }
}
