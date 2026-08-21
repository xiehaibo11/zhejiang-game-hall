.class final Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;
.super Ljava/lang/Object;
.source "BannerExpandDialog.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/mraid/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 1

    .line 248
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->dismiss()V

    return-void
.end method

.method public final expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public final getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final open(Ljava/lang/String;)V
    .locals 6

    const-string v0, "BannerExpandDialog"

    .line 220
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->c(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 221
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-object v3, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v3}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->c(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v3

    iget-wide v3, v3, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->lastTouchTime:J

    sub-long/2addr v1, v3

    sget v3, Lcom/mbridge/msdk/click/b/a;->c:I

    int-to-long v3, v3

    cmp-long v1, v1, v3

    if-lez v1, :cond_0

    .line 222
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->e(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Ljava/util/List;

    move-result-object v1

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v2}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->c(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getUrl()Ljava/lang/String;

    move-result-object v2

    sget v3, Lcom/mbridge/msdk/click/b/a;->a:I

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/click/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 228
    :cond_0
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 231
    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v2}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->e(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    if-le v2, v3, :cond_1

    .line 232
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    new-instance v4, Landroid/content/Intent;

    const-string v5, "android.intent.action.VIEW"

    .line 233
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-direct {v4, v5, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v2, v4}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    move-object p1, v1

    .line 238
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->b(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbbanner/common/b/a;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 239
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->b(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Lcom/mbridge/msdk/mbbanner/common/b/a;

    move-result-object v1

    invoke-interface {v1, v3, p1}, Lcom/mbridge/msdk/mbbanner/common/b/a;->a(ZLjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string v1, "open"

    .line 242
    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final unload()V
    .locals 0

    .line 253
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->close()V

    return-void
.end method

.method public final useCustomClose(Z)V
    .locals 2

    .line 264
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog$4;->a:Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;->f(Lcom/mbridge/msdk/mbbanner/common/bridge/BannerExpandDialog;)Landroid/widget/TextView;

    move-result-object v0

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    const-string v0, "BannerExpandDialog"

    const-string v1, "useCustomClose"

    .line 266
    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method
