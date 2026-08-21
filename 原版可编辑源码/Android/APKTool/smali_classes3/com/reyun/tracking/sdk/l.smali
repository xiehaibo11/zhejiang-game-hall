.class final Lcom/reyun/tracking/sdk/l;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lorg/json/JSONObject;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Z

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:I

.field final synthetic g:Ljava/util/Map;


# direct methods
.method constructor <init>(Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ZLjava/lang/String;ILjava/util/Map;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/sdk/l;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/reyun/tracking/sdk/l;->b:Lorg/json/JSONObject;

    iput-object p3, p0, Lcom/reyun/tracking/sdk/l;->c:Ljava/lang/String;

    iput-boolean p4, p0, Lcom/reyun/tracking/sdk/l;->d:Z

    iput-object p5, p0, Lcom/reyun/tracking/sdk/l;->e:Ljava/lang/String;

    iput p6, p0, Lcom/reyun/tracking/sdk/l;->f:I

    iput-object p7, p0, Lcom/reyun/tracking/sdk/l;->g:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 12

    :try_start_0
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tracking_install"

    const-string v2, "key_install_send_success_time"

    invoke-static {v0, v1, v2}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)J

    move-result-wide v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v0

    const-wide/16 v0, 0x7d0

    const/4 v4, 0x0

    cmp-long v5, v2, v0

    if-gez v5, :cond_0

    iget-object v0, p0, Lcom/reyun/tracking/sdk/l;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/reyun/tracking/sdk/l;->b:Lorg/json/JSONObject;

    invoke-static {v0, v1, v4}, Lcom/reyun/tracking/sdk/Tracking;->addRecordToDbase(Ljava/lang/String;Lorg/json/JSONObject;I)J

    move-result-wide v0

    const-string v4, "TrackingIO"

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "sendOrSave cache data intervalTime:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, " what:"

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/reyun/tracking/sdk/l;->a:Ljava/lang/String;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " what2:"

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/reyun/tracking/sdk/l;->c:Ljava/lang/String;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " rid:"

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/reyun/tracking/sdk/l;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/reyun/tracking/sdk/l;->b:Lorg/json/JSONObject;

    iget-boolean v2, p0, Lcom/reyun/tracking/sdk/l;->d:Z

    if-eqz v2, :cond_1

    const/4 v4, 0x1

    :cond_1
    invoke-static {v0, v1, v4}, Lcom/reyun/tracking/sdk/Tracking;->addRecordToDbase(Ljava/lang/String;Lorg/json/JSONObject;I)J

    move-result-wide v8

    iget-boolean v0, p0, Lcom/reyun/tracking/sdk/l;->d:Z

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/reyun/tracking/sdk/l;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/reyun/tracking/sdk/l;->e:Ljava/lang/String;

    iget-object v4, p0, Lcom/reyun/tracking/sdk/l;->b:Lorg/json/JSONObject;

    iget v0, p0, Lcom/reyun/tracking/sdk/l;->f:I

    new-instance v11, Lcom/reyun/tracking/utils/s;

    iget-object v6, p0, Lcom/reyun/tracking/sdk/l;->c:Ljava/lang/String;

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object v7

    iget-object v10, p0, Lcom/reyun/tracking/sdk/l;->g:Ljava/util/Map;

    move-object v5, v11

    invoke-direct/range {v5 .. v10}, Lcom/reyun/tracking/utils/s;-><init>(Ljava/lang/String;Landroid/content/Context;JLjava/util/Map;)V

    move v5, v0

    move-object v6, v11

    invoke-static/range {v1 .. v6}, Lcom/reyun/tracking/utils/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;ILcom/reyun/tracking/utils/n;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    :goto_0
    return-void
.end method
