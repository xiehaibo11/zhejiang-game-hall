.class public Lcom/sigmob/sdk/mraid2/m;
.super Lcom/sigmob/sdk/videoAd/c;


# instance fields
.field f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private g:I

.field private h:Z

.field private i:Lcom/sigmob/sdk/mraid2/c;

.field private j:Lcom/sigmob/sdk/base/views/x;

.field private k:Z


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 0

    invoke-direct {p0, p1, p5, p6}, Lcom/sigmob/sdk/videoAd/c;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    const/4 p4, 0x0

    iput-boolean p4, p0, Lcom/sigmob/sdk/mraid2/m;->k:Z

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/f;->b(Ljava/lang/String;)Ljava/util/List;

    move-result-object p2

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    invoke-interface {p2, p4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    const/4 p5, 0x1

    if-eq p2, p5, :cond_1

    const/4 p6, 0x2

    if-eq p2, p6, :cond_0

    const/4 p2, 0x3

    const-string p6, "REQUESTED_ORIENTATION"

    invoke-virtual {p3, p6, p2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p2

    goto :goto_0

    :cond_0
    const/4 p2, 0x6

    goto :goto_0

    :cond_1
    const/4 p2, 0x7

    :goto_0
    iput p2, p0, Lcom/sigmob/sdk/mraid2/m;->g:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p2

    iget p6, p0, Lcom/sigmob/sdk/mraid2/m;->g:I

    invoke-interface {p2, p6}, Lcom/sigmob/sdk/base/common/j;->a(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2, p5}, Landroid/app/Activity;->requestWindowFeature(I)Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p2

    const p5, 0x1000400

    invoke-virtual {p2, p5}, Landroid/view/Window;->addFlags(I)V

    iget p2, p0, Lcom/sigmob/sdk/mraid2/m;->g:I

    invoke-virtual {p0, p1, p2, p3}, Lcom/sigmob/sdk/mraid2/m;->b(Landroid/content/Context;ILandroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->j()Landroid/view/ViewGroup;

    move-result-object p1

    invoke-virtual {p1, p4}, Landroid/view/ViewGroup;->setBackgroundColor(I)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/m;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/m;->a:Ljava/lang/String;

    return-object p0
.end method

.method private a(ILandroid/widget/RelativeLayout$LayoutParams;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->b:Landroid/content/Context;

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    const/4 v1, 0x1

    const/16 v2, 0xa

    if-eq p1, v1, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x3

    if-eq p1, v1, :cond_0

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0xb

    goto :goto_0

    :cond_1
    invoke-virtual {p2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0x9

    :goto_0
    invoke-virtual {p2, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    mul-int/lit8 p1, v0, 0x2

    invoke-virtual {p2, v0, p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :goto_1
    return-void
.end method

.method private a(Landroid/content/Context;I)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x3

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    if-eqz v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    :cond_1
    new-instance v1, Lcom/sigmob/sdk/base/views/x;

    invoke-direct {v1, p1, v0}, Lcom/sigmob/sdk/base/views/x;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v1, 0x41f00000    # 30.0f

    invoke-static {v1, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v3

    invoke-static {v1, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    invoke-direct {p2, v3, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-direct {p0, v0, p2}, Lcom/sigmob/sdk/mraid2/m;->a(ILandroid/widget/RelativeLayout$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->j()Landroid/view/ViewGroup;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p1, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    new-instance p2, Lcom/sigmob/sdk/mraid2/m$4;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/mraid2/m$4;-><init>(Lcom/sigmob/sdk/mraid2/m;)V

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/x;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    invoke-interface {p2, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/x;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V
    .locals 1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/common/r;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/common/r;-><init>()V

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    const/4 p1, 0x0

    invoke-interface {v0, p2, p1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;Z)V
    .locals 7

    sget-object v0, Lcom/sigmob/sdk/base/common/af;->f:Lcom/sigmob/sdk/base/common/af;

    invoke-static {p4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/common/af;->a(Landroid/net/Uri;)Z

    move-result v0

    const-string v2, "android.intent.action.VIEW"

    const-string v4, ""

    if-eqz v0, :cond_3

    if-eqz p7, :cond_1

    if-eqz p2, :cond_0

    const/4 v0, 0x1

    :try_start_0
    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setRecord(Z)V

    move-object v0, p2

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    const/4 v5, 0x0

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setRecord(Z)V

    :goto_0
    invoke-virtual {v0, p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setUrl(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object v1

    const-class v5, Lcom/sigmob/sdk/base/common/AdActivity;

    invoke-static {v1, v5, v0}, Lcom/sigmob/sdk/base/common/AdActivity;->a(Landroid/content/Context;Ljava/lang/Class;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto/16 :goto_5

    :cond_1
    new-instance v0, Landroid/content/Intent;

    invoke-static {p4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-direct {v0, v2, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/common/s;->b(Landroid/content/Context;Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_5

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    :try_start_1
    new-instance v0, Landroid/content/Intent;

    invoke-static {p6}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v4

    invoke-direct {v0, v2, v4}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v0}, Lcom/sigmob/sdk/base/common/s;->b(Landroid/content/Context;Landroid/content/Intent;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    move-object v0, v1

    goto :goto_6

    :cond_3
    :try_start_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object v0

    invoke-static {p4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/sigmob/sdk/base/common/s;->a(Landroid/content/Context;Landroid/net/Uri;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    :try_start_3
    new-instance v0, Landroid/content/Intent;

    invoke-static {p6}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v5

    invoke-direct {v0, v2, v5}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v0}, Lcom/sigmob/sdk/base/common/s;->b(Landroid/content/Context;Landroid/content/Intent;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_2

    :catch_3
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    if-eqz p2, :cond_6

    :try_start_4
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    const-string v0, "open_deeplink"

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->I:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    const-string v5, "1"

    :goto_3
    iput-object v5, v2, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    goto :goto_4

    :cond_5
    const-string v0, "open_deeplink_failed"

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->J:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    const-string v5, "0"

    goto :goto_3

    :goto_4
    const/4 v2, 0x0

    new-instance v5, Lcom/sigmob/sdk/mraid2/m$3;

    invoke-direct {v5, p0, p4, p5}, Lcom/sigmob/sdk/mraid2/m$3;-><init>(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;Lorg/json/JSONObject;)V

    invoke-static {v0, v2, p2, v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_5

    :catch_4
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_5
    move-object v0, v4

    :goto_6
    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p5

    move-object v6, v0

    invoke-direct/range {v1 .. v6}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p5, "com.sigmob.action.interstitial.click"

    invoke-virtual {p0, p5}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p5

    if-eqz p5, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "_success"

    invoke-virtual {p5, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    const-string p5, ""

    invoke-virtual {p1, p3, p5}, Lcom/sigmob/sdk/mraid2/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    if-eqz p2, :cond_2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object p3, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/a;->name()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p3

    const-string p5, "click"

    new-instance v0, Lcom/sigmob/sdk/mraid2/m$2;

    invoke-direct {v0, p0, p2, p1, p4}, Lcom/sigmob/sdk/mraid2/m$2;-><init>(Lcom/sigmob/sdk/mraid2/m;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/ClickCommon;Lorg/json/JSONObject;)V

    invoke-static {p3, p5, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-direct {p0, p2, p1}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    goto :goto_0

    :cond_1
    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p2

    if-eqz p2, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "_failed"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, p5}, Lcom/sigmob/sdk/mraid2/b;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/m;Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;Z)V
    .locals 0

    invoke-direct/range {p0 .. p7}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/m;Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 0

    invoke-direct/range {p0 .. p5}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/m;->k:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/m;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/m;->h:Z

    return p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid2/m;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/m;->a:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/m;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/m;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f(Lcom/sigmob/sdk/mraid2/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid2/m;->h:Z

    return p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/mraid2/m;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/mraid2/m;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/mraid2/m;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic j(Lcom/sigmob/sdk/mraid2/m;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid2/m;->l()V

    return-void
.end method

.method static synthetic k(Lcom/sigmob/sdk/mraid2/m;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid2/m;->m()V

    return-void
.end method

.method static synthetic l(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method private l()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method private m()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->b:Landroid/content/Context;

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/mraid2/m;->a(Landroid/content/Context;I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->j:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public a()Landroid/view/View;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/mraid2/c;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/m;->e:Lcom/sigmob/sdk/base/common/e;

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/mraid2/c;-><init>(Landroid/content/Context;Ljava/util/List;Lcom/sigmob/sdk/base/common/e;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->i:Lcom/sigmob/sdk/mraid2/c;

    new-instance v1, Lcom/sigmob/sdk/mraid2/m$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/m$1;-><init>(Lcom/sigmob/sdk/mraid2/m;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/c;->a(Lcom/sigmob/sdk/mraid2/c$a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->i:Lcom/sigmob/sdk/mraid2/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/c;->e()Landroid/widget/FrameLayout;

    move-result-object v0

    return-object v0
.end method

.method public a(Landroid/content/res/Configuration;)V
    .locals 0

    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public b()V
    .locals 4

    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/c;->b()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->a()Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/m;->j()Landroid/view/ViewGroup;

    move-result-object v1

    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->i:Lcom/sigmob/sdk/mraid2/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m;->f:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/c;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    const-string v0, "com.sigmob.action.interstitial.vopen"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void
.end method

.method public c()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid2/m;->k:Z

    if-eqz v0, :cond_0

    const-string v0, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->i:Lcom/sigmob/sdk/mraid2/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/c;->a()V

    return-void
.end method

.method public d()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->i:Lcom/sigmob/sdk/mraid2/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/c;->b()V

    return-void
.end method

.method public e()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m;->i:Lcom/sigmob/sdk/mraid2/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/c;->d()V

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid2/m;->k:Z

    if-nez v0, :cond_1

    const-string v0, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/m;->a(Ljava/lang/String;)V

    :cond_1
    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/c;->e()V

    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
