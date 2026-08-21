package com.vivo.push.util;

import android.content.Context;
import android.content.SharedPreferences;

public final class x implements d {
    private static String a = "SpCache";
    private static String b = "com.vivo.push.cache";
    private SharedPreferences c;

    @Override
    public final String a(String str, String str2) {
        String string = this.c.getString(str, str2);
        p.d(a, "getString " + str + " is " + string);
        return string;
    }

    public final void a() {
        SharedPreferences.Editor editorEdit = this.c.edit();
        if (editorEdit != null) {
            editorEdit.clear();
            b.a(editorEdit);
        }
        p.d(a, "system cache is cleared");
    }

    @Override
    public final boolean a(Context context) {
        if (this.c != null) {
            return true;
        }
        this.c = context.getSharedPreferences(b, 0);
        return true;
    }

    @Override
    public final void b(String str, String str2) {
        SharedPreferences.Editor editorEdit = this.c.edit();
        if (editorEdit == null) {
            p.b(a, "putString error by ".concat(String.valueOf(str)));
            return;
        }
        editorEdit.putString(str, str2);
        b.a(editorEdit);
        p.d(a, "putString by ".concat(String.valueOf(str)));
    }
}
