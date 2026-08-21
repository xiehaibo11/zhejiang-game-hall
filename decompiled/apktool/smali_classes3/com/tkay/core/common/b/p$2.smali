.class final Lcom/tkay/core/common/b/p$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/p;->a(Lcom/tkay/core/api/NetTrafficeCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/NetTrafficeCallback;

.field final synthetic b:Lcom/tkay/core/common/b/p;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/p;Lcom/tkay/core/api/NetTrafficeCallback;)V
    .locals 0

    .line 186
    iput-object p1, p0, Lcom/tkay/core/common/b/p$2;->b:Lcom/tkay/core/common/b/p;

    iput-object p2, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 0

    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 232
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    if-eqz p1, :cond_0

    .line 233
    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/core/api/NetTrafficeCallback;->onErrorCallback(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 2

    const-string p1, "is_eu"

    const-string v0, "There is no result."

    if-nez p2, :cond_1

    .line 195
    :try_start_0
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    if-eqz p1, :cond_0

    .line 196
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/NetTrafficeCallback;->onErrorCallback(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 202
    :cond_1
    move-object v1, p2

    check-cast v1, Lorg/json/JSONObject;

    .line 204
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 205
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    if-eqz p1, :cond_2

    .line 206
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/NetTrafficeCallback;->onErrorCallback(Ljava/lang/String;)V

    :cond_2
    return-void

    .line 211
    :cond_3
    check-cast p2, Lorg/json/JSONObject;

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_4

    .line 214
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    if-eqz p1, :cond_5

    .line 215
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    invoke-interface {p1, p2}, Lcom/tkay/core/api/NetTrafficeCallback;->onResultCallback(Z)V

    return-void

    .line 218
    :cond_4
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    if-eqz p1, :cond_5

    .line 219
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Lcom/tkay/core/api/NetTrafficeCallback;->onResultCallback(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_5
    return-void

    .line 223
    :catchall_0
    iget-object p1, p0, Lcom/tkay/core/common/b/p$2;->a:Lcom/tkay/core/api/NetTrafficeCallback;

    if-eqz p1, :cond_6

    const-string p2, "Internal error"

    .line 224
    invoke-interface {p1, p2}, Lcom/tkay/core/api/NetTrafficeCallback;->onErrorCallback(Ljava/lang/String;)V

    :cond_6
    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
