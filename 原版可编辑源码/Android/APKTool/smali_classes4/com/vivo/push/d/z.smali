.class public abstract Lcom/vivo/push/d/z;
.super Lcom/vivo/push/l;


# instance fields
.field protected b:Lcom/vivo/push/sdk/PushMessageCallback;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/l;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/vivo/push/sdk/PushMessageCallback;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/z;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    return-void
.end method

.method public final a(Ljava/security/PublicKey;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 6

    const-string v0, "vertify fail srcDigest is "

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v1

    invoke-virtual {v1}, Lcom/vivo/push/e;->d()Z

    move-result v1

    const/4 v2, 0x1

    const-string v3, "OnVerifyCallBackCommand"

    if-nez v1, :cond_0

    const-string p1, "vertify is not support , vertify is ignore"

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :cond_0
    const/4 v1, 0x0

    if-nez p1, :cond_1

    const-string p1, "vertify key is null"

    :goto_0
    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    const-string p1, "contentTag is null"

    goto :goto_0

    :cond_2
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    :try_start_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v4, "UTF-8"

    invoke-virtual {p2, v4}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v4

    const/4 v5, 0x2

    invoke-static {p3, v5}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object p3

    invoke-static {v4, p1, p3}, Lcom/vivo/push/util/u;->a([BLjava/security/PublicKey;[B)Z

    move-result p1

    if-eqz p1, :cond_3

    const-string p1, "vertify id is success"

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :cond_3
    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p1, p0, Lcom/vivo/push/d/z;->a:Landroid/content/Context;

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/vivo/push/util/p;->c(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const-string p1, "vertify exception"

    goto :goto_0

    :cond_4
    const-string p1, "vertify id is null"

    goto :goto_0
.end method

.method public final b()I
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/vivo/push/d/z;->a:Landroid/content/Context;

    const-string v1, "notification"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/NotificationManager;->areNotificationsEnabled()Z

    move-result v1

    if-nez v1, :cond_0

    const/16 v0, 0x838

    return v0

    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-lt v1, v2, :cond_1

    if-eqz v0, :cond_1

    :try_start_0
    const-string v1, "vivo_push_channel"

    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->getNotificationChannel(Ljava/lang/String;)Landroid/app/NotificationChannel;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/app/NotificationChannel;->getImportance()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    const/16 v0, 0x849

    return v0

    :catch_0
    const-string v0, "OnVerifyCallBackCommand"

    const-string v1, "\u5224\u65ad\u901a\u77e5\u901a\u9053\u51fa\u73b0\u7cfb\u7edf\u9519\u8bef"

    invoke-static {v0, v1}, Lcom/vivo/push/util/p;->b(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 v0, 0x0

    return v0
.end method
