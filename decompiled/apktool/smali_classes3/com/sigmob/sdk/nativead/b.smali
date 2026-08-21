.class public Lcom/sigmob/sdk/nativead/b;
.super Lcom/sigmob/sdk/base/common/h;


# instance fields
.field private k:I

.field private l:I

.field private m:I

.field private n:I

.field private o:I

.field private p:I

.field private q:Z

.field private r:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/h;-><init>()V

    return-void
.end method

.method public static f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/nativead/b;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/nativead/b;

    invoke-direct {v0}, Lcom/sigmob/sdk/nativead/b;-><init>()V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/nativead/b;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-object v0
.end method


# virtual methods
.method public a(Landroid/content/Context;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/sigmob/sdk/base/a;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    invoke-virtual {p5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result p5

    invoke-static {p5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p5

    const-string v0, "_DOWNX_"

    invoke-virtual {p1, v0, p5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result p5

    invoke-static {p5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p5

    const-string v0, "_DOWNY_"

    invoke-virtual {p1, v0, p5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result p5

    invoke-static {p5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p5

    const-string v0, "_UPX_"

    invoke-virtual {p1, v0, p5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result p5

    invoke-static {p5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p5

    const-string v0, "_UPY_"

    invoke-virtual {p1, v0, p5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x4

    new-array p1, p1, [Ljava/lang/Object;

    const/4 p5, 0x0

    invoke-virtual {p2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, p1, p5

    invoke-virtual {p2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 p5, 0x1

    aput-object p2, p1, p5

    const/4 p2, 0x2

    invoke-virtual {p3}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, p1, p2

    const/4 p2, 0x3

    invoke-virtual {p3}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result p3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    aput-object p3, p1, p2

    const-string p2, "%d,%d,%d,%d"

    invoke-static {p2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p4, p1, p5}, Lcom/sigmob/sdk/nativead/b;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;II)V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/nativead/b$1;

    invoke-direct {v0, p0, p2, p3}, Lcom/sigmob/sdk/nativead/b$1;-><init>(Lcom/sigmob/sdk/nativead/b;II)V

    const-string v1, "video_start"

    const/4 v2, 0x0

    invoke-static {v1, v2, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    const-string v1, "_VIDEOTIME_"

    invoke-virtual {v0, v1, p3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    const-string p3, "_BEGINTIME_"

    invoke-virtual {v0, p3, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->Q:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;III)V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/nativead/b$2;

    invoke-direct {v0, p0, p4, p3, p2}, Lcom/sigmob/sdk/nativead/b$2;-><init>(Lcom/sigmob/sdk/nativead/b;III)V

    const-string v1, "video_pause"

    const/4 v2, 0x0

    invoke-static {v1, v2, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    invoke-static {p4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p4

    const-string v1, "_VIDEOTIME_"

    invoke-virtual {v0, v1, p4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p4

    const-string v1, "_BEGINTIME_"

    invoke-virtual {v0, v1, p4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p4

    const-string v1, "_ENDTIME_"

    invoke-virtual {v0, v1, p4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    if-nez p3, :cond_0

    const/4 p3, 0x1

    goto :goto_0

    :cond_0
    const/4 p3, 0x0

    :goto_0
    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    const-string p4, "_PLAYFIRSTFRAME_"

    invoke-virtual {v0, p4, p3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, v1, p3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->R:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getNativeAdSetting()Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSingleNativeSetting()Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;->use_na_video_component:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/b;->q:Z

    :cond_0
    if-eqz v0, :cond_1

    iget-object p1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/b;->l:I

    iget-object p1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/b;->m:I

    iget-object p1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/b;->n:I

    iget-object p1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/b;->o:I

    iget-object p1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/b;->k:I

    iget-object p1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/b;->p:I

    :cond_1
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    new-instance v0, Lcom/sigmob/sdk/videoAd/f;

    sget-object v1, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->n:Lcom/sigmob/sdk/base/common/a;

    const/high16 v3, 0x3e800000    # 0.25f

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance v0, Lcom/sigmob/sdk/videoAd/f;

    sget-object v1, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->o:Lcom/sigmob/sdk/base/common/a;

    const/high16 v3, 0x3f000000    # 0.5f

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance v0, Lcom/sigmob/sdk/videoAd/f;

    sget-object v1, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->p:Lcom/sigmob/sdk/base/common/a;

    const/high16 v3, 0x3f400000    # 0.75f

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/b;->a(Ljava/util/List;)V

    return-void
.end method

.method public b(Z)V
    .locals 0

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/b;->r:Ljava/lang/Boolean;

    return-void
.end method

.method public c(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string p1, "template_show"

    const/4 v0, 0x0

    invoke-static {p1, v0, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public d(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string p1, "template_close"

    const/4 v0, 0x0

    invoke-static {p1, v0, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public e(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string p1, "ad_show"

    const/4 v0, 0x0

    invoke-static {p1, v0, p2}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->O:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public f(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string p1, "feed_click"

    const/4 v0, 0x0

    invoke-static {p1, v0, p2}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->P:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public l()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/b;->q:Z

    return v0
.end method

.method public m()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->k:I

    return v0
.end method

.method public n()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/b;->r:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    goto :goto_0

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->l:I

    if-nez v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public o()Z
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->m:I

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public p()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->n:I

    return v0
.end method

.method public q()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->o:I

    return v0
.end method

.method public r()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->p:I

    return v0
.end method

.method public s()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->n:I

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/16 v0, 0x32

    :goto_0
    return v0
.end method

.method public t()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/nativead/b;->o:I

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    :goto_0
    return v0
.end method

.method public u()Z
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/b;->m()I

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/b;->m()I

    move-result v0

    if-ne v0, v1, :cond_0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getActiveNetworkType()I

    move-result v0

    const/16 v2, 0x64

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :cond_1
    :goto_0
    return v1
.end method
