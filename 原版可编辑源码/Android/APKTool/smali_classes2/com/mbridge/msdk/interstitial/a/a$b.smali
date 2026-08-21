.class public final Lcom/mbridge/msdk/interstitial/a/a$b;
.super Ljava/lang/Object;
.source "IntersAdapter.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/a/a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/interstitial/a/a;)V
    .locals 0

    .line 1056
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const-string v0, "IntersAdapter"

    .line 1062
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=====\u8d85\u65f6task \u5f00\u59cb\u6267\u884c mTtcIds:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "  mExcludes:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1063
    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1062
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1064
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/a/a;->j(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, " mIsGetTtcExcIdsSuccess:"

    if-eqz v1, :cond_0

    .line 1066
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u8d85\u65f6task \u5df2\u7ecf\u6210\u529f\u83b7\u53d6ttcid excludeids mIsGetTtcExcIdsTimeout:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1068
    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->i(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1069
    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->j(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, "\u8d85\u65f6task\u4e0d\u505a\u5904\u7406"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1066
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1072
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u83b7\u53d6ttcid excludeids\u8d85\u65f6 mIsGetTtcExcIdsTimeout:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1073
    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->i(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1074
    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->j(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1072
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1075
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;Z)Z

    .line 1076
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->l(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1077
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$b;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->l(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1080
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method
