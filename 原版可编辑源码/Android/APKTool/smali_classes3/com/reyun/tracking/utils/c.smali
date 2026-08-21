.class public Lcom/reyun/tracking/utils/c;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V
    .locals 12

    const-string v0, "TrackingIO"

    if-nez p0, :cond_0

    :try_start_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "context is null reportSDKLog what:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getAppId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "appid is null reportSDKLog what:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v0, "tracking_login"

    const-string v2, "account"

    const-string v3, "unknown"

    invoke-static {p0, v0, v2, v3}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getChannelId()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    move-object v0, p0

    move-object v2, p1

    invoke-static/range {v0 .. v5}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v9

    invoke-static {p2, v9}, Lcom/reyun/tracking/a/a;->a(Ljava/util/Map;Lorg/json/JSONObject;)V

    const/4 p2, 0x1

    invoke-static {p1, v9, p2}, Lcom/reyun/tracking/sdk/Tracking;->addRecordToDbase(Ljava/lang/String;Lorg/json/JSONObject;I)J

    move-result-wide v3

    new-instance v11, Lcom/reyun/tracking/utils/s;

    const/4 v5, 0x0

    move-object v0, v11

    move-object v1, p1

    move-object v2, p0

    invoke-direct/range {v0 .. v5}, Lcom/reyun/tracking/utils/s;-><init>(Ljava/lang/String;Landroid/content/Context;JLjava/util/Map;)V

    const/4 p2, 0x0

    invoke-virtual {v11, p2}, Lcom/reyun/tracking/utils/s;->a(Z)V

    const-string v8, "receive/tkio/sdklog"

    const/4 v10, 0x1

    move-object v6, p0

    move-object v7, p1

    invoke-static/range {v6 .. v11}, Lcom/reyun/tracking/utils/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;ILcom/reyun/tracking/utils/n;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method
