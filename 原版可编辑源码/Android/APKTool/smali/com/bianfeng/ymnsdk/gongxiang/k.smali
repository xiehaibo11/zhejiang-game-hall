.class public Lcom/bianfeng/ymnsdk/gongxiang/k;
.super Ljava/lang/Object;
.source "YmnResponseBean.java"


# instance fields
.field private a:I

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()I
    .locals 1

    .line 18
    iget v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/k;->a:I

    return v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/k;->b:Ljava/lang/String;

    return-object v0
.end method

.method public c()Z
    .locals 1

    .line 39
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/gongxiang/k;->a()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 35
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
