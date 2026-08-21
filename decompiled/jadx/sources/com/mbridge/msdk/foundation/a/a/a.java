package com.mbridge.msdk.foundation.a.a;

import android.content.Context;
import android.content.SharedPreferences;
import com.mbridge.msdk.foundation.controller.b;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: SharedPerferenceManager.java */
/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f3323a = a.class.getSimpleName();
    private static a e;
    SharedPreferences b;
    FastKV c;
    private final boolean d = b.a().d();

    private a() {
    }

    public static synchronized a a() {
        if (e == null) {
            e = new a();
        }
        return e;
    }

    public final void a(String str, String str2) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return;
            }
            if (this.d && this.c == null) {
                try {
                    this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
                } catch (Exception unused) {
                    this.c = null;
                }
            }
            if (this.c != null) {
                try {
                    this.c.putString(str, str2);
                    return;
                } catch (Exception unused2) {
                    return;
                }
            }
            if (this.b == null && contextJ != null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            SharedPreferences.Editor editorEdit = this.b.edit();
            editorEdit.putString(str, str2);
            editorEdit.apply();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final void a(String str, int i) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return;
            }
            if (this.d && this.c == null) {
                try {
                    this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
                } catch (Exception unused) {
                    this.c = null;
                }
            }
            if (this.c != null) {
                try {
                    this.c.putInt(str, i);
                    return;
                } catch (Exception unused2) {
                    return;
                }
            }
            if (this.b == null && contextJ != null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            SharedPreferences.Editor editorEdit = this.b.edit();
            editorEdit.putInt(str, i);
            editorEdit.apply();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final void a(String str, long j) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                z.d(f3323a, "context is null in put");
                return;
            }
            if (this.d && this.c == null) {
                try {
                    this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
                } catch (Exception unused) {
                    this.c = null;
                }
            }
            if (this.c != null) {
                try {
                    this.c.putLong(str, j);
                    return;
                } catch (Exception unused2) {
                    return;
                }
            }
            if (this.b == null && contextJ != null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            SharedPreferences.Editor editorEdit = this.b.edit();
            editorEdit.putLong(str, j);
            editorEdit.apply();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final Long a(String str) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                z.d(f3323a, "context is null in get");
                return 0L;
            }
            if (this.d && this.c == null) {
                try {
                    this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
                } catch (Exception unused) {
                    this.c = null;
                }
            }
            if (this.c != null) {
                try {
                    return Long.valueOf(this.c.getLong(str, 0L));
                } catch (Exception unused2) {
                    return 0L;
                }
            }
            if (this.b == null && contextJ != null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            return Long.valueOf(this.b.getLong(str, 0L));
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0L;
        }
    }

    public final int b(String str, int i) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return i;
            }
            if (this.d && this.c == null) {
                try {
                    this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
                } catch (Exception unused) {
                    this.c = null;
                }
            }
            if (this.c != null) {
                try {
                    return this.c.getInt(str, i);
                } catch (Exception unused2) {
                    return i;
                }
            }
            if (this.b == null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            return this.b.getInt(str, i);
        } catch (Exception e2) {
            e2.printStackTrace();
            return i;
        }
    }

    public final String b(String str) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return null;
            }
            if (this.d && this.c == null) {
                try {
                    this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
                } catch (Exception unused) {
                    this.c = null;
                }
            }
            if (this.c != null) {
                try {
                    return this.c.getString(str, "");
                } catch (Exception unused2) {
                    return "";
                }
            }
            if (this.b == null && contextJ != null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            return this.b.getString(str, "");
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public final void c(String str) {
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (contextJ == null) {
            return;
        }
        if (this.d && this.c == null) {
            try {
                this.c = new FastKV.Builder(e.b(c.MBRIDGE_700_CONFIG), "mbridge").build();
            } catch (Exception unused) {
                this.c = null;
            }
        }
        FastKV fastKV = this.c;
        if (fastKV != null) {
            try {
                fastKV.remove(str);
            } catch (Exception unused2) {
            }
        } else {
            if (this.b == null && contextJ != null) {
                this.b = contextJ.getSharedPreferences("mbridge", 0);
            }
            this.b.edit().remove(str).apply();
        }
    }
}
