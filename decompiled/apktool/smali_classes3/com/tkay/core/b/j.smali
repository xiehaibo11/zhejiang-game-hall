.class public final Lcom/tkay/core/b/j;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/tkay/core/b/j;",
        ">;"
    }
.end annotation


# instance fields
.field a:I

.field b:Ljava/lang/String;

.field c:D

.field d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()D
    .locals 2

    .line 22
    iget-wide v0, p0, Lcom/tkay/core/b/j;->c:D

    return-wide v0
.end method

.method private a(Lcom/tkay/core/b/j;)I
    .locals 1

    .line 67
    iget v0, p0, Lcom/tkay/core/b/j;->a:I

    iget p1, p1, Lcom/tkay/core/b/j;->a:I

    if-ge v0, p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/core/b/j;
    .locals 4

    const-string v0, "price"

    const-string v1, "s_pty"

    .line 36
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 38
    new-instance p0, Lcom/tkay/core/b/j;

    invoke-direct {p0}, Lcom/tkay/core/b/j;-><init>()V

    const-string v3, "prority"

    .line 39
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    iput v3, p0, Lcom/tkay/core/b/j;->a:I

    const-string v3, "ad_source_id"

    .line 40
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    .line 42
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 43
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/b/j;->c:D

    goto :goto_0

    .line 45
    :cond_0
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 46
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/b/j;->c:D

    goto :goto_0

    :cond_1
    const-wide/16 v0, 0x0

    .line 48
    iput-wide v0, p0, Lcom/tkay/core/b/j;->c:D

    :goto_0
    const-string v0, "tp_bid_id"

    .line 52
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/j;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private a(D)V
    .locals 0

    .line 26
    iput-wide p1, p0, Lcom/tkay/core/b/j;->c:D

    return-void
.end method

.method private b()Ljava/lang/String;
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final bridge synthetic compareTo(Ljava/lang/Object;)I
    .locals 1

    .line 14
    check-cast p1, Lcom/tkay/core/b/j;

    .line 1067
    iget v0, p0, Lcom/tkay/core/b/j;->a:I

    iget p1, p1, Lcom/tkay/core/b/j;->a:I

    if-ge v0, p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method
