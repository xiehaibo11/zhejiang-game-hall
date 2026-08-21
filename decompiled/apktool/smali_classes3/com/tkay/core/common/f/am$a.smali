.class public final Lcom/tkay/core/common/f/am$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/f/am;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public a:I

.field public b:Ljava/lang/String;

.field public c:I

.field public d:D

.field public e:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 214
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/tkay/core/common/f/aj;)V
    .locals 6

    .line 218
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 219
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/am$a;->b:Ljava/lang/String;

    .line 221
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 224
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 226
    iget-wide v1, v0, Lcom/tkay/core/common/f/l;->o:D

    iput-wide v1, p0, Lcom/tkay/core/common/f/am$a;->d:D

    goto :goto_0

    .line 227
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 228
    iget-wide v1, v0, Lcom/tkay/core/common/f/l;->price:D

    iput-wide v1, p0, Lcom/tkay/core/common/f/am$a;->d:D

    goto :goto_0

    .line 231
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/core/common/f/am$a;->d:D

    .line 234
    :cond_2
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    iput v1, p0, Lcom/tkay/core/common/f/am$a;->c:I

    .line 236
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x2

    if-eqz v1, :cond_6

    if-eq v1, v2, :cond_5

    const/4 v4, 0x3

    if-eq v1, v3, :cond_4

    const/4 v5, 0x4

    if-eq v1, v4, :cond_3

    if-eq v1, v5, :cond_5

    const/4 v4, 0x7

    if-eq v1, v4, :cond_5

    const/16 v4, 0x8

    if-eq v1, v4, :cond_6

    goto :goto_1

    .line 251
    :cond_3
    iput v5, p0, Lcom/tkay/core/common/f/am$a;->a:I

    goto :goto_1

    .line 247
    :cond_4
    iput v4, p0, Lcom/tkay/core/common/f/am$a;->a:I

    goto :goto_1

    .line 244
    :cond_5
    iput v3, p0, Lcom/tkay/core/common/f/am$a;->a:I

    goto :goto_1

    .line 239
    :cond_6
    iput v2, p0, Lcom/tkay/core/common/f/am$a;->a:I

    :goto_1
    const/16 v1, 0x23

    .line 255
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p1

    if-ne v1, p1, :cond_7

    .line 256
    iput v3, p0, Lcom/tkay/core/common/f/am$a;->a:I

    :cond_7
    if-eqz v0, :cond_8

    .line 258
    iget-object p1, v0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    goto :goto_2

    :cond_8
    const-string p1, ""

    :goto_2
    iput-object p1, p0, Lcom/tkay/core/common/f/am$a;->e:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final declared-synchronized a()Lorg/json/JSONObject;
    .locals 4

    monitor-enter p0

    .line 263
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v1, "adSourceId"

    .line 265
    iget-object v2, p0, Lcom/tkay/core/common/f/am$a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "price"

    .line 266
    iget-wide v2, p0, Lcom/tkay/core/common/f/am$a;->d:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "networkFirmId"

    .line 267
    iget v2, p0, Lcom/tkay/core/common/f/am$a;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "demandType"

    .line 268
    iget v2, p0, Lcom/tkay/core/common/f/am$a;->a:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tp_bid_id"

    .line 269
    iget-object v2, p0, Lcom/tkay/core/common/f/am$a;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 271
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 274
    :goto_0
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method
