.class public Lcom/sigmob/sdk/nativead/c;
.super Lcom/sigmob/sdk/base/common/v;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/nativead/c$a;
    }
.end annotation


# instance fields
.field private d:Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;


# direct methods
.method protected constructor <init>(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/v;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    return-void
.end method

.method private static a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z
    .locals 0

    const/4 p0, 0x1

    return p0
.end method


# virtual methods
.method protected a(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 2

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/c;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdPrivacyTemplateFile()Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v0}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/c;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object p1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-static {}, Lcom/sigmob/sdk/base/common/p;->a()Lcom/czhj/volley/toolbox/FileDownloader;

    move-result-object p1

    if-eqz p1, :cond_0

    new-instance v1, Lcom/sigmob/sdk/nativead/c$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/c$1;-><init>(Lcom/sigmob/sdk/nativead/c;)V

    invoke-virtual {p1, v0, v1}, Lcom/czhj/volley/toolbox/FileDownloader;->add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/v;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p1

    const-class v0, Lcom/sigmob/sdk/base/common/AdActivity;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/c;->a:Ljava/lang/String;

    const-string v2, "LandNative"

    invoke-static {p1, v0, v1, p2, v2}, Lcom/sigmob/sdk/base/common/AdActivity;->a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ")V"
        }
    .end annotation

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/v;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/c;->d:Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/c;->b:Lcom/sigmob/sdk/base/common/m$b;

    instance-of p1, p1, Lcom/sigmob/sdk/nativead/c$a;

    if-eqz p1, :cond_0

    new-instance p1, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/c;->b:Lcom/sigmob/sdk/base/common/m$b;

    check-cast p2, Lcom/sigmob/sdk/nativead/c$a;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/c;->a:Ljava/lang/String;

    invoke-direct {p1, p2, v0}, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;-><init>(Lcom/sigmob/sdk/nativead/c$a;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/c;->d:Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;

    invoke-virtual {p1, p1}, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a(Landroid/content/BroadcastReceiver;)V

    :cond_0
    return-void
.end method

.method protected a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/c;->a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/v;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method
