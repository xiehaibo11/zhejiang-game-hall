.class public final Lcom/vivo/push/sdk/a;
.super Lcom/vivo/push/q;


# static fields
.field private static c:Lcom/vivo/push/sdk/a;

.field private static final e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private d:Ljava/lang/String;

.field private f:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Integer;

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/vivo/push/sdk/a;->e:Ljava/util/List;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/vivo/push/q;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/vivo/push/sdk/a;->f:Ljava/lang/String;

    return-void
.end method

.method public static declared-synchronized a()Lcom/vivo/push/sdk/a;
    .locals 2

    const-class v0, Lcom/vivo/push/sdk/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/vivo/push/sdk/a;->c:Lcom/vivo/push/sdk/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/vivo/push/sdk/a;

    invoke-direct {v1}, Lcom/vivo/push/sdk/a;-><init>()V

    sput-object v1, Lcom/vivo/push/sdk/a;->c:Lcom/vivo/push/sdk/a;

    :cond_0
    sget-object v1, Lcom/vivo/push/sdk/a;->c:Lcom/vivo/push/sdk/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v1

    :cond_1
    const/16 p1, 0x40

    invoke-virtual {p0, v0, p1}, Landroid/content/pm/PackageManager;->queryBroadcastReceivers(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_2

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_2

    const/4 p1, 0x0

    invoke-interface {p0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/pm/ResolveInfo;

    iget-object p0, p0, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object p0, p0, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, p0

    goto :goto_0

    :catch_0
    move-exception p0

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "error  "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "CommandWorker"

    invoke-static {p1, p0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :goto_0
    return-object v1
.end method

.method private b(Landroid/content/Intent;)Z
    .locals 4

    const-string v0, "security_avoid_pull"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "CommandWorker"

    if-nez v0, :cond_0

    const/4 v0, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/vivo/push/util/a;->a(Landroid/content/Context;)Lcom/vivo/push/util/a;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/vivo/push/util/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "com.vivo.pushservice"

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "!decrypt.equals, so decrypt == "

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception p1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "checkIntentIsSecurity Exception: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    :cond_0
    const-string p1, "checkIntentIsSecurityTextUtils.isEmpty"

    invoke-static {v1, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p1, 0x1

    return p1
.end method

.method private c(Landroid/content/Intent;)Z
    .locals 7

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/16 v2, 0x12

    if-ge v0, v2, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    const-string v2, "com.vivo.pushservice"

    invoke-static {v0, v2}, Lcom/vivo/push/util/z;->c(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    const-string v4, " \u914d\u7f6e\u7684\u9a8c\u7b7e\u53c2\u6570 = "

    invoke-virtual {v4, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "CommandWorker"

    invoke-static {v4, v3}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v3, "1"

    invoke-static {v0, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    const-string v0, "security_avoid_pull_rsa"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "security_avoid_rsa_public_key"

    invoke-virtual {p1, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v5, 0x0

    if-nez v3, :cond_4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    :cond_2
    :try_start_0
    iget-object v3, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/vivo/push/c/d;->a(Landroid/content/Context;)Lcom/vivo/push/c/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/vivo/push/c/d;->a()Lcom/vivo/push/c/b;

    move-result-object v3

    const-string v6, "UTF-8"

    invoke-virtual {v2, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    invoke-static {p1}, Lcom/vivo/push/util/u;->a(Ljava/lang/String;)Ljava/security/PublicKey;

    move-result-object p1

    const/4 v6, 0x2

    invoke-static {v0, v6}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v0

    invoke-interface {v3, v2, p1, v0}, Lcom/vivo/push/c/b;->a([BLjava/security/PublicKey;[B)Z

    move-result p1

    if-eqz p1, :cond_3

    const-string p1, " RSA\u9a8c\u7b7e\u901a\u8fc7  "

    invoke-static {v4, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "checkIntentIsSecurity Exception: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const-string p1, " RSA\u9a8c\u7b7e \u4e0d\u901a\u8fc7  "

    invoke-static {v4, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v5

    :cond_4
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "!decrypt.equals, so securityContent == "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " or publickKey isempty "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return v5
.end method

.method private d(Landroid/content/Intent;)I
    .locals 6

    iget-object v0, p0, Lcom/vivo/push/sdk/a;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v1, 0x867

    const/4 v2, 0x0

    const-string v3, "CommandWorker"

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/vivo/push/sdk/a;->f:Ljava/lang/String;

    const-string v4, "CommandService"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    invoke-direct {p0, p1}, Lcom/vivo/push/sdk/a;->b(Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/vivo/push/sdk/a;->c(Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    if-nez v0, :cond_1

    const-string p1, " !checkIntentIsSecurity(intent)"

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    :try_start_0
    const-string v4, "command_type"

    invoke-virtual {p1, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    const-string v5, "reflect_receiver"

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    goto :goto_1

    :cond_2
    const-string v1, "command"

    const/4 v4, -0x1

    invoke-virtual {p1, v1, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    if-gez v1, :cond_3

    const-string v1, "method"

    invoke-virtual {p1, v1, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    :cond_3
    sget-object v4, Lcom/vivo/push/sdk/a;->e:Ljava/util/List;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v4, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/vivo/push/util/t;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/vivo/push/util/t;->c(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string p1, "METHOD_ON_MESSAGE is not support"

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p1, 0x869

    return p1

    :cond_4
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    iget-object v4, p0, Lcom/vivo/push/sdk/a;->d:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_6

    iget-object v4, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {v4, v0, v1}, Lcom/vivo/push/sdk/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/vivo/push/sdk/a;->d:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_6

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, " reflectReceiver error: receiver for: "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " not found, package: "

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p1, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    iget-object v0, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-virtual {v0, p1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V

    const/16 p1, 0x868

    return p1

    :cond_5
    :goto_1
    const-string p1, "commandTypeStr is not satisfy == "

    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception p1

    invoke-static {v3, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_6
    return v2
.end method


# virtual methods
.method public final a(Landroid/content/Intent;)V
    .locals 2

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {p0, v0}, Lcom/vivo/push/sdk/a;->a(Landroid/os/Message;)V

    return-void

    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, " sendMessage error: intent : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ", mContext: "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "CommandWorker"

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/sdk/a;->f:Ljava/lang/String;

    return-void
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/vivo/push/sdk/a;->d:Ljava/lang/String;

    return-void
.end method

.method public final b(Landroid/os/Message;)V
    .locals 9

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Landroid/content/Intent;

    const-string v0, "CommandWorker"

    if-eqz p1, :cond_5

    iget-object v1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    if-nez v1, :cond_0

    goto/16 :goto_0

    :cond_0
    iget-object v1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, p1}, Lcom/vivo/push/sdk/a;->d(Landroid/content/Intent;)I

    move-result v2

    if-lez v2, :cond_4

    new-instance v0, Lcom/vivo/push/b/x;

    int-to-long v2, v2

    invoke-direct {v0, v2, v3}, Lcom/vivo/push/b/x;-><init>(J)V

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    const-wide v3, 0x59b4be66e275800L

    if-eqz p1, :cond_1

    const-string v5, "notify_id"

    invoke-virtual {p1, v5, v3, v4}, Landroid/os/Bundle;->getLong(Ljava/lang/String;J)J

    move-result-wide v3

    :cond_1
    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const-string v3, "messageID"

    invoke-virtual {v2, v3, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    iget-object p1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {p1, v1}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "remoteAppId"

    invoke-virtual {v2, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    invoke-virtual {v0, v2}, Lcom/vivo/push/b/x;->a(Ljava/util/HashMap;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    return-void

    :cond_4
    :try_start_0
    iget-object v2, p0, Lcom/vivo/push/sdk/a;->d:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    invoke-virtual {v2, v4}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v4

    new-array v5, v3, [Ljava/lang/Object;

    invoke-virtual {v4, v5}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    const/4 v5, 0x2

    new-array v6, v5, [Ljava/lang/Class;

    const-class v7, Landroid/content/Context;

    aput-object v7, v6, v3

    const-class v7, Landroid/content/Intent;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    const-string v7, "onReceive"

    invoke-virtual {v2, v7, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    iget-object v6, p0, Lcom/vivo/push/sdk/a;->d:Ljava/lang/String;

    invoke-virtual {p1, v1, v6}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    new-array v1, v5, [Ljava/lang/Object;

    iget-object v5, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/vivo/push/util/ContextDelegate;->getContext(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v5

    aput-object v5, v1, v3

    aput-object p1, v1, v8

    invoke-virtual {v2, v4, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    const-string v1, "reflect e: "

    invoke-static {v0, v1, p1}, Lcom/vivo/push/util/p;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-void

    :cond_5
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, " handleMessage error: intent : "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ", mContext: "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/vivo/push/sdk/a;->a:Landroid/content/Context;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
