.class public Lcom/alipay/sdk/executor/AlipayResult;
.super Ljava/lang/Object;
.source "AlipayResult.java"


# instance fields
.field private memo:Ljava/lang/String;

.field private rawResult:Ljava/lang/String;

.field private result:Ljava/lang/String;

.field private resultStatus:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 5

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    iput-object p1, p0, Lcom/alipay/sdk/executor/AlipayResult;->rawResult:Ljava/lang/String;

    .line 27
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const-string v0, ";"

    .line 29
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 30
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_4

    aget-object v2, p1, v1

    const-string v3, "resultStatus"

    .line 31
    invoke-virtual {v2, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 32
    invoke-direct {p0, v2, v3}, Lcom/alipay/sdk/executor/AlipayResult;->gatValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/alipay/sdk/executor/AlipayResult;->resultStatus:Ljava/lang/String;

    goto :goto_1

    :cond_1
    const-string v3, "result"

    .line 33
    invoke-virtual {v2, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 34
    invoke-direct {p0, v2, v3}, Lcom/alipay/sdk/executor/AlipayResult;->gatValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/alipay/sdk/executor/AlipayResult;->result:Ljava/lang/String;

    goto :goto_1

    :cond_2
    const-string v3, "memo"

    .line 35
    invoke-virtual {v2, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 36
    invoke-direct {p0, v2, v3}, Lcom/alipay/sdk/executor/AlipayResult;->gatValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/alipay/sdk/executor/AlipayResult;->memo:Ljava/lang/String;

    :cond_3
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    return-void
.end method

.method private gatValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 42
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "={"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 43
    invoke-virtual {p1, p2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    add-int/2addr v0, p2

    const-string p2, "}"

    invoke-virtual {p1, p2}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, v0, p2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 45
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public getMemo()Ljava/lang/String;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/alipay/sdk/executor/AlipayResult;->memo:Ljava/lang/String;

    return-object v0
.end method

.method public getResult()Ljava/lang/String;
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/alipay/sdk/executor/AlipayResult;->result:Ljava/lang/String;

    return-object v0
.end method

.method public getResultStatus()Ljava/lang/String;
    .locals 1

    .line 14
    iget-object v0, p0, Lcom/alipay/sdk/executor/AlipayResult;->resultStatus:Ljava/lang/String;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/alipay/sdk/executor/AlipayResult;->rawResult:Ljava/lang/String;

    return-object v0
.end method
