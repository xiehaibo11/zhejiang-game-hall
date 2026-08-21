package com.ta.utdid2.b.a;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Environment;
import com.ta.utdid2.a.a.f;
import com.ta.utdid2.b.a.b;
import java.io.File;
import java.util.Map;

public class c {
    private SharedPreferences a;
    private b a;
    private d a;
    private String a;
    private String b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private Context mContext;
    private SharedPreferences.Editor a = null;
    private b.a a = null;

    /* JADX WARN: Removed duplicated region for block: B:68:0x0157  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c(Context context, String str, String str2, boolean z, boolean z2) {
        long j;
        long j2;
        long j3;
        this.a = "";
        this.b = "";
        this.c = false;
        this.d = false;
        this.e = false;
        String externalStorageState = null;
        this.a = null;
        this.a = null;
        this.mContext = null;
        this.a = null;
        this.f = false;
        this.c = z;
        this.f = z2;
        this.a = str2;
        this.b = str;
        this.mContext = context;
        if (context != null) {
            this.a = context.getSharedPreferences(str2, 0);
            j = this.a.getLong("t", 0L);
        } else {
            j = 0;
        }
        try {
            externalStorageState = Environment.getExternalStorageState();
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (f.isEmpty(externalStorageState)) {
            this.e = false;
            this.d = false;
        } else if (externalStorageState.equals("mounted")) {
            this.e = true;
            this.d = true;
        } else if (externalStorageState.equals("mounted_ro")) {
            this.d = true;
            this.e = false;
        } else {
            this.e = false;
            this.d = false;
        }
        if ((this.d || this.e) && context != null && !f.isEmpty(str)) {
            this.a = a(str);
            d dVar = this.a;
            if (dVar != null) {
                try {
                    this.a = dVar.a(str2, 0);
                    j2 = this.a.getLong("t", 0L);
                    try {
                        if (z2) {
                            long j4 = this.a.getLong("t2", 0L);
                            try {
                                j3 = this.a.getLong("t2", 0L);
                            } catch (Exception unused) {
                            }
                            if (j4 < j3 && j4 > 0) {
                                a(this.a, this.a);
                                this.a = this.a.a(str2, 0);
                            } else if (j4 > j3 && j3 > 0) {
                                a(this.a, this.a);
                                this.a = context.getSharedPreferences(str2, 0);
                            } else if (j4 != 0 || j3 <= 0) {
                                if ((j3 == 0 && j4 > 0) || j4 == j3) {
                                    a(this.a, this.a);
                                    this.a = this.a.a(str2, 0);
                                }
                                j2 = j3;
                                j = j4;
                            } else {
                                a(this.a, this.a);
                                this.a = context.getSharedPreferences(str2, 0);
                            }
                            j2 = j3;
                            j = j4;
                        } else if (j > j2) {
                            a(this.a, this.a);
                            this.a = this.a.a(str2, 0);
                        } else if (j < j2) {
                            a(this.a, this.a);
                            this.a = context.getSharedPreferences(str2, 0);
                        } else if (j == j2) {
                            a(this.a, this.a);
                            this.a = this.a.a(str2, 0);
                        }
                    } catch (Exception unused2) {
                    }
                } catch (Exception unused3) {
                    j2 = 0;
                }
            } else {
                j2 = 0;
            }
        }
        if (j != j2 || (j == 0 && j2 == 0)) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            boolean z3 = this.f;
            if (!z3 || (z3 && j == 0 && j2 == 0)) {
                SharedPreferences sharedPreferences = this.a;
                if (sharedPreferences != null) {
                    SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                    editorEdit.putLong("t2", jCurrentTimeMillis);
                    editorEdit.commit();
                }
                try {
                    if (this.a != null) {
                        b.a aVarA = this.a.a();
                        aVarA.a("t2", jCurrentTimeMillis);
                        aVarA.commit();
                    }
                } catch (Exception unused4) {
                }
            }
        }
    }

    private d a(String str) {
        File fileA = a(str);
        if (fileA == null) {
            return null;
        }
        this.a = new d(fileA.getAbsolutePath());
        return this.a;
    }

    private File a(String str) {
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

    private boolean b() {
        b bVar = this.a;
        if (bVar == null) {
            return false;
        }
        boolean zA = bVar.a();
        if (!zA) {
            commit();
        }
        return zA;
    }

    private void b() {
        b bVar;
        SharedPreferences sharedPreferences;
        if (this.a == null && (sharedPreferences = this.a) != null) {
            this.a = sharedPreferences.edit();
        }
        if (this.e && this.a == null && (bVar = this.a) != null) {
            this.a = bVar.a();
        }
        b();
    }

    public void putString(String str, String str2) {
        if (f.isEmpty(str) || str.equals("t")) {
            return;
        }
        b();
        SharedPreferences.Editor editor = this.a;
        if (editor != null) {
            editor.putString(str, str2);
        }
        b.a aVar = this.a;
        if (aVar != null) {
            aVar.a(str, str2);
        }
    }

    public void remove(String str) {
        if (f.isEmpty(str) || str.equals("t")) {
            return;
        }
        b();
        SharedPreferences.Editor editor = this.a;
        if (editor != null) {
            editor.remove(str);
        }
        b.a aVar = this.a;
        if (aVar != null) {
            aVar.a(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean commit() {
        boolean z;
        Context context;
        long jCurrentTimeMillis = System.currentTimeMillis();
        SharedPreferences.Editor editor = this.a;
        if (editor == null) {
            z = true;
        } else {
            if (!this.f && this.a != null) {
                editor.putLong("t", jCurrentTimeMillis);
            }
            if (!this.a.commit()) {
                z = false;
            }
        }
        if (this.a != null && (context = this.mContext) != null) {
            this.a = context.getSharedPreferences(this.a, 0);
        }
        String externalStorageState = null;
        try {
            externalStorageState = Environment.getExternalStorageState();
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (!f.isEmpty(externalStorageState)) {
            if (externalStorageState.equals("mounted")) {
                if (this.a == null) {
                    d dVarA = a(this.b);
                    if (dVarA != null) {
                        this.a = dVarA.a(this.a, 0);
                        if (!this.f) {
                            a(this.a, this.a);
                        } else {
                            a(this.a, this.a);
                        }
                        this.a = this.a.a();
                    }
                } else {
                    b.a aVar = this.a;
                    if (aVar != null && !aVar.commit()) {
                        z = false;
                    }
                }
            }
            if (externalStorageState.equals("mounted") || (externalStorageState.equals("mounted_ro") && this.a != null)) {
                try {
                    if (this.a != null) {
                        this.a = this.a.a(this.a, 0);
                    }
                } catch (Exception unused) {
                }
            }
        }
        return z;
    }

    public String getString(String str) {
        b();
        SharedPreferences sharedPreferences = this.a;
        if (sharedPreferences != null) {
            String string = sharedPreferences.getString(str, "");
            if (!f.isEmpty(string)) {
                return string;
            }
        }
        b bVar = this.a;
        return bVar != null ? bVar.getString(str, "") : "";
    }
}
