.class public Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
.super Ljava/lang/Object;
.source "RequestRetryUtils.java"


# instance fields
.field private requestSum:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 7
    iput v0, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;-><init>()V

    return-object v0
.end method


# virtual methods
.method public retryRequest(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Z
    .locals 3

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 1
    :cond_0
    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    const/4 v2, 0x3

    if-ge v1, v2, :cond_1

    add-int/2addr v1, v0

    .line 2
    iput v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    .line 3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 4
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    const/4 p1, 0x0

    return p1

    :cond_1
    return v0
.end method

.method public retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Z
    .locals 3

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 5
    :cond_0
    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    const/16 v2, 0xc

    if-ge v1, v2, :cond_1

    add-int/2addr v1, v0

    .line 6
    iput v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    .line 7
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 8
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V

    const/4 p1, 0x0

    return p1

    :cond_1
    return v0
.end method

.method public retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;)Z
    .locals 3

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 9
    :cond_0
    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    const/16 v2, 0xc

    if-ge v1, v2, :cond_1

    add-int/2addr v1, v0

    .line 10
    iput v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    .line 11
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 12
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->actionStart()V

    const/4 p1, 0x0

    return p1

    :cond_1
    return v0
.end method
