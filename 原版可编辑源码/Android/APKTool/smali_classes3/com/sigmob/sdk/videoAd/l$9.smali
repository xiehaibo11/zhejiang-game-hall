.class Lcom/sigmob/sdk/videoAd/l$9;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;)Lcom/sigmob/sdk/base/views/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDownloadStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->W(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_2

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomLandPageUrl(Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$9;->a:Lcom/sigmob/sdk/videoAd/l;

    iget-object v2, v2, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onDownloadStart() called with: url = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "], userAgent = ["

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "], contentDisposition = ["

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "], mimetype = ["

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "], contentLength = ["

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5, p6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method
