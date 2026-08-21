.class final Lcom/tkay/core/c/e$1$3;
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
.field final synthetic a:Lcom/tkay/core/c/e$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/e$1;)V
    .locals 0

    .line 306
    iput-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 3

    .line 372
    iget-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p1, :cond_0

    .line 373
    iget-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    const-string v0, "9999"

    const-string v1, ""

    const-string v2, "by canceled"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 3

    .line 348
    sget-object p1, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    .line 351
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "9991"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 352
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "10004"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 353
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "10003"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 354
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object p1

    const-string p2, "10001"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 356
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->d:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 357
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

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", key -> "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 358
    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {p2}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object p2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-string v2, "tkay_placement_strategy_update_check"

    invoke-static {p2, v2, p1, v0, v1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    .line 360
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 361
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "Please check these params in your code (AppId: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->d:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ", AppKey: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ", PlacementId: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ")"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "tkay"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 365
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p1, :cond_2

    .line 366
    iget-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    invoke-interface {p1, p3}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/api/AdError;)V

    :cond_2
    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 6

    .line 314
    check-cast p2, Ljava/lang/String;

    .line 316
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "updateTime"

    .line 317
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 318
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 320
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 323
    :goto_0
    invoke-static {p2}, Lcom/tkay/core/c/d;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p1

    const-string v0, ""

    if-eqz p1, :cond_2

    .line 326
    iget-object v1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object v1, v1, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    iget-object v2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object v2, v2, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v2}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

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

    .line 328
    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {p2}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;Lcom/tkay/core/c/d;)V

    .line 330
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->O()I

    move-result p2

    if-ne p2, v5, :cond_1

    .line 331
    invoke-static {}, Lcom/tkay/core/common/s;->a()Lcom/tkay/core/common/s;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object v0, v0, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object v1, v1, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Lcom/tkay/core/common/s;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 334
    :cond_1
    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p2, :cond_3

    .line 335
    iget-object p2, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p2, p2, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    invoke-interface {p2, p1}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    return-void

    .line 338
    :cond_2
    iget-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz p1, :cond_3

    .line 339
    iget-object p1, p0, Lcom/tkay/core/c/e$1$3;->a:Lcom/tkay/core/c/e$1;

    iget-object p1, p1, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    const-string p2, "3001"

    const-string v1, "Placement Service error."

    invoke-static {p2, v0, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/api/AdError;)V

    :cond_3
    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
