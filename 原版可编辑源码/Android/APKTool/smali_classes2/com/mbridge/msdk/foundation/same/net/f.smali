.class public Lcom/mbridge/msdk/foundation/same/net/f;
.super Ljava/lang/Object;
.source "Listener.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/net/e;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/mbridge/msdk/foundation/same/net/e<",
        "TT;>;"
    }
.end annotation


# instance fields
.field public adType:I

.field private mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

.field public placementId:Ljava/lang/String;

.field private startTime:J

.field public unitId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 17
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->unitId:Ljava/lang/String;

    .line 18
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->placementId:Ljava/lang/String;

    const/4 v0, 0x0

    .line 19
    iput v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->adType:I

    const/4 v0, 0x0

    .line 20
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    return-void
.end method


# virtual methods
.method public calcRequestTime(J)V
    .locals 4

    .line 99
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/j;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/j;-><init>()V

    .line 100
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/a/a;

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/foundation/same/report/a/a;-><init>(Lcom/mbridge/msdk/foundation/entity/j;)V

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    .line 101
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->unitId:Ljava/lang/String;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/same/report/a/a;->b(Ljava/lang/String;)V

    .line 102
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/a/a;->a(I)V

    .line 103
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p0, Lcom/mbridge/msdk/foundation/same/net/f;->startTime:J

    sub-long/2addr p1, v2

    invoke-virtual {v1, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/a/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method public onCancel()V
    .locals 0

    return-void
.end method

.method public onError(Lcom/mbridge/msdk/foundation/same/net/a/a;)V
    .locals 0

    return-void
.end method

.method public onFinish()V
    .locals 0

    return-void
.end method

.method public onNetworking()V
    .locals 0

    return-void
.end method

.method public onPreExecute()V
    .locals 2

    .line 24
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->startTime:J

    return-void
.end method

.method public onProgressChange(JJ)V
    .locals 0

    return-void
.end method

.method public onRetry()V
    .locals 0

    return-void
.end method

.method public onSuccess(Lcom/mbridge/msdk/foundation/same/net/k;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/same/net/k<",
            "TT;>;)V"
        }
    .end annotation

    const-string v0, "Listener"

    const-string v1, "_"

    .line 34
    :try_start_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/same/net/f;->placementId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/same/net/f;->unitId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/foundation/same/net/f;->adType:I

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 35
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/same/net/f;->unitId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->d(Ljava/lang/String;)V

    .line 36
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    iget-object v2, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    instance-of v2, v2, Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v9, "status"

    if-eqz v2, :cond_0

    .line 38
    :try_start_1
    iget-object v2, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    check-cast v2, Lorg/json/JSONObject;

    invoke-virtual {v2, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    .line 39
    iget-object v2, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    check-cast v2, Lorg/json/JSONObject;

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    .line 40
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/c;->a()Lcom/mbridge/msdk/foundation/same/net/f/c;

    move-result-object v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    move-object v4, v1

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/foundation/same/net/f/c;->a(Ljava/lang/String;ILjava/lang/String;J)V

    .line 43
    :cond_0
    iget-object v2, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    instance-of v2, v2, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 44
    new-instance v2, Lorg/json/JSONObject;

    iget-object v3, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    check-cast v3, Ljava/lang/String;

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 45
    invoke-virtual {v2, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    .line 46
    iget-object p1, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    move-object v6, p1

    check-cast v6, Ljava/lang/String;

    .line 47
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/c;->a()Lcom/mbridge/msdk/foundation/same/net/f/c;

    move-result-object v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    move-object v4, v1

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/foundation/same/net/f/c;->a(Ljava/lang/String;ILjava/lang/String;J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 50
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public saveHbState(I)V
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    if-eqz v0, :cond_0

    .line 120
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/a/a;->c(I)V

    :cond_0
    return-void
.end method

.method public saveRequestTime(I)V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    if-eqz v0, :cond_0

    .line 113
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/a/a;->b(I)V

    .line 114
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/f;->mRequestTime:Lcom/mbridge/msdk/foundation/same/report/a/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/report/a/a;->a()V

    :cond_0
    return-void
.end method

.method public setAdType(I)V
    .locals 0

    .line 89
    iput p1, p0, Lcom/mbridge/msdk/foundation/same/net/f;->adType:I

    return-void
.end method

.method public setPlacementId(Ljava/lang/String;)V
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/f;->placementId:Ljava/lang/String;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/f;->unitId:Ljava/lang/String;

    return-void
.end method
