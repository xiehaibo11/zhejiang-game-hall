.class public final Lcom/loc/fc;
.super Ljava/lang/Object;
.source "HistoryLocation.java"


# instance fields
.field public a:I

.field public b:D

.field public c:D

.field public d:J

.field public e:I

.field public f:I

.field public g:I

.field public h:I


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/fc;->a:I

    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/loc/fc;->b:D

    iput-wide v1, p0, Lcom/loc/fc;->c:D

    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/loc/fc;->d:J

    iput v0, p0, Lcom/loc/fc;->e:I

    iput v0, p0, Lcom/loc/fc;->f:I

    const/16 v1, 0x3f

    iput v1, p0, Lcom/loc/fc;->g:I

    iput v0, p0, Lcom/loc/fc;->h:I

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 4

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "time"

    iget-wide v2, p0, Lcom/loc/fc;->d:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "lon"

    iget-wide v2, p0, Lcom/loc/fc;->c:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "lat"

    iget-wide v2, p0, Lcom/loc/fc;->b:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "radius"

    iget v2, p0, Lcom/loc/fc;->e:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "locationType"

    iget v2, p0, Lcom/loc/fc;->a:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "reType"

    iget v2, p0, Lcom/loc/fc;->g:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "reSubType"

    iget v2, p0, Lcom/loc/fc;->h:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 3

    :try_start_0
    const-string v0, "lat"

    iget-wide v1, p0, Lcom/loc/fc;->b:D

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/fc;->b:D

    const-string v0, "lon"

    iget-wide v1, p0, Lcom/loc/fc;->c:D

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/fc;->c:D

    const-string v0, "locationType"

    iget v1, p0, Lcom/loc/fc;->a:I

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/loc/fc;->a:I

    const-string v0, "reType"

    iget v1, p0, Lcom/loc/fc;->g:I

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/loc/fc;->g:I

    const-string v0, "reSubType"

    iget v1, p0, Lcom/loc/fc;->h:I

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/loc/fc;->h:I

    const-string v0, "radius"

    iget v1, p0, Lcom/loc/fc;->e:I

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/loc/fc;->e:I

    const-string v0, "time"

    iget-wide v1, p0, Lcom/loc/fc;->d:J

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/fc;->d:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string v0, "CoreUtil"

    const-string v1, "transformLocation"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 7

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    :cond_1
    check-cast p1, Lcom/loc/fc;

    iget v2, p0, Lcom/loc/fc;->a:I

    iget v3, p1, Lcom/loc/fc;->a:I

    if-ne v2, v3, :cond_2

    iget-wide v2, p1, Lcom/loc/fc;->b:D

    iget-wide v4, p0, Lcom/loc/fc;->b:D

    invoke-static {v2, v3, v4, v5}, Ljava/lang/Double;->compare(DD)I

    move-result v2

    if-nez v2, :cond_2

    iget-wide v2, p1, Lcom/loc/fc;->c:D

    iget-wide v4, p0, Lcom/loc/fc;->c:D

    invoke-static {v2, v3, v4, v5}, Ljava/lang/Double;->compare(DD)I

    move-result v2

    if-nez v2, :cond_2

    iget-wide v2, p0, Lcom/loc/fc;->d:J

    iget-wide v4, p1, Lcom/loc/fc;->d:J

    cmp-long v6, v2, v4

    if-nez v6, :cond_2

    iget v2, p0, Lcom/loc/fc;->e:I

    iget v3, p1, Lcom/loc/fc;->e:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/loc/fc;->f:I

    iget v3, p1, Lcom/loc/fc;->f:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/loc/fc;->g:I

    iget v3, p1, Lcom/loc/fc;->g:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/loc/fc;->h:I

    iget p1, p1, Lcom/loc/fc;->h:I

    if-ne v2, p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 3

    const/16 v0, 0x8

    new-array v0, v0, [Ljava/lang/Object;

    iget v1, p0, Lcom/loc/fc;->a:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/loc/fc;->b:D

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/loc/fc;->c:D

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/loc/fc;->d:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x3

    aput-object v1, v0, v2

    iget v1, p0, Lcom/loc/fc;->e:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x4

    aput-object v1, v0, v2

    iget v1, p0, Lcom/loc/fc;->f:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x5

    aput-object v1, v0, v2

    iget v1, p0, Lcom/loc/fc;->g:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x6

    aput-object v1, v0, v2

    iget v1, p0, Lcom/loc/fc;->h:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x7

    aput-object v1, v0, v2

    invoke-static {v0}, Ljava/util/Objects;->hash([Ljava/lang/Object;)I

    move-result v0

    return v0
.end method
