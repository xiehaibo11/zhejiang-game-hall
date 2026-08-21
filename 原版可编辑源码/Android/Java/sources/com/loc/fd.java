package com.loc;

import android.content.Context;
import android.location.Location;
import android.os.Handler;
import android.text.TextUtils;
import java.io.File;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public final class fd {
    private File b;
    private Handler d;
    private String e;
    private boolean f;
    private LinkedList<fc> a = new LinkedList<>();
    private boolean c = false;
    private Runnable g = new Runnable() {
        @Override
        public final void run() {
            if (fd.this.c) {
                return;
            }
            if (fd.this.f) {
                fd.this.b();
                fd.d(fd.this);
            }
            if (fd.this.d != null) {
                fd.this.d.postDelayed(fd.this.g, 60000L);
            }
        }
    };

    public fd(Context context, Handler handler) {
        this.e = null;
        this.d = handler;
        String path = context.getFilesDir().getPath();
        if (this.e == null) {
            this.e = fz.l(context);
        }
        try {
            this.b = new File(path, "hisloc");
        } catch (Throwable th) {
            ej.a(th);
        }
        a();
        Handler handler2 = this.d;
        if (handler2 != null) {
            handler2.removeCallbacks(this.g);
            this.d.postDelayed(this.g, 60000L);
        }
    }

    private void a() {
        LinkedList<fc> linkedList = this.a;
        if (linkedList == null || linkedList.size() <= 0) {
            Iterator<String> it = fz.a(this.b).iterator();
            while (it.hasNext()) {
                try {
                    String str = new String(fg.b(p.b(it.next()), this.e), "UTF-8");
                    fc fcVar = new fc();
                    fcVar.a(new JSONObject(str));
                    this.a.add(fcVar);
                } catch (UnsupportedEncodingException e) {
                    e.printStackTrace();
                } catch (JSONException e2) {
                    e2.printStackTrace();
                }
            }
        }
    }

    private void b() {
        StringBuilder sb = new StringBuilder();
        Iterator<fc> it = this.a.iterator();
        while (it.hasNext()) {
            try {
                sb.append(p.b(fg.a(it.next().a().getBytes("UTF-8"), this.e)) + "\n");
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }
        String string = sb.toString();
        if (TextUtils.isEmpty(string)) {
            return;
        }
        fz.a(this.b, string);
    }

    private static boolean b(ArrayList<fa> arrayList, ArrayList<eg> arrayList2) {
        return arrayList == null || arrayList.size() <= 0 || arrayList2 == null || arrayList2.size() <= 0 || (((long) arrayList.size()) < 4 && ((long) arrayList2.size()) < 20);
    }

    static boolean d(fd fdVar) {
        fdVar.f = false;
        return false;
    }

    public final List<fc> a(ArrayList<fa> arrayList, ArrayList<eg> arrayList2) {
        if (!b(arrayList, arrayList2)) {
            return null;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        ArrayList arrayList3 = new ArrayList();
        int i = 0;
        for (fc fcVar : this.a) {
            if (jCurrentTimeMillis - fcVar.d < 21600000000L) {
                arrayList3.add(fcVar);
                i++;
            }
            if (i == 10) {
                break;
            }
        }
        return arrayList3;
    }

    public final void a(fc fcVar) {
        fc fcVar2 = null;
        fc fcVar3 = null;
        int i = 0;
        for (fc fcVar4 : this.a) {
            if (fcVar4.a == 1) {
                if (fcVar3 == null) {
                    fcVar3 = fcVar4;
                }
                i++;
                fcVar2 = fcVar4;
            }
        }
        if (fcVar2 != null) {
            new Location("gps");
            if (fcVar.d - fcVar2.d < 20000 && fz.a(new double[]{fcVar.b, fcVar.c, fcVar2.b, fcVar2.c}) < 20.0f) {
                return;
            }
        }
        if (i >= 5) {
            this.a.remove(fcVar3);
        }
        if (this.a.size() >= 10) {
            this.a.removeFirst();
        }
        this.a.add(fcVar);
        this.f = true;
    }

    public final void a(boolean z) {
        if (!z) {
            this.g.run();
        }
        Handler handler = this.d;
        if (handler != null) {
            handler.removeCallbacks(this.g);
        }
        this.c = true;
    }

    public final void b(fc fcVar) {
        if (this.a.size() > 0) {
            if (fcVar.a != 6 && fcVar.a != 5) {
                if (this.a.contains(fcVar)) {
                    return;
                }
                if (this.a.size() >= 10) {
                    this.a.removeFirst();
                }
                this.a.add(fcVar);
                this.f = true;
                return;
            }
            fc last = this.a.getLast();
            if (last.c == fcVar.c && last.b == fcVar.b && last.e == fcVar.e) {
                return;
            }
            if (this.a.size() >= 10) {
                this.a.removeFirst();
            }
            this.a.add(fcVar);
            this.f = true;
        }
    }
}
