.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;
.super Ljava/lang/Object;
.source "ResponseDataUtils.java"


# instance fields
.field public rst_code:I

.field public rst_cost:I

.field public rst_msg:Ljava/lang/String;

.field public sub_rst_code:I

.field public sub_rst_msg:Ljava/lang/String;

.field public time:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;Ljava/lang/Long;)V
    .locals 5

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p3, :cond_0

    .line 3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    .line 5
    :cond_0
    invoke-virtual {p3}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-nez v4, :cond_1

    .line 6
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    .line 8
    :cond_1
    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->rst_code:I

    .line 9
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->rst_msg:Ljava/lang/String;

    .line 10
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 11
    invoke-virtual {p3}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    sub-long v2, v0, v2

    long-to-int p1, v2

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->rst_cost:I

    .line 13
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/SystemUtils;->getRFC3339(Ljava/lang/Long;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->time:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 15
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p3, ""

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->time:Ljava/lang/String;

    .line 17
    :goto_0
    invoke-direct {p0, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->setSubdata(Ljava/lang/String;)V

    return-void
.end method

.method private setSubdata(Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/RstMsgSplitUtils;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 2
    const/4 v0, 0x0

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->sub_rst_code:I

    .line 3
    const/4 v0, 0x1

    aget-object p1, p1, v0

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->sub_rst_msg:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getRst_code()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->rst_code:I

    return v0
.end method

.method public getRst_cost()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->rst_cost:I

    return v0
.end method

.method public getRst_msg()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->rst_msg:Ljava/lang/String;

    return-object v0
.end method

.method public getSub_rst_code()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->sub_rst_code:I

    return v0
.end method

.method public getSub_rst_msg()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->sub_rst_msg:Ljava/lang/String;

    return-object v0
.end method

.method public getTime()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->time:Ljava/lang/String;

    return-object v0
.end method
