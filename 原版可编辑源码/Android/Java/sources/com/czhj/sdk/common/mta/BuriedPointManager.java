package com.czhj.sdk.common.mta;

import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.os.Handler;
import android.os.HandlerThread;
import android.text.TextUtils;
import android.util.Base64;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.common.Database.SQLiteMTAHelper;
import com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.models.Config;
import com.czhj.sdk.common.network.BuriedPointRequest;
import com.czhj.sdk.common.utils.AESUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import cz.msebera.android.httpclient.message.TokenParser;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;
import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import java.util.zip.DeflaterOutputStream;

public class BuriedPointManager {
    private static final int a = 500000;
    private static BuriedPointManager f;
    private volatile boolean e;
    private SQLiteDatabase h;
    private int i;
    private RepeatingHandlerRunnable j;
    private final ReadWriteLock b = new ReentrantReadWriteLock();
    private HashMap<Integer, String> c = null;
    private List<String> d = null;
    private Set<Integer> g = new HashSet();

    private BuriedPointManager() {
    }

    private synchronized HashMap<Integer, String> a(int i) {
        HashMap<Integer, String> map;
        int i2;
        map = new HashMap<>();
        Cursor cursorRawQuery = null;
        try {
            cursorRawQuery = this.h.rawQuery("select * from point where item not null order by point_id", null);
        } catch (Throwable th) {
            try {
                SigmobLog.e("getlogs fail", th);
                if (cursorRawQuery != null) {
                }
            } finally {
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
            }
        }
        if (cursorRawQuery != null && cursorRawQuery.moveToFirst()) {
            int columnIndex = cursorRawQuery.getColumnIndex("item");
            int columnIndex2 = cursorRawQuery.getColumnIndex("point_id");
            int columnIndex3 = cursorRawQuery.getColumnIndex("encryption");
            for (i2 = 0; i2 < i; i2++) {
                String string = cursorRawQuery.getString(columnIndex);
                Integer numValueOf = Integer.valueOf(cursorRawQuery.getInt(columnIndex2));
                Integer numValueOf2 = Integer.valueOf(cursorRawQuery.getInt(columnIndex3));
                if (!TextUtils.isEmpty(string)) {
                    if (numValueOf2.intValue() != 1) {
                        map.put(numValueOf, string);
                    } else if (!TextUtils.isEmpty(AESUtil.DecryptString(string, Constants.AESKEY))) {
                        string = AESUtil.DecryptString(string, Constants.AESKEY);
                        map.put(numValueOf, string);
                    }
                }
                if (!cursorRawQuery.moveToNext()) {
                    break;
                }
            }
        }
        return map;
    }

