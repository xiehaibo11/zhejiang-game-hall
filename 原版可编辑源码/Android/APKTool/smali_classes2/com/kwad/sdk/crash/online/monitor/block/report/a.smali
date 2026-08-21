.class public Lcom/kwad/sdk/crash/online/monitor/block/report/a;
.super Lcom/kwad/sdk/core/report/e;


# static fields
.field public static If:I = 0x1

.field private static volatile aAS:Lcom/kwad/sdk/crash/online/monitor/block/report/a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/crash/online/monitor/block/a/a;

    sget v1, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->If:I

    invoke-direct {v0, p1, v1}, Lcom/kwad/sdk/crash/online/monitor/block/a/a;-><init>(Landroid/content/Context;I)V

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/e;-><init>(Lcom/kwad/sdk/core/report/d;)V

    return-void
.end method

.method public static bw(Landroid/content/Context;)Lcom/kwad/sdk/crash/online/monitor/block/report/a;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->aAS:Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->aAS:Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/crash/online/monitor/block/report/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->aAS:Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->aAS:Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    return-object p0
.end method

.method private declared-synchronized j(Landroid/database/Cursor;)Lcom/kwad/sdk/crash/online/monitor/block/report/BlockReportAction;
    .locals 1

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p1, Lcom/kwad/sdk/crash/online/monitor/block/report/BlockReportAction;

    invoke-direct {p1, v0}, Lcom/kwad/sdk/crash/online/monitor/block/report/BlockReportAction;-><init>(Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    :catch_0
    move-exception p1

    :try_start_2
    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    new-instance p1, Lcom/kwad/sdk/crash/online/monitor/block/report/BlockReportAction;

    const-string v0, ""

    invoke-direct {p1, v0}, Lcom/kwad/sdk/crash/online/monitor/block/report/BlockReportAction;-><init>(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final BV()Ljava/lang/String;
    .locals 1

    const-string v0, "ksad_block_actions"

    return-object v0
.end method

.method public final BW()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "select aLog from "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->BV()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic g(Landroid/database/Cursor;)Lcom/kwad/sdk/core/report/g;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->j(Landroid/database/Cursor;)Lcom/kwad/sdk/crash/online/monitor/block/report/BlockReportAction;

    move-result-object p1

    return-object p1
.end method

.method public final getTag()Ljava/lang/String;
    .locals 1

    const-string v0, "perfMonitor.BlockReportDBManager"

    return-object v0
.end method
