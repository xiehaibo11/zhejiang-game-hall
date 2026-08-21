.class Lcom/reyun/tracking/sdk/j;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/reyun/tracking/utils/n;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/utils/k;

.field final synthetic b:Lcom/reyun/tracking/sdk/i;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/sdk/i;Lcom/reyun/tracking/utils/k;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/sdk/j;->b:Lcom/reyun/tracking/sdk/i;

    iput-object p2, p0, Lcom/reyun/tracking/sdk/j;->a:Lcom/reyun/tracking/utils/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 4

    const-string p1, "status"

    const-string v0, "TrackingIO"

    :try_start_0
    const-string v1, " sendFailureRecord SUCCESS"

    invoke-static {v0, v1}, Lcom/reyun/tracking/a/a;->c(Ljava/lang/String;Ljava/lang/String;)V

    check-cast p2, Lorg/json/JSONObject;

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    if-nez p1, :cond_1

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/reyun/tracking/utils/i;

    move-result-object p1

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/reyun/tracking/sdk/j;->a:Lcom/reyun/tracking/utils/k;

    iget-object v2, v2, Lcom/reyun/tracking/utils/k;->a:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    :goto_0
    if-ge v1, v2, :cond_0

    iget-object v3, p0, Lcom/reyun/tracking/sdk/j;->a:Lcom/reyun/tracking/utils/k;

    iget-object v3, v3, Lcom/reyun/tracking/utils/k;->a:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {p1, v3}, Lcom/reyun/tracking/utils/i;->a(Ljava/lang/String;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "==============sendFailureRecord  SUCCESS =========="

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Request Failed:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/reyun/tracking/a/a;->c(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p1

    const-string v0, "batch"

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v0, p2}, Lcom/reyun/tracking/sdk/p;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_2
    return-void
.end method

.method public a(Ljava/lang/Throwable;Ljava/lang/String;)V
    .locals 1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "############sendFailureRecord  failure ############ "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "TrackingIO"

    invoke-static {p2, p1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p1

    const-string p2, "batch"

    const-string v0, "{}"

    invoke-interface {p1, p2, v0}, Lcom/reyun/tracking/sdk/p;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
