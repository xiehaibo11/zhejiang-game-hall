.class final Lcom/bykv/vk/openvk/downloadnew/pt$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 352
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public get()Lorg/json/JSONObject;
    .locals 1

    .line 355
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 356
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->getDownloadSettings()Lorg/json/JSONObject;

    move-result-object v0

    return-object v0

    .line 358
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    return-object v0
.end method
