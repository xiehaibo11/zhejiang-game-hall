.class final Lcom/tkay/core/api/TYSDK$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/api/TYSDK;->getArea(Lcom/tkay/core/api/TYAreaCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;


# direct methods
.method constructor <init>(Lcom/tkay/core/api/TYAreaCallback;)V
    .locals 0

    .line 279
    iput-object p1, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 1

    .line 311
    iget-object p1, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    const-string v0, "Request cancel"

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYAreaCallback;->onErrorCallback(Ljava/lang/String;)V

    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 306
    iget-object p1, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYAreaCallback;->onErrorCallback(Ljava/lang/String;)V

    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 2

    const-string p1, "area"

    const-string v0, "There is no result."

    if-nez p2, :cond_0

    .line 288
    :try_start_0
    iget-object p1, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYAreaCallback;->onErrorCallback(Ljava/lang/String;)V

    return-void

    .line 291
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    check-cast p2, Ljava/lang/String;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 292
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 293
    iget-object p1, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYAreaCallback;->onErrorCallback(Ljava/lang/String;)V

    return-void

    .line 296
    :cond_1
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 297
    iget-object p2, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    invoke-interface {p2, p1}, Lcom/tkay/core/api/TYAreaCallback;->onResultCallback(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 299
    :catchall_0
    iget-object p1, p0, Lcom/tkay/core/api/TYSDK$2;->val$atAreaCallback:Lcom/tkay/core/api/TYAreaCallback;

    const-string p2, "Internal error"

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYAreaCallback;->onErrorCallback(Ljava/lang/String;)V

    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
