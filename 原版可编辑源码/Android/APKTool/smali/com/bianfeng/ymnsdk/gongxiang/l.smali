.class public Lcom/bianfeng/ymnsdk/gongxiang/l;
.super Ljava/lang/Object;
.source "PluginEventMap.java"


# static fields
.field public static volatile a:Lcom/bianfeng/ymnsdk/gongxiang/l;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/bianfeng/ymnsdk/gongxiang/l;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/gongxiang/l;->a:Lcom/bianfeng/ymnsdk/gongxiang/l;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/gongxiang/l;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/gongxiang/l;->a:Lcom/bianfeng/ymnsdk/gongxiang/l;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/l;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/gongxiang/l;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/gongxiang/l;->a:Lcom/bianfeng/ymnsdk/gongxiang/l;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/gongxiang/l;->a:Lcom/bianfeng/ymnsdk/gongxiang/l;

    return-object v0
.end method

.method private a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 1
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    const-wide/16 v2, 0x0

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    move v2, p7

    move-object/from16 v3, p8

    invoke-direct {v1, p7, v3, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;-><init>(ILjava/lang/String;Ljava/lang/Long;)V

    .line 2
    new-instance v7, Lcom/bianfeng/ymnsdk/ymndatalib/e;

    move-object v0, v7

    move-object v2, p2

    move-object v3, p4

    move-object v4, p5

    move-object v5, p6

    move-object/from16 v6, p9

    invoke-direct/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/e;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    move v2, p1

    move-object v3, p3

    invoke-direct {v1, v7, p1, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/e;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    .locals 12

    .line 1
    move-object v0, p1

    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->b()Lcom/bianfeng/ymnsdk/ymndatalib/h;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 2
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0d\u5728\u767d\u540d\u5355"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    return-void

    :cond_0
    const/16 v3, 0x78b3

    .line 8
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0, v5}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getPluginTrace(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 9
    move-object v2, p0

    move-object v6, p2

    move-object v7, p3

    move-object/from16 v8, p4

    move/from16 v9, p5

    move-object/from16 v10, p6

    move-object/from16 v11, p7

    invoke-direct/range {v2 .. v11}, Lcom/bianfeng/ymnsdk/gongxiang/l;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 12

    .line 1
    move-object v0, p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6d4b\u8bd5\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->b()Lcom/bianfeng/ymnsdk/ymndatalib/h;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 3
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0d\u5728\u767d\u540d\u5355"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    return-void

    :cond_0
    const/16 v3, 0x7531

    .line 8
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0, v5}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getStartPluginTrace(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const/4 v9, 0x0

    const-string v11, ""

    move-object v2, p0

    move-object v6, p2

    move-object v7, p3

    move-object/from16 v8, p4

    move-object/from16 v10, p5

    invoke-direct/range {v2 .. v11}, Lcom/bianfeng/ymnsdk/gongxiang/l;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 11
    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
