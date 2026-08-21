.class public final Lcom/kwad/sdk/core/report/KSLoggerReporter;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/report/KSLoggerReporter$b;,
        Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;,
        Lcom/kwad/sdk/core/report/KSLoggerReporter$a;
    }
.end annotation


# static fields
.field private static arb:F = -1.0f

.field private static arc:D = -1.0

.field private static ard:Z

.field private static volatile are:Z

.field private static arf:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwai/adclient/kscommerciallogger/model/c;",
            ">;"
        }
    .end annotation
.end field

.field private static arg:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

.field private static final sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)Lcom/kwad/sdk/core/report/f;
    .locals 7

    const-string v0, "ratio"

    const-string v1, "ratio_count"

    new-instance v2, Lcom/kwad/sdk/core/report/f;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/f;-><init>()V

    :try_start_0
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->getDouble(Ljava/lang/String;)D

    move-result-wide p0

    iput-wide p0, v2, Lcom/kwad/sdk/core/report/f;->aqQ:D

    return-object v2

    :cond_0
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->getDouble(Ljava/lang/String;)D

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmpl-double v0, v3, v5

    if-lez v0, :cond_1

    const-wide/high16 p0, 0x3ff0000000000000L    # 1.0

    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->getDouble(Ljava/lang/String;)D

    move-result-wide p2

    div-double/2addr p0, p2

    iput-wide p0, v2, Lcom/kwad/sdk/core/report/f;->aqQ:D

    return-object v2

    :cond_1
    sget-object p2, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arg:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

    invoke-interface {p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$a;->xm()Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_3

    sget-object p0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    if-nez p0, :cond_2

    return-object v2

    :cond_2
    new-instance p0, Ljava/lang/Exception;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "reportConf\u672a\u521d\u59cb\u5316 eventId:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_3
    invoke-static {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->dv(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_5

    sget-object p0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    if-nez p0, :cond_4

    return-object v2

    :cond_4
    new-instance p0, Ljava/lang/Exception;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "EventSamplingKey\u672a\u5305\u542b eventId "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_5
    invoke-virtual {v2, p0, p2, p3}, Lcom/kwad/sdk/core/report/f;->a(Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    return-object v2
.end method

.method private static a(Ljava/lang/String;Lcom/kwad/sdk/core/report/f;)Ljava/lang/String;
    .locals 4

    const-string v0, "ad_client_apm_log"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-wide v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arc:D

    iget-wide v2, p1, Lcom/kwad/sdk/core/report/f;->aqR:D

    cmpg-double p1, v0, v2

    if-gez p1, :cond_0

    const-string p0, "ad_client_error_log"

    :cond_0
    return-object p0
.end method

.method private static a(Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/f;)Lorg/json/JSONObject;
    .locals 8

    :try_start_0
    const-string v0, "ratio"

    iget-wide v1, p1, Lcom/kwad/sdk/core/report/f;->aqQ:D

    invoke-static {p0, v0, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    iget-wide v0, p1, Lcom/kwad/sdk/core/report/f;->aqQ:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    if-lez v0, :cond_0

    const-string v0, "ratio_count"

    iget-wide v6, p1, Lcom/kwad/sdk/core/report/f;->aqQ:D

    div-double v6, v4, v6

    invoke-static {p0, v0, v6, v7}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_0
    const-string v0, "debug_mode"

    sget-object v1, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    const-string v0, "convert_ratio"

    iget-wide v6, p1, Lcom/kwad/sdk/core/report/f;->aqR:D

    invoke-static {p0, v0, v6, v7}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    iget-wide v0, p1, Lcom/kwad/sdk/core/report/f;->aqR:D

    cmpl-double v0, v0, v2

    if-lez v0, :cond_2

    const-string v0, "convert_ratio_count"

    iget-wide v1, p1, Lcom/kwad/sdk/core/report/f;->aqR:D

    div-double/2addr v4, v1

    invoke-static {p0, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-object p0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-object p0
.end method

.method public static declared-synchronized a(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    :try_start_0
    sget-boolean v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->ard:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    const/4 v1, 0x1

    :try_start_1
    sput-boolean v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->ard:Z

    sput-object p0, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arg:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

    new-instance v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$1;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$1;-><init>(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Lcom/kwad/sdk/core/report/m;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    const-string v1, "ad_client_error_log"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    const-string v1, "ad_union_error_log"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/p$a;->dB(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/m;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method

.method public static declared-synchronized a(Lcom/kwad/sdk/core/report/p;)V
    .locals 9

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/core/report/p;->tag:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/p;->eventId:Ljava/lang/String;

    iput-object v1, p0, Lcom/kwad/sdk/core/report/p;->tag:Ljava/lang/String;

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/report/p;->category:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/core/report/p;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iget-object v3, p0, Lcom/kwad/sdk/core/report/p;->arl:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iget-object v4, p0, Lcom/kwad/sdk/core/report/p;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    iget-object v5, p0, Lcom/kwad/sdk/core/report/p;->eventId:Ljava/lang/String;

    iget-object v6, p0, Lcom/kwad/sdk/core/report/p;->tag:Ljava/lang/String;

    iget-object v7, p0, Lcom/kwad/sdk/core/report/p;->suffixRatio:Ljava/lang/String;

    iget-object v8, p0, Lcom/kwad/sdk/core/report/p;->msg:Lorg/json/JSONObject;

    invoke-static/range {v1 .. v8}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized a(Lcom/kwai/adclient/kscommerciallogger/model/c;)V
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;

    if-nez v1, :cond_0

    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;

    :cond_0
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/HybridLoadMsg;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->WEB_CACHE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    const-string v4, "union_web_cache_download_event"

    move-object v0, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;)V
    .locals 11

    iget-wide v0, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->rate:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-ltz v0, :cond_0

    iget-object v0, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->msg:Lorg/json/JSONObject;

    iget-wide v1, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->rate:D

    const-string v3, "ratio"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_0
    iget-object v5, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iget-object v6, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iget-object v7, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->type:Lcom/kwai/adclient/kscommerciallogger/model/b;

    iget-object v8, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    iget-object v9, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    iget-object v10, p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->msg:Lorg/json/JSONObject;

    move-object v4, p0

    invoke-static/range {v4 .. v10}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p1}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    const-string v4, "union_webview_load_event"

    move-object v0, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static declared-synchronized a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 5
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    :try_start_0
    invoke-static {p0, p4, p7, p6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)Lcom/kwad/sdk/core/report/f;

    move-result-object p6

    sget v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arb:F

    const/high16 v2, -0x40800000    # -1.0f

    cmpl-float v1, v1, v2

    if-nez v1, :cond_0

    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextFloat()F

    move-result v1

    sput v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arb:F

    :cond_0
    sget-wide v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arc:D

    const-wide/high16 v3, -0x4010000000000000L    # -1.0

    cmpl-double v1, v1, v3

    if-nez v1, :cond_1

    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextFloat()F

    move-result v1

    float-to-double v1, v1

    sput-wide v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arc:D

    :cond_1
    sget v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arb:F

    float-to-double v1, v1

    iget-wide v3, p6, Lcom/kwad/sdk/core/report/f;->aqQ:D
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    cmpl-double v1, v1, v3

    if-lez v1, :cond_2

    monitor-exit v0

    return-void

    :cond_2
    :try_start_1
    const-string v1, "3.3.42"

    iget-object v2, p6, Lcom/kwad/sdk/core/report/f;->aqS:Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/bk;->aw(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-nez v1, :cond_3

    monitor-exit v0

    return-void

    :cond_3
    :try_start_2
    const-string v1, "ad_client_error_log"

    invoke-static {p0, p6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwad/sdk/core/report/f;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    invoke-static {}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->Lg()Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    goto :goto_0

    :cond_4
    invoke-static {}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->Lh()Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    :goto_0
    invoke-virtual {p0, p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->c(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    invoke-virtual {p0, p5}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->fZ(Ljava/lang/String;)Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    invoke-virtual {p0, p4}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->ga(Ljava/lang/String;)Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    invoke-static {p7, p6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/f;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->P(Lorg/json/JSONObject;)Lcom/kwai/adclient/kscommerciallogger/model/c$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->Li()Lcom/kwai/adclient/kscommerciallogger/model/c;

    move-result-object p0

    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-eqz p1, :cond_5

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(Lcom/kwai/adclient/kscommerciallogger/model/c;)V

    goto :goto_1

    :cond_5
    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwai/adclient/kscommerciallogger/model/c;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_3
    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    const-class p1, Lcom/kwad/sdk/service/a/d;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/d;

    if-eqz p1, :cond_6

    invoke-interface {p1, p0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_6
    :goto_1
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 9
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p4

    move-object v7, p5

    move-object v8, p6

    :try_start_0
    invoke-static/range {v1 .. v8}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 8
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    :try_start_0
    const-string v6, ""

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v7, p5

    invoke-static/range {v1 .. v7}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/d;Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SDK_INIT:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    const-string v0, "ad_client_error_log"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "ad_sdk_init_error_performance"

    goto :goto_0

    :cond_0
    const-string v0, "ad_sdk_init_performance"

    :goto_0
    move-object v4, v0

    move-object v0, p0

    move-object v3, p1

    move-object v5, p2

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLorg/json/JSONObject;)V
    .locals 7

    if-eqz p0, :cond_0

    const-string v0, "ad_sdk_reward_download_error"

    goto :goto_0

    :cond_0
    const-string v0, "ad_sdk_fullscreen_download_error"

    :goto_0
    move-object v5, v0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_1

    :cond_1
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :goto_1
    move-object v2, p0

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v4, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNt:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v1, "ad_client_error_log"

    move-object v6, p1

    invoke-static/range {v1 .. v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLorg/json/JSONObject;Lcom/kwai/adclient/kscommerciallogger/model/d;)V
    .locals 7

    if-eqz p0, :cond_0

    const-string v0, "ad_sdk_reward_load"

    goto :goto_0

    :cond_0
    const-string v0, "ad_sdk_fullscreen_load"

    :goto_0
    move-object v5, v0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_1

    :cond_1
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :goto_1
    move-object v2, p0

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    const-string v1, "ad_client_apm_log"

    move-object v4, p2

    move-object v6, p1

    invoke-static/range {v1 .. v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V
    .locals 7

    invoke-interface {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$a;->xl()Z

    move-result v0

    sput-boolean v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;->are:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwai/adclient/kscommerciallogger/a;->KW()Lcom/kwai/adclient/kscommerciallogger/a;

    move-result-object v1

    new-instance v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$2;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$2;-><init>()V

    new-instance v3, Lcom/kwad/sdk/core/report/KSLoggerReporter$3;

    invoke-direct {v3, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$3;-><init>(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V

    const/4 v4, 0x0

    sget-object p0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    sget-object p0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    invoke-virtual/range {v1 .. v6}, Lcom/kwai/adclient/kscommerciallogger/a;->a(Lcom/kwai/adclient/kscommerciallogger/a/a;Lcom/kwai/adclient/kscommerciallogger/a/b;Lorg/json/JSONObject;ZZ)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/utils/b/a;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p0}, Lcom/kwad/sdk/utils/b/a;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_union_kv_fail_rate"

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwai/adclient/kscommerciallogger/model/c;)V
    .locals 1

    sget-boolean v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;->are:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwai/adclient/kscommerciallogger/a;->KW()Lcom/kwai/adclient/kscommerciallogger/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwai/adclient/kscommerciallogger/a;->c(Lcom/kwai/adclient/kscommerciallogger/model/c;)V

    :cond_0
    return-void
.end method

.method public static b(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/HybridLoadMsg;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->WEB_CACHE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    const-string v4, "union_web_cache_load_event"

    move-object v0, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static b(ZLorg/json/JSONObject;)V
    .locals 7

    if-eqz p0, :cond_0

    const-string v0, "ad_sdk_reward_page_show"

    goto :goto_0

    :cond_0
    const-string v0, "ad_sdk_fullscreen_page_show"

    :goto_0
    move-object v5, v0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_1

    :cond_1
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :goto_1
    move-object v2, p0

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v4, Lcom/kwai/adclient/kscommerciallogger/model/a;->aMW:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v1, "ad_client_apm_log"

    move-object v6, p1

    invoke-static/range {v1 .. v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static c(Lcom/kwad/sdk/core/network/j;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/j;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_perf_monitor_net_error"

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static c(Lcom/kwad/sdk/core/network/k;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/k;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_perf_monitor_net_success"

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V

    return-void
.end method

.method public static c(ZLorg/json/JSONObject;)V
    .locals 7

    if-eqz p0, :cond_0

    const-string v0, "ad_sdk_reward_play_error"

    goto :goto_0

    :cond_0
    const-string v0, "ad_sdk_fullscreen_play_error"

    :goto_0
    move-object v5, v0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_1

    :cond_1
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :goto_1
    move-object v2, p0

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v4, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNz:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v1, "ad_client_error_log"

    move-object v6, p1

    invoke-static/range {v1 .. v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;
    .locals 1

    const/4 v0, 0x1

    if-eq p0, v0, :cond_5

    const/4 v0, 0x2

    if-eq p0, v0, :cond_4

    const/4 v0, 0x3

    if-eq p0, v0, :cond_3

    const/4 v0, 0x4

    if-eq p0, v0, :cond_2

    const/16 v0, 0xd

    if-eq p0, v0, :cond_1

    const/16 v0, 0x2710

    if-eq p0, v0, :cond_0

    const/4 p0, 0x0

    goto :goto_0

    :cond_0
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_NATIVE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_0

    :cond_1
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_0

    :cond_2
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_0

    :cond_3
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_0

    :cond_4
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    goto :goto_0

    :cond_5
    sget-object p0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FEED:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :goto_0
    return-object p0
.end method

.method private static dv(Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    :try_start_0
    const-string v0, "_"

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    array-length v1, p0

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v5, p0, v3

    const/4 v6, 0x1

    if-eqz v4, :cond_0

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/String;->charAt(I)C

    move-result v8

    invoke-static {v8}, Ljava/lang/Character;->toUpperCase(C)C

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_1

    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/String;->charAt(I)C

    move-result v7

    invoke-static {v7}, Ljava/lang/Character;->toLowerCase(C)C

    move-result v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    move v4, v6

    :goto_1
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    const-string p0, "ReportRate"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v0}, Ljava/lang/String;-><init>(Ljava/lang/StringBuilder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const-string p0, ""

    return-object p0
.end method

.method public static i(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    new-instance v3, Lcom/kwai/adclient/kscommerciallogger/model/b;

    const-string v0, "RESULT_CHECK_REWARD"

    invoke-direct {v3, v0}, Lcom/kwai/adclient/kscommerciallogger/model/b;-><init>(Ljava/lang/String;)V

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_reward_check_result"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static j(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_WEBVIEW:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_webview_track"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static k(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_error_log"

    const-string v4, "ad_sdk_reward_performance"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static l(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_splash_load"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static m(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_splash_preload"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static declared-synchronized mC()V
    .locals 3

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwai/adclient/kscommerciallogger/model/c;

    invoke-static {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(Lcom/kwai/adclient/kscommerciallogger/model/c;)V

    goto :goto_0

    :cond_1
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    const/4 v1, 0x0

    sput-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter;->arf:Ljava/util/List;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method static synthetic mH()Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object v0
.end method

.method static synthetic mI()V
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->mC()V

    return-void
.end method

.method public static n(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNf:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_splash_single_cache"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static o(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNf:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_splash_cache"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static p(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_splash_show"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static q(Lorg/json/JSONObject;)V
    .locals 2

    const-string v0, "load_status"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    const/4 v1, 0x7

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "ad_client_apm_log"

    goto :goto_1

    :cond_1
    :goto_0
    const-string v0, "ad_client_error_log"

    :goto_1
    new-instance v1, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    const-string v1, "ad_sdk_dynamic_update"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method

.method public static r(Lorg/json/JSONObject;)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    const-string v1, "ad_client_error_log"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    const-string v1, "ad_sdk_dynamic_run"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method

.method public static s(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_interstitial_load"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static t(Lorg/json/JSONObject;)V
    .locals 7

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNt:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_interstitial_download_error"

    const-string v5, "1"

    move-object v6, p0

    invoke-static/range {v0 .. v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static u(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNt:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_interstitial_download_error"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static v(Lorg/json/JSONObject;)V
    .locals 7

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNz:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_interstitial_play_error"

    const-string v5, "1"

    move-object v6, p0

    invoke-static/range {v0 .. v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static w(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/b;->aNz:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_interstitial_play_error"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static x(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_sdk_block_info"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static y(Lorg/json/JSONObject;)V
    .locals 6

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    const-string v0, "ad_client_apm_log"

    const-string v4, "ad_image_load_perf"

    move-object v5, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static z(Lorg/json/JSONObject;)V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    const-string v1, "ad_client_apm_log"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    const-string v1, "ad_thread_monitor"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dB(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method
