.class public Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;
.super Lcom/bykv/vk/openvk/VfSlot$Builder;


# instance fields
.field private final a:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Lcom/bykv/vk/openvk/VfSlot$Builder;-><init>()V

    .line 18
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "tkay_content"

    const-string v1, "tkay_adload_seq"

    .line 22
    invoke-direct {p0}, Lcom/bykv/vk/openvk/VfSlot$Builder;-><init>()V

    .line 18
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->a:Ljava/lang/String;

    .line 23
    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->setCodeId(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 27
    :try_start_0
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 28
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    .line 29
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 30
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->a:Ljava/lang/String;

    const-string v2, "adLoadSeq: "

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 32
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->setAdloadSeq(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 39
    :catchall_0
    :cond_1
    :try_start_1
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 40
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 42
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "slot_id"

    const-string v0, ""

    .line 43
    invoke-virtual {p2, p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 45
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 46
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 47
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->a:Ljava/lang/String;

    const-string v0, "primeRit: "

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 49
    :cond_2
    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->setPrimeRit(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_3
    if-eqz p3, :cond_4

    const-string p1, "tt_ad_load_type"

    .line 55
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 56
    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 57
    instance-of p2, p1, Lcom/bykv/vk/openvk/TTAdLoadType;

    if-eqz p2, :cond_4

    .line 58
    check-cast p1, Lcom/bykv/vk/openvk/TTAdLoadType;

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;->setAdLoadType(Lcom/bykv/vk/openvk/TTAdLoadType;)Lcom/bykv/vk/openvk/VfSlot$Builder;

    :cond_4
    return-void
.end method
