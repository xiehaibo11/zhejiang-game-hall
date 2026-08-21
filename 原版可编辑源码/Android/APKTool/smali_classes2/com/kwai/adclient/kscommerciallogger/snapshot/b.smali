.class public final Lcom/kwai/adclient/kscommerciallogger/snapshot/b;
.super Lcom/kwai/adclient/kscommerciallogger/snapshot/d;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwai/adclient/kscommerciallogger/snapshot/d;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method final declared-synchronized Lj()Lorg/json/JSONObject;
    .locals 1

    monitor-enter p0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
