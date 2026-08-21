.class public abstract Lcom/tkay/core/api/TYBidRequestInfo;
.super Ljava/lang/Object;


# static fields
.field public static final BIDDING_REQUEST_TIMEOUT_TYPE:Ljava/lang/String; = "Request Timeout."

.field public static final BIDTOKEN_EMPTY_ERROR_TYPE:Ljava/lang/String; = "Network BidToken or Custom bid info is Empty."

.field public static final BIDTOKEN_OBTAIN_TIMEOUT_TYPE:Ljava/lang/String; = "Request Token or Custom bid info Timeout."

.field public static final INIT_ERROR_TYPE:Ljava/lang/String; = "Network init error."

.field public static final NO_ADAPTER_ERROR_TYPE:Ljava/lang/String; = "There is no Network Adapter."

.field public static final NO_SUPPORT_BIDDING_TYPE:Ljava/lang/String; = "This network don\'t support header bidding in current TY\'s version."

.field public static final RETURN_PARAMS_ERROR_TYPE:Ljava/lang/String; = "The parameter is abnormal."


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static fillBaseCommonParams(Lorg/json/JSONObject;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;)V
    .locals 1

    if-eqz p0, :cond_1

    :try_start_0
    const-string v0, "ad_format"

    .line 32
    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "ad_source_id"

    .line 33
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "nw_firm_id"

    .line 34
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "bidfloor"

    .line 36
    invoke-virtual {p3, p2}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/c/d;)D

    move-result-wide p2

    invoke-virtual {p0, p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 39
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->t()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "test"

    const/4 p2, 0x1

    .line 40
    invoke-virtual {p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p0

    .line 43
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method


# virtual methods
.method public getExtInfoForBuyerId(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 49
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/v;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public abstract toRequestJSONObject()Lorg/json/JSONObject;
.end method
