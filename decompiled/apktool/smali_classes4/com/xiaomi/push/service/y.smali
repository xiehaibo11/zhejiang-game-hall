.class public Lcom/xiaomi/push/service/y;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a([BJ)Landroid/content/Intent;
    .locals 3

    invoke-static {p0}, Lcom/xiaomi/push/service/y;->a([B)Lcom/xiaomi/push/if;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v1, Landroid/content/Intent;

    const-string v2, "com.xiaomi.mipush.RECEIVE_MESSAGE"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v2, "mipush_payload"

    invoke-virtual {v1, v2, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[B)Landroid/content/Intent;

    invoke-static {p1, p2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object p0

    const-string p1, "mrt"

    invoke-virtual {v1, p1, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    iget-object p0, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {v1, p0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    return-object v1
.end method

.method public static a(Landroid/content/Context;Lcom/xiaomi/push/if;)Lcom/xiaomi/push/if;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Lcom/xiaomi/push/service/y;->a(Landroid/content/Context;Lcom/xiaomi/push/if;Ljava/util/Map;)Lcom/xiaomi/push/if;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;Lcom/xiaomi/push/if;Ljava/util/Map;)Lcom/xiaomi/push/if;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/xiaomi/push/if;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/xiaomi/push/if;"
        }
    .end annotation

    new-instance v0, Lcom/xiaomi/push/hz;

    invoke-direct {v0}, Lcom/xiaomi/push/hz;-><init>()V

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/hz;->b(Ljava/lang/String;)Lcom/xiaomi/push/hz;

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/xiaomi/push/hz;->a(Ljava/lang/String;)Lcom/xiaomi/push/hz;

    invoke-virtual {v1}, Lcom/xiaomi/push/hw;->a()J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Lcom/xiaomi/push/hz;->a(J)Lcom/xiaomi/push/hz;

    invoke-virtual {v1}, Lcom/xiaomi/push/hw;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v1}, Lcom/xiaomi/push/hw;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/hz;->c(Ljava/lang/String;)Lcom/xiaomi/push/hz;

    :cond_0
    invoke-static {p0, p1}, Lcom/xiaomi/push/it;->a(Landroid/content/Context;Lcom/xiaomi/push/if;)S

    move-result p0

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/hz;->a(S)Lcom/xiaomi/push/hz;

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->a()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/xiaomi/push/hj;->f:Lcom/xiaomi/push/hj;

    invoke-static {p0, v1, v0, v2}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;Ljava/lang/String;Lcom/xiaomi/push/iu;Lcom/xiaomi/push/hj;)Lcom/xiaomi/push/if;

    move-result-object p0

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/hw;->a()Lcom/xiaomi/push/hw;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/push/service/br;->a(Lcom/xiaomi/push/hw;)Lcom/xiaomi/push/hw;

    move-result-object p1

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v0

    const-string v1, "mat"

    invoke-virtual {p1, v1, v0}, Lcom/xiaomi/push/hw;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p2, :cond_2

    :try_start_0
    invoke-interface {p2}, Ljava/util/Map;->size()I

    move-result v0

    if-lez v0, :cond_2

    invoke-interface {p2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lcom/xiaomi/push/hw;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_2
    invoke-virtual {p0, p1}, Lcom/xiaomi/push/if;->a(Lcom/xiaomi/push/hw;)Lcom/xiaomi/push/if;

    return-object p0
.end method

.method public static a([B)Lcom/xiaomi/push/if;
    .locals 1

    new-instance v0, Lcom/xiaomi/push/if;

    invoke-direct {v0}, Lcom/xiaomi/push/if;-><init>()V

    :try_start_0
    invoke-static {v0, p0}, Lcom/xiaomi/push/it;->a(Lcom/xiaomi/push/iu;[B)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Landroid/content/Context;Lcom/xiaomi/push/if;[B)V
    .locals 10

    :try_start_0
    invoke-static {p1}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Ljava/lang/String;

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    invoke-static {p0, p1, p2}, Lcom/xiaomi/push/service/al;->a(Landroid/content/Context;Lcom/xiaomi/push/if;[B)Lcom/xiaomi/push/service/al$c;

    move-result-object v0

    iget-wide v1, v0, Lcom/xiaomi/push/service/al$c;->a:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_0

    iget-object v1, v0, Lcom/xiaomi/push/service/al$c;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v3, v0, Lcom/xiaomi/push/service/al$c;->a:Ljava/lang/String;

    iget-wide v4, v0, Lcom/xiaomi/push/service/al$c;->a:J

    const/4 v6, 0x1

    const/4 v7, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    move-object v2, p0

    invoke-static/range {v2 .. v9}, Lcom/xiaomi/push/hb;->a(Landroid/content/Context;Ljava/lang/String;JZZJ)V

    :cond_0
    invoke-static {p0}, Lcom/xiaomi/push/m;->a(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-boolean v0, v0, Lcom/xiaomi/push/service/al$c;->a:Z

    invoke-static {p0, p1, v0}, Lcom/xiaomi/push/service/ag;->a(Landroid/content/Context;Lcom/xiaomi/push/if;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0, p1}, Lcom/xiaomi/push/service/ag;->a(Landroid/content/Context;Lcom/xiaomi/push/if;)V

    const-string p0, "consume this broadcast by tts"

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    invoke-static {p0, p1, p2}, Lcom/xiaomi/push/service/y;->b(Landroid/content/Context;Lcom/xiaomi/push/if;[B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "notify push msg error "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/service/z;

    const/4 v1, 0x4

    invoke-direct {v0, v1, p0, p1}, Lcom/xiaomi/push/service/z;-><init>(ILcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method

.method private static a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Lcom/xiaomi/push/ii;)V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/service/af;

    const/4 v1, 0x4

    invoke-direct {v0, v1, p2, p1, p0}, Lcom/xiaomi/push/service/af;-><init>(ILcom/xiaomi/push/ii;Lcom/xiaomi/push/if;Lcom/xiaomi/push/service/XMPushService;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method

.method private static a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/service/ad;

    const/4 v1, 0x4

    invoke-direct {v0, v1, p0, p1, p2}, Lcom/xiaomi/push/service/ad;-><init>(ILcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method

.method private static a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    new-instance v6, Lcom/xiaomi/push/service/ae;

    const/4 v1, 0x4

    move-object v0, v6

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/xiaomi/push/service/ae;-><init>(ILcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v6}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method

.method public static a(Lcom/xiaomi/push/service/XMPushService;Ljava/lang/String;[BLandroid/content/Intent;)V
    .locals 19

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    move-object/from16 v2, p3

    invoke-static/range {p2 .. p2}, Lcom/xiaomi/push/service/y;->a([B)Lcom/xiaomi/push/if;

    move-result-object v3

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object v4

    const/4 v5, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v6

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v7

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v8

    array-length v9, v0

    invoke-static {v6, v7, v5, v8, v9}, Lcom/xiaomi/push/db;->a(Ljava/lang/String;Landroid/content/Context;Lcom/xiaomi/push/iu;Lcom/xiaomi/push/hj;I)V

    :cond_0
    invoke-static {v3}, Lcom/xiaomi/push/service/y;->c(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-static/range {p0 .. p1}, Lcom/xiaomi/push/service/y;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v4

    const-string v6, "5"

    invoke-virtual {v0, v2, v5, v4, v6}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    invoke-static {v1, v3}, Lcom/xiaomi/push/service/y;->c(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    goto/16 :goto_d

    :cond_2
    invoke-static {v3}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-eqz v6, :cond_4

    invoke-static/range {p0 .. p1}, Lcom/xiaomi/push/service/y;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_4

    invoke-static {v3}, Lcom/xiaomi/push/service/y;->b(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-nez v6, :cond_4

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v4

    const-string v6, "6"

    invoke-virtual {v0, v2, v5, v4, v6}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    invoke-static {v1, v3}, Lcom/xiaomi/push/service/y;->d(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    goto/16 :goto_d

    :cond_4
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-eqz v6, :cond_5

    iget-object v6, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v1, v6}, Lcom/xiaomi/push/h;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_6

    :cond_5
    invoke-static {v1, v2}, Lcom/xiaomi/push/service/y;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v6

    if-eqz v6, :cond_1f

    :cond_6
    sget-object v6, Lcom/xiaomi/push/hj;->a:Lcom/xiaomi/push/hj;

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v7

    const-string v8, "eventMessageType"

    const-string v9, "messageId"

    const/4 v10, 0x0

    if-ne v6, v7, :cond_8

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v12

    const-string v6, "pref_registered_pkg_names"

    invoke-virtual {v1, v6, v10}, Lcom/xiaomi/push/service/XMPushService;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v6

    invoke-interface {v6}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v6

    iget-object v7, v3, Lcom/xiaomi/push/if;->a:Ljava/lang/String;

    invoke-interface {v6, v12, v7}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v6}, Landroid/content/SharedPreferences$Editor;->commit()Z

    invoke-static {v3}, Lcom/xiaomi/push/service/n;->a(Lcom/xiaomi/push/if;)Lcom/xiaomi/push/ik;

    move-result-object v6

    invoke-virtual {v6}, Lcom/xiaomi/push/ik;->a()J

    move-result-wide v13

    const-wide/16 v15, 0x0

    cmp-long v7, v13, v15

    if-nez v7, :cond_7

    invoke-virtual {v6}, Lcom/xiaomi/push/ik;->b()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_7

    invoke-virtual {v6}, Lcom/xiaomi/push/ik;->b()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v12, v6}, Lcom/xiaomi/push/service/n;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_7
    const-string v6, "read regSecret failed"

    invoke-static {v6}, Lcom/xiaomi/channel/commonutils/logger/b;->d(Ljava/lang/String;)V

    :goto_0
    invoke-static/range {p0 .. p0}, Lcom/xiaomi/push/service/v;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/v;

    move-result-object v6

    invoke-virtual {v6, v12}, Lcom/xiaomi/push/service/v;->e(Ljava/lang/String;)V

    invoke-static/range {p0 .. p0}, Lcom/xiaomi/push/service/v;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/v;

    move-result-object v6

    invoke-virtual {v6, v12}, Lcom/xiaomi/push/service/v;->f(Ljava/lang/String;)V

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v11

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x1773

    const/16 v16, 0x0

    const-string v13, "E100003"

    invoke-virtual/range {v11 .. v16}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_8

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v9, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/16 v6, 0x1770

    invoke-virtual {v2, v8, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    :cond_8
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->c(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-eqz v6, :cond_9

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v11

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v12

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x3e9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    const/16 v18, 0x0

    invoke-virtual/range {v11 .. v18}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;)V

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_9

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v9, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/16 v6, 0x3e8

    invoke-virtual {v2, v8, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    :cond_9
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-eqz v6, :cond_a

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v11

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v12

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x7d1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    const/16 v18, 0x0

    invoke-virtual/range {v11 .. v18}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;)V

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_a

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v9, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/16 v6, 0x7d0

    invoke-virtual {v2, v8, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    :cond_a
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Z

    move-result v6

    if-eqz v6, :cond_b

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v11

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v12

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0xbb9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    const/16 v18, 0x0

    invoke-virtual/range {v11 .. v18}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;)V

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_b

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v9, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/16 v6, 0xbb8

    invoke-virtual {v2, v8, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    :cond_b
    const-string v6, "com.xiaomi.xmsf"

    const/4 v7, 0x1

    if-eqz v4, :cond_12

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->c()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_12

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->d()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_12

    iget v8, v4, Lcom/xiaomi/push/hw;->b:I

    if-eq v8, v7, :cond_12

    iget-object v8, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v9

    invoke-static {v9}, Lcom/xiaomi/push/service/al;->a(Ljava/util/Map;)Z

    move-result v9

    invoke-static {v1, v8, v9}, Lcom/xiaomi/push/service/al;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v8

    if-eqz v8, :cond_c

    goto/16 :goto_3

    :cond_c
    if-eqz v4, :cond_f

    iget-object v2, v4, Lcom/xiaomi/push/hw;->a:Ljava/util/Map;

    if-eqz v2, :cond_d

    iget-object v2, v4, Lcom/xiaomi/push/hw;->a:Ljava/util/Map;

    const-string v5, "jobkey"

    invoke-interface {v2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v5, v2

    check-cast v5, Ljava/lang/String;

    :cond_d
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_e

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v2

    move-object v5, v2

    :cond_e
    iget-object v2, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v1, v2, v5}, Lcom/xiaomi/push/service/an;->a(Lcom/xiaomi/push/service/XMPushService;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v10

    :cond_f
    if-eqz v10, :cond_10

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v4

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "1:"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v7, v4, v8}, Lcom/xiaomi/push/eo;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "drop a duplicate message, key="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_1
    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    goto :goto_2

    :cond_10
    invoke-static/range {p0 .. p0}, Lcom/xiaomi/push/m;->a(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_11

    invoke-static {v3}, Lcom/xiaomi/push/service/ag;->a(Lcom/xiaomi/push/if;)Z

    move-result v2

    if-eqz v2, :cond_11

    const-string v0, "receive pull down message"

    goto :goto_1

    :cond_11
    invoke-static {v1, v3, v0}, Lcom/xiaomi/push/service/y;->a(Landroid/content/Context;Lcom/xiaomi/push/if;[B)V

    :goto_2
    invoke-static {v1, v3}, Lcom/xiaomi/push/service/y;->b(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    goto/16 :goto_c

    :cond_12
    :goto_3
    iget-object v0, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {v6, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_13

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Z

    move-result v0

    if-nez v0, :cond_13

    if-eqz v4, :cond_13

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_13

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v0

    const-string v8, "ab"

    invoke-interface {v0, v8}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_13

    invoke-static {v1, v3}, Lcom/xiaomi/push/service/y;->b(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "receive abtest message. ack it."

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->c(Ljava/lang/String;)V

    goto/16 :goto_c

    :cond_13
    move-object/from16 v0, p1

    invoke-static {v1, v0, v3, v4}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Ljava/lang/String;Lcom/xiaomi/push/if;Lcom/xiaomi/push/hw;)Z

    move-result v0

    if-eqz v0, :cond_1d

    if-eqz v4, :cond_17

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_17

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_14

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v11

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v12

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x7d2

    const/16 v16, 0x0

    :goto_4
    invoke-virtual/range {v11 .. v16}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    goto :goto_6

    :cond_14
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_15

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v11

    const-string v12, "7"

    :goto_5
    invoke-virtual {v0, v8, v9, v11, v12}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_6

    :cond_15
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->c(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_16

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v11

    const-string v12, "8"

    goto :goto_5

    :cond_16
    invoke-static {v3}, Lcom/xiaomi/push/service/al;->d(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_17

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v11

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x1774

    const/16 v16, 0x0

    const-string v13, "E100003"

    goto :goto_4

    :cond_17
    :goto_6
    sget-object v0, Lcom/xiaomi/push/hj;->i:Lcom/xiaomi/push/hj;

    iget-object v8, v3, Lcom/xiaomi/push/if;->a:Lcom/xiaomi/push/hj;

    if-ne v0, v8, :cond_1c

    :try_start_0
    invoke-static {v1, v3}, Lcom/xiaomi/push/service/ce;->a(Landroid/content/Context;Lcom/xiaomi/push/if;)Lcom/xiaomi/push/iu;

    move-result-object v5

    if-nez v5, :cond_18

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "receiving an un-recognized notification message. "

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v3, Lcom/xiaomi/push/if;->a:Lcom/xiaomi/push/hj;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/xiaomi/push/iz; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_7

    :cond_18
    move v0, v7

    goto :goto_8

    :catch_0
    move-exception v0

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "receive a message which action string is not valid. "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->d(Ljava/lang/String;)V

    :goto_7
    move v0, v10

    :goto_8
    if-eqz v0, :cond_1c

    instance-of v0, v5, Lcom/xiaomi/push/ii;

    if-eqz v0, :cond_1c

    check-cast v5, Lcom/xiaomi/push/ii;

    sget-object v0, Lcom/xiaomi/push/ht;->C:Lcom/xiaomi/push/ht;

    iget-object v0, v0, Lcom/xiaomi/push/ht;->a:Ljava/lang/String;

    iget-object v8, v5, Lcom/xiaomi/push/ii;->d:Ljava/lang/String;

    invoke-virtual {v0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1c

    invoke-virtual {v5}, Lcom/xiaomi/push/ii;->a()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1c

    invoke-virtual {v5}, Lcom/xiaomi/push/ii;->a()Ljava/util/Map;

    move-result-object v0

    sget-object v7, Lcom/xiaomi/push/service/bk;->M:Ljava/lang/String;

    invoke-interface {v0, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    const/4 v8, -0x2

    if-nez v7, :cond_19

    :try_start_1
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_9

    :catch_1
    move-exception v0

    move-object v7, v0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "parse notifyId from STRING to INT failed: "

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    :cond_19
    :goto_9
    const/4 v0, -0x1

    if-lt v8, v0, :cond_1a

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "try to retract a message by notifyId="

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    iget-object v0, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v1, v0, v8}, Lcom/xiaomi/push/service/al;->a(Landroid/content/Context;Ljava/lang/String;I)V

    goto :goto_a

    :cond_1a
    invoke-virtual {v5}, Lcom/xiaomi/push/ii;->a()Ljava/util/Map;

    move-result-object v0

    sget-object v7, Lcom/xiaomi/push/service/bk;->K:Ljava/lang/String;

    invoke-interface {v0, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v5}, Lcom/xiaomi/push/ii;->a()Ljava/util/Map;

    move-result-object v7

    sget-object v8, Lcom/xiaomi/push/service/bk;->L:Ljava/lang/String;

    invoke-interface {v7, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    const-string v8, "try to retract a message by title&description."

    invoke-static {v8}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    iget-object v8, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v1, v8, v0, v7}, Lcom/xiaomi/push/service/al;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_a
    if-eqz v4, :cond_1b

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1b

    invoke-static/range {p0 .. p0}, Lcom/xiaomi/push/m;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1b

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/service/ay;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v4, "pulldown"

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1b

    invoke-static {v3}, Lcom/xiaomi/push/service/ag;->a(Lcom/xiaomi/push/if;)V

    :cond_1b
    invoke-static {v1, v3, v5}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Lcom/xiaomi/push/ii;)V

    goto :goto_b

    :cond_1c
    move v10, v7

    :goto_b
    if-eqz v10, :cond_1e

    const-string v0, "broadcast passthrough message."

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    iget-object v0, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Lcom/xiaomi/push/service/XMPushService;->sendBroadcast(Landroid/content/Intent;Ljava/lang/String;)V

    goto :goto_c

    :cond_1d
    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v4

    const-string v7, "9"

    invoke-virtual {v0, v2, v5, v4, v7}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1e
    :goto_c
    invoke-virtual {v3}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v0

    sget-object v2, Lcom/xiaomi/push/hj;->b:Lcom/xiaomi/push/hj;

    if-ne v0, v2, :cond_22

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_22

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->stopSelf()V

    goto :goto_d

    :cond_1f
    iget-object v0, v3, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/xiaomi/push/h;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_21

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_20

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v4

    const-string v6, "2"

    invoke-virtual {v0, v2, v5, v4, v6}, Lcom/xiaomi/push/eo;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_20
    invoke-static {v1, v3}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    goto :goto_d

    :cond_21
    const-string v0, "receive a mipush message, we can see the app, but we can\'t see the receiver."

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_22

    invoke-virtual/range {p0 .. p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object v0

    invoke-virtual {v3}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v3

    const-string v4, "3"

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/xiaomi/push/eo;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_22
    :goto_d
    return-void
.end method

.method private static a(Lcom/xiaomi/push/service/XMPushService;[BJ)V
    .locals 12

    invoke-static {p1}, Lcom/xiaomi/push/service/y;->a([B)Lcom/xiaomi/push/if;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v1, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string p0, "receive a mipush message without package name"

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    invoke-static {p1, v2, v3}, Lcom/xiaomi/push/service/y;->a([BJ)Landroid/content/Intent;

    move-result-object v2

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v11

    const/4 v7, 0x1

    const/4 v8, 0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    move-object v3, p0

    move-object v4, v11

    move-wide v5, p2

    invoke-static/range {v3 .. v10}, Lcom/xiaomi/push/hb;->a(Landroid/content/Context;Ljava/lang/String;JZZJ)V

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object p2

    if-eqz p2, :cond_2

    invoke-virtual {p2}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object p3

    if-eqz p3, :cond_2

    const/4 p3, 0x3

    new-array p3, p3, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Ljava/lang/String;

    move-result-object v4

    aput-object v4, p3, v3

    const/4 v3, 0x1

    invoke-virtual {p2}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v4

    aput-object v4, p3, v3

    const/4 v3, 0x2

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v4

    aput-object v4, p3, v3

    const-string v3, "receive a message. appid=%1$s, msgid= %2$s, action=%3$s"

    invoke-static {v3, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/xiaomi/channel/commonutils/logger/b;->e(Ljava/lang/String;)V

    :cond_2
    if-eqz p2, :cond_3

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object p3

    const-string v1, "mrt"

    invoke-virtual {p2, v1, p3}, Lcom/xiaomi/push/hw;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    sget-object p3, Lcom/xiaomi/push/hj;->e:Lcom/xiaomi/push/hj;

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v1

    const-string v3, ""

    if-ne p3, v1, :cond_5

    invoke-static {p0}, Lcom/xiaomi/push/service/v;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/v;

    move-result-object p3

    iget-object v1, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {p3, v1}, Lcom/xiaomi/push/service/v;->a(Ljava/lang/String;)Z

    move-result p3

    if-eqz p3, :cond_5

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Z

    move-result p3

    if-nez p3, :cond_5

    if-eqz p2, :cond_4

    invoke-virtual {p2}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object p1

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object p3

    const-string v1, "1"

    invoke-virtual {p1, p2, p3, v3, v1}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "Drop a message for unregistered, msgid="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    iget-object p1, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {p0, v0, p1}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;)V

    return-void

    :cond_5
    sget-object p3, Lcom/xiaomi/push/hj;->e:Lcom/xiaomi/push/hj;

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v1

    if-ne p3, v1, :cond_7

    invoke-static {p0}, Lcom/xiaomi/push/service/v;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/v;

    move-result-object p3

    iget-object v1, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {p3, v1}, Lcom/xiaomi/push/service/v;->c(Ljava/lang/String;)Z

    move-result p3

    if-eqz p3, :cond_7

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Z

    move-result p3

    if-nez p3, :cond_7

    if-eqz p2, :cond_6

    invoke-virtual {p2}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result p1

    if-eqz p1, :cond_6

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object p1

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object p3

    const-string v1, "2"

    invoke-virtual {p1, p2, p3, v3, v1}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "Drop a message for push closed, msgid="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    iget-object p1, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {p0, v0, p1}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;)V

    return-void

    :cond_7
    sget-object p3, Lcom/xiaomi/push/hj;->e:Lcom/xiaomi/push/hj;

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v1

    if-ne p3, v1, :cond_9

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object p3

    const-string v1, "com.xiaomi.xmsf"

    invoke-static {p3, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_9

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object p3

    iget-object v1, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {p3, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_9

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "Receive a message with wrong package name, expect "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ", received "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "package should be "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ", but got "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, v0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "unmatched_package"

    invoke-static {p0, v0, p3, p1}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p2, :cond_8

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->e(Lcom/xiaomi/push/if;)Z

    move-result p1

    if-eqz p1, :cond_8

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object p0

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object p2

    const-string v0, "3"

    invoke-virtual {p0, p1, p3, p2, v0}, Lcom/xiaomi/push/eo;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    return-void

    :cond_9
    sget-object p3, Lcom/xiaomi/push/hj;->e:Lcom/xiaomi/push/hj;

    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hj;

    move-result-object v1

    if-ne p3, v1, :cond_a

    invoke-static {}, Lcom/xiaomi/push/j;->a()I

    move-result p3

    const/16 v1, 0x3e7

    if-ne p3, v1, :cond_a

    invoke-static {p0, v11}, Lcom/xiaomi/push/j;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p3

    if-eqz p3, :cond_a

    const-string p1, "Receive the uninstalled dual app message"

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    :try_start_0
    invoke-virtual {v0}, Lcom/xiaomi/push/if;->a()Ljava/lang/String;

    move-result-object p1

    invoke-static {v11, p1}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/xiaomi/push/if;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/xiaomi/push/service/ah;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "uninstall "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " msg sent"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/xiaomi/push/gh; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "Fail to send Message: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/xiaomi/push/gh;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/xiaomi/channel/commonutils/logger/b;->d(Ljava/lang/String;)V

    const/16 p2, 0xa

    invoke-virtual {p0, p2, p1}, Lcom/xiaomi/push/service/XMPushService;->a(ILjava/lang/Exception;)V

    :goto_0
    invoke-static {p0, v11}, Lcom/xiaomi/push/service/al;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void

    :cond_a
    if-eqz p2, :cond_b

    invoke-virtual {p2}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object p2

    if-eqz p2, :cond_b

    const-string p3, "hide"

    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    const-string p3, "true"

    invoke-virtual {p3, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_b

    invoke-static {p0, v0}, Lcom/xiaomi/push/service/y;->b(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    return-void

    :cond_b
    invoke-static {p0, v11, p1, v2}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;Ljava/lang/String;[BLandroid/content/Intent;)V

    return-void
.end method

.method private static a(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 2

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/16 v0, 0x20

    const/4 v1, 0x1

    :try_start_0
    invoke-virtual {p0, p1, v0}, Landroid/content/pm/PackageManager;->queryBroadcastReceivers(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :catch_0
    :goto_0
    return v1
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.xiaomi.mipush.miui.CLICK_MESSAGE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    new-instance v1, Landroid/content/Intent;

    const-string v2, "com.xiaomi.mipush.miui.RECEIVE_MESSAGE"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 p1, 0x0

    const/16 v2, 0x20

    :try_start_0
    invoke-virtual {p0, v1, v2}, Landroid/content/pm/PackageManager;->queryBroadcastReceivers(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v1

    invoke-virtual {p0, v0, v2}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p0

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_1

    :cond_0
    const/4 p1, 0x1

    :cond_1
    return p1

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/Throwable;)V

    return p1
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;[B)Z
    .locals 3

    invoke-static {p0, p1}, Lcom/xiaomi/push/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Landroid/content/Intent;

    const-string v2, "com.xiaomi.mipush.MESSAGE_ARRIVED"

    invoke-direct {v0, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v2, "mipush_payload"

    invoke-virtual {v0, v2, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[B)Landroid/content/Intent;

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p2

    invoke-virtual {p2, v0, v1}, Landroid/content/pm/PackageManager;->queryBroadcastReceivers(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/List;->isEmpty()Z

    move-result p2

    if-nez p2, :cond_0

    const-string p2, "broadcast message arrived."

    invoke-static {p2}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    move v1, p0

    goto :goto_0

    :catch_0
    move-exception p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "meet error when broadcast message arrived. "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return v1
.end method

.method private static a(Lcom/xiaomi/push/if;)Z
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    const-string v1, "com.xiaomi.xmsf"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object p0

    invoke-virtual {p0}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object p0

    const-string v0, "miui_package_name"

    invoke-interface {p0, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static a(Lcom/xiaomi/push/service/XMPushService;Ljava/lang/String;Lcom/xiaomi/push/if;Lcom/xiaomi/push/hw;)Z
    .locals 6

    const/4 v0, 0x1

    if-eqz p3, :cond_1

    invoke-virtual {p3}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p3}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v1

    const-string v2, "__check_alive"

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p3}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v1

    const-string v2, "__awake"

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/xiaomi/push/ii;

    invoke-direct {v1}, Lcom/xiaomi/push/ii;-><init>()V

    invoke-virtual {p2}, Lcom/xiaomi/push/if;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/xiaomi/push/ii;->b(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    invoke-virtual {v1, p1}, Lcom/xiaomi/push/ii;->d(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    sget-object v3, Lcom/xiaomi/push/ht;->H:Lcom/xiaomi/push/ht;

    iget-object v3, v3, Lcom/xiaomi/push/ht;->a:Ljava/lang/String;

    invoke-virtual {v1, v3}, Lcom/xiaomi/push/ii;->c(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    invoke-virtual {p3}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/xiaomi/push/ii;->a(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    iput-object v3, v1, Lcom/xiaomi/push/ii;->a:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/xiaomi/push/service/XMPushService;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, p1}, Lcom/xiaomi/push/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    iget-object v3, v1, Lcom/xiaomi/push/ii;->a:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;

    move-result-object v4

    const-string v5, "app_running"

    invoke-interface {v3, v5, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-nez p1, :cond_0

    invoke-virtual {p3}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result p1

    iget-object p3, v1, Lcom/xiaomi/push/ii;->a:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;

    move-result-object v2

    const-string v3, "awaked"

    invoke-interface {p3, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-nez p1, :cond_0

    const/4 v0, 0x0

    :cond_0
    invoke-virtual {p2}, Lcom/xiaomi/push/if;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2}, Lcom/xiaomi/push/if;->a()Ljava/lang/String;

    move-result-object p2

    sget-object p3, Lcom/xiaomi/push/hj;->i:Lcom/xiaomi/push/hj;

    invoke-static {p1, p2, v1, p3}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;Ljava/lang/String;Lcom/xiaomi/push/iu;Lcom/xiaomi/push/hj;)Lcom/xiaomi/push/if;

    move-result-object p1

    :try_start_0
    invoke-static {p0, p1}, Lcom/xiaomi/push/service/ah;->a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V
    :try_end_0
    .catch Lcom/xiaomi/push/gh; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return v0
.end method

.method private static b(Landroid/content/Context;Lcom/xiaomi/push/if;[B)V
    .locals 2

    invoke-static {p1}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/xiaomi/push/service/al;->a(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    :cond_1
    invoke-static {p0, v0, p2}, Lcom/xiaomi/push/service/y;->a(Landroid/content/Context;Ljava/lang/String;[B)Z

    move-result p2

    if-nez p2, :cond_2

    invoke-static {p0}, Lcom/xiaomi/push/eo;->a(Landroid/content/Context;)Lcom/xiaomi/push/eo;

    move-result-object p0

    invoke-static {p1}, Lcom/xiaomi/push/service/al;->b(Lcom/xiaomi/push/if;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object p1

    invoke-virtual {p1}, Lcom/xiaomi/push/hw;->a()Ljava/lang/String;

    move-result-object p1

    const-string v1, "1"

    invoke-virtual {p0, v0, p2, p1, v1}, Lcom/xiaomi/push/eo;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method private static b(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/service/aa;

    const/4 v1, 0x4

    invoke-direct {v0, v1, p0, p1}, Lcom/xiaomi/push/service/aa;-><init>(ILcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method

.method private static b(Lcom/xiaomi/push/if;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object p0

    invoke-virtual {p0}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object p0

    if-eqz p0, :cond_0

    const-string v0, "notify_effect"

    invoke-interface {p0, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static c(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/service/ab;

    const/4 v1, 0x4

    invoke-direct {v0, v1, p0, p1}, Lcom/xiaomi/push/service/ab;-><init>(ILcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method

.method private static c(Lcom/xiaomi/push/if;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/if;->a()Lcom/xiaomi/push/hw;

    move-result-object p0

    invoke-virtual {p0}, Lcom/xiaomi/push/hw;->a()Ljava/util/Map;

    move-result-object p0

    const-string v0, "obslete_ads_message"

    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    const-string v0, "1"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method

.method private static d(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/service/ac;

    const/4 v1, 0x4

    invoke-direct {v0, v1, p0, p1}, Lcom/xiaomi/push/service/ac;-><init>(ILcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/if;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService$j;)V

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;Lcom/xiaomi/push/service/bg$b;ZILjava/lang/String;)V
    .locals 0

    if-nez p3, :cond_0

    invoke-static {p1}, Lcom/xiaomi/push/service/u;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/t;

    move-result-object p2

    if-eqz p2, :cond_0

    const-string p3, "token-expired"

    invoke-virtual {p3, p5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_0

    iget-object p3, p2, Lcom/xiaomi/push/service/t;->f:Ljava/lang/String;

    iget-object p4, p2, Lcom/xiaomi/push/service/t;->d:Ljava/lang/String;

    iget-object p2, p2, Lcom/xiaomi/push/service/t;->e:Ljava/lang/String;

    invoke-static {p1, p3, p4, p2}, Lcom/xiaomi/push/service/u;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/xiaomi/push/service/t;

    :cond_0
    return-void
.end method

.method public a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/fl;Lcom/xiaomi/push/service/bg$b;)V
    .locals 2

    :try_start_0
    iget-object p3, p3, Lcom/xiaomi/push/service/bg$b;->h:Ljava/lang/String;

    invoke-virtual {p2, p3}, Lcom/xiaomi/push/fl;->a(Ljava/lang/String;)[B

    move-result-object p3

    invoke-virtual {p2}, Lcom/xiaomi/push/fl;->c()I

    move-result p2

    int-to-long v0, p2

    invoke-static {p1, p3, v0, v1}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;[BJ)V
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/gn;Lcom/xiaomi/push/service/bg$b;)V
    .locals 2

    instance-of v0, p2, Lcom/xiaomi/push/gm;

    if-eqz v0, :cond_0

    move-object v0, p2

    check-cast v0, Lcom/xiaomi/push/gm;

    const-string v1, "s"

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/gm;->a(Ljava/lang/String;)Lcom/xiaomi/push/gk;

    move-result-object v1

    if-eqz v1, :cond_1

    :try_start_0
    iget-object p3, p3, Lcom/xiaomi/push/service/bg$b;->h:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/xiaomi/push/gm;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Lcom/xiaomi/push/service/bp;->a(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object p3

    invoke-virtual {v1}, Lcom/xiaomi/push/gk;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Lcom/xiaomi/push/service/bp;->a([BLjava/lang/String;)[B

    move-result-object p3

    invoke-virtual {p2}, Lcom/xiaomi/push/gn;->a()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/xiaomi/push/hb;->a(Ljava/lang/String;)I

    move-result p2

    int-to-long v0, p2

    invoke-static {p1, p3, v0, v1}, Lcom/xiaomi/push/service/y;->a(Lcom/xiaomi/push/service/XMPushService;[BJ)V
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_0
    const-string p1, "not a mipush message"

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
