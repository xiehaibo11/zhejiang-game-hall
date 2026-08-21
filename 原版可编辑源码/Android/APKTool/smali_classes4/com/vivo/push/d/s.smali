.class final Lcom/vivo/push/d/s;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/vivo/push/model/InsideNotificationItem;

.field final synthetic b:Lcom/vivo/push/b/q;

.field final synthetic c:Lcom/vivo/push/d/r;


# direct methods
.method constructor <init>(Lcom/vivo/push/d/r;Lcom/vivo/push/model/InsideNotificationItem;Lcom/vivo/push/b/q;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    iput-object p2, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    iput-object p3, p0, Lcom/vivo/push/d/s;->b:Lcom/vivo/push/b/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    iget-object v0, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    iget-object v0, v0, Lcom/vivo/push/d/r;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v1}, Lcom/vivo/push/d/r;->a(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-static {v2}, Lcom/vivo/push/util/q;->a(Lcom/vivo/push/model/InsideNotificationItem;)Lcom/vivo/push/model/UPSNotificationMessage;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/vivo/push/sdk/PushMessageCallback;->onNotificationMessageArrived(Landroid/content/Context;Lcom/vivo/push/model/UPSNotificationMessage;)Z

    move-result v0

    const-string v1, "remoteAppId"

    const-string v2, "messageID"

    const-string v3, "pkg name : "

    const-string v4, "OnNotificationArrivedTask"

    if-eqz v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v3}, Lcom/vivo/push/d/r;->b(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " \u5e94\u7528\u4e3b\u52a8\u62e6\u622a\u901a\u77e5"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/vivo/push/util/p;->b(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v0}, Lcom/vivo/push/d/r;->c(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v0

    const-string v3, "\u5e94\u7528\u4e3b\u52a8\u62e6\u622a\u901a\u77e5\uff0c\u5bfc\u81f4\u901a\u77e5\u65e0\u6cd5\u5c55\u793a\uff0c\u5982\u9700\u6253\u5f00\u8bf7\u5728onNotificationMessageArrived\u4e2d\u8fd4\u56defalse"

    invoke-static {v0, v3}, Lcom/vivo/push/util/p;->b(Landroid/content/Context;Ljava/lang/String;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v3, p0, Lcom/vivo/push/d/s;->b:Lcom/vivo/push/b/q;

    invoke-virtual {v3}, Lcom/vivo/push/b/q;->f()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v2, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v2}, Lcom/vivo/push/d/r;->d(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v3}, Lcom/vivo/push/d/r;->e(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    const-wide/16 v1, 0x848

    invoke-static {v1, v2, v0}, Lcom/vivo/push/util/e;->a(JLjava/util/HashMap;)Z

    return-void

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-virtual {v0}, Lcom/vivo/push/d/r;->b()I

    move-result v0

    if-lez v0, :cond_3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v3}, Lcom/vivo/push/d/r;->f(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " notify channel switch is "

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/vivo/push/util/p;->b(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v3, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v3}, Lcom/vivo/push/d/r;->g(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v3

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "\u5141\u8bb8\u901a\u77e5\u5f00\u5173\u6216\u8005\u63a8\u9001\u901a\u77e5\u6e20\u9053\u5f00\u5173\u5173\u95ed\uff0c\u5bfc\u81f4\u901a\u77e5\u65e0\u6cd5\u5c55\u793a\uff0c\u8bf7\u5230\u8bbe\u7f6e\u9875\u6253\u5f00\u5e94\u7528\u901a\u77e5\u5f00\u5173 "

    invoke-virtual {v5, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/vivo/push/util/p;->b(Landroid/content/Context;Ljava/lang/String;)V

    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    iget-object v4, p0, Lcom/vivo/push/d/s;->b:Lcom/vivo/push/b/q;

    invoke-virtual {v4}, Lcom/vivo/push/b/q;->f()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v2, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v2}, Lcom/vivo/push/d/r;->h(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v2

    iget-object v4, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v4}, Lcom/vivo/push/d/r;->i(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {v3, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    int-to-long v0, v0

    invoke-static {v0, v1, v3}, Lcom/vivo/push/util/e;->a(JLjava/util/HashMap;)Z

    return-void

    :cond_3
    new-instance v0, Lcom/vivo/push/util/k;

    iget-object v1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v1}, Lcom/vivo/push/d/r;->j(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    iget-object v1, p0, Lcom/vivo/push/d/s;->b:Lcom/vivo/push/b/q;

    invoke-virtual {v1}, Lcom/vivo/push/b/q;->f()J

    move-result-wide v8

    iget-object v1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    iget-object v1, v1, Lcom/vivo/push/d/r;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v2, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v2}, Lcom/vivo/push/d/r;->k(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/vivo/push/sdk/PushMessageCallback;->isAllowNet(Landroid/content/Context;)Z

    move-result v10

    new-instance v11, Lcom/vivo/push/d/t;

    invoke-direct {v11, p0}, Lcom/vivo/push/d/t;-><init>(Lcom/vivo/push/d/s;)V

    move-object v5, v0

    invoke-direct/range {v5 .. v11}, Lcom/vivo/push/util/k;-><init>(Landroid/content/Context;Lcom/vivo/push/model/InsideNotificationItem;JZLcom/vivo/push/d/r$a;)V

    iget-object v1, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-virtual {v1}, Lcom/vivo/push/model/InsideNotificationItem;->isShowBigPicOnMobileNet()Z

    move-result v1

    iget-object v2, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-virtual {v2}, Lcom/vivo/push/model/InsideNotificationItem;->getPurePicUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_4

    iget-object v2, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-virtual {v2}, Lcom/vivo/push/model/InsideNotificationItem;->getCoverUrl()Ljava/lang/String;

    move-result-object v2

    :cond_4
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v5, 0x2

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-nez v3, :cond_a

    invoke-static {v1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v3

    const-string v8, "showCode="

    invoke-virtual {v8, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/vivo/push/util/p;->c(Ljava/lang/String;Ljava/lang/String;)I

    if-nez v1, :cond_9

    iget-object v1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v1}, Lcom/vivo/push/d/r;->p(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v1

    const-string v3, "mobile net unshow"

    invoke-static {v1, v3}, Lcom/vivo/push/util/p;->a(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v1}, Lcom/vivo/push/d/r;->q(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/vivo/push/util/r;->a(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object v1

    if-nez v1, :cond_5

    :goto_0
    move v1, v6

    goto :goto_1

    :cond_5
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v3

    sget-object v4, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v3, v4, :cond_6

    goto :goto_0

    :cond_6
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    if-ne v1, v7, :cond_7

    move v1, v5

    goto :goto_1

    :cond_7
    if-nez v1, :cond_8

    move v1, v7

    goto :goto_1

    :cond_8
    const/4 v1, 0x3

    :goto_1
    if-ne v1, v7, :cond_a

    const/4 v2, 0x0

    iget-object v1, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-virtual {v1}, Lcom/vivo/push/model/InsideNotificationItem;->clearCoverUrl()V

    iget-object v1, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-virtual {v1}, Lcom/vivo/push/model/InsideNotificationItem;->clearPurePicUrl()V

    goto :goto_2

    :cond_9
    iget-object v1, p0, Lcom/vivo/push/d/s;->c:Lcom/vivo/push/d/r;

    invoke-static {v1}, Lcom/vivo/push/d/r;->r(Lcom/vivo/push/d/r;)Landroid/content/Context;

    move-result-object v1

    const-string v3, "mobile net show"

    invoke-static {v1, v3}, Lcom/vivo/push/util/p;->a(Landroid/content/Context;Ljava/lang/String;)V

    :cond_a
    :goto_2
    new-array v1, v5, [Ljava/lang/String;

    iget-object v3, p0, Lcom/vivo/push/d/s;->a:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-virtual {v3}, Lcom/vivo/push/model/InsideNotificationItem;->getIconUrl()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v6

    aput-object v2, v1, v7

    invoke-virtual {v0, v1}, Lcom/vivo/push/util/k;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method
