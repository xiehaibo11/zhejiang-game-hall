.class public Lcom/huawei/hms/push/j;
.super Ljava/lang/Object;
.source "SelfShowType.java"


# static fields
.field public static final a:[Ljava/lang/String;


# instance fields
.field public b:Landroid/content/Context;

.field public c:Lcom/huawei/hms/push/k;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-string v0, "url"

    const-string v1, "app"

    const-string v2, "cosa"

    const-string v3, "rp"

    .line 1
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/huawei/hms/push/j;->a:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/huawei/hms/push/k;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    .line 3
    iput-object p2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    return-void
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 5

    .line 1
    sget-object v0, Lcom/huawei/hms/push/j;->a:[Ljava/lang/String;

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    .line 2
    invoke-virtual {v4, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    const-string v0, "&"

    const-string v1, "PushSelfShowLog"

    const/16 v2, 0x3f

    .line 9
    :try_start_0
    invoke-virtual {p1, v2}, Ljava/lang/String;->indexOf(I)I

    move-result v2

    const/4 v3, -0x1

    if-ne v2, v3, :cond_0

    return-object p1

    :cond_0
    add-int/lit8 v3, v2, 0x1

    .line 10
    invoke-virtual {p1, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 11
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 12
    array-length v6, v4

    const/4 v7, 0x0

    move v8, v7

    :goto_0
    if-ge v8, v6, :cond_2

    aget-object v9, v4, v8
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v10, "h_w_hiapp_referrer"

    .line 13
    :try_start_1
    invoke-virtual {v9, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-nez v10, :cond_1

    const-string v10, "h_w_gp_referrer"

    .line 14
    :try_start_2
    invoke-virtual {v9, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_1

    .line 15
    invoke-interface {v5, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v8, v8, 0x1

    goto :goto_0

    .line 16
    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 17
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v6

    move v8, v7

    :goto_1
    if-ge v8, v6, :cond_4

    .line 18
    invoke-interface {v5, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 19
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v9

    add-int/lit8 v9, v9, -0x1

    if-ge v8, v9, :cond_3

    .line 20
    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    add-int/lit8 v8, v8, 0x1

    goto :goto_1

    .line 21
    :cond_4
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_5

    .line 22
    invoke-virtual {p1, v7, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 23
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v7, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 24
    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v3, "after delete referrer, the new IntentUri is:"

    :try_start_3
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/huawei/hms/support/log/HMSLog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 25
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "delete referrer exception."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-object p1
.end method

.method public final a()V
    .locals 4

    const-string v0, "PushSelfShowLog"

    .line 1
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "enter launchApp, appPackageName ="

    :try_start_1
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    .line 2
    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v2, ",and msg.intentUri is "

    :try_start_2
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    .line 3
    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 4
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 5
    iget-object v1, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/huawei/hms/push/q;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 6
    invoke-virtual {p0}, Lcom/huawei/hms/push/j;->b()V

    goto :goto_0

    .line 7
    :cond_0
    invoke-virtual {p0}, Lcom/huawei/hms/push/j;->d()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 8
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "launchApp error:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final b()V
    .locals 6

    const-string v0, "PushSelfShowLog"

    const-string v1, "run into launchCosaApp"

    .line 3
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 4
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const-string v2, "enter launchExistApp cosa, appPackageName ="

    :try_start_1
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    .line 5
    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    const-string v2, ",and msg.intentUri is "

    :try_start_2
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    .line 6
    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 7
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 8
    iget-object v1, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/huawei/hms/push/q;->b(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v1

    .line 9
    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    .line 10
    :try_start_3
    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v3}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object v2

    const/4 v4, 0x0

    .line 11
    invoke-virtual {v2, v4}, Landroid/content/Intent;->setSelector(Landroid/content/Intent;)V

    .line 12
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    const-string v5, "Intent.parseUri(msg.intentUri, 0), action:"

    :try_start_4
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 13
    iget-object v4, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    iget-object v5, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v5}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v2}, Lcom/huawei/hms/push/q;->a(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    if-eqz v3, :cond_2

    move-object v1, v2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 14
    :try_start_5
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    const-string v5, "intentUri error."

    :try_start_6
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 15
    :cond_0
    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->a()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 16
    new-instance v2, Landroid/content/Intent;

    iget-object v4, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v4}, Lcom/huawei/hms/push/k;->a()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v4}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 17
    iget-object v4, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    iget-object v5, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v5}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v2}, Lcom/huawei/hms/push/q;->a(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_1

    move-object v1, v2

    .line 18
    :cond_1
    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1

    :cond_2
    :goto_0
    if-nez v1, :cond_3

    const-string v1, "launchCosaApp,intent == null"

    .line 19
    :try_start_7
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_3
    if-eqz v3, :cond_4

    const/high16 v2, 0x10000000

    .line 20
    invoke-virtual {v1, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    goto :goto_1

    :cond_4
    const/high16 v2, 0x30020000

    .line 21
    invoke-virtual {v1, v2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 22
    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1

    const-string v3, "start "

    :try_start_8
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Landroid/content/Intent;->toURI()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 23
    iget-object v2, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-virtual {v2, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_1

    goto :goto_2

    :catch_1
    move-exception v1

    .line 24
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "launch Cosa App exception."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public c()V
    .locals 3

    const-string v0, "PushSelfShowLog"

    const-string v1, "enter launchNotify()"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    iget-object v1, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    if-nez v1, :cond_0

    goto/16 :goto_1

    .line 3
    :cond_0
    invoke-virtual {v1}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v1

    const-string v2, "app"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 4
    invoke-virtual {p0}, Lcom/huawei/hms/push/j;->a()V

    goto/16 :goto_0

    .line 5
    :cond_1
    iget-object v1, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v1}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cosa"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 6
    invoke-virtual {p0}, Lcom/huawei/hms/push/j;->b()V

    goto :goto_0

    .line 7
    :cond_2
    iget-object v1, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v1}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v1

    const-string v2, "rp"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 8
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " not support rich message."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 9
    :cond_3
    iget-object v1, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v1}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v1

    const-string v2, "url"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 10
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " not support URL."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 11
    :cond_4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v2}, Lcom/huawei/hms/push/k;->i()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " is not exist in hShowType"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void

    :cond_5
    :goto_1
    const-string v1, "launchNotify  context or msg is null"

    .line 12
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 7

    const-string v0, "com.android.vending"

    const-string v1, "com.huawei.appmarket"

    const-string v2, "android.intent.action.VIEW"

    const-string v3, "PushSelfShowLog"

    .line 1
    :try_start_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 2
    iget-object v5, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v5}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v5, :cond_0

    const-string v5, "&referrer="

    .line 3
    :try_start_1
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v5}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lcom/huawei/hms/push/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/net/Uri;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4
    :cond_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v6, "market://details?id="

    :try_start_2
    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v6}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 5
    new-instance v5, Landroid/content/Intent;

    invoke-direct {v5, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 6
    invoke-static {v4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 7
    invoke-virtual {v5, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 8
    new-instance v6, Landroid/content/Intent;

    invoke-direct {v6, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 9
    invoke-static {v4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v6, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 10
    invoke-virtual {v6, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 11
    iget-object v2, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-static {v2, v0, v6}, Lcom/huawei/hms/push/q;->a(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const/high16 v2, 0x18000000

    if-eqz v0, :cond_1

    .line 12
    invoke-virtual {v6, v2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 13
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v1, "open google play store\'s app detail, IntentUrl is:"

    :try_start_3
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Landroid/content/Intent;->toURI()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 14
    iget-object v0, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-virtual {v0, v6}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    .line 15
    :cond_1
    iget-object v0, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-static {v0, v1, v5}, Lcom/huawei/hms/push/q;->a(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 16
    invoke-virtual {v5, v2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 17
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    const-string v1, "open HiApp\'s app detail, IntentUrl is:"

    :try_start_4
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Landroid/content/Intent;->toURI()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 18
    iget-object v0, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-virtual {v0, v5}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_0

    :cond_2
    const-string v0, "open app detail by browser."

    .line 19
    :try_start_5
    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 20
    invoke-virtual {p0}, Lcom/huawei/hms/push/j;->e()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 21
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "open market app detail failed,exception:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final e()V
    .locals 6

    const-string v0, "parse h_w_hiapp_referrer failed"

    const-string v1, ""

    const-string v2, "PushSelfShowLog"

    .line 1
    :try_start_0
    iget-object v3, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v3}, Lcom/huawei/hms/push/k;->n()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    const-string v4, "h_w_hiapp_referrer"

    .line 2
    :try_start_1
    invoke-virtual {v3, v4}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 3
    :catch_0
    :try_start_2
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    move-object v4, v1

    :goto_0
    const-string v5, "h_w_gp_referrer"

    .line 4
    :try_start_3
    invoke-virtual {v3, v5}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    .line 5
    :catch_1
    :try_start_4
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    goto :goto_1

    :catch_3
    move-exception v0

    move-object v4, v1

    .line 6
    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "parse intentUri error."

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    const/4 v0, 0x0

    .line 7
    invoke-static {}, Lcom/huawei/hms/utils/Util;->isEMUI()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-static {}, Lcom/huawei/hms/utils/Util;->isChinaROM()Z

    move-result v3

    if-nez v3, :cond_0

    goto :goto_3

    .line 8
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "It is China device, open Huawei market web, referrer: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 9
    invoke-static {v4}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 10
    invoke-static {v1}, Landroid/webkit/URLUtil;->isValidUrl(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    move-object v0, v1

    goto :goto_4

    .line 11
    :cond_1
    iget-object v1, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    if-eqz v1, :cond_4

    .line 12
    invoke-static {v1}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->setmContext(Landroid/content/Context;)V

    const-string v0, "hms_push_vmall"

    .line 13
    invoke-static {v0}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_4

    .line 14
    :cond_2
    :goto_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "not EMUI system or not in China, open google play web, referrer: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 15
    invoke-static {v1}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 16
    invoke-static {v0}, Landroid/webkit/URLUtil;->isValidUrl(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_4

    .line 17
    :cond_3
    iget-object v0, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->setmContext(Landroid/content/Context;)V

    .line 18
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hms_push_google"

    invoke-static {v1}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/huawei/hms/push/j;->c:Lcom/huawei/hms/push/k;

    invoke-virtual {v1}, Lcom/huawei/hms/push/k;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 19
    :cond_4
    :goto_4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "open the URL by browser: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 20
    iget-object v1, p0, Lcom/huawei/hms/push/j;->b:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/huawei/hms/push/q;->e(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
