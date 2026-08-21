.class public final Lcom/mbridge/msdk/interstitial/a/a$a;
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
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/a/a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/interstitial/a/a;)V
    .locals 0

    .line 1000
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const-string v0, "  mExcludes:"

    const-string v1, "IntersAdapter"

    .line 1007
    :try_start_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "=====getTtcRunnable \u5f00\u59cb\u83b7\u53d6 mTtcIds:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1009
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->g(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1010
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->g(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1012
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v2

    .line 1013
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/db/c;->a()V

    .line 1014
    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v4}, Lcom/mbridge/msdk/interstitial/a/a;->f(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/db/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mbridge/msdk/interstitial/a/a;->c(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)Ljava/lang/String;

    .line 1017
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->h(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/interstitial/a/a;->d(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)Ljava/lang/String;

    .line 1019
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "=====getTtcRunnable \u83b7\u53d6\u5b8c\u6bd5 mTtcIds:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1020
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->i(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, " mIsGetTtcExcIdsSuccess:"

    if-eqz v2, :cond_1

    .line 1022
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=====getTtcRunnable \u83b7\u53d6ttcid\u548cexcludeids\u8d85\u65f6 mIsGetTtcExcIdsTimeout\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1024
    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->i(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1025
    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->j(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1022
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1029
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "=====getTtcRunnable \u83b7\u53d6ttcid\u548cexcludeids\u6ca1\u6709\u8d85\u65f6 mIsGetTtcExcIdsTimeout:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1031
    invoke-static {v4}, Lcom/mbridge/msdk/interstitial/a/a;->i(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1032
    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->j(Lcom/mbridge/msdk/interstitial/a/a;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1029
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1034
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->k(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/a/a$b;

    move-result-object v2

    if-eqz v2, :cond_2

    const-string v2, "=====getTtcRunnable \u5220\u9664 \u83b7\u53d6ttcid\u7684\u8d85\u65f6\u4efb\u52a1"

    .line 1035
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1036
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/a/a;->l(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/os/Handler;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/interstitial/a/a;->k(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/a/a$b;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1038
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    const/4 v3, 0x1

    invoke-static {v2, v3}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;Z)Z

    .line 1039
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "=====getTtcRunnable \u7ed9handler\u53d1\u9001\u6d88\u606f mTtcIds:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    .line 1040
    invoke-static {v4}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1039
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1041
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->l(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 1042
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a$a;->a:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/a/a;->l(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1045
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method
