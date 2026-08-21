.class Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;
.super Ljava/lang/Object;
.source "GenLoginAuthActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

.field private b:Lcom/cmic/gen/sdk/a;

.field private c:Z


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Lcom/cmic/gen/sdk/a;)V
    .locals 0

    .line 789
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 790
    iput-object p2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->b:Lcom/cmic/gen/sdk/a;

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;Z)Z
    .locals 0

    .line 785
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->a(Z)Z

    move-result p0

    return p0
.end method

.method private declared-synchronized a(Z)Z
    .locals 1

    monitor-enter p0

    .line 815
    :try_start_0
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->c:Z

    .line 816
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->c:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    xor-int/lit8 p1, v0, 0x1

    .line 817
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public run()V
    .locals 9

    const-string v0, "\u8bf7\u6c42\u8d85\u65f6"

    const-string v1, "102507"

    const/4 v2, 0x1

    .line 795
    invoke-direct {p0, v2}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->a(Z)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 796
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v4, "resultCode"

    .line 798
    invoke-virtual {v3, v4, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "resultString"

    .line 799
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v4

    .line 801
    invoke-virtual {v4}, Lorg/json/JSONException;->printStackTrace()V

    .line 803
    :goto_0
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    const/4 v5, 0x0

    invoke-static {v4, v5}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Z)Z

    const-string v4, "authClickFailed"

    .line 804
    invoke-static {v4}, Lcom/cmic/gen/sdk/d/a;->a(Ljava/lang/String;)V

    .line 805
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {v4}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;->sendEmptyMessage(I)Z

    .line 806
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->b:Lcom/cmic/gen/sdk/a;

    const-string v4, "loginTime"

    const-wide/16 v5, 0x0

    invoke-virtual {v2, v4, v5, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;J)J

    move-result-wide v7

    cmp-long v2, v7, v5

    if-eqz v2, :cond_0

    .line 808
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->b:Lcom/cmic/gen/sdk/a;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v7

    invoke-virtual {v2, v4, v5, v6}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;J)V

    .line 810
    :cond_0
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;->b:Lcom/cmic/gen/sdk/a;

    invoke-static {v2, v1, v0, v4, v3}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    :cond_1
    return-void
.end method
