.class final Lcom/vivo/push/d/p;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/d/p;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 6

    move-object v0, p1

    check-cast v0, Lcom/vivo/push/b/o;

    new-instance v1, Lcom/vivo/push/b/h;

    invoke-virtual {v0}, Lcom/vivo/push/b/o;->f()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/vivo/push/b/h;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    iget-object v1, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/vivo/push/cache/ClientConfigManagerImpl;->getInstance(Landroid/content/Context;)Lcom/vivo/push/cache/ClientConfigManagerImpl;

    move-result-object v1

    invoke-virtual {v1}, Lcom/vivo/push/cache/ClientConfigManagerImpl;->isEnablePush()Z

    move-result v1

    const-string v2, "remoteAppId"

    const-string v3, "messageID"

    const-string v4, "OnMessageTask"

    if-nez v1, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v5, "command  "

    invoke-direct {v1, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " is ignore by disable push "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance p1, Lcom/vivo/push/b/x;

    const-wide/16 v4, 0x3fc

    invoke-direct {p1, v4, v5}, Lcom/vivo/push/b/x;-><init>(J)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0}, Lcom/vivo/push/b/o;->f()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    invoke-virtual {p1, v1}, Lcom/vivo/push/b/x;->a(Ljava/util/HashMap;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    return-void

    :cond_1
    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/vivo/push/e;->g()Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/vivo/push/util/z;->c(Landroid/content/Context;)Ljava/security/PublicKey;

    move-result-object p1

    invoke-virtual {v0}, Lcom/vivo/push/b/o;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Lcom/vivo/push/b/o;->i()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, p1, v1, v5}, Lcom/vivo/push/d/p;->a(Ljava/security/PublicKey;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    new-instance p1, Lcom/vivo/push/b/x;

    const-wide/16 v4, 0x3fd

    invoke-direct {p1, v4, v5}, Lcom/vivo/push/b/x;-><init>(J)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0}, Lcom/vivo/push/b/o;->f()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/vivo/push/d/p;->a:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    invoke-virtual {p1, v1}, Lcom/vivo/push/b/x;->a(Ljava/util/HashMap;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    return-void

    :cond_3
    invoke-virtual {v0}, Lcom/vivo/push/b/o;->e()Lcom/vivo/push/model/UnvarnishedMessage;

    move-result-object p1

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/vivo/push/model/UnvarnishedMessage;->getTargetType()I

    move-result v0

    invoke-virtual {p1}, Lcom/vivo/push/model/UnvarnishedMessage;->getTragetContent()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "tragetType is "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " ; target is "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/vivo/push/d/q;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/d/q;-><init>(Lcom/vivo/push/d/p;Lcom/vivo/push/model/UnvarnishedMessage;)V

    invoke-static {v0}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    return-void

    :cond_4
    const-string p1, " message is null"

    invoke-static {v4, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