    private void a() {
        try {
            long jQueryNumEntries = DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT);
            if (jQueryNumEntries <= 500000) {
                return;
            }
            a(jQueryNumEntries - 500000);
        } finally {
        }
    }

    private void a(long j) {
        try {
            SigmobLog.d("begin numRows " + DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT));
            StringBuilder sb = new StringBuilder();
            sb.append("delete from ");
            sb.append(SQLiteMTAHelper.TABLE_POINT);
            sb.append(" where point_id in ( ");
            sb.append(" select point_id from ");
            sb.append(SQLiteMTAHelper.TABLE_POINT);
            sb.append(" order by point_id ");
            sb.append(" limit " + j);
            sb.append(" )");
            this.h.execSQL(sb.toString());
            SigmobLog.d("end numRows " + DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT));
        } finally {
        }
    }

    private void a(String str, final boolean z) {
        this.e = true;
        BuriedPointRequest.BuriedPointSend(str, new BuriedPointRequest.RequestListener() {
            @Override
            public void onErrorResponse(VolleyError volleyError) {
                BuriedPointManager.this.e = false;
                BuriedPointManager.this.c = null;
                SigmobLog.e(volleyError.getMessage());
            }

            @Override
            public void onSuccess() {
                if (z) {
                    BuriedPointManager.this.d();
                }
            }
        });
    }

    private void a(Set<Integer> set) {
        try {
            Iterator<Integer> it = set.iterator();
            if (!it.hasNext()) {
                return;
            }
            SigmobLog.d("begin numRows " + DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT));
            StringBuilder sb = new StringBuilder();
            sb.append("delete from ");
            sb.append(SQLiteMTAHelper.TABLE_POINT);
            sb.append(" where point_id in ( ");
            while (true) {
                sb.append(it.next());
                if (!it.hasNext()) {
                    sb.append(" )");
                    this.h.execSQL(sb.toString());
                    SigmobLog.d("end numRows " + DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT));
                    return;
                }
                sb.append(',');
                sb.append(TokenParser.SP);
            }
        } finally {
        }
    }

    private void b() {
        try {
            SigmobLog.d("begin numRows " + DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT));
            this.h.execSQL("delete from " + SQLiteMTAHelper.TABLE_POINT + " where item is null");
            SigmobLog.d("end numRows " + DatabaseUtils.queryNumEntries(this.h, SQLiteMTAHelper.TABLE_POINT));
        } finally {
        }
    }

    private String c() {
        StringBuilder sb = new StringBuilder();
        List<String> list = this.d;
        if (list != null && list.size() > 0) {
            this.i = this.d.size();
            Iterator<String> it = this.d.iterator();
            while (it.hasNext()) {
                sb.append(it.next());
                if (it.hasNext()) {
                    sb.append(com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP);
                }
            }
        }
        return sb.toString();
    }

    private void d() {
        this.b.writeLock().lock();
        HashMap<Integer, String> map = this.c;
        if (map != null && map.size() != 0) {
            a(this.c.keySet());
            this.e = false;
            this.c = null;
        }
        this.b.writeLock().unlock();
    }

    public static String deflateAndBase64(String str) throws IOException {
        if (str == null || str.length() == 0) {
            return str;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        DeflaterOutputStream deflaterOutputStream = new DeflaterOutputStream(byteArrayOutputStream);
        deflaterOutputStream.write(str.getBytes(Charset.forName("UTF-8")));
        deflaterOutputStream.flush();
        deflaterOutputStream.close();
        return Base64.encodeToString(byteArrayOutputStream.toByteArray(), 2);
    }

    private void e() {
        List<String> list = this.d;
        if (list == null || list.size() <= 0) {
            return;
        }
        int size = this.d.size();
        int i = this.i;
        if (size > i) {
            this.d = this.d.subList(i, r0.size() - 1);
        } else {
            this.d.clear();
        }
        this.i = 0;
    }

    public static BuriedPointManager getInstance() {
        BuriedPointManager buriedPointManager;
        synchronized (BuriedPointManager.class) {
            if (f == null) {
                f = new BuriedPointManager();
            }
            buriedPointManager = f;
        }
        return buriedPointManager;
    }

    public void addWaitSend(String str) {
        if (this.d == null) {
            this.d = new LinkedList();
        }
        this.d.add(str);
    }

    public void clearLogDB() {
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() {
            @Override
            public void run() {
                BuriedPointManager.this.b();
                BuriedPointManager.this.a();
            }
        });
    }

    public Set<Integer> getLogBlackList() {
        return this.g;
    }

    public String sendPoint() {
        String uRLEncoded = null;
        try {
            this.b.readLock().lock();
        } finally {
            try {
            } finally {
            }
        }
        if (!this.e && (this.c == null || this.c.size() <= 0)) {
            StringBuilder sb = new StringBuilder();
            HashMap<Integer, String> mapA = a(Config.sharedInstance().getMax_send_log_records());
            this.c = mapA;
            if (mapA.size() != 0) {
                sb.append("[");
                Iterator<String> it = this.c.values().iterator();
                while (it.hasNext()) {
                    sb.append(it.next());
                    if (it.hasNext()) {
                        sb.append(com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP);
                    }
                }
                sb.append("]");
                String string = sb.toString();
                String str = "_batch_value=" + string;
                try {
                    SigmobLog.d("_batch_value: " + string);
                    SigmobLog.d("BPLog_Count: " + this.c.size());
                    uRLEncoded = PointEntitySuper.toURLEncoded(deflateAndBase64(str));
                    a(uRLEncoded, true);
                } catch (IOException e) {
                    SigmobLog.e(e.getMessage());
                }
                return uRLEncoded;
            }
        }
        return null;
    }

    public void start() {
        if (this.h == null || this.j == null) {
            this.h = SQLiteMTAHelper.getInstance().getWritableDatabase();
            clearLogDB();
            HandlerThread handlerThread = new HandlerThread("sendLog");
            handlerThread.start();
            RepeatingHandlerRunnable repeatingHandlerRunnable = new RepeatingHandlerRunnable(new Handler(handlerThread.getLooper())) {
                @Override
                protected void doWork() {
                    try {
                        BuriedPointManager.this.sendPoint();
                        BuriedPointManager.this.j.startRepeating(Config.sharedInstance().getSend_log_interval() * 1000);
                    } catch (Throwable th) {
                        SigmobLog.e("retryFaildTracking error " + th.getMessage());
                    }
                }
            };
            this.j = repeatingHandlerRunnable;
            repeatingHandlerRunnable.startRepeating(Config.sharedInstance().getSend_log_interval() * 1000);
        }
    }
}
