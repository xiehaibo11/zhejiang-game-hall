.class final Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "MBridgeH5EndCardView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V
    .locals 0

    .line 321
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 2

    .line 387
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;I)V

    .line 388
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "h5EncardView readyStatus:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "- isError"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-boolean v0, v0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "WindVaneWebView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 389
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;I)I

    .line 390
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-boolean p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    if-nez p1, :cond_0

    .line 391
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-static {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)J

    move-result-wide v0

    sub-long/2addr p1, v0

    .line 392
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v1, 0x0

    invoke-static {v0, p1, p2, v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;JZ)V

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 368
    invoke-super {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    const-string p1, "========"

    const-string v0, "===========onReceivedError"

    .line 369
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 370
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-boolean p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    if-nez p1, :cond_0

    .line 371
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onReceivedError,url:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p4, "MBridgeBaseView"

    invoke-static {p4, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 374
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p4, 0x76

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReceivedError "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p4, p2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 376
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 p2, 0x3

    invoke-virtual {p1, p3, p2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    .line 378
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x7f

    const-string p3, ""

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 379
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x81

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 381
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 6

    .line 324
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 325
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "===========finish+"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "========"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 326
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-boolean p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    if-nez p1, :cond_6

    .line 327
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "===========finish  loadSuccess\uff1a"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-boolean v1, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->t:Z

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 328
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->t:Z

    .line 329
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPageFinished,url:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBridgeBaseView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x64

    const-string v1, ""

    invoke-interface {p1, p2, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 332
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_5

    .line 333
    new-instance p1, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {p1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 334
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 335
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 336
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 338
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 339
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-static {p2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->q(Ljava/lang/String;)V

    const-string p2, "onPageFinished"

    .line 340
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 341
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p2

    const/16 v0, 0x11f

    const-string v2, "2"

    const-string v3, "1"

    if-ne p2, v0, :cond_0

    const-string p2, "3"

    .line 342
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 343
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p2

    const/16 v0, 0x5e

    if-ne p2, v0, :cond_1

    .line 344
    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 345
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p2

    const/16 v0, 0x2a

    if-ne p2, v0, :cond_2

    .line 346
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 349
    :cond_2
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p2

    if-eqz p2, :cond_3

    .line 350
    sget p2, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    goto :goto_1

    .line 352
    :cond_3
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->f(Ljava/lang/String;)V

    .line 354
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p2

    const-string v0, ".zip"

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    move-object v2, v3

    .line 357
    :cond_4
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->g(Ljava/lang/String;)V

    .line 358
    sget p2, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 360
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V

    .line 362
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x78

    invoke-interface {p1, p2, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_6
    return-void
.end method

.method public final c(Landroid/webkit/WebView;I)V
    .locals 1

    .line 398
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->c(Landroid/webkit/WebView;I)V

    .line 399
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;I)I

    .line 400
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-static {p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->c(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 401
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Z)Z

    if-ne p2, v0, :cond_0

    .line 403
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 p2, 0x4

    const-string v0, "success"

    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    goto :goto_0

    .line 405
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x7f

    const-string v0, ""

    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 406
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 p2, 0x6

    const-string v0, "failed"

    invoke-virtual {p1, v0, p2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    :cond_1
    :goto_0
    return-void
.end method
