.class final Lcom/tkay/core/b/f$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/f;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBidRequestInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBidRequestInfo;

.field final synthetic b:Lcom/tkay/core/common/f/aj;

.field final synthetic c:Lcom/tkay/core/b/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBidRequestInfo;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iput-object p2, p0, Lcom/tkay/core/b/f$3;->a:Lcom/tkay/core/api/TYBidRequestInfo;

    iput-object p3, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 118
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/f$3;->a:Lcom/tkay/core/api/TYBidRequestInfo;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/core/b/f$3;->a:Lcom/tkay/core/api/TYBidRequestInfo;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBidRequestInfo;->toRequestJSONObject()Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 126
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v1, v1, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget v1, v1, Lcom/tkay/core/common/f/ag;->f:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v2, v2, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    iget-object v3, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/api/TYBidRequestInfo;->fillBaseCommonParams(Lorg/json/JSONObject;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;)V

    .line 129
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v2, 0x3

    if-ne v1, v2, :cond_1

    :try_start_1
    const-string v1, "unit_id"

    .line 131
    iget-object v2, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 134
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v1

    const-string v2, "ecpoffer"

    .line 135
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 137
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 140
    :goto_0
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v1, v1, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget v1, v1, Lcom/tkay/core/common/f/ag;->z:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    const-string v1, "get_offer"

    const/4 v2, 0x2

    .line 141
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 149
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v1, v1, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v1, :cond_2

    .line 150
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v1, v1, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    iget-object v2, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-interface {v1, v2, v0}, Lcom/tkay/core/b/f$a;->a(Lcom/tkay/core/common/f/aj;Lorg/json/JSONObject;)V

    :cond_2
    return-void

    .line 119
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v0, v0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v0, :cond_4

    .line 120
    iget-object v0, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v0, v0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    const-string v1, "The parameter is abnormal."

    iget-object v2, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_4
    return-void

    :catchall_1
    move-exception v0

    .line 153
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 155
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v1, v1, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v1, :cond_5

    .line 156
    iget-object v1, p0, Lcom/tkay/core/b/f$3;->c:Lcom/tkay/core/b/f;

    iget-object v1, v1, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/b/f$3;->b:Lcom/tkay/core/common/f/aj;

    invoke-interface {v1, v0, v2}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    :cond_5
    return-void
.end method
