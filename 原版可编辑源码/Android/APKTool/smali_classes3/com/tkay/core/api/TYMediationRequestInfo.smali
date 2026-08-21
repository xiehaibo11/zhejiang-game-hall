.class public abstract Lcom/tkay/core/api/TYMediationRequestInfo;
.super Ljava/lang/Object;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# instance fields
.field protected adSourceId:Ljava/lang/String;

.field protected className:Ljava/lang/String;

.field protected networkFirmId:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getAdSourceId()Ljava/lang/String;
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/tkay/core/api/TYMediationRequestInfo;->adSourceId:Ljava/lang/String;

    return-object v0
.end method

.method public getClassName()Ljava/lang/String;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/tkay/core/api/TYMediationRequestInfo;->className:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkFirmId()I
    .locals 1

    .line 22
    iget v0, p0, Lcom/tkay/core/api/TYMediationRequestInfo;->networkFirmId:I

    return v0
.end method

.method public abstract getRequestParamMap()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end method

.method public setAdSourceId(Ljava/lang/String;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/tkay/core/api/TYMediationRequestInfo;->adSourceId:Ljava/lang/String;

    .line 35
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    invoke-static {p1}, Lcom/tkay/core/common/b/m;->n(Ljava/lang/String;)V

    return-void
.end method

.method public abstract setFormat(Ljava/lang/String;)V
.end method
