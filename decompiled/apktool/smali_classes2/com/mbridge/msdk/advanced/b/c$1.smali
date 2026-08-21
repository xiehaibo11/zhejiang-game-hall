.class final Lcom/mbridge/msdk/advanced/b/c$1;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "ResManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

.field final synthetic e:J


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;J)V
    .locals 0

    .line 256
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p4, p0, Lcom/mbridge/msdk/advanced/b/c$1;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    iput-wide p5, p0, Lcom/mbridge/msdk/advanced/b/c$1;->e:J

    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 7

    .line 259
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;I)V

    const-string p1, "WindVaneWebView"

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    .line 261
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->a:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v0}, Lcom/mbridge/msdk/advanced/common/b;->a(Ljava/lang/String;Z)V

    .line 262
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    const-string p2, "======\u6e32\u67d3\u6210\u529f\uff1aready"

    .line 263
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 264
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    iget-wide v4, p0, Lcom/mbridge/msdk/advanced/b/c$1;->e:J

    const/4 v6, 0x1

    const-string v3, ""

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    goto :goto_0

    .line 266
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    const-string p2, "======\u6e32\u67d3\u5931\u8d25"

    .line 267
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    iget-wide v4, p0, Lcom/mbridge/msdk/advanced/b/c$1;->e:J

    const/4 v6, 0x3

    const-string v3, "readyState 2"

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 274
    invoke-super {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 275
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    const/4 p4, 0x0

    invoke-virtual {p1, p4}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    const-string p1, "WindVaneWebView"

    const-string p4, "======\u6e32\u67d3\u5931\u8d25"

    .line 276
    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "error code:"

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-wide v4, p0, Lcom/mbridge/msdk/advanced/b/c$1;->e:J

    const/4 v6, 0x3

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 7

    .line 282
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 283
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    const-string p1, "WindVaneWebView"

    const-string p2, "======\u6e32\u67d3\u5931\u8d25"

    .line 284
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "error url:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Landroid/net/http/SslError;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-wide v4, p0, Lcom/mbridge/msdk/advanced/b/c$1;->e:J

    const/4 v6, 0x3

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 7

    .line 290
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 291
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result p2

    if-nez p2, :cond_0

    .line 292
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/c$1;->a:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x1

    invoke-static {p2, v0}, Lcom/mbridge/msdk/advanced/common/b;->a(Ljava/lang/String;Z)V

    .line 293
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    const-string p2, "WindVaneWebView"

    const-string v0, "======\u6e32\u67d3\u6210\u529f\uff1afinish"

    .line 294
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/c$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/c$1;->b:Ljava/lang/String;

    iget-wide v4, p0, Lcom/mbridge/msdk/advanced/b/c$1;->e:J

    const/4 v6, 0x1

    const-string v3, ""

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    .line 297
    :cond_0
    invoke-static {p1}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;)V

    return-void
.end method
