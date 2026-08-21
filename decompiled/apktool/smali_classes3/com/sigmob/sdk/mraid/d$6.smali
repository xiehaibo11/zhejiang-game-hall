.class Lcom/sigmob/sdk/mraid/d$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/d;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/d;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 9

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/models/MraidEnv;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/models/MraidEnv;-><init>()V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/MraidEnv;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->k(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/h;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid/d;->j(Lcom/sigmob/sdk/mraid/d;)Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/mraid/h;->b(Landroid/content/Context;)Z

    move-result v2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->k(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/h;

    move-result-object v0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v3}, Lcom/sigmob/sdk/mraid/d;->j(Lcom/sigmob/sdk/mraid/d;)Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/mraid/h;->a(Landroid/content/Context;)Z

    move-result v3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->j(Lcom/sigmob/sdk/mraid/d;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/h;->d(Landroid/content/Context;)Z

    move-result v4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->j(Lcom/sigmob/sdk/mraid/d;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/h;->c(Landroid/content/Context;)Z

    move-result v5

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->g()Z

    move-result v6

    const/4 v7, 0x1

    const/4 v8, 0x1

    invoke-virtual/range {v1 .. v8}, Lcom/sigmob/sdk/mraid/b;->a(ZZZZZZZ)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->l(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/PlacementType;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/PlacementType;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getProxyVideoUrl()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/models/VideoItem;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v2

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v2, v2, Lcom/czhj/sdk/common/models/Size;->width:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v3}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v3, v3, Lcom/czhj/sdk/common/models/Size;->height:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-direct {v1, v0, v2, v3}, Lcom/sigmob/sdk/base/models/VideoItem;-><init>(Ljava/lang/String;II)V

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/sigmob/sdk/base/models/VideoItem;

    const/4 v2, 0x0

    invoke-direct {v1, v0, v2, v2}, Lcom/sigmob/sdk/base/models/VideoItem;-><init>(Ljava/lang/String;II)V

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/VideoItem;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->e()Ljava/lang/Integer;

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->companion(Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    :cond_2
    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_snippet(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->deeplink_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->landing_page(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->web_event_handle(Lcom/sigmob/sdk/base/models/WebEventHandle;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/Ad;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    move-result-object v0

    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->materials(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    move-result-object v0

    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_tracking(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/rtb/Ad;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v1, "handleMraidLoad"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->n(Lcom/sigmob/sdk/mraid/d;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$6;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->j()V

    :cond_3
    return-void
.end method
