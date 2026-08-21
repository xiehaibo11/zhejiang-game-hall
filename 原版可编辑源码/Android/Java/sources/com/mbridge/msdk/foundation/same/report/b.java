package com.mbridge.msdk.foundation.same.report;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import com.mbridge.msdk.foundation.db.BatchReportDao;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Stack;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicInteger;

public final class b {
    private static final String a = b.class.getSimpleName();
    private static volatile b b;
    private Handler c;
    private boolean d;
    private int e;
    private long f;
    private BatchReportDao h;
    private AtomicInteger i;
    private Stack<Long> j;
    private String g = com.mbridge.msdk.foundation.same.net.f.d.a().a;
    private Executor k = Executors.newSingleThreadExecutor();

    private b() {
        this.d = false;
        this.e = 30;
        this.f = 5000L;
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            this.e = aVarB.aB();
            this.f = aVarB.aC() * 1000;
            this.d = aVarB.aD() == 1;
        }
        z.a(a, "初始化批量上报： " + this.g + " " + this.e + " " + this.f + " " + this.d);
        if (this.d) {
            this.i = new AtomicInteger(0);
            this.j = new Stack<>();
            this.h = BatchReportDao.getInstance(com.mbridge.msdk.foundation.controller.a.f().j());
            HandlerThread handlerThread = new HandlerThread("mb_batch_report_thread");
            handlerThread.start();
            this.c = new Handler(handlerThread.getLooper()) {
                @Override
                public final void handleMessage(Message message) throws Throwable {
                    Bundle data;
                    int i = message.what;
                    if (i == 1) {
                        Bundle data2 = message.getData();
                        if (b.this.c == null || b.this.h == null || data2 == null) {
                            return;
                        }
                        b.this.c.removeMessages(2);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        ArrayList<BatchReportMessage> batchReportMessages = b.this.h.getBatchReportMessages(jCurrentTimeMillis);
                        b.a(b.this, batchReportMessages, jCurrentTimeMillis);
                        b.this.i.set(0);
                        String str = b.a;
                        StringBuilder sb = new StringBuilder();
                        sb.append("超时上报触发了，需要上报的数据： ");
                        sb.append(batchReportMessages != null ? batchReportMessages.size() : 0);
                        z.a(str, sb.toString());
                        return;
                    }
                    if (i != 2) {
                        if (i == 3 && (data = message.getData()) != null) {
                            b.b(b.this, data.getParcelableArrayList("report_message"), data.getLong("last_report_time"));
                            return;
                        }
                        return;
                    }
                    Bundle data3 = message.getData();
                    if (b.this.c == null || b.this.h == null || data3 == null) {
                        return;
                    }
                    b.this.c.removeMessages(1);
                    long j = data3.getLong("last_report_time");
                    ArrayList<BatchReportMessage> batchReportMessages2 = b.this.h.getBatchReportMessages(j);
                    b.a(b.this, batchReportMessages2, j);
                    String str2 = b.a;
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append("队列上报触发了，需要上报的数据： ");
                    sb2.append(batchReportMessages2 != null ? batchReportMessages2.size() : 0);
                    z.a(str2, sb2.toString());
                }
            };
        }
    }

    public static synchronized b a() {
        if (b == null) {
            b = new b();
        }
        return b;
    }

    public final void b() {
        Handler handler;
        if (!this.d || (handler = this.c) == null || handler.hasMessages(1)) {
            return;
        }
        Message messageObtain = Message.obtain();
        messageObtain.what = 1;
        this.c.sendMessageDelayed(messageObtain, 5000L);
    }

    public final synchronized boolean c() {
        return this.d;
    }

    public final synchronized void a(final String str) {
        Runnable runnable = new Runnable() {
            @Override
            public final void run() {
                if (b.this.h == null || !b.this.d) {
                    return;
                }
                z.a(b.a, "接收到上报数据： " + str);
                b.this.h.addReportMessage(str);
                if (b.this.c != null && b.this.f > 0 && !b.this.c.hasMessages(1)) {
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 1;
                    b.this.c.sendMessageDelayed(messageObtain, b.this.f);
                }
                if (b.this.i.incrementAndGet() < b.this.e || b.this.c == null) {
                    return;
                }
                Message messageObtain2 = Message.obtain();
                Bundle bundle = new Bundle();
                bundle.putLong("last_report_time", System.currentTimeMillis());
                messageObtain2.setData(bundle);
                messageObtain2.what = 2;
                b.this.c.sendMessage(messageObtain2);
                b.this.i.set(0);
            }
        };
        if (com.mbridge.msdk.foundation.controller.b.a().d() && this.k != null) {
            this.k.execute(runnable);
        } else {
            runnable.run();
        }
    }

    static void a(b bVar, ArrayList arrayList, long j) {
        if (arrayList == null || arrayList.size() <= 0) {
            return;
        }
        Message messageObtain = Message.obtain();
        Bundle bundle = new Bundle();
        bundle.putParcelableArrayList("report_message", arrayList);
        bundle.putLong("last_report_time", j);
        messageObtain.setData(bundle);
        messageObtain.what = 3;
        bVar.c.sendMessage(messageObtain);
    }

    static void b(b bVar, final ArrayList arrayList, final long j) {
        if (arrayList != null && arrayList.size() > 0) {
            z.a(a, "需要上报的数据条数： " + arrayList.size());
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return;
            }
            com.mbridge.msdk.foundation.same.net.g.d dVarA = e.a(contextJ);
            dVarA.a("app_id", com.mbridge.msdk.foundation.controller.a.f().k());
            dVarA.a(com.tkay.expressad.foundation.g.a.C, com.tkay.expressad.foundation.g.a.D);
            dVarA.a("lqswt", String.valueOf(1));
            StringBuilder sb = new StringBuilder();
            com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
            for (int i = 0; i < arrayList.size(); i++) {
                BatchReportMessage batchReportMessage = (BatchReportMessage) arrayList.get(i);
                if (batchReportMessage != null) {
                    String str = batchReportMessage.getReportMessage() + "&ts=" + batchReportMessage.getTimestamp();
                    if (e.a(aVarG, str)) {
                        sb.append(str);
                        if (i >= 0 && i < arrayList.size() - 1) {
                            sb.append("\n");
                        }
                    }
                }
            }
            try {
                String strEncode = URLEncoder.encode(sb.toString(), "utf-8");
                dVarA.a("data", strEncode);
                z.a(a, "需要批量上报的数据： " + strEncode);
                new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j()).post(0, bVar.g, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() {
                    @Override
                    public final void onSuccess(String str2) {
                        z.a(b.a, "批量上报成功");
                        try {
                            if (b.this.h != null) {
                                b.this.h.deleteBatchReportMessagesByTimestamp(j);
                            }
                        } catch (Exception e) {
                            z.d(b.a, e.getMessage());
                        }
                        synchronized (b.this.j) {
                            b.this.j.clear();
                        }
                    }

                    @Override
                    public final void onFailed(String str2) {
                        Stack stack;
                        z.a(b.a, "批量上报失败： " + str2);
                        synchronized (b.this.j) {
                            b.this.j.add(Long.valueOf(j));
                            if (b.this.h != null) {
                                b.this.h.updateMessagesReportState(arrayList);
                            }
                            if (b.this.j.size() >= 5) {
                                z.a(b.a, "批量上报失败，上报失败的数据超过阈值");
                                try {
                                    try {
                                        b.this.j.pop();
                                        long jLongValue = ((Long) b.this.j.pop()).longValue();
                                        b.this.j.clear();
                                        if (b.this.h != null) {
                                            b.this.h.deleteBatchReportMessagesByTimestamp(jLongValue);
                                        }
                                        stack = b.this.j;
                                    } catch (Exception e) {
                                        z.d(b.a, e.getMessage());
                                        stack = b.this.j;
                                    }
                                    stack.clear();
                                } catch (Throwable th) {
                                    b.this.j.clear();
                                    throw th;
                                }
                            }
                        }
                    }
                });
                return;
            } catch (Exception e) {
                z.d(a, e.getMessage());
                return;
            }
        }
        z.a(a, "需要上报的数据条数： 0");
    }
}
