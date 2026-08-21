.class public Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
.super Ljava/lang/Object;
.source "RequestRetryUtils.java"


# instance fields
.field private requestSum:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    const/4 v0, 0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    .locals 1

    .line 10
    new-instance v0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;-><init>()V

    return-object v0
.end method


# virtual methods
.method public retryRequest(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Z
    .locals 3
    .param p1, "actionSupport"    # Lcom/bianfeng/ymnsdk/action/ActionSupport;

    .line 15
    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 16
    return v0

    .line 18
    :cond_0
    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    const/4 v2, 0x3

    if-ge v1, v2, :cond_1

    .line 19
    add-int/2addr v1, v0

    iput v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    .line 20
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 21
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 22
    const/4 v0, 0x0

    return v0

    .line 24
    :cond_1
    return v0
.end method

.method public retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Z
    .locals 3
    .param p1, "actionSupport"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;

    .line 29
    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 30
    return v0

    .line 32
    :cond_0
    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    const/16 v2, 0xc

    if-ge v1, v2, :cond_1

    .line 33
    add-int/2addr v1, v0

    iput v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    .line 34
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 35
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V

    .line 36
    const/4 v0, 0x0

    return v0

    .line 38
    :cond_1
    return v0
.end method

.method public retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;)Z
    .locals 3
    .param p1, "actionSupport"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

    .line 43
    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 44
    return v0

    .line 46
    :cond_0
    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    const/16 v2, 0xc

    if-ge v1, v2, :cond_1

    .line 47
    add-int/2addr v1, v0

    iput v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    .line 48
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 49
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->actionStart()V

    .line 50
    const/4 v0, 0x0

    return v0

    .line 52
    :cond_1
    return v0
.end method
