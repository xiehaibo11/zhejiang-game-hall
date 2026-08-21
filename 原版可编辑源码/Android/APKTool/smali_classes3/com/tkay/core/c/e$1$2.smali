.class final Lcom/tkay/core/c/e$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/e$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/os/CountDownTimer;

.field final synthetic b:[Z

.field final synthetic c:Lcom/tkay/core/c/e$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/e$1;Landroid/os/CountDownTimer;[Z)V
    .locals 0

    .line 190
    iput-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iput-object p2, p0, Lcom/tkay/core/c/e$1$2;->a:Landroid/os/CountDownTimer;

    iput-object p3, p0, Lcom/tkay/core/c/e$1$2;->b:[Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 1

    .line 287
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->b:[Z

    const/4 v0, 0x0

    aget-boolean p1, p1, v0

    if-eqz p1, :cond_0

    return-void

    .line 292
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p1, :cond_1

    .line 293
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    iget-object v0, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object v0, v0, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-interface {p1, v0}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    :cond_1
    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 251
    sget-object p1, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    .line 254
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "9991"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 255
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "10004"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 256
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "10003"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 257
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "10001"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 259
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->d:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 260
    sget-object p2, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "code: "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "msg: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ", key -> "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 261
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {p2}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object p2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-string p3, "tkay_placement_strategy_update_check"

    invoke-static {p2, p3, p1, v0, v1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    .line 264
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/core/c/e$1$2$2;

    invoke-direct {p2, p0}, Lcom/tkay/core/c/e$1$2$2;-><init>(Lcom/tkay/core/c/e$1$2;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 275
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->b:[Z

    const/4 p2, 0x0

    aget-boolean p1, p1, p2

    if-eqz p1, :cond_2

    return-void

    .line 280
    :cond_2
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p1, :cond_3

    .line 281
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-interface {p1, p2}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    :cond_3
    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 6

    .line 198
    check-cast p2, Ljava/lang/String;

    .line 200
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "updateTime"

    .line 201
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 202
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 204
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 206
    :goto_0
    invoke-static {p2}, Lcom/tkay/core/c/d;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p1

    const-string v0, ""

    if-eqz p1, :cond_1

    .line 209
    iget-object v1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object v1, v1, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    iget-object v2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object v2, v2, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v2}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object v3, v3, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->aa()I

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_0

    goto :goto_1

    :cond_0
    move-object p2, v0

    :goto_1
    invoke-virtual {v1, v2, v3, p1, p2}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;)V

    .line 211
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {p2}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;Lcom/tkay/core/c/d;)V

    .line 213
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->O()I

    move-result p2

    if-ne p2, v5, :cond_1

    .line 214
    invoke-static {}, Lcom/tkay/core/common/s;->a()Lcom/tkay/core/common/s;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object v1, v1, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object v2, v2, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {p2, v1, v2}, Lcom/tkay/core/common/s;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 218
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    new-instance v1, Lcom/tkay/core/c/e$1$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/c/e$1$2$1;-><init>(Lcom/tkay/core/c/e$1$2;)V

    invoke-virtual {p2, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 229
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->b:[Z

    const/4 v1, 0x0

    aget-boolean p2, p2, v1

    if-eqz p2, :cond_3

    .line 230
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p2, :cond_2

    if-eqz p1, :cond_2

    .line 231
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    invoke-interface {p2, p1}, Lcom/tkay/core/c/e$a;->b(Lcom/tkay/core/c/d;)V

    :cond_2
    return-void

    :cond_3
    if-eqz p1, :cond_4

    .line 237
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p2, :cond_5

    .line 238
    iget-object p2, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    invoke-interface {p2, p1}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    return-void

    .line 241
    :cond_4
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p1, :cond_5

    .line 242
    iget-object p1, p0, Lcom/tkay/core/c/e$1$2;->c:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    const-string p2, "3001"

    const-string v1, "Placement Service error."

    invoke-static {p2, v0, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/api/AdError;)V

    :cond_5
    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
