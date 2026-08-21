.class final Lcom/tencent/bugly/agent/GameAgent$7;
.super Ljava/lang/Object;
.source "GameAgent.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/bugly/agent/GameAgent;->putUserData(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$key:Ljava/lang/String;

.field final synthetic val$value:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 464
    iput-object p1, p0, Lcom/tencent/bugly/agent/GameAgent$7;->val$key:Ljava/lang/String;

    iput-object p2, p0, Lcom/tencent/bugly/agent/GameAgent$7;->val$value:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    const-string v0, "crashreport.CrashReport"

    .line 467
    invoke-static {v0}, Lcom/tencent/bugly/agent/GameAgent;->access$500(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x3

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/tencent/bugly/agent/GameAgent;->access$600()Landroid/content/Context;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    iget-object v3, p0, Lcom/tencent/bugly/agent/GameAgent$7;->val$key:Ljava/lang/String;

    const/4 v5, 0x1

    aput-object v3, v2, v5

    iget-object v3, p0, Lcom/tencent/bugly/agent/GameAgent$7;->val$value:Ljava/lang/String;

    const/4 v6, 0x2

    aput-object v3, v2, v6

    new-array v1, v1, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v5

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v6

    const-string v3, "putUserData"

    invoke-static {v0, v3, v2, v1}, Lcom/tencent/bugly/agent/GameAgent$Reflection;->access$100(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    return-void
.end method
