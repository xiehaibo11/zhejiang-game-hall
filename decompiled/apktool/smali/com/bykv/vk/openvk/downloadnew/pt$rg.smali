.class public Lcom/bykv/vk/openvk/downloadnew/pt$rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/fw;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "rg"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 633
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private q(Lcom/ss/android/download/api/model/df;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    .line 654
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->hq()Ljava/lang/Object;

    move-result-object v0

    const/4 v1, 0x0

    .line 656
    instance-of v2, v0, Lorg/json/JSONObject;

    if-eqz v2, :cond_1

    .line 657
    move-object v1, v0

    check-cast v1, Lorg/json/JSONObject;

    .line 659
    :cond_1
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->builder()Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;

    move-result-object v0

    .line 660
    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->df()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->setTag(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;

    move-result-object v0

    .line 661
    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->ux()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->setExtJson(Lorg/json/JSONObject;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;

    move-result-object v0

    .line 662
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->setMaterialMeta(Lorg/json/JSONObject;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;

    move-result-object v0

    .line 663
    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->q()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->setLabel(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;

    move-result-object v0

    .line 664
    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->df()Ljava/lang/String;

    move-result-object v1

    const-string v2, "download_notification"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 665
    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->df()Ljava/lang/String;

    move-result-object p1

    const-string v1, "landing_h5_download_ad_button"

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p1, 0x1

    .line 666
    :goto_1
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 667
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    invoke-interface {v1, v0, p1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->executeLogUpload(Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;Z)V

    :cond_4
    return-void
.end method

.method private rg(Lcom/ss/android/download/api/model/df;Z)V
    .locals 3

    .line 679
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 683
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->getTTDownloadEventLogger()Lcom/bykv/vk/openvk/TTDownloadEventLogger;

    move-result-object v0

    if-eqz v0, :cond_4

    if-nez p1, :cond_1

    goto :goto_0

    .line 687
    :cond_1
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTDownloadEventLogger;->shouldFilterOpenSdkLog()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ss/android/download/api/model/df;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->isOpenSdkEvent(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-void

    :cond_2
    if-eqz p2, :cond_3

    .line 691
    invoke-static {p1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Lcom/ss/android/download/api/model/df;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTDownloadEventLogger;->onV3Event(Lorg/json/JSONObject;)V

    goto :goto_0

    .line 693
    :cond_3
    invoke-static {p1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Lcom/ss/android/download/api/model/df;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTDownloadEventLogger;->onEvent(Lorg/json/JSONObject;)V

    :cond_4
    :goto_0
    return-void
.end method


# virtual methods
.method public df(Lcom/ss/android/download/api/model/df;)V
    .locals 2

    const-string v0, "LibEventLogger"

    const-string v1, "onEvent called"

    .line 644
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 645
    invoke-direct {p0, p1, v0}, Lcom/bykv/vk/openvk/downloadnew/pt$rg;->rg(Lcom/ss/android/download/api/model/df;Z)V

    .line 646
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$rg;->q(Lcom/ss/android/download/api/model/df;)V

    return-void
.end method

.method public rg(Lcom/ss/android/download/api/model/df;)V
    .locals 2

    const-string v0, "LibEventLogger"

    const-string v1, "onV3Event"

    .line 638
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 639
    invoke-direct {p0, p1, v0}, Lcom/bykv/vk/openvk/downloadnew/pt$rg;->rg(Lcom/ss/android/download/api/model/df;Z)V

    return-void
.end method
