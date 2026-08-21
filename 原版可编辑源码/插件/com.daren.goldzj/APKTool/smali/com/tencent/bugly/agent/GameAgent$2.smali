.class final Lcom/tencent/bugly/agent/GameAgent$2;
.super Ljava/lang/Object;
.source "GameAgent.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/bugly/agent/GameAgent;->initCrashReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$appId:Ljava/lang/String;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$strategy:Ljava/lang/Object;

.field final synthetic val$userId:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/Object;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 342
    iput-object p1, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$strategy:Ljava/lang/Object;

    iput-object p2, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$appId:Ljava/lang/String;

    iput-object p4, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$userId:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 12

    .line 347
    invoke-static {}, Lcom/tencent/bugly/agent/GameAgent;->access$400()Z

    move-result v0

    .line 348
    iget-object v1, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$strategy:Ljava/lang/Object;

    const-string v2, "initCrashReport"

    const-string v3, "crashreport.CrashReport"

    const/4 v4, 0x2

    const/4 v5, 0x3

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    :try_start_0
    const-string v8, "crashreport.CrashReport$UserStrategy"

    .line 351
    invoke-static {v8}, Lcom/tencent/bugly/agent/GameAgent;->access$500(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v8

    .line 355
    invoke-virtual {v8}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v8

    .line 353
    invoke-virtual {v8}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :goto_0
    if-eqz v1, :cond_0

    .line 358
    invoke-static {v3}, Lcom/tencent/bugly/agent/GameAgent;->access$500(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x4

    new-array v10, v9, [Ljava/lang/Object;

    iget-object v11, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$context:Landroid/content/Context;

    aput-object v11, v10, v7

    iget-object v11, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$appId:Ljava/lang/String;

    aput-object v11, v10, v6

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v11

    aput-object v11, v10, v4

    iget-object v11, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$strategy:Ljava/lang/Object;

    aput-object v11, v10, v5

    new-array v9, v9, [Ljava/lang/Class;

    const-class v11, Landroid/content/Context;

    aput-object v11, v9, v7

    const-class v11, Ljava/lang/String;

    aput-object v11, v9, v6

    sget-object v11, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v11, v9, v4

    aput-object v1, v9, v5

    invoke-static {v8, v2, v10, v9}, Lcom/tencent/bugly/agent/GameAgent$Reflection;->access$100(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    const/4 v1, 0x1

    goto :goto_1

    :cond_0
    const/4 v1, 0x0

    :goto_1
    if-nez v1, :cond_1

    .line 368
    invoke-static {v3}, Lcom/tencent/bugly/agent/GameAgent;->access$500(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    new-array v3, v5, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$context:Landroid/content/Context;

    aput-object v8, v3, v7

    iget-object v8, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$appId:Ljava/lang/String;

    aput-object v8, v3, v6

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    aput-object v0, v3, v4

    new-array v0, v5, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v0, v7

    const-class v5, Ljava/lang/String;

    aput-object v5, v0, v6

    sget-object v5, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v5, v0, v4

    invoke-static {v1, v2, v3, v0}, Lcom/tencent/bugly/agent/GameAgent$Reflection;->access$100(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    .line 373
    :cond_1
    iget-object v0, p0, Lcom/tencent/bugly/agent/GameAgent$2;->val$userId:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/agent/GameAgent;->setUserId(Ljava/lang/String;)V

    return-void
.end method
