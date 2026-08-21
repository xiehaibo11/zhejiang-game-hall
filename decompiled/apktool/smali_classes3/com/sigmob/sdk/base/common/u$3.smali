.class Lcom/sigmob/sdk/base/common/u$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/u;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$3;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDownloadStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u$3;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object v1, Lcom/sigmob/sdk/base/a;->g:Lcom/sigmob/sdk/base/a;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u$3;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u$3;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/u;->b(Lcom/sigmob/sdk/base/common/u;)Ljava/lang/String;

    move-result-object v6

    const-string v2, "click"

    const-string v4, "0"

    move-object v5, p1

    invoke-static/range {v1 .. v6}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

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
