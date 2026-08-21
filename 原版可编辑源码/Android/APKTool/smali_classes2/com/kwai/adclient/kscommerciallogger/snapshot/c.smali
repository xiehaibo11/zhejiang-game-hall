.class public Lcom/kwai/adclient/kscommerciallogger/snapshot/c;
.super Ljava/lang/Object;


# instance fields
.field private final aNH:Ljava/lang/String;

.field private final aNI:Ljava/util/LinkedList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedList<",
            "Lcom/kwai/adclient/kscommerciallogger/snapshot/d;",
            ">;"
        }
    .end annotation
.end field

.field private aNJ:I

.field private final aNK:I

.field private aNL:J


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 1

    const/16 v0, 0xa

    invoke-direct {p0, p1, v0}, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    const-string p1, ""

    :cond_0
    iput-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNH:Ljava/lang/String;

    new-instance p1, Ljava/util/LinkedList;

    invoke-direct {p1}, Ljava/util/LinkedList;-><init>()V

    iput-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNI:Ljava/util/LinkedList;

    const/16 p1, 0x1e

    invoke-static {p2, p1}, Ljava/lang/Math;->min(II)I

    move-result p1

    iput p1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNK:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNL:J

    return-void
.end method


# virtual methods
.method public final declared-synchronized Lk()J
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-wide v0, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNL:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 2

    if-ne p0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    if-eqz p1, :cond_2

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    if-eq v0, v1, :cond_1

    goto :goto_0

    :cond_1
    check-cast p1, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNH:Ljava/lang/String;

    iget-object p1, p1, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNH:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public declared-synchronized gb(Ljava/lang/String;)Lcom/kwai/adclient/kscommerciallogger/snapshot/d;
    .locals 3

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNI:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    iget v1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNK:I

    if-lt v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNI:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->removeFirst()Ljava/lang/Object;

    :cond_0
    new-instance v0, Lcom/kwai/adclient/kscommerciallogger/snapshot/d;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNJ:I

    add-int/lit8 v2, p1, 0x1

    iput v2, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNJ:I

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/kwai/adclient/kscommerciallogger/snapshot/d;-><init>(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNI:Ljava/util/LinkedList;

    invoke-virtual {p1, v0}, Ljava/util/LinkedList;->addLast(Ljava/lang/Object;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNL:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized gc(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 4

    monitor-enter p0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNI:Ljava/util/LinkedList;

    invoke-virtual {v2}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwai/adclient/kscommerciallogger/snapshot/d;

    invoke-virtual {v3}, Lcom/kwai/adclient/kscommerciallogger/snapshot/d;->Lj()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_0
    const-string v2, "session_id"

    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "segment_name"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNH:Ljava/lang/String;

    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "spans"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNL:J
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p1

    :try_start_2
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :goto_1
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method final getName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNH:Ljava/lang/String;

    return-object v0
.end method

.method public hashCode()I
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/kwai/adclient/kscommerciallogger/snapshot/c;->aNH:Ljava/lang/String;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-static {v0}, Ljava/util/Objects;->hash([Ljava/lang/Object;)I

    move-result v0

    return v0
.end method
