package com.ta.utdid2.b.a;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Environment;
import com.ta.utdid2.a.a.f;
import com.ta.utdid2.b.a.b;
import java.io.File;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private SharedPreferences f9a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private b f11a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private d f12a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f13a;
    private String b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private Context mContext;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private SharedPreferences.Editor f5291a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private b.a f10a = null;

    /* JADX WARN: Removed duplicated region for block: B:68:0x0157  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public c(android.content.Context r10, java.lang.String r11, java.lang.String r12, boolean r13, boolean r14) {
        /*
            Method dump skipped, instruction units count: 405
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ta.utdid2.b.a.c.<init>(android.content.Context, java.lang.String, java.lang.String, boolean, boolean):void");
    }

    private d a(String str) {
        File fileM29a = m29a(str);
        if (fileM29a == null) {
            return null;
        }
        this.f12a = new d(fileM29a.getAbsolutePath());
        return this.f12a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private File m29a(String str) {
        File externalStorageDirectory = Environment.getExternalStorageDirectory();
        if (externalStorageDirectory == null) {
            return null;
        }
        File file = new File(String.format("%s%s%s", externalStorageDirectory.getAbsolutePath(), File.separator, str));
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    private void a(SharedPreferences sharedPreferences, b bVar) {
        b.a aVarA;
        if (sharedPreferences == null || bVar == null || (aVarA = bVar.a()) == null) {
            return;
        }
        aVarA.b();
        for (Map.Entry<String, ?> entry : sharedPreferences.getAll().entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (value instanceof String) {
                aVarA.a(key, (String) value);
            } else if (value instanceof Integer) {
                aVarA.a(key, ((Integer) value).intValue());
            } else if (value instanceof Long) {
                aVarA.a(key, ((Long) value).longValue());
            } else if (value instanceof Float) {
                aVarA.a(key, ((Float) value).floatValue());
            } else if (value instanceof Boolean) {
                aVarA.a(key, ((Boolean) value).booleanValue());
            }
        }
        aVarA.commit();
    }

    private void a(b bVar, SharedPreferences sharedPreferences) {
        SharedPreferences.Editor editorEdit;
        if (bVar == null || sharedPreferences == null || (editorEdit = sharedPreferences.edit()) == null) {
            return;
        }
        editorEdit.clear();
        for (Map.Entry<String, ?> entry : bVar.getAll().entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (value instanceof String) {
                editorEdit.putString(key, (String) value);
            } else if (value instanceof Integer) {
                editorEdit.putInt(key, ((Integer) value).intValue());
            } else if (value instanceof Long) {
                editorEdit.putLong(key, ((Long) value).longValue());
            } else if (value instanceof Float) {
                editorEdit.putFloat(key, ((Float) value).floatValue());
            } else if (value instanceof Boolean) {
                editorEdit.putBoolean(key, ((Boolean) value).booleanValue());
            }
        }
        editorEdit.commit();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    private boolean m30b() {
        b bVar = this.f11a;
        if (bVar == null) {
            return false;
        }
        boolean zMo28a = bVar.mo28a();
        if (!zMo28a) {
            commit();
        }
        return zMo28a;
    }

    private void b() {
        b bVar;
        SharedPreferences sharedPreferences;
        if (this.f5291a == null && (sharedPreferences = this.f9a) != null) {
            this.f5291a = sharedPreferences.edit();
        }
        if (this.e && this.f10a == null && (bVar = this.f11a) != null) {
            this.f10a = bVar.a();
        }
        m30b();
    }

    public void putString(String str, String str2) {
        if (f.isEmpty(str) || str.equals("t")) {
            return;
        }
        b();
        SharedPreferences.Editor editor = this.f5291a;
        if (editor != null) {
            editor.putString(str, str2);
        }
        b.a aVar = this.f10a;
        if (aVar != null) {
            aVar.a(str, str2);
        }
    }

    public void remove(String str) {
        if (f.isEmpty(str) || str.equals("t")) {
            return;
        }
        b();
        SharedPreferences.Editor editor = this.f5291a;
        if (editor != null) {
            editor.remove(str);
        }
        b.a aVar = this.f10a;
        if (aVar != null) {
            aVar.a(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean commit() {
        /*
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r2 = r6.f5291a
            r3 = 0
            if (r2 == 0) goto L20
            boolean r4 = r6.f
            if (r4 != 0) goto L16
            android.content.SharedPreferences r4 = r6.f9a
            if (r4 == 0) goto L16
            java.lang.String r4 = "t"
            r2.putLong(r4, r0)
        L16:
            android.content.SharedPreferences$Editor r0 = r6.f5291a
            boolean r0 = r0.commit()
            if (r0 != 0) goto L20
            r0 = 0
            goto L21
        L20:
            r0 = 1
        L21:
            android.content.SharedPreferences r1 = r6.f9a
            if (r1 == 0) goto L31
            android.content.Context r1 = r6.mContext
            if (r1 == 0) goto L31
            java.lang.String r2 = r6.f13a
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)
            r6.f9a = r1
        L31:
            r1 = 0
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L37
            goto L3b
        L37:
            r2 = move-exception
            r2.printStackTrace()
        L3b:
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r1)
            if (r2 != 0) goto La4
            java.lang.String r2 = "mounted"
            boolean r4 = r1.equals(r2)
            if (r4 == 0) goto L84
            com.ta.utdid2.b.a.b r4 = r6.f11a
            if (r4 != 0) goto L79
            java.lang.String r4 = r6.b
            com.ta.utdid2.b.a.d r4 = r6.a(r4)
            if (r4 == 0) goto L84
            java.lang.String r5 = r6.f13a
            com.ta.utdid2.b.a.b r4 = r4.a(r5, r3)
            r6.f11a = r4
            boolean r4 = r6.f
            if (r4 != 0) goto L69
            android.content.SharedPreferences r4 = r6.f9a
            com.ta.utdid2.b.a.b r5 = r6.f11a
            r6.a(r4, r5)
            goto L70
        L69:
            com.ta.utdid2.b.a.b r4 = r6.f11a
            android.content.SharedPreferences r5 = r6.f9a
            r6.a(r4, r5)
        L70:
            com.ta.utdid2.b.a.b r4 = r6.f11a
            com.ta.utdid2.b.a.b$a r4 = r4.a()
            r6.f10a = r4
            goto L84
        L79:
            com.ta.utdid2.b.a.b$a r4 = r6.f10a
            if (r4 == 0) goto L84
            boolean r4 = r4.commit()
            if (r4 != 0) goto L84
            r0 = 0
        L84:
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L96
            java.lang.String r2 = "mounted_ro"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto La4
            com.ta.utdid2.b.a.b r1 = r6.f11a
            if (r1 == 0) goto La4
        L96:
            com.ta.utdid2.b.a.d r1 = r6.f12a     // Catch: java.lang.Exception -> La4
            if (r1 == 0) goto La4
            com.ta.utdid2.b.a.d r1 = r6.f12a     // Catch: java.lang.Exception -> La4
            java.lang.String r2 = r6.f13a     // Catch: java.lang.Exception -> La4
            com.ta.utdid2.b.a.b r1 = r1.a(r2, r3)     // Catch: java.lang.Exception -> La4
            r6.f11a = r1     // Catch: java.lang.Exception -> La4
        La4:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ta.utdid2.b.a.c.commit():boolean");
    }

    public String getString(String str) {
        m30b();
        SharedPreferences sharedPreferences = this.f9a;
        if (sharedPreferences != null) {
            String string = sharedPreferences.getString(str, "");
            if (!f.isEmpty(string)) {
                return string;
            }
        }
        b bVar = this.f11a;
        return bVar != null ? bVar.getString(str, "") : "";
    }
}
