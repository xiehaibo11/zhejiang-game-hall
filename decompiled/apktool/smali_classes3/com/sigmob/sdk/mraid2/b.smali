.class public Lcom/sigmob/sdk/mraid2/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid2/b$c;,
        Lcom/sigmob/sdk/mraid2/b$a;,
        Lcom/sigmob/sdk/mraid2/b$b;
    }
.end annotation


# static fields
.field private static a:Ljava/lang/String; = "Mraid2Bridge"

.field private static e:Lcom/sigmob/sdk/mraid2/j;


# instance fields
.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private c:Lcom/sigmob/sdk/mraid2/b$b;

.field private d:Lcom/sigmob/sdk/mraid2/e;

.field private f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method constructor <init>(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->f:Ljava/util/List;

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/b;Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/rtb/BidResponse;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    const/4 v4, 0x2

    const/4 v5, 0x0

    if-ge v2, v3, :cond_3

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v3

    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    if-eqz v3, :cond_2

    iget-object v7, v3, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    if-eqz v7, :cond_2

    iget-object v7, v3, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v7}, Ljava/util/List;->size()I

    move-result v7

    if-lez v7, :cond_2

    iget-object v7, v3, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v7, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    invoke-virtual {v7}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v7

    iget-object v8, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v8, :cond_0

    iget-object v8, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v8, v8, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    if-ne v8, v4, :cond_0

    iget-object v8, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v8}, Lcom/sigmob/sdk/base/models/rtb/Template;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v8

    invoke-virtual {v8, v5}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->context(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v8

    invoke-virtual {v8}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Template;

    move-result-object v8

    iget-object v9, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v9, v9, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    iput-object v9, v8, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    invoke-virtual {v7, v8}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    :cond_0
    iget-object v8, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v8, :cond_1

    iget-object v8, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v8, v8, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    if-ne v8, v4, :cond_1

    iget-object v4, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/rtb/Template;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v4

    invoke-virtual {v4, v5}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->context(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Template;

    move-result-object v4

    iget-object v8, v7, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v8, v8, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    iput-object v8, v4, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    invoke-virtual {v7, v4}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    :cond_1
    invoke-virtual {v7, v5}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_snippet(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v4

    invoke-interface {v6, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/Ad;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    move-result-object v3

    invoke-virtual {v3, v6}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->materials(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_3
    new-instance v2, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    invoke-direct {v2}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;-><init>()V

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_8

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v3, :cond_5

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-ne v3, v4, :cond_4

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/Template;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v3

    invoke-virtual {v3, v5}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->context(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Template;

    move-result-object v3

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v4, v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v4, v4, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    iput-object v4, v3, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    goto :goto_1

    :cond_4
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/Template;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Template$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Template;

    move-result-object v3

    :goto_1
    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->scene(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    :cond_5
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v3, :cond_6

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->slotAdSetting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->slot_ad_setting(Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    :cond_6
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v3, :cond_7

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->bidding_response(Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    :cond_7
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->request_id(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->uid:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->uid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget p1, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->expiration_time:I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->expiration_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    :cond_8
    invoke-virtual {v2, v0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->ads(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object p1

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/mraid2/e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/j;)Lcom/sigmob/sdk/mraid2/j;
    .locals 0

    sput-object p0, Lcom/sigmob/sdk/mraid2/b;->e:Lcom/sigmob/sdk/mraid2/j;

    return-object p0
.end method

.method public static a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const-string p0, "message"

    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    if-eqz p2, :cond_1

    const-string p0, "data"

    invoke-virtual {v0, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/b;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V
    .locals 7

    const-string v0, "event"

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "subEvent"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "args"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    const/4 v4, -0x1

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x0

    sparse-switch v5, :sswitch_data_0

    goto/16 :goto_0

    :sswitch_0
    const-string v5, "useCustomClose"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0xb

    goto/16 :goto_0

    :sswitch_1
    const-string v5, "webView"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0xe

    goto/16 :goto_0

    :sswitch_2
    const-string v5, "belowSubview"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0x9

    goto/16 :goto_0

    :sswitch_3
    const-string v5, "animation"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0xf

    goto/16 :goto_0

    :sswitch_4
    const-string v5, "mraidLoadAd"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x2

    goto/16 :goto_0

    :sswitch_5
    const-string v5, "touchMove"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0x11

    goto/16 :goto_0

    :sswitch_6
    const-string v5, "vpaid"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0xd

    goto/16 :goto_0

    :sswitch_7
    const-string v5, "timer"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0xc

    goto/16 :goto_0

    :sswitch_8
    const-string v5, "close"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x4

    goto/16 :goto_0

    :sswitch_9
    const-string v5, "addSubview"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0x8

    goto :goto_0

    :sswitch_a
    const-string v5, "open"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x3

    goto :goto_0

    :sswitch_b
    const-string v5, "curPlayAd"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x7

    goto :goto_0

    :sswitch_c
    const-string v5, "mraidJsLoaded"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    move v4, v6

    goto :goto_0

    :sswitch_d
    const-string v5, "touchEnd"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0x12

    goto :goto_0

    :sswitch_e
    const-string v5, "unload"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x5

    goto :goto_0

    :sswitch_f
    const-string v5, "reward"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x6

    goto :goto_0

    :sswitch_10
    const-string v5, "dispatch_after"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x1

    goto :goto_0

    :sswitch_11
    const-string v5, "useScrollView"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v4, 0xa

    goto :goto_0

    :sswitch_12
    const-string v5, "touchStart"

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v2, :cond_0

    const/16 v4, 0x10

    :cond_0
    :goto_0
    const-string v2, "vid"

    const-string v5, "data"

    packed-switch v4, :pswitch_data_0

    goto/16 :goto_4

    :pswitch_0
    :try_start_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;

    move-result-object p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-interface {p1, p2, v1}, Lcom/sigmob/sdk/mraid2/e$c;->a(Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)V

    goto/16 :goto_4

    :pswitch_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;

    move-result-object p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;

    move-result-object p1

    invoke-interface {p1, v1}, Lcom/sigmob/sdk/mraid2/e$c;->b(Lorg/json/JSONObject;)V

    goto/16 :goto_4

    :pswitch_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;

    move-result-object p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;

    move-result-object p1

    invoke-interface {p1, v1}, Lcom/sigmob/sdk/mraid2/e$c;->a(Lorg/json/JSONObject;)V

    goto/16 :goto_4

    :pswitch_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p1, v1}, Lcom/sigmob/sdk/mraid2/b$b;->a(Lorg/json/JSONObject;)V

    goto/16 :goto_4

    :pswitch_4
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {v0, v3, v1}, Lcom/sigmob/sdk/mraid2/b$b;->c(Ljava/lang/String;Lorg/json/JSONObject;)V

    :cond_1
    :goto_1
    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/b;->d(Ljava/lang/String;)V

    goto/16 :goto_4

    :pswitch_5
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {v0, v3, v1}, Lcom/sigmob/sdk/mraid2/b$b;->a(Ljava/lang/String;Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_6
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {v0, v3, v1}, Lcom/sigmob/sdk/mraid2/b$b;->b(Ljava/lang/String;Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_7
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p1, v1}, Lcom/sigmob/sdk/mraid2/b$b;->e(Lorg/json/JSONObject;)V

    goto/16 :goto_4

    :pswitch_8
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/mraid2/b$b;->d(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_9
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/mraid2/b$b;->c(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_a
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/mraid2/b$b;->b(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_b
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p2, :cond_5

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p2, p1}, Lcom/sigmob/sdk/mraid2/b$b;->a(Ljava/lang/String;)V

    goto/16 :goto_4

    :pswitch_c
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid2/b$b;->c()V

    goto/16 :goto_4

    :pswitch_d
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid2/b$b;->b()V

    goto/16 :goto_4

    :pswitch_e
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid2/b$b;->a()V

    goto/16 :goto_4

    :pswitch_f
    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const/4 v0, 0x0

    if-eqz p2, :cond_2

    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_2

    :cond_2
    move-object p2, v0

    :goto_2
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/b;->b(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-interface {p1, v0, v1}, Lcom/sigmob/sdk/mraid2/b$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lorg/json/JSONObject;)V

    goto/16 :goto_4

    :pswitch_10
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    :goto_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_3

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    invoke-interface {v0, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    invoke-interface {v0, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdRequest()Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setOptions(Ljava/util/Map;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/f;->l()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCampid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/f;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCrid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    new-instance v1, Lcom/sigmob/sdk/mraid2/b$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/sdk/mraid2/b$4;-><init>(Lcom/sigmob/sdk/mraid2/b;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/network/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V

    goto :goto_4

    :pswitch_11
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "delay"

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    if-ltz v0, :cond_5

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/b;->a()Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/mraid2/b$3;

    invoke-direct {v2, p0, p1, p2}, Lcom/sigmob/sdk/mraid2/b$3;-><init>(Lcom/sigmob/sdk/mraid2/b;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V

    int-to-long p1, v0

    invoke-virtual {v1, v2, p1, p2}, Lcom/sigmob/sdk/mraid2/e;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_4

    :pswitch_12
    invoke-direct {p0}, Lcom/sigmob/sdk/mraid2/b;->i()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_4
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x5fda5b9d -> :sswitch_12
        -0x504ff407 -> :sswitch_11
        -0x48ae1629 -> :sswitch_10
        -0x37b0b0d1 -> :sswitch_f
        -0x32182101 -> :sswitch_e
        -0x30d98ae4 -> :sswitch_d
        -0x2b1a66bb -> :sswitch_c
        -0x1275ab29 -> :sswitch_b
        0x34264a -> :sswitch_a
        0x26d3104 -> :sswitch_9
        0x5a5ddf8 -> :sswitch_8
        0x6940745 -> :sswitch_7
        0x6b33842 -> :sswitch_6
        0x15abd7b0 -> :sswitch_5
        0x29473000 -> :sswitch_4
        0x42ab1b84 -> :sswitch_3
        0x4677fb74 -> :sswitch_2
        0x48ecb019 -> :sswitch_1
        0x6037d900 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/b;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid2/b;->j()Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid2/b;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/b;->f:Ljava/util/List;

    return-object p0
.end method

.method static synthetic g()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/mraid2/b;->a:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic h()Lcom/sigmob/sdk/mraid2/j;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/mraid2/b;->e:Lcom/sigmob/sdk/mraid2/j;

    return-object v0
.end method

.method private i()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    new-instance v1, Lcom/sigmob/sdk/mraid2/b$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/b$2;-><init>(Lcom/sigmob/sdk/mraid2/b;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/e;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private j()Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdRequest()Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/mraid2/e;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    return-object v0
.end method

.method a(I)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent({\"exposure\":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "});"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(II)V
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "type"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "index"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.notifyPageChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/common/e;)V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/e;->a()I

    move-result v0

    int-to-float v0, v0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/e;->b()I

    move-result p1

    int-to-float p1, p1

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result p1

    goto :goto_0

    :cond_0
    iget p1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float p1, p1

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result p1

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v0, v0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result v0

    move v4, v0

    move v0, p1

    move p1, v4

    :goto_0
    const-string v3, "width"

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "height"

    invoke-virtual {v2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "screenSize"

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ");"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)V
    .locals 2

    const/4 v0, 0x1

    const-string v1, "bidResponse"

    invoke-static {p1, v1, v0, v0}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(Lcom/sigmob/sdk/mraid2/b$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->c:Lcom/sigmob/sdk/mraid2/b$b;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid2/e;)V
    .locals 1

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid2/e;->setScrollContainer(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid2/e;->setVerticalScrollBarEnabled(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid2/e;->setHorizontalScrollBarEnabled(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid2/e;->setBackgroundColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    new-instance v0, Lcom/sigmob/sdk/mraid2/b$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid2/b$1;-><init>(Lcom/sigmob/sdk/mraid2/b;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid2/e;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method

.method a(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Attempted to inject Javascript into MRAID WebView while was not attached:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Injecting Javascript into MRAID WebView:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/mraid2/e;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "javascript:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid2/e;->loadUrl(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;I)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "state"

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "vdPlayStateChanged"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;II)V
    .locals 5

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "currentTime"

    int-to-float p2, p2

    const/high16 v2, 0x447a0000    # 1000.0f

    div-float/2addr p2, v2

    float-to-double v3, p2

    invoke-virtual {v1, p1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "duration"

    int-to-float p2, p3

    div-float/2addr p2, v2

    float-to-double p2, p2

    invoke-virtual {v1, p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "vdPlayCurrentTime"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(Ljava/lang/String;III)V
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "duration"

    int-to-float p2, p2

    const/high16 v2, 0x447a0000    # 1000.0f

    div-float/2addr p2, v2

    float-to-double v2, p2

    invoke-virtual {v1, p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "width"

    invoke-virtual {v1, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "height"

    invoke-virtual {v1, p1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "vdReadyToPlay"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    invoke-virtual {v1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "message"

    invoke-virtual {v1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string p3, "uniqueId"

    invoke-virtual {p2, p3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "error"

    invoke-virtual {p2, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "wvError"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    if-nez v0, :cond_0

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Attempted to inject Javascript into MRAID WebView while was not attached:\n\t"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Injecting Javascript into MRAID WebView:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid2/e;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    goto :goto_0

    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Injecting Javascript into MRAID WebView:\n\t can\'t support less KITKAT"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/BidResponse;ILjava/lang/String;)V
    .locals 4

    const-string v0, "message"

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "data"

    if-nez p2, :cond_0

    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const/4 v3, 0x0

    invoke-virtual {p2, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :catch_0
    move-exception p1

    goto :goto_1

    :cond_0
    const/4 v3, 0x1

    invoke-static {p2, v2, v3, v3}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object p2

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    move-object p2, v2

    :goto_0
    const-string v2, "code"

    invoke-virtual {p2, v2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-virtual {p2, v0, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance p3, Lorg/json/JSONObject;

    invoke-direct {p3}, Lorg/json/JSONObject;-><init>()V

    const-string p4, "event"

    invoke-virtual {p3, p4, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {p3, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "notify"

    invoke-virtual {v1, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "error"

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "vdPlayError"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(Lorg/json/JSONObject;)V
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "bindData"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ");"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method a(Z)V
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "viewable"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ")"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public b(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->f:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    const/4 v0, 0x0

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/b;->f:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_2

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/b;->b:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-object v2

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-object v1
.end method

.method public b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b;->f:Ljava/util/List;

    return-object v0
.end method

.method public b(Ljava/lang/String;I)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "state"

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "vdLoadStateChanged"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "event"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const-string p1, "message"

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string p1, "notify"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method b(Lorg/json/JSONObject;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.onStorageChanged("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ");"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method c()V
    .locals 1

    const-string v0, "mraidbridge.fireReadyEvent();"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "wvFinished"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ");"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public c(Ljava/lang/String;I)V
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "uniqueId"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "currentTime"

    int-to-float p2, p2

    const/high16 v2, 0x447a0000    # 1000.0f

    div-float/2addr p2, v2

    float-to-double v2, p2

    invoke-virtual {v1, p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "vdPlayToEnd"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, ");"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method d()V
    .locals 5

    const-string v0, "orientation"

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "locked"

    const/4 v4, 0x1

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mraidbridge.fireChangeEvent("

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ");"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method d(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.nativeCallComplete("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method e()V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "sdkVersion"

    const-string v2, "4.9.0"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mraidbridge.fireChangeEvent("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ")"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method e(Ljava/lang/String;)V
    .locals 5

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "event"

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "fire_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "notify"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ");"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public f()V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/mraid2/b;->e:Lcom/sigmob/sdk/mraid2/j;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    sput-object v0, Lcom/sigmob/sdk/mraid2/b;->e:Lcom/sigmob/sdk/mraid2/j;

    :cond_0
    return-void
.end method

.method f(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "event"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "notify"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ");"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method g(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "event"

    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "notify"

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mraidbridge.fireChangeEvent("

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ");"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;)V

    return-void
.end method
